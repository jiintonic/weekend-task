/* file "JSONStringGenerator.cpp" */

/* Copyright 2015-2017 SoundHound, Incorporated.  All rights reserved. */

#include "JSONStringGenerator.h"


JSONStringGenerator::JSONStringGenerator(void)
  {
  }

JSONStringGenerator::~JSONStringGenerator(void)
  {
  }

void JSONStringGenerator::validate(const char *result)
  {
  }

void JSONStringGenerator::true_value(void)
  {
    error("Expected a string value for %what%, found true.");
  }

void JSONStringGenerator::false_value(void)
  {
    error("Expected a string value for %what%, found false.");
  }

void JSONStringGenerator::boolean_value(bool to_write)
  {
    error("Expected a string value for %what%, found %s.",
          (to_write ? "true" : "false"));
  }

void JSONStringGenerator::null_value(void)
  {
    error("Expected a string value for %what%, found null.");
  }

void JSONStringGenerator::string_value(const char *to_write)
  {
    validate(to_write);
    handle_result(to_write);
  }

void JSONStringGenerator::string_value(const std::string &to_write)
  {
    validate(to_write.c_str());
    handle_result(to_write.c_str());
  }

void JSONStringGenerator::number_value(int to_write)
  {
    error("Expected a string value for %what%, found the integer %d.",
          to_write);
  }

void JSONStringGenerator::number_value(unsigned int to_write)
  {
    error("Expected a string value for %what%, found the integer %u.",
          to_write);
  }

void JSONStringGenerator::number_value(long to_write)
  {
    error("Expected a string value for %what%, found the integer %ld.",
          to_write);
  }

void JSONStringGenerator::number_value(unsigned long to_write)
  {
    error("Expected a string value for %what%, found the integer %lu.",
          to_write);
  }

void JSONStringGenerator::number_value(o_integer to_write)
  {
    bad_integer(to_write, "a string value");
  }

void JSONStringGenerator::number_value(double to_write, int precision)
  {
    error("Expected a string value for %what%, found the rational %.*f.",
          precision, to_write);
  }

void JSONStringGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    bad_number(mantissa_whole_part, mantissa_fraction_numerator,
               mantissa_fraction_digit_count, exponent, "a string value");
  }

void JSONStringGenerator::number_value(const char *number_text)
  {
    error("Expected a string value for %what%, found the number %s.",
          number_text);
  }

void JSONStringGenerator::number_value_uint64_t(uint64_t to_write)
  {
    bad_integer(to_write, "a string value");
  }

void JSONStringGenerator::start_object(void)
  {
    error("Expected a string value for %what%, found an object.");
  }

void JSONStringGenerator::start_pair(const char *name)
  {
    assert(false);
  }

void JSONStringGenerator::pair(const char *name, const char *new_string_value)
  {
    assert(false);
  }

void JSONStringGenerator::pair(const char *name,
                               const std::string &new_string_value)
  {
    assert(false);
  }

void JSONStringGenerator::pair(const char *name, bool value)
  {
    assert(false);
  }

void JSONStringGenerator::pair(const char *name, int value)
  {
    assert(false);
  }

void JSONStringGenerator::pair(const char *name, unsigned int value)
  {
    assert(false);
  }

void JSONStringGenerator::pair(const char *name, long value)
  {
    assert(false);
  }

void JSONStringGenerator::pair(const char *name, unsigned long value)
  {
    assert(false);
  }

void JSONStringGenerator::pair(const char *name, double value, int precision)
  {
    assert(false);
  }

void JSONStringGenerator::finish_object(void)
  {
    assert(false);
  }

void JSONStringGenerator::start_array(void)
  {
    error("Expected a string value for %what%, found an array.");
  }

void JSONStringGenerator::finish_array(void)
  {
    assert(false);
  }
