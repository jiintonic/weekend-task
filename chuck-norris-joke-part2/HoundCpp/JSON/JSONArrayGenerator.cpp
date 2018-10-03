/* file "JSONArrayGenerator.cpp" */

/* Copyright 2015-2018 SoundHound, Incorporated.  All rights reserved. */

#include "JSONArrayGenerator.h"
#include <string.h>


JSONArrayGenerator::JSONArrayGenerator(void) : depth(0), element_handler(NULL)
  {
  }

JSONArrayGenerator::~JSONArrayGenerator(void)
  {
  }

void JSONArrayGenerator::true_value(void)
  {
    if (depth == 0)
        error("Expected an array value for %what%, found true.");
    assert(element_handler != NULL);
    element_handler->true_value();
  }

void JSONArrayGenerator::false_value(void)
  {
    if (depth == 0)
        error("Expected an array value for %what%, found false.");
    assert(element_handler != NULL);
    element_handler->false_value();
  }

void JSONArrayGenerator::boolean_value(bool to_write)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found %s.",
              (to_write ? "true" : "false"));
      }
    assert(element_handler != NULL);
    element_handler->boolean_value(to_write);
  }

void JSONArrayGenerator::null_value(void)
  {
    if (depth == 0)
        error("Expected an array value for %what%, found null.");
    assert(element_handler != NULL);
    element_handler->null_value();
  }

void JSONArrayGenerator::string_value(const char *to_write)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found the string \"%s\".",
              to_write);
      }
    assert(element_handler != NULL);
    element_handler->string_value(to_write);
  }

void JSONArrayGenerator::string_value(const std::string &to_write)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found the string \"%s\".",
              to_write.c_str());
      }
    assert(element_handler != NULL);
    element_handler->string_value(to_write);
  }

void JSONArrayGenerator::number_value(int to_write)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found the integer %d.",
              to_write);
      }
    assert(element_handler != NULL);
    element_handler->number_value(to_write);
  }

void JSONArrayGenerator::number_value(unsigned int to_write)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found the integer %u.",
              to_write);
      }
    assert(element_handler != NULL);
    element_handler->number_value(to_write);
  }

void JSONArrayGenerator::number_value(long to_write)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found the integer %ld.",
              to_write);
      }
    assert(element_handler != NULL);
    element_handler->number_value(to_write);
  }

void JSONArrayGenerator::number_value(unsigned long to_write)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found the integer %lu.",
              to_write);
      }
    assert(element_handler != NULL);
    element_handler->number_value(to_write);
  }

void JSONArrayGenerator::number_value(o_integer to_write)
  {
    if (depth == 0)
        bad_integer(to_write, "an array value");
    assert(element_handler != NULL);
    element_handler->number_value(to_write);
  }

void JSONArrayGenerator::number_value(double to_write, int precision)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found the rational %.*f.",
              precision, to_write);
      }
    assert(element_handler != NULL);
    element_handler->number_value(to_write, precision);
  }

void JSONArrayGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    if (depth == 0)
      {
        bad_number(mantissa_whole_part, mantissa_fraction_numerator,
                   mantissa_fraction_digit_count, exponent, "an array value");
      }
    assert(element_handler != NULL);
    element_handler->number_value(mantissa_whole_part,
            mantissa_fraction_numerator, mantissa_fraction_digit_count,
            exponent);
  }

void JSONArrayGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent,
        bool show_exponent, bool exponent_plus, size_t exponent_digit_count)
  {
    if (depth == 0)
      {
        bad_number(mantissa_whole_part, mantissa_fraction_numerator,
                   mantissa_fraction_digit_count, exponent, "an array value");
      }
    assert(element_handler != NULL);
    element_handler->number_value(mantissa_whole_part,
            mantissa_fraction_numerator, mantissa_fraction_digit_count,
            exponent, show_exponent, exponent_plus, exponent_digit_count);
  }

void JSONArrayGenerator::number_value(const char *number_text)
  {
    if (depth == 0)
      {
        error("Expected an array value for %what%, found the number %s.",
              number_text);
      }
    assert(element_handler != NULL);
    element_handler->number_value(number_text);
  }

void JSONArrayGenerator::number_value_uint64_t(uint64_t to_write)
  {
    if (depth == 0)
        bad_integer(to_write, "an array value");
    assert(element_handler != NULL);
    element_handler->number_value_uint64_t(to_write);
  }

void JSONArrayGenerator::start_object(void)
  {
    if (depth == 0)
        error("Expected an array value for %what%, found an object.");
    ++depth;
    assert(element_handler != NULL);
    element_handler->start_object();
  }

void JSONArrayGenerator::start_pair(const char *name)
  {
    assert(name != NULL);

    assert(depth > 1);
    assert(element_handler != NULL);
    element_handler->start_pair(name);
  }

void JSONArrayGenerator::pair(const char *name, const char *new_string_value)
  {
    start_pair(name);
    string_value(new_string_value);
  }

void JSONArrayGenerator::pair(const char *name,
                              const std::string &new_string_value)
  {
    start_pair(name);
    string_value(new_string_value);
  }

void JSONArrayGenerator::pair(const char *name, bool value)
  {
    start_pair(name);
    boolean_value(value);
  }

void JSONArrayGenerator::pair(const char *name, int value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONArrayGenerator::pair(const char *name, unsigned int value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONArrayGenerator::pair(const char *name, long value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONArrayGenerator::pair(const char *name, unsigned long value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONArrayGenerator::pair(const char *name, double value, int precision)
  {
    start_pair(name);
    number_value(value, precision);
  }

void JSONArrayGenerator::finish_object(void)
  {
    assert(depth > 1);
    --depth;
    assert(element_handler != NULL);
    element_handler->finish_object();
  }

void JSONArrayGenerator::start_array(void)
  {
    if (depth == 0)
      {
        assert(element_handler == NULL);
        element_handler = start();
      }
    else
      {
        assert(element_handler != NULL);
        element_handler->start_array();
      }
    ++depth;
  }

void JSONArrayGenerator::finish_array(void)
  {
    assert(depth > 0);
    --depth;
    assert(element_handler != NULL);
    if (depth == 0)
      {
        element_handler = NULL;
        finish();
      }
    else
      {
        element_handler->finish_array();
      }
  }

void JSONArrayGenerator::reset(void)
  {
    depth = 0;
    element_handler = NULL;
  }
