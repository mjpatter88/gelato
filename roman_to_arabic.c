#include "roman_to_arabic.h"
#include <stdlib.h>
#include <string.h>

#define ROM_ONE 'I'
#define ROM_FIVE 'V'
#define ROM_TEN 'X'
#define ROM_FIFTY 'L'
#define ROM_ONE_HUNDRED 'C'
#define ROM_FIVE_HUNDRED 'D'
#define ROM_ONE_THOUSAND 'M'

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
            case ROM_TEN:
                arabic += 10;
                break;
            case ROM_FIFTY:
                arabic += 50;
                break;
            case ROM_ONE_HUNDRED:
                arabic += 100;
                break;
            case ROM_FIVE_HUNDRED:
                arabic += 500;
                break;
            case ROM_ONE_THOUSAND:
                arabic += 1000;
                break;
            default:
                break;
        }

    }
    return arabic;
}
