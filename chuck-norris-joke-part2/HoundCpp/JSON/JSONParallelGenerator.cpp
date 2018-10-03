/* file "JSONParallelGenerator.cpp" */

/* Copyright 2015-2018 SoundHound, Incorporated.  All rights reserved. */

#include "JSONParallelGenerator.h"
#include <stdlib.h>
#include <string.h>
#include <sstream>


void JSONParallelGenerator::pre_value(void)
  {
    if (depth > 0)
        return;
    assert(parallel_count == 0);
    assert(parallel_handlers == NULL);
    assert(parallel_active == NULL);
    assert(parallel_errors == NULL);
    parallel_count = start(&parallel_handlers);
    assert((parallel_count == 0) || (parallel_handlers != NULL));
    if (parallel_count > 0)
      {
        parallel_active = new bool[parallel_count];
        parallel_errors = new char *[parallel_count];
        for (size_t parallel_num = 0; parallel_num < parallel_count;
             ++parallel_num)
          {
            parallel_active[parallel_num] = true;
            parallel_errors[parallel_num] = NULL;
          }
      }
  }

void JSONParallelGenerator::post_value(void)
  {
    if (depth > 0)
        return;
    size_t winning_index = 0;
    while (true)
      {
        if (winning_index >= parallel_count)
          {
            std::stringstream message;
            message << "None of the options for %what% matched.";
            for (size_t other_index = 0; other_index < parallel_count;
                 ++other_index)
              {
                assert(!(parallel_active[other_index]));
                assert(parallel_errors[other_index] != NULL);
                message << "  Option " << other_index <<
                           " doesn't match because `" <<
                           parallel_errors[other_index] << "'.\n";
                free(parallel_errors[other_index]);
              }
            parallel_count = 0;
            parallel_handlers = NULL;
            if (parallel_active != NULL)
                delete[] parallel_active;
            parallel_active = NULL;
            if (parallel_errors != NULL)
                delete[] parallel_errors;
            parallel_errors = NULL;
            std::string message_string = message.str();
            error(message_string.c_str());
          }
        if (parallel_active[winning_index])
            break;
        ++winning_index;
      }
    for (size_t other_index = 0; other_index < winning_index; ++other_index)
      {
        assert(!(parallel_active[other_index]));
        assert(parallel_errors[other_index] != NULL);
        free(parallel_errors[other_index]);
      }
    finish(winning_index);
    while (winning_index < parallel_count)
      {
        if (parallel_active[winning_index])
          {
            assert(parallel_errors[winning_index] == NULL);
            parallel_handlers[winning_index]->reset();
          }
        else
          {
            assert(parallel_errors[winning_index] != NULL);
            free(parallel_errors[winning_index]);
          }
        ++winning_index;
      }
    parallel_count = 0;
    parallel_handlers = NULL;
    if (parallel_active != NULL)
        delete[] parallel_active;
    parallel_active = NULL;
    if (parallel_errors != NULL)
        delete[] parallel_errors;
    parallel_errors = NULL;
  }

JSONParallelGenerator::JSONParallelGenerator(void)
  {
    depth = 0;
    parallel_count = 0;
    parallel_handlers = NULL;
    parallel_active = NULL;
    parallel_errors = NULL;
  }

JSONParallelGenerator::~JSONParallelGenerator(void)
  {
    if (parallel_active != NULL)
        delete[] parallel_active;
    if (parallel_errors != NULL)
      {
        for (size_t num = 0; num < parallel_count; ++num)
          {
            if (parallel_errors[num] != NULL)
                free(parallel_errors[num]);
          }
        delete[] parallel_errors;
      }
  }

void JSONParallelGenerator::true_value(void)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->true_value();
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::false_value(void)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->false_value();
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::boolean_value(bool to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->boolean_value(to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::null_value(void)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->null_value();
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::string_value(const char *to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->string_value(to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::string_value(const std::string &to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->string_value(to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(int to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(unsigned int to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(long to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(unsigned long to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(o_integer to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(double to_write, int precision)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(to_write,
                                                              precision);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(
                        mantissa_whole_part, mantissa_fraction_numerator,
                        mantissa_fraction_digit_count, exponent);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent,
        bool show_exponent, bool exponent_plus, size_t exponent_digit_count)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(
                        mantissa_whole_part, mantissa_fraction_numerator,
                        mantissa_fraction_digit_count, exponent, show_exponent,
                        exponent_plus, exponent_digit_count);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value(const char *number_text)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value(number_text);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::number_value_uint64_t(uint64_t to_write)
  {
    pre_value();
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->number_value_uint64_t(
                        to_write);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::start_object(void)
  {
    pre_value();
    ++depth;
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->start_object();
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::start_pair(const char *name)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->start_pair(name);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::pair(const char *name, const char *new_string_value)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->pair(name, new_string_value);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::pair(const char *name,
                                 const std::string &new_string_value)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->pair(name, new_string_value);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::pair(const char *name, bool value)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->pair(name, value);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::pair(const char *name, int value)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->pair(name, value);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::pair(const char *name, unsigned int value)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->pair(name, value);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::pair(const char *name, long value)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->pair(name, value);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::pair(const char *name, unsigned long value)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->pair(name, value);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::pair(const char *name, double value, int precision)
  {
    assert(depth > 0);
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->pair(name, value, precision);
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::finish_object(void)
  {
    assert(depth > 0);
    --depth;
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->finish_object();
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::start_array(void)
  {
    pre_value();
    ++depth;
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->start_array();
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
  }

void JSONParallelGenerator::finish_array(void)
  {
    assert(depth > 0);
    --depth;
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            try
              {
                parallel_handlers[parallel_num]->finish_array();
              }
            catch (char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = e1;
                parallel_handlers[parallel_num]->reset();
              }
            catch (const char *e1)
              {
                parallel_active[parallel_num] = false;
                parallel_errors[parallel_num] = strdup(e1);
                parallel_handlers[parallel_num]->reset();
              }
          }
      }
    post_value();
  }

void JSONParallelGenerator::reset(void)
  {
    depth = 0;
    for (size_t parallel_num = 0; parallel_num < parallel_count; ++parallel_num)
      {
        if (parallel_active[parallel_num])
          {
            assert(parallel_errors[parallel_num] == NULL);
            parallel_handlers[parallel_num]->reset();
          }
        else
          {
            assert(parallel_errors[parallel_num] != NULL);
          }
      }
    parallel_count = 0;
    parallel_handlers = NULL;
    if (parallel_active != NULL)
        delete[] parallel_active;
    parallel_active = NULL;
    if (parallel_errors != NULL)
      {
        for (size_t num = 0; num < parallel_count; ++num)
          {
            if (parallel_errors[num] != NULL)
                free(parallel_errors[num]);
          }
        delete[] parallel_errors;
      }
    parallel_errors = NULL;
  }
