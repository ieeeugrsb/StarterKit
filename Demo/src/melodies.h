#include "notes.h"


int HappyBirthdayTempo = 2000;
unsigned short HappyBirthdaySong[][2] = {
    {NOTE_DO_4, NOTE_EIGHTH + NOTE_TWELFTH}, {NOTE_DO_4, NOTE_TWELFTH},
    {NOTE_RE_4, NOTE_QUARTER}, {NOTE_DO_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_QUARTER},
    {NOTE_MI_4, NOTE_HALF}, {NOTE_DO_4, NOTE_EIGHTH + NOTE_TWELFTH}, {NOTE_DO_4, NOTE_TWELFTH},
    {NOTE_RE_4, NOTE_QUARTER}, {NOTE_DO_4, NOTE_QUARTER}, {NOTE_SOL_4, NOTE_QUARTER},
    {NOTE_FA_4, NOTE_HALF}, {NOTE_DO_4, NOTE_EIGHTH + NOTE_TWELFTH}, {NOTE_DO_4, NOTE_TWELFTH},
    {NOTE_DO_5, NOTE_QUARTER}, {NOTE_LA_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_QUARTER},
    {NOTE_MI_4, NOTE_QUARTER}, {NOTE_RE_4, NOTE_WHOLE}, {NOTE_SI_4, NOTE_EIGHTH + NOTE_TWELFTH}, {NOTE_SI_4, NOTE_TWELFTH},
    {NOTE_LA_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_QUARTER}, {NOTE_SOL_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_HALF}
};

int ImperialMarchTempo = 3000;
unsigned short ImperialMarchSong[][2] = {
    // 1
    {NOTE_LA_4, NOTE_QUARTER}, {NOTE_LA_4, NOTE_QUARTER}, {NOTE_LA_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_EIGHTH}, {NOTE_DO_5, NOTE_EIGHTH},

    {NOTE_LA_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_EIGHTH}, {NOTE_DO_5, NOTE_TWELFTH}, {NOTE_LA_4, NOTE_HALF},

    {NOTE_MI_5, NOTE_QUARTER}, {NOTE_MI_5, NOTE_QUARTER}, {NOTE_MI_5, NOTE_QUARTER}, {NOTE_FA_5, NOTE_EIGHTH}, {NOTE_DO_5, NOTE_TWELFTH},

    // 4
    {NOTE_SOL_S_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_EIGHTH}, {NOTE_DO_5, NOTE_TWELFTH}, {NOTE_LA_4, NOTE_HALF},

    {NOTE_LA_5, NOTE_QUARTER}, {NOTE_LA_4, NOTE_EIGHTH}, {NOTE_LA_4, NOTE_TWELFTH}, {NOTE_LA_5, NOTE_QUARTER}, {NOTE_SOL_S_5, NOTE_EIGHTH}, {NOTE_SOL_5, NOTE_TWELFTH},

    {NOTE_FA_S_5, NOTE_QUARTER}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_S_4, NOTE_EIGHTH}, {NOTE_RE_S_5, NOTE_QUARTER}, {NOTE_RE_5, NOTE_EIGHTH}, {NOTE_DO_S_5, NOTE_TWELFTH},

    // 7
    {NOTE_DO_5, NOTE_QUARTER}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_4, NOTE_EIGHTH}, {NOTE_SOL_S_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_EIGHTH}, {NOTE_LA_4, NOTE_TWELFTH},

    {NOTE_DO_5, NOTE_QUARTER}, {NOTE_LA_4, NOTE_EIGHTH}, {NOTE_DO_5, NOTE_TWELFTH}, {NOTE_MI_5, NOTE_HALF},

    {NOTE_LA_5, NOTE_QUARTER}, {NOTE_LA_4, NOTE_EIGHTH}, {NOTE_LA_4, NOTE_TWELFTH}, {NOTE_LA_5, NOTE_QUARTER}, {NOTE_SOL_S_5, NOTE_EIGHTH}, {NOTE_SOL_5, NOTE_TWELFTH},

    // 10
    {NOTE_FA_S_5, NOTE_QUARTER}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_S_4, NOTE_EIGHTH}, {NOTE_RE_S_5, NOTE_QUARTER}, {NOTE_RE_5, NOTE_EIGHTH}, {NOTE_DO_S_5, NOTE_TWELFTH},

    {NOTE_DO_5, NOTE_QUARTER}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_4, NOTE_EIGHTH}, {NOTE_SOL_S_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_EIGHTH}, {NOTE_DO_5, NOTE_TWELFTH},

    {NOTE_LA_4, NOTE_QUARTER}, {NOTE_FA_4, NOTE_EIGHTH}, {NOTE_DO_5, NOTE_TWELFTH}, {NOTE_LA_4, NOTE_HALF}
};

// Adapted from sheet: http://www.gamemusicthemes.com/sheetmusic/nintendo/supermariobros/overworldtheme/Super_Mario_Bros_-_Overworld_Theme_by_BlueSCD.pdf
// Overworld Theme From Super Mario Bros by Koji Kondo transcribed by BLUESCD
int MarioBrosMainTempo = 1000;
unsigned short MarioBrosMainSong[][2] = {
    // 1
    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},{NOTE_SOL_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 3
    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_MI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SI_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_S_6, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SOL_6, NOTE_QUARTER * 3 / 2}, {NOTE_MI_7, NOTE_QUARTER * 3 / 2}, {NOTE_SOL_7, NOTE_QUARTER * 3 / 2},
    {NOTE_SI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SOL_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH},
    {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 7
    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_QUARTER},{NOTE_MI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SI_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_S_6, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SOL_6, NOTE_QUARTER * 3 / 2}, {NOTE_MI_7, NOTE_QUARTER * 3 / 2}, {NOTE_SOL_7, NOTE_QUARTER * 3 / 2},
    {NOTE_LA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SOL_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH},
    {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 11
    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_FA_S_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_FA_S_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_8, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_8, NOTE_EIGHTH}, {NOTE_DO_8, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 15
    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_FA_S_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_RE_S_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SILENT, NOTE_HALF},

    // 19
    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_FA_S_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_FA_S_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_8, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_8, NOTE_EIGHTH}, {NOTE_DO_8, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 23
    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_FA_S_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_RE_S_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SILENT, NOTE_HALF},

    // 27
    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_WHOLE},

    // 31
    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 35
    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_QUARTER}, {NOTE_MI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SI_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_S_6, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SOL_6, NOTE_QUARTER * 3 / 2}, {NOTE_MI_7, NOTE_QUARTER * 3 / 2}, {NOTE_SOL_7, NOTE_QUARTER * 3 / 2},
    {NOTE_SI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SOL_7, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH},
    {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 39
    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_QUARTER},{NOTE_MI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SI_6, NOTE_EIGHTH},
    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_S_6, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SOL_6, NOTE_QUARTER * 3 / 2}, {NOTE_MI_7, NOTE_QUARTER * 3 / 2}, {NOTE_SOL_7, NOTE_QUARTER * 3 / 2},
    {NOTE_LA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SOL_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH},
    {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 43
    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_SI_6, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_SOL_7, NOTE_QUARTER * 3/2}, {NOTE_FA_7, NOTE_QUARTER * 3/2},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 47
    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_SI_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_QUARTER * 3/2}, {NOTE_MI_7, NOTE_QUARTER * 3/2}, {NOTE_RE_7, NOTE_QUARTER * 3/2},

    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_MI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_6, NOTE_EIGHTH}, {NOTE_DO_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 51
    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_SI_6, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_SOL_7, NOTE_QUARTER * 3/2}, {NOTE_FA_7, NOTE_QUARTER * 3/2},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 55
    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_SI_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_QUARTER * 3/2}, {NOTE_MI_7, NOTE_QUARTER * 3/2}, {NOTE_RE_7, NOTE_QUARTER * 3/2},

    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_MI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_6, NOTE_EIGHTH}, {NOTE_DO_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 59
    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH},

    {NOTE_SILENT, NOTE_WHOLE},

    // 63
    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_RE_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_SOL_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 67
    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_SI_6, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_LA_7, NOTE_QUARTER * 3/2}, {NOTE_SOL_7, NOTE_QUARTER * 3/2}, {NOTE_FA_7, NOTE_QUARTER * 3/2},

    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    // 71
    {NOTE_MI_7, NOTE_EIGHTH}, {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SOL_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER}, {NOTE_SOL_S_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH},

    {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_LA_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},

    {NOTE_SI_6, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_EIGHTH}, {NOTE_FA_7, NOTE_QUARTER * 3/2}, {NOTE_MI_7, NOTE_QUARTER * 3/2}, {NOTE_RE_7, NOTE_QUARTER * 3/2},

    {NOTE_DO_7, NOTE_EIGHTH}, {NOTE_MI_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_MI_6, NOTE_EIGHTH}, {NOTE_DO_6, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_EIGHTH}, {NOTE_SILENT, NOTE_QUARTER},
};
