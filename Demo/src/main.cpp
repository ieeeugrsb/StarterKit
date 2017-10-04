#include <Arduino.h>
#include "melodies.h"


// IR
int irReceiver = 6;

// LDR
int Ldr = 14;
int LdrThreashold = 500;
int LdrLeds[] = {40, 41};

// Melody project
int Buzzer = 2;
int MelodyLeds[] = {48, 50, 51, 52, 53};

#define play(name) playMelody(name##Tempo, name##Song, sizeof(name##Song) / sizeof(int[2]))
void playMelody(int tempo, unsigned short notes[][2], int numNotes);
void playTone(int tempo, unsigned short pitch, unsigned short duration, int min, int max);

int usTrigger = 6;
int usEcho = 7;
int usThreashold = 10;
int ping();

int button1 = 21;
int button2 = 20;
int button3 = 19;

void setup()
{
    pinMode(irReceiver, INPUT);

    pinMode(Ldr, INPUT);
    for (int l = 0; l < 2; l++)
        pinMode(LdrLeds[l], OUTPUT);

    // Melody project
    int numLeds = sizeof(MelodyLeds) / sizeof(int);
    for (int l = 0; l < numLeds; l++)
        pinMode(MelodyLeds[l], OUTPUT);
    pinMode(Buzzer, OUTPUT);

    pinMode(usTrigger, OUTPUT);
    pinMode(usEcho, INPUT);

    pinMode(button1, INPUT_PULLUP);
    pinMode(button2, INPUT_PULLUP);
    pinMode(button3, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(button1) == LOW)
        play(MarioBrosMain);
    if (digitalRead(button2) == LOW)
        play(ImperialMarch);
    if (digitalRead(button3) == LOW)
        play(HappyBirthday);

    int read = analogRead(Ldr);
    for (int l = 0; l < sizeof(LdrLeds) / sizeof(int); l++)
        digitalWrite(LdrLeds[l], (read < LdrThreashold) ? HIGH : LOW);

    int distance = ping();
    if (distance < usThreashold) {
        for (int l = 0; l < sizeof(LdrLeds) / sizeof(int); l++)
            digitalWrite(LdrLeds[l], HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(250);
        digitalWrite(Buzzer, LOW);
        for (int l = 0; l < sizeof(LdrLeds) / sizeof(int); l++)
            digitalWrite(LdrLeds[l], LOW);
    }

    delay(100);
}

int ping()
{
   long duration, distanceCm;

   digitalWrite(usTrigger, LOW);  //para generar un pulso limpio ponemos a LOW 4us
   delayMicroseconds(4);
   digitalWrite(usTrigger, HIGH);  //generamos Trigger (disparo) de 10us
   delayMicroseconds(10);
   digitalWrite(usTrigger, LOW);

   duration = pulseIn(usEcho, HIGH);  //medimos el tiempo entre pulsos, en microsegundos

   distanceCm = duration * 10 / 292/ 2;   //convertimos a distancia, en cm
   return distanceCm;
}

void playMelody(int tempo, unsigned short notes[][2], int numTones)
{
    // Get the range of the song
    int min = -1;
    int max = -1;
    for (int i = 0; i < numTones; i++) {
        if (min == -1 || notes[i][0] < min)
            min = notes[i][0];
        if (max == -1 || notes[i][0] > max)
            max = notes[i][0];
    }

    // Iterate over the notes of the melody
    for (int i = 0; i < numTones; i++)
        playTone(tempo, notes[i][0], notes[i][1], min, max);
}

void playTone(int tempo, unsigned short pitch, unsigned short duration, int min, int max)
{
    // Shutdown all the LEDs
    int numLeds = sizeof(MelodyLeds) / sizeof(int);
    for (int l = 0; l < numLeds; l++)
        digitalWrite(MelodyLeds[l], LOW);

    // Depending on the current note set more or less LEDs.
    for (int l = 0; l < map(pitch, min, max, 1, numLeds); l++)
        digitalWrite(MelodyLeds[l], HIGH);

    int noteDuration = tempo / duration;
    tone(Buzzer, pitch, noteDuration);

    // 30% seems to work most cases.
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // Stop the tone playing and LEDs.
    noTone(Buzzer);
    for (int l = 0; l < numLeds; l++)
        digitalWrite(MelodyLeds[l], LOW);
}
