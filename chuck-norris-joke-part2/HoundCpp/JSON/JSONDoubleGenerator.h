/* file "JSONDoubleGenerator.h" */

/* Copyright 2015-2018 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONDOUBLEGENERATOR_H
#define JSONDOUBLEGENERATOR_H

#include "JSONNumberGenerator.h"


class JSONDoubleGenerator : public JSONNumberGenerator
  {
  protected:
    void number_value(int to_write);
    void number_value(unsigned int to_write);
    void number_value(long to_write);
    void number_value(unsigned long to_write);
    void number_value(o_integer to_write);
    void number_value(double to_write, int precision);
    void number_value(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent);
    void number_value(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent,
            bool show_exponent, bool exponent_plus,
            size_t exponent_digit_count);
    void number_value(const char *number_text);
    void number_value_uint64_t(uint64_t to_write);
    virtual void handle_result(double result) = 0;
  };


#endif /* JSONDOUBLEGENERATOR_H */
