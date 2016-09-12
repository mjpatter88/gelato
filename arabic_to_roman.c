#include "arabic_to_roman.h"
int arabic_to_roman(int arabic_numeral, char *roman_numeral)
{
    char rom[] = "I";
    strncpy(roman_numeral, rom, sizeof(rom));
    return 0;
}
