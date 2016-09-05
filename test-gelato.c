#include <check.h>
#include "gelato.h"


START_TEST(first_test)
{
    ck_assert_msg(first_function(), "This test should fail.");
}
END_TEST


Suite *build_test_suite(void)
{
    Suite *test_suite = suite_create("Gelato");
    TCase *test_case = tcase_create("Addition");

    suite_add_tcase(test_suite, test_case);
    tcase_add_test(test_case, first_test);
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
