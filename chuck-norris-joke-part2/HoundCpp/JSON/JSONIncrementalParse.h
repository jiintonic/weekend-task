/* file "JSONIncrementalParse.h" */

/* Copyright 2015-2018 SoundHound, Incorporated.  All rights reserved. */


#ifndef JSONINCREMENTALPARSE_H
#define JSONINCREMENTALPARSE_H

#include <vector>
#include "JSONHandler.h"
extern "C"
  {
#include "buffer_print.h"
#include "o_integer.h"
  };


class JSONIncrementalParser
  {
  private:
    enum StackState
      {
        SS_ARRAY,
        SS_OBJECT_LABEL,
        SS_OBJECT
      };

    enum ParseState
      {
        PS_START,
        PS_TRUE_T,
        PS_TRUE_TR,
        PS_TRUE_TRU,
        PS_FALSE_F,
        PS_FALSE_FA,
        PS_FALSE_FAL,
        PS_FALSE_FALS,
        PS_NULL_N,
        PS_NULL_NU,
        PS_NULL_NUL,
        PS_STRING_BASE,
        PS_STRING_BACKSLASH,
        PS_STRING_HEX_0,
        PS_STRING_HEX_1,
        PS_STRING_HEX_2,
        PS_STRING_HEX_3,
        PS_STRING_HEX_4_START,
        PS_STRING_HEX_4_BACKSLASH,
        PS_STRING_HEX_4,
        PS_STRING_HEX_5,
        PS_STRING_HEX_6,
        PS_STRING_HEX_7,
        PS_NUMBER_MINUS,
        PS_NUMBER_ZERO,
        PS_NUMBER_DIGITS,
        PS_NUMBER_DOT,
        PS_NUMBER_DOT_DIGIT,
        PS_NUMBER_E,
        PS_NUMBER_E_SIGN,
        PS_NUMBER_E_SIGN_DIGIT,
        PS_ARRAY_BASE,
        PS_ARRAY_VALUE,
        PS_OBJECT_BASE,
        PS_OBJECT_LABEL,
        PS_OBJECT_VALUE,
        PS_OBJECT_COMMA
      };

    JSONHandler *handler;
    o_integer line_number;
    o_integer column_number;
    std::vector<StackState> state_stack;
    ParseState current_state;
    string_buffer current_string;
    bool number_is_negative;
    o_integer mantissa_whole_part;
    o_integer mantissa_fraction_numerator;
    size_t mantissa_fraction_digit_count;
    bool exponent_is_negative;
    bool exponent_plus;
    o_integer exponent;
    size_t exponent_digit_count;

    ParseState value_done_state(void);

  public:
    JSONIncrementalParser(JSONHandler *handler);
    ~JSONIncrementalParser(void);

    void add_characters(const char *new_characters);
    void add_characters(const char *new_characters, size_t character_count);
    void end_of_input(void);
  };


#endif /* JSONINCREMENTALPARSE_H */
