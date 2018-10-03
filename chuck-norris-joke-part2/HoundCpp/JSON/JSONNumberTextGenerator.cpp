/* file "JSONNumberTextGenerator.cpp" */

/* Copyright 2017, 2018 SoundHound, Incorporated.  All rights reserved. */

#define __STDC_FORMAT_MACROS
#include "JSONNumberTextGenerator.h"
#include "FloatingPointToFullJSON.h"
#include <stdlib.h>
#include <string>
#include <stdint.h>
#include <inttypes.h>


void JSONNumberTextGenerator::number_value(int to_write)
  {
    char buffer[100];
    sprintf(&(buffer[0]), "%d", to_write);
    handle_result(&(buffer[0]));
  }

void JSONNumberTextGenerator::number_value(unsigned int to_write)
  {
    char buffer[100];
    sprintf(&(buffer[0]), "%u", to_write);
    handle_result(&(buffer[0]));
  }

void JSONNumberTextGenerator::number_value(long to_write)
  {
    char buffer[100];
    sprintf(&(buffer[0]), "%ld", to_write);
    handle_result(&(buffer[0]));
  }

void JSONNumberTextGenerator::number_value(unsigned long to_write)
  {
    char buffer[100];
    sprintf(&(buffer[0]), "%lud", to_write);
    handle_result(&(buffer[0]));
  }

void JSONNumberTextGenerator::number_value(o_integer to_write)
  {
    std::string text = "";
    if (oi_is_negative(to_write))
        text += "-";
    size_t digit_count;
    verdict the_verdict = oi_decimal_digit_count(to_write, &digit_count);
    if (the_verdict != MISSION_ACCOMPLISHED)
        throw("Out of memory");
    if (digit_count == 0)
      {
        handle_result("0");
        return;
      }
    char *digit_buffer = new char[digit_count + 1];
    the_verdict = oi_write_decimal_digits(to_write, digit_buffer);
    if (the_verdict != MISSION_ACCOMPLISHED)
        throw("Out of memory");
    digit_buffer[digit_count] = 0;
    text += digit_buffer;
    delete[] digit_buffer;
    handle_result(text.c_str());
  }

void JSONNumberTextGenerator::number_value(double to_write, int precision)
  {
    char result_buffer[200];
    char scratch_buffer[200];
    floating_point_to_full_json(to_write, &(result_buffer[0]),
                                &(scratch_buffer[0]), "%.*e", precision);
    char *follow = &(result_buffer[0]);
    while (*follow != 0)
        ++follow;
    if ((follow - &(result_buffer[0]) >= 4) &&
        (strcmp(follow - 4, "e+00") == 0))
      {
        *(follow - 4) = 0;
      }
    handle_result(&(result_buffer[0]));
  }

void JSONNumberTextGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    size_t text_byte_count =
            (oi_is_negative(mantissa_fraction_numerator) ? 1 : 0);
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
        if (oi_is_negative(mantissa_fraction_numerator))
          {
            *follow = '-';
            ++follow;
          }
        *follow = '0';
        ++follow;
      }
    else
      {
        if (oi_is_negative(mantissa_whole_part))
          {
            *follow = '-';
            ++follow;
          }
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

void JSONNumberTextGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent,
        bool show_exponent, bool exponent_plus, size_t exponent_digit_count)
  {
    size_t mantissa_whole_digit_count;
    oi_decimal_digit_count(mantissa_whole_part, &mantissa_whole_digit_count);
    size_t text_byte_count =
            ((mantissa_whole_digit_count == 0) ?
             (1 + (oi_is_negative(mantissa_fraction_numerator) ? 1 : 0)) :
             (mantissa_whole_digit_count +
              (oi_is_negative(mantissa_whole_part) ? 1 : 0)));
    if (mantissa_fraction_digit_count > 0)
        text_byte_count += (mantissa_fraction_digit_count + 1);
    size_t post_zero_exponent_digit_count;
    oi_decimal_digit_count(exponent, &post_zero_exponent_digit_count);
    assert(post_zero_exponent_digit_count <= exponent_digit_count);
    bool exponent_is_negative = oi_is_negative(exponent);
    text_byte_count +=
            ((exponent_digit_count == 0) ? 0 :
             (exponent_digit_count +
              ((exponent_is_negative || exponent_plus) ? 1 : 0) + 1));
    char *buffer = new char[text_byte_count + 1];
    char *follow = buffer;
    if (mantissa_whole_digit_count == 0)
      {
        if (oi_is_negative(mantissa_fraction_numerator))
          {
            *follow = '-';
            ++follow;
          }
        *follow = '0';
        ++follow;
      }
    else
      {
        if (oi_is_negative(mantissa_whole_part))
          {
            *follow = '-';
            ++follow;
          }
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
        if (exponent_is_negative || exponent_plus)
          {
            *follow = (exponent_is_negative ? '-' : '+');
            ++follow;
          }
        size_t prefix_zeros =
                exponent_digit_count - post_zero_exponent_digit_count;
        while (prefix_zeros > 0)
          {
            *follow = '0';
            ++follow;
            --prefix_zeros;
          }
        oi_write_decimal_digits(exponent, follow);
        follow += post_zero_exponent_digit_count;
      }
    assert(buffer + text_byte_count == follow);
    *follow = 0;
    number_value(buffer);
    delete[] buffer;
  }

void JSONNumberTextGenerator::number_value(const char *number_text)
  {
    handle_result(number_text);
  }

void JSONNumberTextGenerator::number_value_uint64_t(uint64_t to_write)
  {
    char buffer[100];
    sprintf(&(buffer[0]), "%" PRIu64, to_write);
    handle_result(&(buffer[0]));
  }
