//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"📰 ",         "sb_news",          60,     0   },
    {"",            "sb_memory",        10,     0   },
    {"🧬 ",         "sb_keylayout",     0,      2   },
    {"",            "sb_nettraf",       2,      0   },
    {"",            "sb_brightness",    0,      4   },
    {"",            "sb_volume",        0,      3   },
    {"",            "sb_battery",       60,     0   },
    {"",            "sb_clock",         60,     0   },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
