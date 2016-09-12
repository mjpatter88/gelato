#include <stdlib.h>
#include "arabic_to_roman.h"
#include "gelato.h"

#define ROM_ONE 'I'

int arabic_to_roman(int arabic_numeral, char *roman_numeral)
{
    memset(roman_numeral, 0, MAX_ROMAN_NUMERAL_LENGTH);
    size_t index = 0;
    while(arabic_numeral > 0)
    {
        roman_numeral[index] = 'I';
        index++;
        arabic_numeral--;
    }
    return 0;
}
