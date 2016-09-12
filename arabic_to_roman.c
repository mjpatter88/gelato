#include <stdlib.h>
#include <string.h>
#include "arabic_to_roman.h"
#include "gelato.h"

#define ROM_ONE 'I'
#define ROM_FIVE 'V'
#define ROM_TEN 'X'
#define ROM_FIFTY 'L'
#define ROM_ONE_HUNDRED 'C'
#define ROM_FIVE_HUNDRED 'D'
#define ROM_ONE_THOUSAND 'M'

int arabic_to_roman(int arabic_numeral, char *roman_numeral)
{
    memset(roman_numeral, 0, MAX_ROMAN_NUMERAL_LENGTH);
    size_t index = 0;
    while(arabic_numeral > 0)
    {
        if(arabic_numeral >= 1000)
        {
            roman_numeral[index] = ROM_ONE_THOUSAND;
            arabic_numeral -= 1000;
        }
        else if(arabic_numeral >= 500)
        {
            roman_numeral[index] = ROM_FIVE_HUNDRED;
            arabic_numeral -= 500;
        }
        else if(arabic_numeral >= 100)
        {
            roman_numeral[index] = ROM_ONE_HUNDRED;
            arabic_numeral -= 100;
        }
        else if(arabic_numeral >= 50)
        {
            roman_numeral[index] = ROM_FIFTY;
            arabic_numeral -= 50;
        }
        else if(arabic_numeral >= 10)
        {
            roman_numeral[index] = ROM_TEN;
            arabic_numeral -= 10;
        }
        else if(arabic_numeral >= 5)
        {
            roman_numeral[index] = ROM_FIVE;
            arabic_numeral -= 5;
        }
        else
        {
            roman_numeral[index] = ROM_ONE;
            arabic_numeral--;
        }
        index++;
    }
    return 0;
}
