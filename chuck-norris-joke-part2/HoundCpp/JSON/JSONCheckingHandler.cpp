/* file "JSONCheckingHandler.cpp" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#include "JSONCheckingHandler.h"
extern "C"
  {
#include "buffer_print.h"
  }
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


static std::string oi_to_string(o_integer to_write);


JSONCheckingHandler::JSONCheckingHandler(void) : what(NULL)
  {
  }

JSONCheckingHandler::~JSONCheckingHandler(void)
  {
    if (what != NULL)
        free(what);
  }

std::string JSONCheckingHandler::get_what(void)
  {
    assert(what != NULL);
    return what;
  }

void JSONCheckingHandler::set_what(const char *new_what)
  {
    assert(new_what != NULL);
    if (what != NULL)
        free(what);
    what = (char *)(malloc(strlen(new_what) + 1));
    strcpy(what, new_what);
  }

void JSONCheckingHandler::error(const char *message, ...)
  {
    static const char pattern[] = "%what%";

    assert(message != NULL);

    const char *follow_message = message;
    const char *follow_pattern = &(pattern[0]);
    char *new_message = NULL;
    const char *message_to_use = message;
    while (*follow_message != 0)
      {
        if (*follow_message == *follow_pattern)
          {
            ++follow_pattern;
            if (*follow_pattern == 0)
              {
                std::string what = get_what();
                size_t pre_pattern_char_count =
                        ((follow_message - message_to_use) -
                         (sizeof(pattern) - 2));
                size_t what_count = strlen(what.c_str());
                char *next = (char *)(malloc(
                        pre_pattern_char_count + what_count +
                        strlen(follow_message)));
                memcpy(next, message_to_use, pre_pattern_char_count);
                char *location = next + pre_pattern_char_count;
                memcpy(location, what.c_str(), what_count);
                location += what_count;
                strcpy(location, follow_message + 1);
                if (new_message != NULL)
                    free(new_message);
                new_message = next;
                message_to_use = next;
                follow_message = location - 1;
              }
          }
        else
          {
            follow_pattern = &(pattern[0]);
          }
        ++follow_message;
      }

    string_buffer buffer;
    string_buffer_init(&buffer, 10);

    va_list ap;
    va_start(ap, message);
    vbuffer_printf(&buffer, 0, message_to_use, ap);
    va_end(ap);

    if (new_message != NULL)
        free(new_message);

    throw buffer.array;
  }

void JSONCheckingHandler::bad_integer(o_integer the_oi, const char *expected,
                                      ...)
  {
    string_buffer buffer;
    string_buffer_init(&buffer, 10);

    va_list ap;
    va_start(ap, expected);
    vbuffer_printf(&buffer, 0, expected, ap);
    va_end(ap);

    std::string expected_string = buffer.array;
    free(buffer.array);

    std::string to_write_string = oi_to_string(the_oi);
    error("Expected %s for %what%, found the integer %s.",
          expected_string.c_str(), to_write_string.c_str());
  }

void JSONCheckingHandler::bad_integer(uint64_t the_integer,
                                      const char *expected, ...)
  {
    char integer_buffer[21];
    integer_buffer[20] = 0;
    char *position = &(integer_buffer[19]);
    if (the_integer == 0)
      {
        *position = '0';
        --position;
      }
    else
      {
        uint64_t remainder = the_integer;
        do
          {
            assert(position > &(integer_buffer[0]));
            *position = '0' + (remainder % 10);
            --position;
            remainder /= 10;
          } while (remainder > 0);
      }

    string_buffer buffer;
    string_buffer_init(&buffer, 10);

    va_list ap;
    va_start(ap, expected);
    vbuffer_printf(&buffer, 0, expected, ap);
    va_end(ap);

    std::string expected_string = buffer.array;
    free(buffer.array);

    error("Expected %s for %what%, found the integer %s.",
          expected_string.c_str(), position);
  }

void JSONCheckingHandler::bad_number(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent,
        const char *expected, ...)
  {
    string_buffer buffer;
    string_buffer_init(&buffer, 10);

    va_list ap;
    va_start(ap, expected);
    vbuffer_printf(&buffer, 0, expected, ap);
    va_end(ap);

    std::string expected_string = buffer.array;
    free(buffer.array);

    std::string number_string = oi_to_string(mantissa_whole_part);

    if (!(oi_equal(mantissa_fraction_numerator, oi_zero)))
      {
        number_string += ".";
        std::string fraction_digits = oi_to_string(mantissa_fraction_numerator);
        size_t digit_count = strlen(fraction_digits.c_str());
        assert(digit_count <= mantissa_fraction_digit_count);
        while (digit_count < mantissa_fraction_digit_count)
          {
            number_string += "0";
            ++digit_count;
          }
        number_string += fraction_digits;
      }

    if (!(oi_equal(exponent, oi_zero)))
      {
        number_string += "e";
        number_string += oi_to_string(exponent);
      }

    error("Expected %s for %what%, found the rational %s.",
          expected_string.c_str(), number_string.c_str());
  }


static std::string oi_to_string(o_integer to_write)
  {
    bool is_negative = oi_is_negative(to_write);
    size_t digit_count;
    oi_decimal_digit_count(to_write, &digit_count);
    char *buffer = new char[(is_negative ? 1 : 0) + digit_count + 1];
    char *position = buffer;
    if (is_negative)
      {
        *position = '-';
        ++position;
      }
    oi_write_decimal_digits(to_write, buffer);
    buffer[digit_count] = 0;
    std::string result = buffer;
    delete[] buffer;
    return result;
  }
