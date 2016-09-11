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
    int previous_digit_value = 0;
    int current_digit_value = 0;

    size_t len = strlen(roman_numeral);
    for(int i=len-1; i>=0; i--)
    {
        switch(roman_numeral[i])
        {
            case ROM_ONE:
                current_digit_value = 1;
                break;
            case ROM_FIVE:
                current_digit_value = 5;
                break;
            case ROM_TEN:
                current_digit_value = 10;
                break;
            case ROM_FIFTY:
                current_digit_value = 50;
                break;
            case ROM_ONE_HUNDRED:
                current_digit_value = 100;
                break;
            case ROM_FIVE_HUNDRED:
                current_digit_value = 500;
                break;
            case ROM_ONE_THOUSAND:
                current_digit_value = 1000;
                break;
            default:
                break;
        }

        // If the previous digit was bigger, this digit should be subtracted. (IV -> 4)
        // Note: we are working right to left.
        if(previous_digit_value > current_digit_value)
        {
            arabic -= current_digit_value;
        }
        else
        {
            arabic += current_digit_value;
        }
        previous_digit_value = current_digit_value;
    }
    return arabic;
}
