#include <check.h>
#include "check_all.h"
#include "roman_to_arabic.h"


START_TEST(rtoa_one)
{
    int returned_num = 0;
    int expected_num = 1;
    returned_num = roman_to_arabic("I");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_two)
{
    int returned_num = 0;
    int expected_num = 2;
    returned_num = roman_to_arabic("II");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

Suite *make_roman_to_arabic_suite(void)
{
    Suite *test_suite = suite_create("RomanToArabic");

    TCase *rtoa_test_case = tcase_create("RomanToArabic");
    suite_add_tcase(test_suite, rtoa_test_case);

    tcase_add_test(rtoa_test_case, rtoa_one);
    tcase_add_test(rtoa_test_case, rtoa_two);

    return test_suite;
}
