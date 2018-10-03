/* file "JSONIntegerGenerator.cpp" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#include "JSONIntegerGenerator.h"


JSONIntegerGenerator::JSONIntegerGenerator(void)
  {
  }

JSONIntegerGenerator::~JSONIntegerGenerator(void)
  {
  }

void JSONIntegerGenerator::true_value(void)
  {
    error("Expected an integer value for %what%, found true.");
  }

void JSONIntegerGenerator::false_value(void)
  {
    error("Expected an integer value for %what%, found false.");
  }

void JSONIntegerGenerator::boolean_value(bool to_write)
  {
    error("Expected an integer value for %what%, found %s.",
          (to_write ? "true" : "false"));
  }

void JSONIntegerGenerator::null_value(void)
  {
    error("Expected an integer value for %what%, found null.");
  }

void JSONIntegerGenerator::string_value(const char *to_write)
  {
    error("Expected an integer value for %what%, found the string \"%s\".",
          to_write);
  }

void JSONIntegerGenerator::string_value(const std::string &to_write)
  {
    error("Expected an integer value for %what%, found the string \"%s\".",
          to_write.c_str());
  }

void JSONIntegerGenerator::start_object(void)
  {
    error("Expected an integer value for %what%, found an object.");
  }

void JSONIntegerGenerator::start_pair(const char *name)
  {
    assert(false);
  }

void JSONIntegerGenerator::pair(const char *name, const char *new_string_value)
  {
    assert(false);
  }

void JSONIntegerGenerator::pair(const char *name,
                                const std::string &new_string_value)
  {
    assert(false);
  }

void JSONIntegerGenerator::pair(const char *name, bool value)
  {
    assert(false);
  }

void JSONIntegerGenerator::pair(const char *name, int value)
  {
    assert(false);
  }

void JSONIntegerGenerator::pair(const char *name, unsigned int value)
  {
    assert(false);
  }

void JSONIntegerGenerator::pair(const char *name, long value)
  {
    assert(false);
  }

void JSONIntegerGenerator::pair(const char *name, unsigned long value)
  {
    assert(false);
  }

void JSONIntegerGenerator::pair(const char *name, double value, int precision)
  {
    assert(false);
  }

void JSONIntegerGenerator::finish_object(void)
  {
    assert(false);
  }

void JSONIntegerGenerator::start_array(void)
  {
    error("Expected an integer value for %what%, found an array.");
  }

void JSONIntegerGenerator::finish_array(void)
  {
    assert(false);
  }
