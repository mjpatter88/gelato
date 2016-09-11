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

START_TEST(rtoa_three)
{
    int returned_num = 0;
    int expected_num = 3;
    returned_num = roman_to_arabic("III");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_four)
{
    int returned_num = 0;
    int expected_num = 4;
    returned_num = roman_to_arabic("IV");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_five)
{
    int returned_num = 0;
    int expected_num = 5;
    returned_num = roman_to_arabic("V");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_ten)
{
    int returned_num = 0;
    int expected_num = 10;
    returned_num = roman_to_arabic("X");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_fifty)
{
    int returned_num = 0;
    int expected_num = 50;
    returned_num = roman_to_arabic("L");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_sixty_seven)
{
    int returned_num = 0;
    int expected_num = 67;
    returned_num = roman_to_arabic("LXVII");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_one_hundred)
{
    int returned_num = 0;
    int expected_num = 100;
    returned_num = roman_to_arabic("C");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_five_hundred)
{
    int returned_num = 0;
    int expected_num = 500;
    returned_num = roman_to_arabic("D");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_one_thousand)
{
    int returned_num = 0;
    int expected_num = 1000;
    returned_num = roman_to_arabic("M");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST

START_TEST(rtoa_two_thousand_three_hundred_twenty_one)
{
    int returned_num = 0;
    int expected_num = 2321;
    returned_num = roman_to_arabic("MMCCCXXI");
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
    tcase_add_test(rtoa_test_case, rtoa_three);
    tcase_add_test(rtoa_test_case, rtoa_four);
    tcase_add_test(rtoa_test_case, rtoa_five);
    tcase_add_test(rtoa_test_case, rtoa_ten);
    tcase_add_test(rtoa_test_case, rtoa_fifty);
    tcase_add_test(rtoa_test_case, rtoa_sixty_seven);
    tcase_add_test(rtoa_test_case, rtoa_one_hundred);
    tcase_add_test(rtoa_test_case, rtoa_five_hundred);
    tcase_add_test(rtoa_test_case, rtoa_one_thousand);
    tcase_add_test(rtoa_test_case, rtoa_two_thousand_three_hundred_twenty_one);

    return test_suite;
}
