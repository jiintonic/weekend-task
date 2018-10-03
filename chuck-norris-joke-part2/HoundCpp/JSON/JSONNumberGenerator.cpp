/* file "JSONNumberGenerator.cpp" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#include "JSONNumberGenerator.h"


JSONNumberGenerator::JSONNumberGenerator(void)
  {
  }

JSONNumberGenerator::~JSONNumberGenerator(void)
  {
  }

void JSONNumberGenerator::true_value(void)
  {
    error("Expected a number value for %what%, found true.");
  }

void JSONNumberGenerator::false_value(void)
  {
    error("Expected a number value for %what%, found false.");
  }

void JSONNumberGenerator::boolean_value(bool to_write)
  {
    error("Expected a number value for %what%, found %s.",
          (to_write ? "true" : "false"));
  }

void JSONNumberGenerator::null_value(void)
  {
    error("Expected a number value for %what%, found null.");
  }

void JSONNumberGenerator::string_value(const char *to_write)
  {
    error("Expected a number value for %what%, found the string \"%s\".",
          to_write);
  }

void JSONNumberGenerator::string_value(const std::string &to_write)
  {
    error("Expected a number value for %what%, found the string \"%s\".",
          to_write.c_str());
  }

void JSONNumberGenerator::start_object(void)
  {
    error("Expected a number value for %what%, found an object.");
  }

void JSONNumberGenerator::start_pair(const char *name)
  {
    assert(false);
  }

void JSONNumberGenerator::pair(const char *name, const char *new_string_value)
  {
    assert(false);
  }

void JSONNumberGenerator::pair(const char *name,
                               const std::string &new_string_value)
  {
    assert(false);
  }

void JSONNumberGenerator::pair(const char *name, bool value)
  {
    assert(false);
  }

void JSONNumberGenerator::pair(const char *name, int value)
  {
    assert(false);
  }

void JSONNumberGenerator::pair(const char *name, unsigned int value)
  {
    assert(false);
  }

void JSONNumberGenerator::pair(const char *name, long value)
  {
    assert(false);
  }

void JSONNumberGenerator::pair(const char *name, unsigned long value)
  {
    assert(false);
  }

void JSONNumberGenerator::pair(const char *name, double value, int precision)
  {
    assert(false);
  }

void JSONNumberGenerator::finish_object(void)
  {
    assert(false);
  }

void JSONNumberGenerator::start_array(void)
  {
    error("Expected a number value for %what%, found an array.");
  }

void JSONNumberGenerator::finish_array(void)
  {
    assert(false);
  }
