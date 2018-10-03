/* file "JSONIntegerGenerator.h" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONINTEGERGENERATOR_H
#define JSONINTEGERGENERATOR_H

#include "JSONCheckingHandler.h"


class JSONIntegerGenerator : public JSONCheckingHandler
  {
  protected:
    JSONIntegerGenerator(void);
    ~JSONIntegerGenerator(void);

  public:
    void true_value(void);
    void false_value(void);
    void boolean_value(bool to_write);
    void null_value(void);
    void string_value(const char *to_write);
    void string_value(const std::string &to_write);
    virtual void number_value(int to_write) = 0;
    virtual void number_value(unsigned int to_write) = 0;
    virtual void number_value(long to_write) = 0;
    virtual void number_value(unsigned long to_write) = 0;
    virtual void number_value(o_integer to_write) = 0;
    virtual void number_value(double to_write, int precision = DBL_DIG) = 0;
    virtual void number_value(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent) = 0;
    virtual void number_value(const char *number_text) = 0;
    virtual void number_value_uint64_t(uint64_t to_write) = 0;
    void start_object(void);
    void start_pair(const char *name);
    void pair(const char *name, const char *new_string_value);
    void pair(const char *name, const std::string &new_string_value);
    void pair(const char *name, bool value);
    void pair(const char *name, int value);
    void pair(const char *name, unsigned int value);
    void pair(const char *name, long value);
    void pair(const char *name, unsigned long value);
    void pair(const char *name, double value, int precision = DBL_DIG);
    void finish_object(void);
    void start_array(void);
    void finish_array(void);
  };


#endif /* JSONINTEGERGENERATOR_H */
