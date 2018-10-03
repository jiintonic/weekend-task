/* file "JSONNullGenerator.cpp" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#include "JSONNullGenerator.h"


JSONNullGenerator::JSONNullGenerator(void)
  {
  }

JSONNullGenerator::~JSONNullGenerator(void)
  {
  }

void JSONNullGenerator::true_value(void)
  {
    error("Expected a null value for %what%, found true.");
  }

void JSONNullGenerator::false_value(void)
  {
    error("Expected a null value for %what%, found false.");
  }

void JSONNullGenerator::boolean_value(bool to_write)
  {
    error("Expected a null value for %what%, found %s.",
          (to_write ? "true" : "false"));
  }

void JSONNullGenerator::null_value(void)
  {
    handle_result(true);
  }

void JSONNullGenerator::string_value(const char *to_write)
  {
    error("Expected a null value for %what%, found the string \"%s\".",
          to_write);
  }

void JSONNullGenerator::string_value(const std::string &to_write)
  {
    error("Expected a null value for %what%, found the string \"%s\".",
          to_write.c_str());
  }

void JSONNullGenerator::number_value(int to_write)
  {
    error("Expected a null value for %what%, found the integer %d.", to_write);
  }

void JSONNullGenerator::number_value(unsigned int to_write)
  {
    error("Expected a null value for %what%, found the integer %u.", to_write);
  }

void JSONNullGenerator::number_value(long to_write)
  {
    error("Expected a null value for %what%, found the integer %ld.", to_write);
  }

void JSONNullGenerator::number_value(unsigned long to_write)
  {
    error("Expected a null value for %what%, found the integer %lu.", to_write);
  }

void JSONNullGenerator::number_value(o_integer to_write)
  {
    bad_integer(to_write, "a null value");
  }

void JSONNullGenerator::number_value(double to_write, int precision)
  {
    error("Expected a null value for %what%, found the rational %.*f.",
          precision, to_write);
  }

void JSONNullGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    bad_number(mantissa_whole_part, mantissa_fraction_numerator,
               mantissa_fraction_digit_count, exponent, "a null value");
  }

void JSONNullGenerator::number_value(const char *number_text)
  {
    error("Expected a null value for %what%, found the number %s.",
          number_text);
  }

void JSONNullGenerator::number_value_uint64_t(uint64_t to_write)
  {
    bad_integer(to_write, "a null value");
  }

void JSONNullGenerator::start_object(void)
  {
    error("Expected a null value for %what%, found an object.");
  }

void JSONNullGenerator::start_pair(const char *name)
  {
    assert(false);
  }

void JSONNullGenerator::pair(const char *name, const char *new_string_value)
  {
    assert(false);
  }

void JSONNullGenerator::pair(const char *name,
                             const std::string &new_string_value)
  {
    assert(false);
  }

void JSONNullGenerator::pair(const char *name, bool value)
  {
    assert(false);
  }

void JSONNullGenerator::pair(const char *name, int value)
  {
    assert(false);
  }

void JSONNullGenerator::pair(const char *name, unsigned int value)
  {
    assert(false);
  }

void JSONNullGenerator::pair(const char *name, long value)
  {
    assert(false);
  }

void JSONNullGenerator::pair(const char *name, unsigned long value)
  {
    assert(false);
  }

void JSONNullGenerator::pair(const char *name, double value, int precision)
  {
    assert(false);
  }

void JSONNullGenerator::finish_object(void)
  {
    assert(false);
  }

void JSONNullGenerator::start_array(void)
  {
    error("Expected a null value for %what%, found an array.");
  }

void JSONNullGenerator::finish_array(void)
  {
    assert(false);
  }
