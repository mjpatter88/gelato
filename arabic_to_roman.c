#include <stdlib.h>
#include "arabic_to_roman.h"
#include "gelato.h"

#define ROM_ONE 'I'
#define ROM_FIVE 'V'

int arabic_to_roman(int arabic_numeral, char *roman_numeral)
{
    memset(roman_numeral, 0, MAX_ROMAN_NUMERAL_LENGTH);
    size_t index = 0;
    while(arabic_numeral > 0)
    {
        if(arabic_numeral >= 5)
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
