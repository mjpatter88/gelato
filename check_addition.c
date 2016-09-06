#include <check.h>
#include "check_all.h"
#include "gelato.h"


START_TEST(one_plus_one)
{
    char returned_sum[MAX_ROMAN_NUMERAL_LENGTH];
    addition("I", "I", returned_sum);
    ck_assert_str_eq(returned_sum, "II");
}
END_TEST

START_TEST(one_plus_two)
{
    char returned_sum[MAX_ROMAN_NUMERAL_LENGTH];
    addition("I", "II", returned_sum);
    ck_assert_str_eq(returned_sum, "III");
}
END_TEST

Suite *make_addition_suite(void)
{
    Suite *test_suite = suite_create("Addition");

    TCase *addition_test_case = tcase_create("Addition");
    suite_add_tcase(test_suite, addition_test_case);

    tcase_add_test(addition_test_case, one_plus_one);
    tcase_add_test(addition_test_case, one_plus_two);

    return test_suite;
}
