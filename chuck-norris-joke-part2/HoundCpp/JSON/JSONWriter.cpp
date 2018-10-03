/* file "JSONWriter.cpp" */

/* Copyright 2012-2017 SoundHound, Incorporated.  All rights reserved. */


#include "JSONWriter.h"
#include "FloatingPointToFullJSON.h"
#include "throwf.h"
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
extern "C"
  {
#include "unicode.h"
  }


void JSONWriter::start_value(const char *separator)
  {
    if (compound_stack.size() > 0)
      {
        switch (compound_stack[compound_stack.size() - 1])
          {
            case OBJECT:
                assert(in_pair);
                in_pair = false;
                switch (style)
                  {
                    case WHITESPACE_NONE:
                        break;
                    case WHITESPACE_VERBOSE_4:
                        send_raw_text(separator);
                        break;
                    default:
                        assert(false);
                        break;
                  }
                break;
            case ARRAY:
                if (!first)
                    send_raw_text(",");
                else
                    first = false;
                switch (style)
                  {
                    case WHITESPACE_NONE:
                        break;
                    case WHITESPACE_VERBOSE_4:
                        send_raw_text("\n");
                        for (size_t item_num = 0;
                             item_num < compound_stack.size(); ++item_num)
                          {
                            send_raw_text("    ");
                          }
                        break;
                    default:
                        assert(false);
                        break;
                  }
                break;
            default:
                assert(false);
                break;
          }
      }
  }

void JSONWriter::send_quoted_string(const char *data)
  {
    send_raw_text("\"");
    const char *follow = data;
    while (*follow != 0)
      {
        switch (*follow)
          {
            case '\"':
              {
                send_raw_text("\\\"");
                ++follow;
                break;
              }
            case '\\':
              {
                send_raw_text("\\\\");
                ++follow;
                break;
              }
            case '\b':
              {
                send_raw_text("\\b");
                ++follow;
                break;
              }
            case '\f':
              {
                send_raw_text("\\f");
                ++follow;
                break;
              }
            case '\n':
              {
                send_raw_text("\\n");
                ++follow;
                break;
              }
            case '\r':
              {
                send_raw_text("\\r");
                ++follow;
                break;
              }
            case '\t':
              {
                send_raw_text("\\t");
                ++follow;
                break;
              }
            default:
              {
                if ((((unsigned char)(*follow)) >= ' ') &&
                    ((!ascii_only) || (*follow <= '~')))
                  {
                    if (((unsigned char)(*follow)) <= '~')
                      {
                        char buffer[2] = {0x0, 0x0};
                        buffer[0] = *follow;
                        send_raw_text(buffer);
                        ++follow;
                      }
                    else
                      {
                        int length = validate_utf8_character(follow);
                        if (length < 0)
                          {
                            send_raw_text("\"");
                            return;
                          }
                        unsigned long code_point = utf8_to_code_point(follow);
                        switch (code_point)
                          {
                            case 0x00a0:
                            case 0x1680:
                            case 0x2000:
                            case 0x2001:
                            case 0x2002:
                            case 0x2003:
                            case 0x2004:
                            case 0x2005:
                            case 0x2006:
                            case 0x2007:
                            case 0x2008:
                            case 0x2009:
                            case 0x200a:
                            case 0x202f:
                            case 0x205f:
                            case 0x3000:
                                /* These are various sorts of spaces.  Since
                                 * it's hard to distinguish them visually as
                                 * displayed by most systems, we escape them for
                                 * readability. */
                                goto do_escape;
                            default:
                                break;
                          }
                        char buffer[5] = {0x0, 0x0, 0x0, 0x0, 0x0};
                        for (size_t position = 0; position < length; ++position)
                            buffer[position] = follow[position];
                        send_raw_text(buffer);
                        follow += length;
                      }
                  }
                else
                  {
                  do_escape:
                    int length = validate_utf8_character(follow);
                    if (length < 0)
                      {
                        send_raw_text("\"");
                        return;
                      }
                    unsigned long code_point = utf8_to_code_point(follow);
                    follow += length;
                    unsigned buffer[2];
                    size_t out_count =
                            code_point_to_utf16(code_point, &(buffer[0]));
                    assert((out_count >= 1) && (out_count <= 2));
                    for (size_t out_num = 0; out_num < out_count; ++out_num)
                      {
                        char char_buffer[7];
                        sprintf(&(char_buffer[0]), "\\u%04x", buffer[out_num]);
                        send_raw_text(char_buffer);
                      }
                  }
                break;
              }
          }
      }
    send_raw_text("\"");
  }

void JSONWriter::true_value(void)
  {
    start_value();
    send_raw_text("true");
  }

void JSONWriter::false_value(void)
  {
    start_value();
    send_raw_text("false");
  }

void JSONWriter::boolean_value(bool to_write)
  {
    if (to_write)
        true_value();
    else
        false_value();
  }

void JSONWriter::null_value(void)
  {
    start_value();
    send_raw_text("null");
  }

void JSONWriter::string_value(const char *to_write)
  {
    if (to_write == NULL)
      {
        null_value();
      }
    else
      {
        start_value();
        send_quoted_string(to_write);
      }
  }

void JSONWriter::string_value(const std::string &to_write)
  {
    start_value();
    send_quoted_string(to_write.c_str());
  }

void JSONWriter::number_value(int to_write)
  {
    start_value();
    std::stringstream buffer;
    buffer << to_write;
    send_raw_text(buffer.str().c_str());
  }

void JSONWriter::number_value(unsigned int to_write)
  {
    start_value();
    std::stringstream buffer;
    buffer << to_write;
    send_raw_text(buffer.str().c_str());
  }

void JSONWriter::number_value(long to_write)
  {
    start_value();
    std::stringstream buffer;
    buffer << to_write;
    send_raw_text(buffer.str().c_str());
  }

void JSONWriter::number_value(unsigned long to_write)
  {
    start_value();
    std::stringstream buffer;
    buffer << to_write;
    send_raw_text(buffer.str().c_str());
  }

void JSONWriter::number_value(o_integer to_write)
  {
    start_value();
    if (oi_is_negative(to_write))
        send_raw_text("-");
    size_t digit_count;
    oi_decimal_digit_count(to_write, &digit_count);
    if (digit_count == 0)
      {
        send_raw_text("0");
        return;
      }
    char *buffer = new char[digit_count + 1];
    oi_write_decimal_digits(to_write, buffer);
    buffer[digit_count] = 0;
    send_raw_text(buffer);
    delete[] buffer;
  }

void JSONWriter::number_value(double to_write, int precision)
  {
    start_value();

    char fixed_buffer[100];
    char *variable_buffer;
    char *text;
    if (precision + 6 + (sizeof(double) * 3) <= 100)
      {
        text = &(fixed_buffer[0]);
      }
    else
      {
        variable_buffer =
                (char *)(malloc(precision + 6 + (sizeof(double) * 3)));
        text = variable_buffer;
      }
    sprintf(text, "%.*e", precision, to_write);
    char *follow = text;
    while (*follow != 0)
        ++follow;
    if ((follow - text >= 4) && (strcmp(follow - 4, "e+00") == 0))
        *(follow - 4) = 0;
    send_raw_text(text);
    if (precision + 6 + (sizeof(double) * 3) > 100)
        free(variable_buffer);
  }

void JSONWriter::number_value(double to_write)
  {
    start_value();

    char fixed_buffer[100];
    char fixed_scratch_buffer[100];
    char *variable_buffer = NULL;
    char *text;
    char *scratch;
    if (DBL_DIG + 6 + (sizeof(double) * 3) <= 100)
      {
        text = &(fixed_buffer[0]);
        scratch = &(fixed_scratch_buffer[0]);
      }
    else
      {
        size_t space = DBL_DIG + 6 + (sizeof(double) * 3);
        variable_buffer = (char *)(malloc(space * 2));
        text = variable_buffer;
        scratch = variable_buffer + space;
      }
    floating_point_to_full_json(to_write, text, scratch, "%.*e", DBL_DIG);
    char *follow = text;
    while (*follow != 0)
        ++follow;
    if ((follow - text >= 4) && (strcmp(follow - 4, "e+00") == 0))
        *(follow - 4) = 0;
    send_raw_text(text);
    if (variable_buffer != NULL)
        free(variable_buffer);
  }

void JSONWriter::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    start_value();

    size_t mantissa_whole_digit_count;
    oi_decimal_digit_count(mantissa_whole_part,
                           &mantissa_whole_digit_count);
    if (mantissa_whole_digit_count == 0)
      {
        if (oi_is_negative(mantissa_fraction_numerator))
            send_raw_text("-");
        send_raw_text("0");
      }
    else
      {
        if (oi_is_negative(mantissa_whole_part))
            send_raw_text("-");
        char *buffer = (char *)(malloc(mantissa_whole_digit_count + 1));
        oi_write_decimal_digits(mantissa_whole_part, buffer);
        buffer[mantissa_whole_digit_count] = 0;
        send_raw_text(buffer);
        free(buffer);
      }
    if (mantissa_fraction_digit_count > 0)
      {
        send_raw_text(".");
        size_t non_zero_count;
        oi_decimal_digit_count(mantissa_fraction_numerator,
                               &non_zero_count);
        assert(non_zero_count <= mantissa_fraction_digit_count);
        for (size_t pad = non_zero_count;
             pad < mantissa_fraction_digit_count; ++pad)
          {
            send_raw_text("0");
          }
        char *buffer = (char *)(malloc(non_zero_count + 1));
        oi_write_decimal_digits(mantissa_fraction_numerator, buffer);
        buffer[non_zero_count] = 0;
        send_raw_text(buffer);
        free(buffer);
      }
    if (!(oi_equal(exponent, oi_zero)))
      {
        send_raw_text("e");
        if (oi_is_negative(exponent))
            send_raw_text("-");
        else
            send_raw_text("+");
        size_t exponent_space;
        oi_decimal_digit_count(exponent, &exponent_space);
        if (exponent_space == 0)
          {
            send_raw_text("0");
          }
        else
          {
            if (exponent_space < 2)
                send_raw_text("0");
            char *buffer = (char *)(malloc(exponent_space + 1));
            oi_write_decimal_digits(exponent, buffer);
            buffer[exponent_space] = 0;
            send_raw_text(buffer);
            free(buffer);
          }
      }
  }

void JSONWriter::number_value(const char *number_text)
  {
    start_value();

    if (!(is_valid_number_format(number_text)))
      {
        throwf("JSONWriter: illegal number format for this text: `%s'",
               number_text);
      }

    send_raw_text(number_text);
  }

void JSONWriter::start_object(void)
  {
    switch (style)
      {
        case WHITESPACE_NONE:
          {
            start_value("");
            break;
          }
        case WHITESPACE_VERBOSE_4:
          {
            std::string separator("\n");
            for (size_t item_num = 0; item_num < compound_stack.size();
                 ++item_num)
              {
                separator += "    ";
              }
            start_value(separator.c_str());
            send_raw_text("  ");
            break;
          }
        default:
          {
            assert(false);
            break;
          }
      }

    send_raw_text("{");
    first = true;
    in_pair = false;
    compound_stack.push_back(OBJECT);
  }

void JSONWriter::start_pair(const char *name)
  {
    assert(compound_stack.size() > 0);
    assert(compound_stack[compound_stack.size() - 1] == OBJECT);
    assert(!in_pair);

    if (!first)
        send_raw_text(",");
    else
        first = false;

    switch (style)
      {
        case WHITESPACE_NONE:
            break;
        case WHITESPACE_VERBOSE_4:
            send_raw_text("\n");
            for (size_t item_num = 0; item_num < compound_stack.size();
                 ++item_num)
              {
                send_raw_text("    ");
              }
            break;
        default:
            assert(false);
            break;
      }

    send_quoted_string(name);

    send_raw_text(":");

    in_pair = true;
  }

void JSONWriter::pair(const char *name, const char *string_value)
  {
    start_pair(name);
    JSONWriter::string_value(string_value);
  }

void JSONWriter::pair(const char *name, const std::string &string_value)
  {
    start_pair(name);
    JSONWriter::string_value(string_value);
  }

void JSONWriter::pair(const char *name, bool value)
  {
    start_pair(name);
    JSONWriter::boolean_value(value);
  }

void JSONWriter::pair(const char *name, int value)
  {
    start_pair(name);
    JSONWriter::number_value(value);
  }

void JSONWriter::pair(const char *name, unsigned int value)
  {
    start_pair(name);
    JSONWriter::number_value(value);
  }

void JSONWriter::pair(const char *name, long value)
  {
    start_pair(name);
    JSONWriter::number_value(value);
  }

void JSONWriter::pair(const char *name, unsigned long value)
  {
    start_pair(name);
    JSONWriter::number_value(value);
  }

void JSONWriter::pair(const char *name, double value, int precision)
  {
    start_pair(name);
    JSONWriter::number_value(value, precision);
  }

void JSONWriter::pair(const char *name, double value)
  {
    start_pair(name);
    JSONWriter::number_value(value);
  }

void JSONWriter::finish_object(void)
  {
    assert(compound_stack.size() > 0);
    assert(compound_stack[compound_stack.size() - 1] == OBJECT);
    assert(!in_pair);

    compound_stack.pop_back();

    switch (style)
      {
        case WHITESPACE_NONE:
            break;
        case WHITESPACE_VERBOSE_4:
            send_raw_text("\n");
            for (size_t item_num = 0; item_num < compound_stack.size();
                 ++item_num)
              {
                send_raw_text("    ");
              }
            send_raw_text("  ");
            break;
        default:
            assert(false);
            break;
      }

    send_raw_text("}");

    first = false;
    in_pair = false;
  }

void JSONWriter::start_array(void)
  {
    switch (style)
      {
        case WHITESPACE_NONE:
          {
            start_value("");
            break;
          }
        case WHITESPACE_VERBOSE_4:
          {
            std::string separator("\n");
            for (size_t item_num = 0; item_num < compound_stack.size();
                 ++item_num)
              {
                separator += "    ";
              }
            start_value(separator.c_str());
            send_raw_text("  ");
            break;
          }
        default:
          {
            assert(false);
            break;
          }
      }

    send_raw_text("[");
    first = true;
    compound_stack.push_back(ARRAY);
  }

void JSONWriter::finish_array(void)
  {
    assert(compound_stack.size() > 0);
    assert(compound_stack[compound_stack.size() - 1] == ARRAY);

    compound_stack.pop_back();

    switch (style)
      {
        case WHITESPACE_NONE:
            break;
        case WHITESPACE_VERBOSE_4:
            send_raw_text("\n");
            for (size_t item_num = 0; item_num < compound_stack.size();
                 ++item_num)
              {
                send_raw_text("    ");
              }
            send_raw_text("  ");
            break;
        default:
            assert(false);
            break;
      }

    send_raw_text("]");

    first = false;
    in_pair = false;
  }

bool JSONWriter::is_valid_number_format(const char *number_text)
  {
    const char *follow = number_text;

    if (*follow == '-')
        ++follow;

    if (*follow == '0')
      {
        ++follow;
      }
    else if ((*follow >= '1') && (*follow <= '9'))
      {
        ++follow;
        while ((*follow >= '0') && (*follow <= '9'))
            ++follow;
      }
    else
      {
        return false;
      }

    if (*follow == '.')
      {
        ++follow;
        if ((*follow < '0') || (*follow > '9'))
            return false;
        ++follow;
        while ((*follow >= '0') && (*follow <= '9'))
            ++follow;
      }

    if ((*follow == 'e') || (*follow == 'E'))
      {
        ++follow;
        if ((*follow == '+') || (*follow == '-'))
            ++follow;
        if ((*follow < '0') || (*follow > '9'))
            return false;
        ++follow;
        while ((*follow >= '0') && (*follow <= '9'))
            ++follow;
      }

    if (*follow != 0)
        return false;

    return true;
  }

int JSONWriter::compare_number_text_to_repeating_fraction(
        const char *left_number_text, bool right_mantissa_is_negative,
        const char *right_start_mantissa_digits,
        const char *right_repeat_mantissa_digits,
        bool right_exponent_is_negative, const char *right_exponent_digits)
  {
    assert(left_number_text != NULL);
    assert(right_start_mantissa_digits != NULL);
    assert(right_repeat_mantissa_digits != NULL);
    assert(right_exponent_digits != NULL);

    bool left_is_zero = true;
    bool left_mantissa_is_negative = false;
    const char *left_exponent;
    const char *left_decimal_point = NULL;
    const char *first_left_non_zero_mantissa_digit = NULL;
      {
        const char *follow_left = left_number_text;
        if (*follow_left == '-')
          {
            left_mantissa_is_negative = true;
            ++follow_left;
          }
        while ((*follow_left != 'e') && (*follow_left != 'E') &&
               (*follow_left != 0))
          {
            assert(((*follow_left >= '0') && (*follow_left <= '9')) ||
                   (*follow_left == '.'));
            if ((*follow_left >= '1') && (*follow_left <= '9'))
              {
                left_is_zero = false;
                if (first_left_non_zero_mantissa_digit == NULL)
                    first_left_non_zero_mantissa_digit = follow_left;
              }
            if (*follow_left == '.')
              {
                assert(left_decimal_point == NULL);
                left_decimal_point = follow_left;
              }
            ++follow_left;
          }
        left_exponent = follow_left;
      }
    bool right_is_zero = true;
      {
        const char *follow_right = right_start_mantissa_digits;
        while (*follow_right != 0)
          {
            assert((*follow_right >= '0') && (*follow_right <= '9'));
            if ((*follow_right >= '1') && (*follow_right <= '9'))
                right_is_zero = false;
            ++follow_right;
          }
      }
      {
        const char *follow_right = right_repeat_mantissa_digits;
        while (*follow_right != 0)
          {
            assert((*follow_right >= '0') && (*follow_right <= '9'));
            if ((*follow_right >= '1') && (*follow_right <= '9'))
                right_is_zero = false;
            ++follow_right;
          }
      }

    const int left_greater_result = 1;
    const int right_greater_result = -1;

    if (left_is_zero)
      {
        if (right_is_zero)
            return 0;
        if (right_mantissa_is_negative)
            return left_greater_result;
        return right_greater_result;
      }
    if (right_is_zero)
      {
        return (left_mantissa_is_negative ? right_greater_result :
                                            left_greater_result);
      }

    if (left_mantissa_is_negative != right_mantissa_is_negative)
      {
        return (left_mantissa_is_negative ? right_greater_result :
                                            left_greater_result);
      }

    const int left_magnitude_greater_result =
            (left_mantissa_is_negative ? right_greater_result :
             left_greater_result);
    const int right_magnitude_greater_result =
            (left_mantissa_is_negative ? left_greater_result :
             right_greater_result);

    assert(first_left_non_zero_mantissa_digit != NULL);
    assert((*right_start_mantissa_digits == 0) ||
           ((*right_start_mantissa_digits >= '1') &&
            (*right_start_mantissa_digits <= '9')));
    assert((*right_start_mantissa_digits != 0) ||
           ((*right_repeat_mantissa_digits >= '1') &&
            (*right_repeat_mantissa_digits <= '9')));

    int64_t left_minus_right_exponent =
            ((left_decimal_point == NULL) ?
             ((int64_t)(left_exponent - first_left_non_zero_mantissa_digit)) :
             ((left_decimal_point > first_left_non_zero_mantissa_digit) ?
              ((int64_t)(left_decimal_point -
                         first_left_non_zero_mantissa_digit)) :
              (-(int64_t)((first_left_non_zero_mantissa_digit -
                           left_decimal_point) - 1))));

      {
        const char *left_start_exponent_digits = left_exponent;
        bool left_exponent_is_negative = false;
        if (*left_start_exponent_digits != 0)
          {
            assert((*left_start_exponent_digits == 'e') ||
                   (*left_start_exponent_digits == 'E'));
            ++left_start_exponent_digits;
            if (*left_start_exponent_digits == '-')
              {
                left_exponent_is_negative = true;
                ++left_start_exponent_digits;
              }
            else if (*left_start_exponent_digits == '+')
              {
                ++left_start_exponent_digits;
              }
            while (*left_start_exponent_digits == '0')
                ++left_start_exponent_digits;
          }
        const char *left_end_exponent_digits = left_start_exponent_digits;
        while (*left_end_exponent_digits != 0)
          {
            assert((*left_end_exponent_digits >= '0') &&
                   (*left_end_exponent_digits <= '9'));
            ++left_end_exponent_digits;
          }
        const char *right_start_exponent_digits = right_exponent_digits;
        while (*right_start_exponent_digits == '0')
            ++right_start_exponent_digits;
        const char *right_end_exponent_digits = right_start_exponent_digits;
        while (*right_end_exponent_digits != 0)
          {
            assert((*right_end_exponent_digits >= '0') &&
                   (*right_end_exponent_digits <= '9'));
            ++right_end_exponent_digits;
          }
        size_t left_exponent_digit_count =
                (left_end_exponent_digits - left_start_exponent_digits);
        size_t right_exponent_digit_count =
                (right_end_exponent_digits - right_start_exponent_digits);
        size_t total_exponent_digit_count =
                ((left_exponent_digit_count > right_exponent_digit_count) ?
                 left_exponent_digit_count : right_exponent_digit_count);
        int64_t sum = 0;
        for (size_t digit_num = total_exponent_digit_count; digit_num > 0;
             --digit_num)
          {
            int64_t left_digit =
                    ((digit_num <= left_exponent_digit_count) ?
                     *(left_end_exponent_digits - digit_num) - '0' : 0);
            if (left_exponent_is_negative)
                left_digit = -left_digit;
            int64_t right_digit =
                    ((digit_num <= right_exponent_digit_count) ?
                     *(right_end_exponent_digits - digit_num) - '0' : 0);
            if (right_exponent_is_negative)
                right_digit = -right_digit;
            sum *= 10;
            sum += (left_digit - right_digit);
            if ((sum > 0) && ((left_minus_right_exponent + sum) > 0))
                return left_magnitude_greater_result;
            if ((sum < 0) && ((left_minus_right_exponent + sum) < 0))
                return right_magnitude_greater_result;
          }
        left_minus_right_exponent += sum;
        if (left_minus_right_exponent != 0)
          {
            return ((left_minus_right_exponent > 0) ?
                    left_magnitude_greater_result :
                    right_magnitude_greater_result);
          }
      }

    const char *follow_left_mantissa = first_left_non_zero_mantissa_digit;
    const char *follow_right_mantissa = right_start_mantissa_digits;
    while (follow_left_mantissa < left_exponent)
      {
        if (follow_left_mantissa == left_decimal_point)
          {
            ++follow_left_mantissa;
            continue;
          }
        if (*follow_right_mantissa == 0)
            follow_right_mantissa = right_repeat_mantissa_digits;
        char right_digit = *follow_right_mantissa;
        if (right_digit == 0)
            right_digit = '0';
        char left_digit = *follow_left_mantissa;
        if (right_digit != left_digit)
          {
            return ((left_digit > right_digit) ? left_magnitude_greater_result :
                    right_magnitude_greater_result);
          }
        ++follow_left_mantissa;
        if (*follow_right_mantissa != 0)
            ++follow_right_mantissa;
      }
    if ((*follow_right_mantissa == 0) && (*right_repeat_mantissa_digits == 0))
        return 0;
    return right_magnitude_greater_result;
  }
