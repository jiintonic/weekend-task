/* file "JSONParallelGenerator.h" */

/* Copyright 2015-2018 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONPARALLELGENERATOR_H
#define JSONPARALLELGENERATOR_H

#include "JSONCheckingHandler.h"


class JSONParallelGenerator : public JSONCheckingHandler
  {
  private:
    size_t depth;
    size_t parallel_count;
    JSONHandler **parallel_handlers;
    bool *parallel_active;
    char **parallel_errors;

    void pre_value(void);
    void post_value(void);

  protected:
    JSONParallelGenerator(void);
    ~JSONParallelGenerator(void);

    virtual size_t start(JSONHandler ***parallel_handlers_location) = 0;
    virtual void finish(size_t winning_index) = 0;

  public:
    void true_value(void);
    void false_value(void);
    void boolean_value(bool to_write);
    void null_value(void);
    void string_value(const char *to_write);
    void string_value(const std::string &to_write);
    void number_value(int to_write);
    void number_value(unsigned int to_write);
    void number_value(long to_write);
    void number_value(unsigned long to_write);
    void number_value(o_integer to_write);
    void number_value(double to_write, int precision = DBL_DIG);
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
    void reset(void);
  };


#endif /* JSONPARALLELGENERATOR_H */
