#include "check_all.h"
#include <check.h>

int main(void)
{
    int num_failed_tests;
    SRunner *test_runner = srunner_create(make_addition_suite());
    srunner_add_suite(test_runner, make_roman_to_arabic_suite());

    srunner_run_all(test_runner, CK_NORMAL);
    num_failed_tests = srunner_ntests_failed(test_runner);
    srunner_free(test_runner);

    return num_failed_tests;
}
