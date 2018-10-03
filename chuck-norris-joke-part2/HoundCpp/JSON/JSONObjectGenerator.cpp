/* file "JSONObjectGenerator.cpp" */

/* Copyright 2015-2018 SoundHound, Incorporated.  All rights reserved. */

#include "JSONObjectGenerator.h"
#include <string.h>


void JSONObjectGenerator::post_value(void)
  {
    assert(field_name != NULL);
    assert(field_handler != NULL);
    if (depth == 1)
      {
        finish_field(field_name, field_handler);
        delete[] field_name;
        field_name = NULL;
        field_handler = NULL;
      }
  }

JSONObjectGenerator::JSONObjectGenerator(void) : depth(0), field_name(NULL),
        field_handler(NULL)
  {
  }

JSONObjectGenerator::~JSONObjectGenerator(void)
  {
    if (field_name != NULL)
        delete[] field_name;
  }

void JSONObjectGenerator::true_value(void)
  {
    if (depth == 0)
        error("Expected an object value for %what%, found true.");
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->true_value();
    post_value();
  }

void JSONObjectGenerator::false_value(void)
  {
    if (depth == 0)
        error("Expected an object value for %what%, found false.");
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->false_value();
    post_value();
  }

void JSONObjectGenerator::boolean_value(bool to_write)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found %s.",
              (to_write ? "true" : "false"));
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->boolean_value(to_write);
    post_value();
  }

void JSONObjectGenerator::null_value(void)
  {
    if (depth == 0)
        error("Expected an object value for %what%, found null.");
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->null_value();
    post_value();
  }

void JSONObjectGenerator::string_value(const char *to_write)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found the string \"%s\".",
              to_write);
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->string_value(to_write);
    post_value();
  }

void JSONObjectGenerator::string_value(const std::string &to_write)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found the string \"%s\".",
              to_write.c_str());
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->string_value(to_write);
    post_value();
  }

void JSONObjectGenerator::number_value(int to_write)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found the integer %d.",
              to_write);
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(to_write);
    post_value();
  }

void JSONObjectGenerator::number_value(unsigned int to_write)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found the integer %u.",
              to_write);
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(to_write);
    post_value();
  }

void JSONObjectGenerator::number_value(long to_write)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found the integer %ld.",
              to_write);
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(to_write);
    post_value();
  }

void JSONObjectGenerator::number_value(unsigned long to_write)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found the integer %lu.",
              to_write);
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(to_write);
    post_value();
  }

void JSONObjectGenerator::number_value(o_integer to_write)
  {
    if (depth == 0)
        bad_integer(to_write, "an object value");
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(to_write);
    post_value();
  }

void JSONObjectGenerator::number_value(double to_write, int precision)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found the rational %.*f.",
              precision, to_write);
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(to_write, precision);
    post_value();
  }

void JSONObjectGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    if (depth == 0)
      {
        bad_number(mantissa_whole_part, mantissa_fraction_numerator,
                   mantissa_fraction_digit_count, exponent, "an object value");
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(mantissa_whole_part,
            mantissa_fraction_numerator, mantissa_fraction_digit_count,
            exponent);
    post_value();
  }

void JSONObjectGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent,
        bool show_exponent, bool exponent_plus, size_t exponent_digit_count)
  {
    if (depth == 0)
      {
        bad_number(mantissa_whole_part, mantissa_fraction_numerator,
                   mantissa_fraction_digit_count, exponent, "an object value");
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(mantissa_whole_part,
            mantissa_fraction_numerator, mantissa_fraction_digit_count,
            exponent, show_exponent, exponent_plus, exponent_digit_count);
    post_value();
  }

void JSONObjectGenerator::number_value(const char *number_text)
  {
    if (depth == 0)
      {
        error("Expected an object value for %what%, found the number %s.",
              number_text);
      }
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value(number_text);
    post_value();
  }

void JSONObjectGenerator::number_value_uint64_t(uint64_t to_write)
  {
    if (depth == 0)
        bad_integer(to_write, "an object value");
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->number_value_uint64_t(to_write);
    post_value();
  }

void JSONObjectGenerator::start_object(void)
  {
    if (depth == 0)
      {
        assert(field_name == NULL);
        assert(field_handler == NULL);
        start();
      }
    else
      {
        assert(field_name != NULL);
        assert(field_handler != NULL);
        field_handler->start_object();
      }
    ++depth;
  }

void JSONObjectGenerator::start_pair(const char *name)
  {
    assert(name != NULL);

    assert(depth > 0);
    if (depth == 1)
      {
        assert(field_name == NULL);
        assert(field_handler == NULL);
        field_name = new char[strlen(name) + 1];
        strcpy(field_name, name);
        field_handler = start_field(field_name);
        assert(field_handler != NULL);
      }
    else
      {
        assert(field_name != NULL);
        assert(field_handler != NULL);
        field_handler->start_pair(name);
      }
  }

void JSONObjectGenerator::pair(const char *name, const char *new_string_value)
  {
    start_pair(name);
    string_value(new_string_value);
  }

void JSONObjectGenerator::pair(const char *name,
                               const std::string &new_string_value)
  {
    start_pair(name);
    string_value(new_string_value);
  }

void JSONObjectGenerator::pair(const char *name, bool value)
  {
    start_pair(name);
    boolean_value(value);
  }

void JSONObjectGenerator::pair(const char *name, int value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONObjectGenerator::pair(const char *name, unsigned int value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONObjectGenerator::pair(const char *name, long value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONObjectGenerator::pair(const char *name, unsigned long value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONObjectGenerator::pair(const char *name, double value, int precision)
  {
    start_pair(name);
    number_value(value, precision);
  }

void JSONObjectGenerator::finish_object(void)
  {
    assert(depth > 0);
    --depth;
    if (depth == 0)
      {
        assert(field_name == NULL);
        assert(field_handler == NULL);
        finish();
      }
    else
      {
        assert(field_name != NULL);
        assert(field_handler != NULL);
        field_handler->finish_object();
        post_value();
      }
  }

void JSONObjectGenerator::start_array(void)
  {
    if (depth == 0)
        error("Expected an object value for %what%, found an array.");
    ++depth;
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->start_array();
  }

void JSONObjectGenerator::finish_array(void)
  {
    assert(depth > 1);
    --depth;
    assert(field_name != NULL);
    assert(field_handler != NULL);
    field_handler->finish_array();
    post_value();
  }

void JSONObjectGenerator::reset(void)
  {
    depth = 0;
    if (field_name != NULL)
        delete[] field_name;
    field_name = NULL;
    field_handler = NULL;
  }
