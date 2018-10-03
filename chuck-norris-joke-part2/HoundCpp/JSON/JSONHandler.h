/* file "JSONHandler.h" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONHANDLER_H
#define JSONHANDLER_H

#include <stdint.h>
#include <float.h>
#include <string>
extern "C"
  {
#include "o_integer.h"
#include "rational.h"
#include "unicode.h"
  };


class JSONHandler
  {
  protected:
    JSONHandler(void)  { }
    ~JSONHandler(void)  { }

  public:
    virtual void true_value(void)  { }
    virtual void false_value(void)  { }
    virtual void boolean_value(bool to_write)  { }
    virtual void null_value(void)  { }
    virtual void string_value(const char *to_write)  { }
    virtual void string_value(const std::string &to_write)  { }
    virtual void number_value(int to_write)  { }
    virtual void number_value(unsigned int to_write)  { }
    virtual void number_value(long to_write)  { }
    virtual void number_value(unsigned long to_write)  { }
    virtual void number_value(o_integer to_write)  { }
    virtual void number_value(double to_write, int precision)  { }
    virtual void number_value(double to_write)
      { number_value(to_write, DBL_DIG); }
    virtual void number_value(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent)  { }
    virtual void number_value(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent,
            bool show_exponent, bool exponent_plus,
            size_t exponent_digit_count);
    virtual void number_value(const char *number_text)  { }
    virtual void number_value_uint64_t(uint64_t to_write)
      {
        unsigned long the_ul = to_write;
        if ((uint64_t)the_ul == to_write)
          {
            number_value(the_ul);
          }
        else
          {
            char buffer[100];
            char *position = &(buffer[99]);
            *position = 0;
            uint64_t remainder = to_write;
            do
              {
                assert(position > &(buffer[0]));
                --position;
                *position = '0' + (char)(remainder % 10);
                remainder = remainder / 10;
              } while (remainder > 0);
            number_value(position);
          }
      }
    virtual void start_object(void)  { }
    virtual void start_pair(const char *name)  { }
    virtual void pair(const char *name, const char *string_value)  { }
    virtual void pair(const char *name, const std::string &string_value)  { }
    virtual void pair(const char *name, bool value)  { }
    virtual void pair(const char *name, int value)  { }
    virtual void pair(const char *name, unsigned int value)  { }
    virtual void pair(const char *name, long value)  { }
    virtual void pair(const char *name, unsigned long value)  { }
    virtual void pair(const char *name, double value, int precision)  { }
    virtual void pair(const char *name, double value)
      { pair(name, value, DBL_DIG); }
    virtual void finish_object(void)  { }
    virtual void start_array(void)  { }
    virtual void finish_array(void)  { }

    virtual void reset(void)  { }
    virtual void sort_keys(void)  { }

    void pair(const char *name, char value)
      {
        assert(false);
      }
    inline void string_pair(const char *name, uint32_t code_point)
      {
        char buffer[5];
        size_t char_count = code_point_to_utf8(code_point, &(buffer[0]));
        assert((char_count >= 1) && (char_count <= 4));
        buffer[char_count] = 0;
        pair(name, buffer);
      }
  };


#endif /* JSONHANDLER_H */
