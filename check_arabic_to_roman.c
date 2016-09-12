#include <check.h>
#include "check_all.h"
#include "arabic_to_roman.h"
#include "gelato.h"


START_TEST(ator_one)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "I";
    int return_code = arabic_to_roman(1, roman_numeral);
    ck_assert_int_eq(return_code, 0);
    ck_assert_str_eq(roman_numeral, expected_roman_numeral);
}
END_TEST

Suite *make_arabic_to_roman_suite(void)
{
    Suite *test_suite = suite_create("ArabicToRoman");

    TCase *ator_test_case = tcase_create("ArabicToRoman");
    suite_add_tcase(test_suite, ator_test_case);

    tcase_add_test(ator_test_case, ator_one);

    return test_suite;
}
