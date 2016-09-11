#include "roman_to_arabic.h"
#include <stdlib.h>
#include <string.h>

#define ROM_ONE 'I'
#define ROM_FIVE 'V'

int roman_to_arabic(char *roman_numeral)
{
    int arabic = 0;
    size_t len = strlen(roman_numeral);
    for(int i=len-1; i>=0; i--)
    {
        switch(roman_numeral[i])
        {
            case ROM_ONE:
                arabic += 1;
                break;
            case ROM_FIVE:
                arabic += 5;
                break;
            default:
                break;
        }

    }
    return arabic;
}
