#ifndef CHECK_ALL_H
#define CHECK_ALL_H

// Follow this pattern for multiple test suites:
// https://github.com/libcheck/check/blob/master/tests/check_check.h

#include <check.h>

Suite *make_addition_suite(void);
Suite *make_roman_to_arabic_suite(void);


#endif
