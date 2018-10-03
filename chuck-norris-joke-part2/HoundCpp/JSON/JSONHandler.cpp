/* file "JSONHandler.cpp" */

/* Copyright 2018 SoundHound, Incorporated.  All rights reserved. */


#include "JSONHandler.h"
#include <assert.h>


void JSONHandler::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent,
        bool show_exponent, bool exponent_plus, size_t exponent_digit_count)
  {
    size_t exponent_non_zero_digit_count;
    oi_decimal_digit_count(exponent, &exponent_non_zero_digit_count);
    bool exponent_is_zero = false;
    if (exponent_non_zero_digit_count == 0)
      {
        exponent_is_zero = true;
        exponent_non_zero_digit_count = 1;
      }
    if ((!exponent_is_zero) &&
        ((exponent_digit_count == 2) ||
         ((exponent_digit_count > 2) &&
          (exponent_non_zero_digit_count == exponent_digit_count))))
      {
        number_value(mantissa_whole_part, mantissa_fraction_numerator,
                     mantissa_fraction_digit_count, exponent);
        return;
      }
    assert(exponent_non_zero_digit_count <= exponent_digit_count);
    size_t whole_part_non_zero_digits;
    oi_decimal_digit_count(mantissa_whole_part, &whole_part_non_zero_digits);
    char *buffer =
            new char[((whole_part_non_zero_digits == 0) ? 1 :
                      whole_part_non_zero_digits) +
                     ((mantissa_fraction_digit_count == 0) ? 0 :
                      (mantissa_fraction_digit_count + 1)) +
                     (show_exponent ? (exponent_digit_count + 2) : 0) + 1];
    char *follow = buffer;
    if (whole_part_non_zero_digits == 0)
      {
        *follow = '0';
        ++follow;
      }
    else
      {
        oi_write_decimal_digits(mantissa_whole_part, follow);
        follow += whole_part_non_zero_digits;
      }
    if (mantissa_fraction_digit_count > 0)
      {
        *follow = '.';
        ++follow;
        size_t fraction_non_zero_digits;
        oi_decimal_digit_count(mantissa_fraction_numerator,
                               &fraction_non_zero_digits);
        assert(mantissa_fraction_digit_count >= fraction_non_zero_digits);
        size_t remaining_zero_count =
                mantissa_fraction_digit_count - fraction_non_zero_digits;
        while (remaining_zero_count > 0)
          {
            *follow = '0';
            ++follow;
            --remaining_zero_count;
          }
        if (fraction_non_zero_digits > 0)
          {
            oi_write_decimal_digits(mantissa_fraction_numerator, follow);
            follow += fraction_non_zero_digits;
          }
      }
    if (show_exponent)
      {
        *follow = 'e';
        ++follow;
        bool exponent_is_negative = oi_is_negative(exponent);
        if (exponent_is_negative || exponent_plus)
          {
            *follow = (exponent_is_negative ? '-' : '+');
            ++follow;
          }
        size_t exponent_zero_count =
                exponent_digit_count - exponent_non_zero_digit_count;
        assert(exponent_zero_count >= 0);
        while (exponent_zero_count > 0)
          {
            *follow = '0';
            ++follow;
            --exponent_zero_count;
          }
        if (exponent_is_zero)
          {
            *follow = '0';
            ++follow;
          }
        else
          {
            oi_write_decimal_digits(exponent, follow);
            follow += exponent_non_zero_digit_count;
          }
      }
    *follow = 0;
    number_value(buffer);
    delete[] buffer;
  }
