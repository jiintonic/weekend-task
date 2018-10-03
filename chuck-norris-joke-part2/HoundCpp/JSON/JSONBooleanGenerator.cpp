/* file "JSONBooleanGenerator.cpp" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#include "JSONBooleanGenerator.h"


JSONBooleanGenerator::JSONBooleanGenerator(void)
  {
  }

JSONBooleanGenerator::~JSONBooleanGenerator(void)
  {
  }

void JSONBooleanGenerator::true_value(void)
  {
    boolean_value(true);
  }

void JSONBooleanGenerator::false_value(void)
  {
    boolean_value(false);
  }

void JSONBooleanGenerator::boolean_value(bool to_write)
  {
    validate(to_write);
    handle_result(to_write);
  }

void JSONBooleanGenerator::null_value(void)
  {
    error("Expected a boolean value for %what%, found null.");
  }

void JSONBooleanGenerator::string_value(const char *to_write)
  {
    error("Expected a boolean value for %what%, found the string \"%s\".",
          to_write);
  }

void JSONBooleanGenerator::string_value(const std::string &to_write)
  {
    error("Expected a boolean value for %what%, found the string \"%s\".",
          to_write.c_str());
  }

void JSONBooleanGenerator::number_value(int to_write)
  {
    error("Expected a boolean value for %what%, found the integer %d.",
          to_write);
  }

void JSONBooleanGenerator::number_value(unsigned int to_write)
  {
    error("Expected a boolean value for %what%, found the integer %u.",
          to_write);
  }

void JSONBooleanGenerator::number_value(long to_write)
  {
    error("Expected a boolean value for %what%, found the integer %ld.",
          to_write);
  }

void JSONBooleanGenerator::number_value(unsigned long to_write)
  {
    error("Expected a boolean value for %what%, found the integer %lu.",
          to_write);
  }

void JSONBooleanGenerator::number_value(o_integer to_write)
  {
    bad_integer(to_write, "a boolean value");
  }

void JSONBooleanGenerator::number_value(double to_write, int precision)
  {
    error("Expected a boolean value for %what%, found the rational %.*f.",
          precision, to_write);
  }

void JSONBooleanGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    bad_number(mantissa_whole_part, mantissa_fraction_numerator,
               mantissa_fraction_digit_count, exponent, "a boolean value");
  }

void JSONBooleanGenerator::number_value(const char *number_text)
  {
    error("Expected a boolean value for %what%, found the number %s.",
          number_text);
  }

void JSONBooleanGenerator::number_value_uint64_t(uint64_t to_write)
  {
    bad_integer(to_write, "a boolean value");
  }

void JSONBooleanGenerator::start_object(void)
  {
    error("Expected a boolean value for %what%, found an object.");
  }

void JSONBooleanGenerator::start_pair(const char *name)
  {
    assert(false);
  }

void JSONBooleanGenerator::pair(const char *name, const char *new_string_value)
  {
    assert(false);
  }

void JSONBooleanGenerator::pair(const char *name,
                                const std::string &new_string_value)
  {
    assert(false);
  }

void JSONBooleanGenerator::pair(const char *name, bool value)
  {
    assert(false);
  }

void JSONBooleanGenerator::pair(const char *name, int value)
  {
    assert(false);
  }

void JSONBooleanGenerator::pair(const char *name, unsigned int value)
  {
    assert(false);
  }

void JSONBooleanGenerator::pair(const char *name, long value)
  {
    assert(false);
  }

void JSONBooleanGenerator::pair(const char *name, unsigned long value)
  {
    assert(false);
  }

void JSONBooleanGenerator::pair(const char *name, double value, int precision)
  {
    assert(false);
  }

void JSONBooleanGenerator::finish_object(void)
  {
    assert(false);
  }

void JSONBooleanGenerator::start_array(void)
  {
    error("Expected a boolean value for %what%, found an array.");
  }

void JSONBooleanGenerator::finish_array(void)
  {
    assert(false);
  }
