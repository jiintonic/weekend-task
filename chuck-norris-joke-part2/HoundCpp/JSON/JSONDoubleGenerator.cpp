/* file "JSONDoubleGenerator.cpp" */

/* Copyright 2015-2018 SoundHound, Incorporated.  All rights reserved. */

#include "JSONDoubleGenerator.h"
#include <stdlib.h>


void JSONDoubleGenerator::number_value(int to_write)
  {
    handle_result(to_write);
  }

void JSONDoubleGenerator::number_value(unsigned int to_write)
  {
    handle_result(to_write);
  }

void JSONDoubleGenerator::number_value(long to_write)
  {
    handle_result(to_write);
  }

void JSONDoubleGenerator::number_value(unsigned long to_write)
  {
    handle_result(to_write);
  }

void JSONDoubleGenerator::number_value(o_integer to_write)
  {
    number_value(to_write, oi_zero, 0, oi_zero);
  }

void JSONDoubleGenerator::number_value(double to_write, int precision)
  {
    handle_result(to_write);
  }

void JSONDoubleGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    size_t text_byte_count = 1;
    size_t mantissa_whole_digit_count;
    oi_decimal_digit_count(mantissa_whole_part, &mantissa_whole_digit_count);
    text_byte_count +=
            ((mantissa_whole_digit_count == 0) ? 1 :
             mantissa_whole_digit_count);
    if (mantissa_fraction_digit_count > 0)
        text_byte_count += (mantissa_fraction_digit_count + 1);
    size_t exponent_digit_count;
    oi_decimal_digit_count(exponent, &exponent_digit_count);
    text_byte_count +=
            ((exponent_digit_count == 0) ? 0 : (exponent_digit_count + 2));
    char *buffer = new char[text_byte_count + 1];
    char *follow = buffer;
    if (mantissa_whole_digit_count == 0)
      {
        *follow = (oi_is_negative(mantissa_fraction_numerator) ? '-' : '+');
        ++follow;
        *follow = '0';
        ++follow;
      }
    else
      {
        *follow = (oi_is_negative(mantissa_whole_part) ? '-' : '+');
        ++follow;
        oi_write_decimal_digits(mantissa_whole_part, follow);
        follow += mantissa_whole_digit_count;
      }
    if (mantissa_fraction_digit_count > 0)
      {
        *follow = '.';
        ++follow;
        size_t non_zero_digit_count;
        oi_decimal_digit_count(mantissa_fraction_numerator,
                               &non_zero_digit_count);
        assert(mantissa_fraction_digit_count >= non_zero_digit_count);
        size_t zero_digit_count =
                mantissa_fraction_digit_count - non_zero_digit_count;
        while (zero_digit_count > 0)
          {
            *follow = '0';
            ++follow;
            --zero_digit_count;
          }
        oi_write_decimal_digits(mantissa_fraction_numerator, follow);
        follow += non_zero_digit_count;
      }
    if (exponent_digit_count > 0)
      {
        *follow = 'e';
        ++follow;
        *follow = (oi_is_negative(exponent) ? '-' : '+');
        ++follow;
        oi_write_decimal_digits(exponent, follow);
        follow += exponent_digit_count;
      }
    assert(buffer + text_byte_count == follow);
    *follow = 0;
    number_value(buffer);
    delete[] buffer;
  }

void JSONDoubleGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent,
        bool show_exponent, bool exponent_plus, size_t exponent_digit_count)
  {
    number_value(mantissa_whole_part, mantissa_fraction_numerator,
                 mantissa_fraction_digit_count, exponent);
  }

void JSONDoubleGenerator::number_value(const char *number_text)
  {
    handle_result(atof(number_text));
  }

void JSONDoubleGenerator::number_value_uint64_t(uint64_t to_write)
  {
    handle_result(to_write);
  }
