/* file "JSONIncrementalParse.cpp" */

/* Copyright 2015-2018 SoundHound, Incorporated.  All rights reserved. */


#include "JSONIncrementalParse.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>
extern "C"
  {
#define class CLASS
#include "source_location.h"
#include "unicode.h"
#undef class
  }


static const char *describe_character(char the_character);
static unsigned long hex_digit_character_to_value(char the_character);


JSONIncrementalParser::ParseState JSONIncrementalParser::value_done_state(void)
  {
    size_t stack_size = state_stack.size();
    if (stack_size < 1)
        return PS_START;
    switch (state_stack[stack_size - 1])
      {
        case SS_ARRAY:
            return PS_ARRAY_VALUE;
        case SS_OBJECT_LABEL:
            assert(false);
        case SS_OBJECT:
            return PS_OBJECT_VALUE;
        default:
            assert(false);
      }
  }

JSONIncrementalParser::JSONIncrementalParser(JSONHandler *handler) :
        handler(handler), current_state(PS_START)
  {
    assert(handler != NULL);
    oi_create_from_long_int(line_number, 1);
    oi_create_from_long_int(column_number, 1);
    string_buffer_init(&current_string, 10);
  }

JSONIncrementalParser::~JSONIncrementalParser(void)
  {
    oi_remove_reference(line_number);
    oi_remove_reference(column_number);
    free(current_string.array);
    switch (current_state)
      {
        case PS_NUMBER_DIGITS:
        case PS_NUMBER_DOT:
            oi_remove_reference(mantissa_whole_part);
            break;
        case PS_NUMBER_DOT_DIGIT:
            oi_remove_reference(mantissa_whole_part);
            assert(mantissa_fraction_digit_count > 0);
            oi_remove_reference(mantissa_fraction_numerator);
            break;
        case PS_NUMBER_E:
            oi_remove_reference(mantissa_whole_part);
            if (mantissa_fraction_digit_count > 0)
                oi_remove_reference(mantissa_fraction_numerator);
            break;
        case PS_NUMBER_E_SIGN:
            oi_remove_reference(mantissa_whole_part);
            if (mantissa_fraction_digit_count > 0)
                oi_remove_reference(mantissa_fraction_numerator);
            break;
        case PS_NUMBER_E_SIGN_DIGIT:
            oi_remove_reference(mantissa_whole_part);
            if (mantissa_fraction_digit_count > 0)
                oi_remove_reference(mantissa_fraction_numerator);
            oi_remove_reference(exponent);
            break;
        default:
            break;
      }
  }

void JSONIncrementalParser::add_characters(const char *new_characters)
  {
    assert(new_characters != NULL);

    add_characters(new_characters, strlen(new_characters));
  }

void JSONIncrementalParser::add_characters(const char *new_characters,
                                           size_t character_count)
  {
    assert(new_characters != NULL);

    const char *next_characters = new_characters;
    size_t bytes_left = character_count;
    size_t bytes_after_column = character_count;
    const char *expected;

    while (bytes_left > 0)
      {
        switch (current_state)
          {
            case PS_START:
            case PS_ARRAY_BASE:
                switch (*next_characters)
                  {
                    case 't':
                      {
                        current_state = PS_TRUE_T;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case 'f':
                      {
                        current_state = PS_FALSE_F;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case 'n':
                      {
                        current_state = PS_NULL_N;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '\"':
                      {
                        current_state = PS_STRING_BASE;
                        current_string.element_count = 0;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '-':
                      {
                        current_state = PS_NUMBER_MINUS;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '0':
                      {
                        current_state = PS_NUMBER_ZERO;
                        number_is_negative = false;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                      {
                        oi_create_from_long_int(mantissa_whole_part,
                                                *next_characters - '0');
                        current_state = PS_NUMBER_DIGITS;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '[':
                      {
                        state_stack.push_back(SS_ARRAY);
                        current_state = PS_ARRAY_BASE;
                        handler->start_array();
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case ']':
                      {
                        size_t stack_size = state_stack.size();
                        if (current_state != PS_ARRAY_BASE)
                            goto do_default;
                        assert(state_stack[stack_size - 1] == SS_ARRAY);
                        handler->finish_array();
                        state_stack.pop_back();
                        current_state = value_done_state();
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '{':
                      {
                        state_stack.push_back(SS_OBJECT_LABEL);
                        current_state = PS_OBJECT_BASE;
                        handler->start_object();
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '\n':
                      {
                        o_integer new_line_number;
                        oi_add(new_line_number, line_number, oi_one);
                        oi_remove_reference(line_number);
                        line_number = new_line_number;

                        oi_remove_reference(column_number);
                        column_number = oi_one;
                        oi_add_reference(column_number);

                        bytes_after_column = bytes_left - 1;

                        /* Fall through. */
                      }
                    case ' ':
                    case '\r':
                    case '\t':
                    case '\f':
                      {
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                      do_default:
                        switch (current_state)
                          {
                            case PS_START:
                                expected = "a value";
                                goto unexpected;
                            case PS_ARRAY_BASE:
                                expected = "a value or `]'";
                                goto unexpected;
                            default:
                                assert(false);
                          }
                      }
                  }
            case PS_TRUE_T:
                if (*next_characters == 'r')
                  {
                    current_state = PS_TRUE_TR;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`r'";
                    goto unexpected;
                  }
            case PS_TRUE_TR:
                if (*next_characters == 'u')
                  {
                    current_state = PS_TRUE_TRU;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`u'";
                    goto unexpected;
                  }
            case PS_TRUE_TRU:
                if (*next_characters == 'e')
                  {
                    handler->true_value();
                    current_state = value_done_state();
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`e'";
                    goto unexpected;
                  }
            case PS_FALSE_F:
                if (*next_characters == 'a')
                  {
                    current_state = PS_FALSE_FA;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`a'";
                    goto unexpected;
                  }
            case PS_FALSE_FA:
                if (*next_characters == 'l')
                  {
                    current_state = PS_FALSE_FAL;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`l'";
                    goto unexpected;
                  }
            case PS_FALSE_FAL:
                if (*next_characters == 's')
                  {
                    current_state = PS_FALSE_FALS;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`s'";
                    goto unexpected;
                  }
            case PS_FALSE_FALS:
                if (*next_characters == 'e')
                  {
                    handler->false_value();
                    current_state = value_done_state();
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`e'";
                    goto unexpected;
                  }
            case PS_NULL_N:
                if (*next_characters == 'u')
                  {
                    current_state = PS_NULL_NU;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`u'";
                    goto unexpected;
                  }
            case PS_NULL_NU:
                if (*next_characters == 'l')
                  {
                    current_state = PS_NULL_NUL;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`l'";
                    goto unexpected;
                  }
            case PS_NULL_NUL:
                if (*next_characters == 'l')
                  {
                    handler->null_value();
                    current_state = value_done_state();
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`l'";
                    goto unexpected;
                  }
            case PS_STRING_BASE:
                switch (*next_characters)
                  {
                    case '\\':
                      {
                        current_state = PS_STRING_BACKSLASH;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '\"':
                      {
                        string_buffer_append(&current_string, 0);
                        size_t stack_size = state_stack.size();
                        if ((stack_size < 1) ||
                            (state_stack[stack_size - 1] != SS_OBJECT_LABEL))
                          {
                            handler->string_value(current_string.array);
                            current_state = value_done_state();
                          }
                        else
                          {
                            handler->start_pair(current_string.array);
                            current_state = PS_OBJECT_LABEL;
                            state_stack[stack_size - 1] = SS_OBJECT;
                          }
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        if ((unsigned char)(*next_characters) < ' ')
                          {
                            expected = "string character or close double quote";
                            goto unexpected;
                          }
                        string_buffer_append(&current_string, *next_characters);
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                  }
            case PS_STRING_BACKSLASH:
                switch (*next_characters)
                  {
                    case '\"':
                    case '\\':
                    case '/':
                        string_buffer_append(&current_string, *next_characters);
                        current_state = PS_STRING_BASE;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    case 'b':
                        string_buffer_append(&current_string, '\b');
                        current_state = PS_STRING_BASE;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    case 'f':
                        string_buffer_append(&current_string, '\f');
                        current_state = PS_STRING_BASE;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    case 'n':
                        string_buffer_append(&current_string, '\n');
                        current_state = PS_STRING_BASE;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    case 'r':
                        string_buffer_append(&current_string, '\r');
                        current_state = PS_STRING_BASE;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    case 't':
                        string_buffer_append(&current_string, '\t');
                        current_state = PS_STRING_BASE;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    case 'u':
                        current_state = PS_STRING_HEX_0;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    default:
                        expected = "escape sequence";
                        goto unexpected;
                  }
            case PS_STRING_HEX_0:
                if (((*next_characters >= '0') && (*next_characters <= '9')) ||
                    ((*next_characters >= 'a') && (*next_characters <= 'f')) ||
                    ((*next_characters >= 'A') && (*next_characters <= 'F')))
                  {
                    string_buffer_append(&current_string, *next_characters);
                    current_state = PS_STRING_HEX_1;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "four hex digits";
                    goto unexpected;
                  }
            case PS_STRING_HEX_1:
                if (((*next_characters >= '0') && (*next_characters <= '9')) ||
                    ((*next_characters >= 'a') && (*next_characters <= 'f')) ||
                    ((*next_characters >= 'A') && (*next_characters <= 'F')))
                  {
                    string_buffer_append(&current_string, *next_characters);
                    current_state = PS_STRING_HEX_2;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "three more hex digits";
                    goto unexpected;
                  }
            case PS_STRING_HEX_2:
                if (((*next_characters >= '0') && (*next_characters <= '9')) ||
                    ((*next_characters >= 'a') && (*next_characters <= 'f')) ||
                    ((*next_characters >= 'A') && (*next_characters <= 'F')))
                  {
                    string_buffer_append(&current_string, *next_characters);
                    current_state = PS_STRING_HEX_3;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "two more hex digits";
                    goto unexpected;
                  }
            case PS_STRING_HEX_3:
                if (((*next_characters >= '0') && (*next_characters <= '9')) ||
                    ((*next_characters >= 'a') && (*next_characters <= 'f')) ||
                    ((*next_characters >= 'A') && (*next_characters <= 'F')))
                  {
                    assert(current_string.element_count >= 3);
                    unsigned long sequence_value =
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 3]) << 12) |
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 2]) << 8) |
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 1]) << 4) |
                            hex_digit_character_to_value(*next_characters);
                    assert(sequence_value >= 0);
                    assert(sequence_value <= 0xffff);
                    if ((sequence_value <= 0xd7ff) ||
                        (sequence_value >= 0xe000))
                      {
                        char utf8[4];
                        size_t byte_count =
                                code_point_to_utf8(sequence_value, &(utf8[0]));
                        assert((byte_count > 0) && (byte_count <= 4));
                        current_string.element_count -= 3;
                        string_buffer_append_array(&current_string, byte_count,
                                                   &(utf8[0]));
                        current_state = PS_STRING_BASE;
                      }
                    else
                      {
                        if (sequence_value >= 0xdc00)
                          {
                            o_integer to_add;
                            oi_create_from_size_t(to_add,
                                    (bytes_after_column - bytes_left));

                            o_integer new_column_number;
                            oi_add(new_column_number, column_number, to_add);
                            oi_remove_reference(to_add);

                            oi_create_from_long_int(to_add, -5);
                            o_integer new_column_number2;
                            oi_add(new_column_number2, new_column_number,
                                   to_add);
                            oi_remove_reference(to_add);
                            oi_remove_reference(new_column_number);

                            string_buffer message;
                            string_buffer_init(&message, 10);
                            interpreter_zero_buffer_printf(&message, 0,
                                    "%I:%I: The value for a \\u sequence is not"
                                    " a valid first unit for a UTF-16 "
                                    "character.", line_number,
                                    new_column_number2);
                            oi_remove_reference(new_column_number2);
                            throw message.array;
                          }
                        string_buffer_append(&current_string, *next_characters);
                        current_state = PS_STRING_HEX_4_START;
                      }
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "one more hex digit";
                    goto unexpected;
                  }
            case PS_STRING_HEX_4_START:
                if (*next_characters == '\\')
                  {
                    current_state = PS_STRING_HEX_4_BACKSLASH;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "backslash";
                    goto unexpected;
                  }
            case PS_STRING_HEX_4_BACKSLASH:
                if (*next_characters == 'u')
                  {
                    current_state = PS_STRING_HEX_4;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "`u'";
                    goto unexpected;
                  }
            case PS_STRING_HEX_4:
                if (((*next_characters >= '0') && (*next_characters <= '9')) ||
                    ((*next_characters >= 'a') && (*next_characters <= 'f')) ||
                    ((*next_characters >= 'A') && (*next_characters <= 'F')))
                  {
                    string_buffer_append(&current_string, *next_characters);
                    current_state = PS_STRING_HEX_5;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "four hex digits";
                    goto unexpected;
                  }
            case PS_STRING_HEX_5:
                if (((*next_characters >= '0') && (*next_characters <= '9')) ||
                    ((*next_characters >= 'a') && (*next_characters <= 'f')) ||
                    ((*next_characters >= 'A') && (*next_characters <= 'F')))
                  {
                    string_buffer_append(&current_string, *next_characters);
                    current_state = PS_STRING_HEX_6;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "three more hex digits";
                    goto unexpected;
                  }
            case PS_STRING_HEX_6:
                if (((*next_characters >= '0') && (*next_characters <= '9')) ||
                    ((*next_characters >= 'a') && (*next_characters <= 'f')) ||
                    ((*next_characters >= 'A') && (*next_characters <= 'F')))
                  {
                    string_buffer_append(&current_string, *next_characters);
                    current_state = PS_STRING_HEX_7;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "two more hex digits";
                    goto unexpected;
                  }
            case PS_STRING_HEX_7:
                if (((*next_characters >= '0') && (*next_characters <= '9')) ||
                    ((*next_characters >= 'a') && (*next_characters <= 'f')) ||
                    ((*next_characters >= 'A') && (*next_characters <= 'F')))
                  {
                    assert(current_string.element_count >= 7);
                    unsigned long sequence_value0 =
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 7]) << 12) |
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 6]) << 8) |
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 5]) << 4) |
                            hex_digit_character_to_value(current_string.array[
                                    current_string.element_count - 4]);
                    unsigned long sequence_value1 =
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 3]) << 12) |
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 2]) << 8) |
                            (hex_digit_character_to_value(current_string.array[
                                     current_string.element_count - 1]) << 4) |
                            hex_digit_character_to_value(*next_characters);
                    assert(sequence_value0 >= 0);
                    assert(sequence_value0 <= 0xffff);
                    assert(sequence_value1 >= 0);
                    assert(sequence_value1 <= 0xffff);
                    assert((sequence_value0 > 0xd7ff) &&
                           (sequence_value0 < 0xdc00));
                    if ((sequence_value1 < 0xdc00) ||
                        (sequence_value1 > 0xdfff))
                      {
                        o_integer to_add;
                        oi_create_from_size_t(to_add,
                                (bytes_after_column - bytes_left));

                        o_integer new_column_number;
                        oi_add(new_column_number, column_number, to_add);
                        oi_remove_reference(to_add);

                        oi_create_from_long_int(to_add, -5);
                        o_integer new_column_number2;
                        oi_add(new_column_number2, new_column_number,
                               to_add);
                        oi_remove_reference(to_add);
                        oi_remove_reference(new_column_number);

                        string_buffer message;
                        string_buffer_init(&message, 10);
                        interpreter_zero_buffer_printf(&message, 0,
                                "%I:%I: The second value for a two-unit \\u "
                                "sequence is not a valid second unit for a "
                                "UTF-16 character.", line_number,
                                new_column_number2);
                        oi_remove_reference(new_column_number2);
                        throw message.array;
                      }
                    unsigned long code_point =
                            (((sequence_value0 & 0x3ff) << 10) |
                             (sequence_value1 & 0x3ff)) + 0x10000;
                    char utf8[4];
                    size_t byte_count =
                            code_point_to_utf8(code_point, &(utf8[0]));
                    assert((byte_count > 0) && (byte_count <= 4));
                    current_string.element_count -= 7;
                    string_buffer_append_array(&current_string, byte_count,
                                               &(utf8[0]));
                    current_state = PS_STRING_BASE;
                    ++next_characters;
                    --bytes_left;
                    continue;
                  }
                else
                  {
                    expected = "one more hex digit";
                    goto unexpected;
                  }
            case PS_NUMBER_MINUS:
                switch (*next_characters)
                  {
                    case '0':
                        current_state = PS_NUMBER_ZERO;
                        number_is_negative = true;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                        oi_create_from_long_int(mantissa_whole_part,
                                                -(*next_characters - '0'));
                        current_state = PS_NUMBER_DIGITS;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    default:
                        expected = "a digit";
                        goto unexpected;
                  }
            case PS_NUMBER_ZERO:
                switch (*next_characters)
                  {
                    case '.':
                        oi_create_from_long_int(mantissa_whole_part, 0);
                        current_state = PS_NUMBER_DOT;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    case 'e':
                    case 'E':
                        oi_create_from_long_int(mantissa_whole_part, 0);
                        mantissa_fraction_digit_count = 0;
                        current_state = PS_NUMBER_E;
                        ++next_characters;
                        --bytes_left;
                        continue;
                    default:
                        handler->number_value(0);
                        current_state = value_done_state();
                        continue;
                  }
            case PS_NUMBER_DIGITS:
                switch (*next_characters)
                  {
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                      {
                        o_integer ten_oi;
                        oi_create_from_long_int(ten_oi, 10);
                        o_integer product;
                        oi_multiply(product, mantissa_whole_part, ten_oi);
                        oi_remove_reference(ten_oi);
                        oi_remove_reference(mantissa_whole_part);
                        o_integer new_digit_oi;
                        long new_digit_long = *next_characters - '0';
                        if (oi_is_negative(product))
                            new_digit_long = -new_digit_long;
                        oi_create_from_long_int(new_digit_oi, new_digit_long);
                        oi_add(mantissa_whole_part, product, new_digit_oi);
                        oi_remove_reference(new_digit_oi);
                        oi_remove_reference(product);
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '.':
                      {
                        number_is_negative =
                                oi_is_negative(mantissa_whole_part);
                        current_state = PS_NUMBER_DOT;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case 'e':
                    case 'E':
                      {
                        mantissa_fraction_digit_count = 0;
                        current_state = PS_NUMBER_E;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        handler->number_value(mantissa_whole_part);
                        oi_remove_reference(mantissa_whole_part);
                        current_state = value_done_state();
                        continue;
                      }
                  }
            case PS_NUMBER_DOT:
                switch (*next_characters)
                  {
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                      {
                        long new_digit_long = *next_characters - '0';
                        if (number_is_negative)
                            new_digit_long = -new_digit_long;
                        oi_create_from_long_int(mantissa_fraction_numerator,
                                                new_digit_long);
                        mantissa_fraction_digit_count = 1;
                        current_state = PS_NUMBER_DOT_DIGIT;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        expected = "a digit";
                        goto unexpected;
                      }
                  }
            case PS_NUMBER_DOT_DIGIT:
                switch (*next_characters)
                  {
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                      {
                        o_integer ten_oi;
                        oi_create_from_long_int(ten_oi, 10);
                        o_integer product;
                        oi_multiply(product, mantissa_fraction_numerator,
                                    ten_oi);
                        oi_remove_reference(ten_oi);
                        oi_remove_reference(mantissa_fraction_numerator);
                        o_integer new_digit_oi;
                        long new_digit_long = *next_characters - '0';
                        if (number_is_negative)
                            new_digit_long = -new_digit_long;
                        oi_create_from_long_int(new_digit_oi, new_digit_long);
                        oi_add(mantissa_fraction_numerator, product,
                               new_digit_oi);
                        oi_remove_reference(new_digit_oi);
                        oi_remove_reference(product);
                        ++mantissa_fraction_digit_count;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case 'e':
                    case 'E':
                      {
                        assert(mantissa_fraction_digit_count > 0);
                        current_state = PS_NUMBER_E;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        assert(mantissa_fraction_digit_count > 0);
                        handler->number_value(mantissa_whole_part,
                                mantissa_fraction_numerator,
                                mantissa_fraction_digit_count, oi_zero);
                        oi_remove_reference(mantissa_whole_part);
                        oi_remove_reference(mantissa_fraction_numerator);
                        current_state = value_done_state();
                        continue;
                      }
                  }
            case PS_NUMBER_E:
                switch (*next_characters)
                  {
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                      {
                        exponent_is_negative = false;
                        exponent_plus = false;
                        oi_create_from_long_int(exponent,
                                                *next_characters - '0');
                        exponent_digit_count = 1;
                        current_state = PS_NUMBER_E_SIGN_DIGIT;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '+':
                      {
                        exponent_is_negative = false;
                        exponent_plus = true;
                        current_state = PS_NUMBER_E_SIGN;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '-':
                      {
                        exponent_is_negative = true;
                        exponent_plus = false;
                        current_state = PS_NUMBER_E_SIGN;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        expected = "a plus or minus sign or a digit";
                        goto unexpected;
                      }
                  }
            case PS_NUMBER_E_SIGN:
                switch (*next_characters)
                  {
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                      {
                        long new_digit_long = *next_characters - '0';
                        if (exponent_is_negative)
                            new_digit_long = -new_digit_long;
                        oi_create_from_long_int(exponent, new_digit_long);
                        exponent_digit_count = 1;
                        current_state = PS_NUMBER_E_SIGN_DIGIT;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        expected = "a digit";
                        goto unexpected;
                      }
                  }
            case PS_NUMBER_E_SIGN_DIGIT:
                switch (*next_characters)
                  {
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                      {
                        o_integer ten_oi;
                        oi_create_from_long_int(ten_oi, 10);
                        o_integer product;
                        oi_multiply(product, exponent, ten_oi);
                        oi_remove_reference(ten_oi);
                        oi_remove_reference(exponent);
                        o_integer new_digit_oi;
                        long new_digit_long = *next_characters - '0';
                        if (exponent_is_negative)
                            new_digit_long = -new_digit_long;
                        oi_create_from_long_int(new_digit_oi, new_digit_long);
                        oi_add(exponent, product, new_digit_oi);
                        oi_remove_reference(new_digit_oi);
                        oi_remove_reference(product);
                        ++exponent_digit_count;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        if (mantissa_fraction_digit_count == 0)
                          {
                            oi_create_from_long_int(mantissa_fraction_numerator,
                                                    0);
                          }
                        handler->number_value(mantissa_whole_part,
                                mantissa_fraction_numerator,
                                mantissa_fraction_digit_count, exponent, true,
                                exponent_plus, exponent_digit_count);
                        oi_remove_reference(mantissa_whole_part);
                        oi_remove_reference(mantissa_fraction_numerator);
                        oi_remove_reference(exponent);
                        current_state = value_done_state();
                        continue;
                      }
                  }
            case PS_ARRAY_VALUE:
                switch (*next_characters)
                  {
                    case ']':
                      {
                        size_t stack_size = state_stack.size();
                        assert(stack_size > 0);
                        assert(state_stack[stack_size - 1] == SS_ARRAY);
                        handler->finish_array();
                        state_stack.pop_back();
                        current_state = value_done_state();
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case ',':
                      {
                        current_state = PS_START;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '\n':
                      {
                        o_integer new_line_number;
                        oi_add(new_line_number, line_number, oi_one);
                        oi_remove_reference(line_number);
                        line_number = new_line_number;

                        oi_remove_reference(column_number);
                        column_number = oi_one;
                        oi_add_reference(column_number);

                        bytes_after_column = bytes_left - 1;

                        /* Fall through. */
                      }
                    case ' ':
                    case '\r':
                    case '\t':
                    case '\f':
                      {
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        expected = "a `]' or `,'";
                        goto unexpected;
                      }
                  }
            case PS_OBJECT_BASE:
                switch (*next_characters)
                  {
                    case '\"':
                      {
                        current_state = PS_STRING_BASE;
                        current_string.element_count = 0;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '}':
                      {
                        size_t stack_size = state_stack.size();
                        assert(state_stack[stack_size - 1] == SS_OBJECT_LABEL);
                        handler->finish_object();
                        state_stack.pop_back();
                        current_state = value_done_state();
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '\n':
                      {
                        o_integer new_line_number;
                        oi_add(new_line_number, line_number, oi_one);
                        oi_remove_reference(line_number);
                        line_number = new_line_number;

                        oi_remove_reference(column_number);
                        column_number = oi_one;
                        oi_add_reference(column_number);

                        bytes_after_column = bytes_left - 1;

                        /* Fall through. */
                      }
                    case ' ':
                    case '\r':
                    case '\t':
                    case '\f':
                      {
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        expected = "a string or `}'";
                        goto unexpected;
                      }
                  }
            case PS_OBJECT_LABEL:
                switch (*next_characters)
                  {
                    case ':':
                      {
                        current_state = PS_START;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '\n':
                      {
                        o_integer new_line_number;
                        oi_add(new_line_number, line_number, oi_one);
                        oi_remove_reference(line_number);
                        line_number = new_line_number;

                        oi_remove_reference(column_number);
                        column_number = oi_one;
                        oi_add_reference(column_number);

                        bytes_after_column = bytes_left - 1;

                        /* Fall through. */
                      }
                    case ' ':
                    case '\r':
                    case '\t':
                    case '\f':
                      {
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        expected = "a colon";
                        goto unexpected;
                      }
                  }
            case PS_OBJECT_VALUE:
                switch (*next_characters)
                  {
                    case '}':
                      {
                        size_t stack_size = state_stack.size();
                        assert(stack_size > 0);
                        assert(state_stack[stack_size - 1] == SS_OBJECT);
                        handler->finish_object();
                        state_stack.pop_back();
                        current_state = value_done_state();
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case ',':
                      {
                        current_state = PS_OBJECT_COMMA;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '\n':
                      {
                        o_integer new_line_number;
                        oi_add(new_line_number, line_number, oi_one);
                        oi_remove_reference(line_number);
                        line_number = new_line_number;

                        oi_remove_reference(column_number);
                        column_number = oi_one;
                        oi_add_reference(column_number);

                        bytes_after_column = bytes_left - 1;

                        /* Fall through. */
                      }
                    case ' ':
                    case '\r':
                    case '\t':
                    case '\f':
                      {
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        expected = "a `}' or `,'";
                        goto unexpected;
                      }
                  }
            case PS_OBJECT_COMMA:
                switch (*next_characters)
                  {
                    case '\"':
                      {
                        current_state = PS_STRING_BASE;
                        size_t stack_size = state_stack.size();
                        assert(stack_size > 0);
                        assert(state_stack[stack_size - 1] == SS_OBJECT);
                        state_stack[stack_size - 1] = SS_OBJECT_LABEL;
                        current_string.element_count = 0;
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    case '\n':
                      {
                        o_integer new_line_number;
                        oi_add(new_line_number, line_number, oi_one);
                        oi_remove_reference(line_number);
                        line_number = new_line_number;

                        oi_remove_reference(column_number);
                        column_number = oi_one;
                        oi_add_reference(column_number);

                        bytes_after_column = bytes_left - 1;

                        /* Fall through. */
                      }
                    case ' ':
                    case '\r':
                    case '\t':
                    case '\f':
                      {
                        ++next_characters;
                        --bytes_left;
                        continue;
                      }
                    default:
                      {
                        expected = "a string";
                        goto unexpected;
                      }
                  }
            default:
                assert(false);
          }
      }

      {
        o_integer to_add;
        oi_create_from_size_t(to_add, bytes_after_column);

        o_integer new_column_number;
        oi_add(new_column_number, column_number, to_add);
        oi_remove_reference(to_add);
        oi_remove_reference(column_number);
        column_number = new_column_number;

        return;
      }

  unexpected:
    o_integer to_add;
    oi_create_from_size_t(to_add, bytes_after_column - bytes_left);

    o_integer new_column_number;
    oi_add(new_column_number, column_number, to_add);
    oi_remove_reference(to_add);
    oi_remove_reference(column_number);
    column_number = new_column_number;

    string_buffer message;
    string_buffer_init(&message, 10);
    interpreter_zero_buffer_printf(&message, 0, "%I:%I: Expected %s, found %s.",
            line_number, column_number, expected,
            describe_character(*next_characters));
    throw message.array;
  }

void JSONIncrementalParser::end_of_input(void)
  {
    const char *expected;
  try_again:
    switch (current_state)
      {
        case PS_START:
          {
            size_t stack_size = state_stack.size();
            if (stack_size > 0)
              {
                expected = "a value";
                goto unexpected;
              }
            return;
          }
        case PS_TRUE_T:
          {
            expected = "`r'";
            goto unexpected;
          }
        case PS_TRUE_TR:
          {
            expected = "`u'";
            goto unexpected;
          }
        case PS_TRUE_TRU:
          {
            expected = "`e'";
            goto unexpected;
          }
        case PS_FALSE_F:
          {
            expected = "`a'";
            goto unexpected;
          }
        case PS_FALSE_FA:
          {
            expected = "`l'";
            goto unexpected;
          }
        case PS_FALSE_FAL:
          {
            expected = "`s'";
            goto unexpected;
          }
        case PS_FALSE_FALS:
          {
            expected = "`e'";
            goto unexpected;
          }
        case PS_NULL_N:
          {
            expected = "`u'";
            goto unexpected;
          }
        case PS_NULL_NU:
        case PS_NULL_NUL:
          {
            expected = "`l'";
            goto unexpected;
          }
        case PS_STRING_BASE:
          {
            expected = "string character or close double quote";
            goto unexpected;
          }
        case PS_STRING_BACKSLASH:
          {
            expected = "escape sequence";
            goto unexpected;
          }
        case PS_STRING_HEX_0:
          {
            expected = "four hex digits";
            goto unexpected;
          }
        case PS_STRING_HEX_1:
          {
            expected = "three more hex digits";
            goto unexpected;
          }
        case PS_STRING_HEX_2:
          {
            expected = "two more hex digits";
            goto unexpected;
          }
        case PS_STRING_HEX_3:
          {
            expected = "one more hex digit";
            goto unexpected;
          }
        case PS_STRING_HEX_4_START:
          {
            expected = "backslash";
            goto unexpected;
          }
        case PS_STRING_HEX_4_BACKSLASH:
          {
            expected = "`u'";
            goto unexpected;
          }
        case PS_STRING_HEX_4:
          {
            expected = "four hex digits";
            goto unexpected;
          }
        case PS_STRING_HEX_5:
          {
            expected = "three more hex digits";
            goto unexpected;
          }
        case PS_STRING_HEX_6:
          {
            expected = "two more hex digits";
            goto unexpected;
          }
        case PS_STRING_HEX_7:
          {
            expected = "one more hex digit";
            goto unexpected;
          }
        case PS_NUMBER_MINUS:
          {
            expected = "a digit";
            goto unexpected;
          }
        case PS_NUMBER_ZERO:
          {
            handler->number_value(0);
            current_state = value_done_state();
            goto try_again;
          }
        case PS_NUMBER_DIGITS:
          {
            handler->number_value(mantissa_whole_part);
            oi_remove_reference(mantissa_whole_part);
            current_state = value_done_state();
            goto try_again;
          }
        case PS_NUMBER_DOT:
          {
            expected = "a digit";
            goto unexpected;
          }
        case PS_NUMBER_DOT_DIGIT:
          {
            assert(mantissa_fraction_digit_count > 0);
            handler->number_value(mantissa_whole_part,
                    mantissa_fraction_numerator, mantissa_fraction_digit_count,
                    oi_zero);
            oi_remove_reference(mantissa_whole_part);
            oi_remove_reference(mantissa_fraction_numerator);
            current_state = value_done_state();
            goto try_again;
          }
        case PS_NUMBER_E:
          {
            expected = "a plus or minus sign or a digit";
            goto unexpected;
          }
        case PS_NUMBER_E_SIGN:
          {
            expected = "a digit";
            goto unexpected;
          }
        case PS_NUMBER_E_SIGN_DIGIT:
          {
            if (mantissa_fraction_digit_count == 0)
                oi_create_from_long_int(mantissa_fraction_numerator, 0);
            handler->number_value(mantissa_whole_part,
                    mantissa_fraction_numerator, mantissa_fraction_digit_count,
                    exponent, true, exponent_plus, exponent_digit_count);
            oi_remove_reference(mantissa_whole_part);
            oi_remove_reference(mantissa_fraction_numerator);
            oi_remove_reference(exponent);
            current_state = value_done_state();
            goto try_again;
          }
        case PS_ARRAY_BASE:
          {
            expected = "a value or `]'";
            goto unexpected;
          }
        case PS_ARRAY_VALUE:
          {
            expected = "a `]' or `,'";
            goto unexpected;
          }
        case PS_OBJECT_BASE:
          {
            expected = "a string or `}'";
            goto unexpected;
          }
        case PS_OBJECT_LABEL:
          {
            expected = "a colon";
            goto unexpected;
          }
        case PS_OBJECT_VALUE:
          {
            expected = "a `}' or `,'";
            goto unexpected;
          }
        case PS_OBJECT_COMMA:
          {
            expected = "a string";
            goto unexpected;
          }
        default:
          {
            assert(false);
          }
      }

  unexpected:
    string_buffer message;
    string_buffer_init(&message, 10);
    interpreter_zero_buffer_printf(&message, 0,
            "%I:%I: Expected %s, found end of input.", line_number,
            column_number, expected);
    throw message.array;
  }


static const char *describe_character(char the_character)
  {
    switch (the_character)
      {
        case '\b':
            return "\\b";
        case '\f':
            return "\\f";
        case '\n':
            return "\\n";
        case '\r':
            return "\\r";
        case '\t':
            return "\\t";
        default:
            break;
      }
    static char buffer[100];
    if (isprint(the_character))
        sprintf(&(buffer[0]), "`%c'", the_character);
    else
        sprintf(&(buffer[0]), "0x%02x", (unsigned)(unsigned char)the_character);
    return &(buffer[0]);
  }

static unsigned long hex_digit_character_to_value(char the_character)
  {
    if ((the_character >= '0') && (the_character <= '9'))
        return the_character - '0';
    if ((the_character >= 'a') && (the_character <= 'f'))
        return (the_character - 'a') + 0xa;
    assert((the_character >= 'A') && (the_character <= 'F'));
    return (the_character - 'A') + 0xa;
  }
