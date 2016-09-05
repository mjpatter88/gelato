#include <check.h>
#include "gelato.h"
#include "roman-to-arabic.h"


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




START_TEST(rtoa_one)
{
    int returned_num = 0;
    int expected_num = 1;
    returned_num = roman_to_arabic("I");
    ck_assert_int_eq(returned_num, expected_num);
}
END_TEST


Suite *build_test_suite(void)
{
    Suite *test_suite = suite_create("Gelato");

    TCase *addition_test_case = tcase_create("Addition");
    suite_add_tcase(test_suite, addition_test_case);

    tcase_add_test(addition_test_case, one_plus_one);
    tcase_add_test(addition_test_case, one_plus_two);

    TCase *rtoa_test_case = tcase_create("Roman to Arabic Conversion");
    suite_add_tcase(test_suite, rtoa_test_case);

    tcase_add_test(rtoa_test_case, rtoa_one);

    return test_suite;
}

SRunner *build_test_runner(void)
{
    Suite* test_suite = build_test_suite();
    SRunner *test_runner = srunner_create(test_suite);
    return test_runner;
}

int main(void)
{
    int num_failed_tests;

    SRunner *test_runner = build_test_runner();
    srunner_run_all(test_runner, CK_NORMAL);
    num_failed_tests = srunner_ntests_failed(test_runner);
    srunner_free(test_runner);

    return num_failed_tests;
}
