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

START_TEST(ator_two)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "II";
    int return_code = arabic_to_roman(2, roman_numeral);
    ck_assert_int_eq(return_code, 0);
    ck_assert_str_eq(roman_numeral, expected_roman_numeral);
}
END_TEST

START_TEST(ator_three)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "III";
    int return_code = arabic_to_roman(3, roman_numeral);
    ck_assert_int_eq(return_code, 0);
    ck_assert_str_eq(roman_numeral, expected_roman_numeral);
}
END_TEST

START_TEST(ator_five)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "V";
    int return_code = arabic_to_roman(5, roman_numeral);
    ck_assert_int_eq(return_code, 0);
    ck_assert_str_eq(roman_numeral, expected_roman_numeral);
}
END_TEST

START_TEST(ator_ten)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "X";
    int return_code = arabic_to_roman(10, roman_numeral);
    ck_assert_int_eq(return_code, 0);
    ck_assert_str_eq(roman_numeral, expected_roman_numeral);
}
END_TEST

START_TEST(ator_fifty)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "L";
    int return_code = arabic_to_roman(50, roman_numeral);
    ck_assert_int_eq(return_code, 0);
    ck_assert_str_eq(roman_numeral, expected_roman_numeral);
}
END_TEST

START_TEST(ator_one_hundred)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "C";
    int return_code = arabic_to_roman(100, roman_numeral);
    ck_assert_int_eq(return_code, 0);
    ck_assert_str_eq(roman_numeral, expected_roman_numeral);
}
END_TEST

START_TEST(ator_five_hundred)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "D";
    int return_code = arabic_to_roman(500, roman_numeral);
    ck_assert_int_eq(return_code, 0);
    ck_assert_str_eq(roman_numeral, expected_roman_numeral);
}
END_TEST

START_TEST(ator_one_thousand)
{
    char roman_numeral[MAX_ROMAN_NUMERAL_LENGTH];
    char expected_roman_numeral[] = "M";
    int return_code = arabic_to_roman(1000, roman_numeral);
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
    tcase_add_test(ator_test_case, ator_two);
    tcase_add_test(ator_test_case, ator_three);
    tcase_add_test(ator_test_case, ator_five);
    tcase_add_test(ator_test_case, ator_ten);
    tcase_add_test(ator_test_case, ator_fifty);
    tcase_add_test(ator_test_case, ator_one_hundred);
    tcase_add_test(ator_test_case, ator_five_hundred);
    tcase_add_test(ator_test_case, ator_one_thousand);

    return test_suite;
}
