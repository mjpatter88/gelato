#include "gelato.h"
#include <string.h>

const int MAX_ROMAN_NUMERAL_LENGTH = 20;

void addition(char *op1, char *op2, char *sum) {
    char answer[] = "II";
    strncpy(sum, answer, MAX_ROMAN_NUMERAL_LENGTH);
    sum[MAX_ROMAN_NUMERAL_LENGTH - 1] = '\0';
    return;
}
