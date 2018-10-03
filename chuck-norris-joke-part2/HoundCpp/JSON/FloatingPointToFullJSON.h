/* file "FloatingPointToFullJSON.h" */

/* Copyright 2017 SoundHound, Incorporated.  All rights reserved. */

#ifndef FLOATINGPOINTTOFULLJSON_H
#define FLOATINGPOINTTOFULLJSON_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>


template <class Type> Type from_json_number(const char *number);


template <class Type> void floating_point_to_full_json(Type value,
        char *result_buffer, char *scratch_buffer, const char *format,
        int precision)
  {
    sprintf(result_buffer, format, precision, value);
    assert(*result_buffer != 0);
    const char *exponent = result_buffer + 1;
    while (*exponent != 'e')
      {
        assert(*exponent != 0);
        ++exponent;
      }
    if ((*(exponent - 1) != '9') || ((exponent - result_buffer) < 2) ||
        (*(exponent - 2) != '9'))
      {
        return;
      }

    strcpy(scratch_buffer, result_buffer);
    char *new_exponent = (exponent - result_buffer) + scratch_buffer;
    assert(*new_exponent == 'e');
    char *fix = new_exponent;
    assert(*(fix - 1) == '9');
    do
      {
        assert(fix > scratch_buffer);
        --fix;
        assert(*fix == '9');
        *fix = '0';
      } while (*(fix - 1) == '9');
    assert(fix > scratch_buffer);
    assert(*fix == '0');
    --fix;
    if (*fix == '.')
      {
        assert(fix == (scratch_buffer + 1));
        assert((*scratch_buffer >= '1') && (*scratch_buffer <= '9'));
        if (*scratch_buffer < '9')
          {
            ++*scratch_buffer;
          }
        else
          {
            *scratch_buffer = '1';
            assert(*new_exponent == 'e');
            assert((*(new_exponent + 1) == '+') ||
                   (*(new_exponent + 1) == '-'));
            char *fix_exponent = new_exponent + 2;
            do
              {
                assert((*fix_exponent >= '0') && (*fix_exponent <= '9'));
                ++fix_exponent;
              } while (*fix_exponent != 0);
            while (true)
              {
                --fix_exponent;
                assert(fix_exponent > new_exponent);
                if (fix_exponent == (new_exponent + 1))
                  {
                    assert(*(new_exponent + 1) == '+');
                    *new_exponent = '1';
                    while (true)
                      {
                        ++new_exponent;
                        if (new_exponent == 0)
                            break;
                        *new_exponent = '0';
                      }
                    *new_exponent = '0';
                    ++new_exponent;
                    *new_exponent = 0;
                  }
                assert((*fix_exponent >= '0') && (*fix_exponent <= '9'));
                if (*(new_exponent + 1) == '+')
                  {
                    if (*fix_exponent < '9')
                      {
                        ++*fix_exponent;
                        break;
                      }
                    *fix_exponent = '0';
                  }
                else
                  {
                    if (*fix_exponent > '0')
                      {
                        --*fix_exponent;
                        break;
                      }
                    *fix_exponent = '9';
                  }
              }
          }
      }
    else
      {
        assert((*fix >= '0') && (*fix < '9'));
        ++*fix;
      }
    Type compare = from_json_number<Type>(scratch_buffer);
    if (compare == value)
        strcpy(result_buffer, scratch_buffer);
  }


#endif /* FLOATINGPOINTTOFULLJSON_H */
