/* file "JSONIntegerRangeGenerator.h" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONINTEGERRANGEGENERATOR_H
#define JSONINTEGERRANGEGENERATOR_H

#include "JSONCoreIntegerGenerator.h"
#include <sstream>
#define __STDC_FORMAT_MACROS
#include <inttypes.h>


class JSONIntegerRangeBaseGenerator : public JSONCoreIntegerGenerator
  {
  protected:
    o_integer oi_lower_bound;
    o_integer oi_upper_bound;

  public:
    using JSONCoreIntegerGenerator::number_value;

    void number_value(o_integer to_write)
      {
        if (oi_less_than(to_write, oi_lower_bound))
          {
            std::string bound_string = oi_to_string(oi_lower_bound);
            std::string to_write_string = oi_to_string(to_write);
            error("Expected an integer greater than or equal to %s for %what%, "
                  "found %s.", bound_string.c_str(), to_write_string.c_str());
          }
        if (oi_less_than(oi_upper_bound, to_write))
          {
            std::string bound_string = oi_to_string(oi_upper_bound);
            std::string to_write_string = oi_to_string(to_write);
            error("Expected an integer less than or equal to %s for %what%, "
                  "found %s.", bound_string.c_str(), to_write_string.c_str());
          }
        handle_result(to_write);
      }
  };

template <class IntegerType, IntegerType lower_bound, IntegerType upper_bound>
        class JSONIntegerRangeGenerator : public JSONIntegerRangeBaseGenerator
  {
  private:

#define BOUNDS(type, type_name) \
    bool have_ ## type_name ## _upper_bound; \
    type type_name ## _upper_bound; \
    bool have_ ## type_name ## _lower_bound; \
    type type_name ## _lower_bound

    BOUNDS(int, int);
    BOUNDS(unsigned int, unsigned_int);
    BOUNDS(long, long);
    BOUNDS(unsigned long, unsigned_long);
    BOUNDS(uint64_t, uint64_t);

#undef BOUNDS

  protected:
    JSONIntegerRangeGenerator(void)
      {

#define ONE_BOUND(type, type_name, the_bound) \
        type_name ## _ ## the_bound = (type)the_bound; \
        have_ ## type_name ## _ ## the_bound = \
                (((type_name ## _ ## the_bound < 0) == (the_bound < 0)) && \
                 (((IntegerType)type_name ## _ ## the_bound) == the_bound))

#define BOTH_BOUNDS(type, type_name) \
        ONE_BOUND(type, type_name, upper_bound); \
        ONE_BOUND(type, type_name, lower_bound)

        BOTH_BOUNDS(int, int);
        BOTH_BOUNDS(unsigned int, unsigned_int);
        BOTH_BOUNDS(long, long);
        BOTH_BOUNDS(unsigned long, unsigned_long);
        BOTH_BOUNDS(uint64_t, uint64_t);

#undef BOTH_BOUNDS
#undef ONE_BOUND

#define OI_BOUND(the_bound) \
        if (have_unsigned_long_ ## the_bound) \
          { \
            oi_create_from_unsigned_long_int(oi_ ## the_bound, \
                                             unsigned_long_ ## the_bound); \
          } \
        else if (have_long_ ## the_bound) \
          { \
            oi_create_from_long_int(oi_ ## the_bound, long_ ## the_bound); \
          } \
        else \
          { \
            IntegerType remainder = the_bound; \
            oi_ ## the_bound = oi_zero; \
            oi_add_reference(oi_ ## the_bound); \
            o_integer position = oi_one; \
            oi_add_reference(position); \
            o_integer oi_ten; \
            oi_create_from_long_int(oi_ten, 10); \
            while (remainder > 0) \
              { \
                o_integer digit; \
                long mod = (long)(remainder % 10); \
                remainder /= 10; \
                assert(mod < 10); \
                if ((remainder < 0) && (mod > 0)) \
                  { \
                    ++remainder; \
                    mod -= 10; \
                  } \
                oi_create_from_long_int(digit, mod); \
                o_integer to_add; \
                oi_multiply(to_add, position, digit); \
                oi_remove_reference(digit); \
                o_integer sum; \
                oi_add(sum, oi_ ## the_bound, to_add); \
                oi_remove_reference(to_add); \
                oi_remove_reference(oi_ ## the_bound); \
                oi_ ## the_bound = sum; \
                o_integer new_position; \
                oi_multiply(new_position, position, oi_ten); \
                oi_remove_reference(position); \
                position = new_position; \
              } \
            oi_remove_reference(oi_ten); \
            oi_remove_reference(position); \
          }

        OI_BOUND(lower_bound);
        OI_BOUND(upper_bound);

#undef OI_BOUND

      }
    ~JSONIntegerRangeGenerator(void)
      {
        oi_remove_reference(oi_lower_bound);
        oi_remove_reference(oi_upper_bound);
      }

    void handle_result(o_integer result)
      {
        long the_long;
        verdict the_verdict = oi_to_long_int(result, &the_long);
        if (the_verdict == MISSION_ACCOMPLISHED)
          {
            number_value(the_long);
            return;
          }
        std::string the_string = oi_to_string(result);
        number_value(the_string.c_str());
      }
    virtual void handle_result(IntegerType result) = 0;

  public:

    using JSONIntegerRangeBaseGenerator::number_value;

#define CHECK_AND_HANDLE(type_name, format_specifier) \
        if (have_ ## type_name ## _lower_bound && \
            (to_write < type_name ## _lower_bound)) \
          { \
            error("Expected an integer greater than or equal to " \
                  format_specifier " for %what%, found " format_specifier ".", \
                  type_name ## _lower_bound, to_write); \
          } \
        if (have_ ## type_name ## _upper_bound && \
            (to_write > type_name ## _upper_bound)) \
          { \
            error("Expected an integer less than or equal to " \
                  format_specifier " for %what%, found " format_specifier ".", \
                  type_name ## _upper_bound, to_write); \
          } \
        handle_result(to_write);

    void number_value(int to_write)
      {
        CHECK_AND_HANDLE(int, "%d");
      }
    void number_value(unsigned int to_write)
      {
        CHECK_AND_HANDLE(unsigned_int, "%u");
      }
    void number_value(long to_write)
      {
        CHECK_AND_HANDLE(long, "%ld");
      }
    void number_value(unsigned long to_write)
      {
        CHECK_AND_HANDLE(unsigned_long, "%lu");
      }

    void number_value(const char *number_text)
      {
        assert(number_text != NULL);

        bool is_negative = false;
        const char *digits = number_text;
        if (*digits == '-')
          {
            is_negative = true;
            ++digits;
          }
        else if (*digits == '+')
          {
            ++digits;
          }
          {
            const char *follow = digits;
            while (*follow != 0)
              {
                if ((*follow < '0') || (*follow > '9'))
                  {
                    JSONIntegerRangeBaseGenerator::number_value(number_text);
                    return;
                  }
                ++follow;
              }
          }
        if ((upper_bound < 0) && !is_negative)
          {
          too_big:
            std::string bound_string = oi_to_string(oi_upper_bound);
            error("Expected an integer less than or equal to %s for %what%, "
                  "found %s.", bound_string.c_str(), number_text);
          }
        if ((lower_bound > 0) && is_negative)
          {
          too_small:
            std::string bound_string = oi_to_string(oi_lower_bound);
            error("Expected an integer greater than or equal to %s for %what%, "
                  "found %s.", bound_string.c_str(), number_text);
          }
        IntegerType result = 0;
        while (*digits != 0)
          {
            assert((*digits >= '0') && (*digits <= '9'));
            IntegerType addition = *digits - '0';
            if (is_negative)
                addition = -addition;
            if (is_negative)
              {
                if (result < ((upper_bound - addition) / 10) +
                             ((((upper_bound - addition) % 10) > 0) ? 1 : 0))
                  {
                    goto too_small;
                  }
              }
            else
              {
                if (result > (upper_bound - addition) / 10)
                    goto too_big;
              }
            result *= 10;
            result += addition;
            ++digits;
          }
        if (result < lower_bound)
            goto too_small;
        if (result > upper_bound)
            goto too_big;
        handle_result(result);
      }
    void number_value_uint64_t(uint64_t to_write)
      {
        CHECK_AND_HANDLE(uint64_t, "%" PRId64);
      }

#undef CHECK_AND_HANDLE

  };

template <const char *lower_bound, const char *upper_bound>
        class JSONIntegerBigRangeGenerator :
                public JSONIntegerRangeBaseGenerator
  {
  protected:
    JSONIntegerBigRangeGenerator(void)
      {
        if (strcmp(lower_bound, "-oo") == 0)
          {
            oi_lower_bound = oi_negative_infinity;
            oi_add_reference(oi_lower_bound);
          }
        else if (strcmp(lower_bound, "+oo") == 0)
          {
            oi_lower_bound = oi_positive_infinity;
            oi_add_reference(oi_lower_bound);
          }
        else
          {
            const char *follow = lower_bound;
            bool is_negative = false;
            if (*follow == '-')
              {
                is_negative = true;
                ++follow;
              }
            oi_create_from_decimal_ascii(oi_lower_bound, strlen(follow), follow,
                                         is_negative);
          }
        if (strcmp(upper_bound, "-oo") == 0)
          {
            oi_upper_bound = oi_negative_infinity;
            oi_add_reference(oi_upper_bound);
          }
        else if (strcmp(upper_bound, "+oo") == 0)
          {
            oi_upper_bound = oi_positive_infinity;
            oi_add_reference(oi_upper_bound);
          }
        else
          {
            const char *follow = upper_bound;
            bool is_negative = false;
            if (*follow == '-')
              {
                is_negative = true;
                ++follow;
              }
            oi_create_from_decimal_ascii(oi_upper_bound, strlen(follow), follow,
                                         is_negative);
          }
      }
    ~JSONIntegerBigRangeGenerator(void)  { }

  public:
    using JSONIntegerRangeBaseGenerator::number_value;

    void number_value(int to_write)
      {
        o_integer the_oi;
        oi_create_from_long_int(the_oi, to_write);
        OICleaner the_cleaner(the_oi);
        number_value(the_oi);
      }
    void number_value(unsigned int to_write)
      {
        o_integer the_oi;
        oi_create_from_unsigned_long_int(the_oi, to_write);
        OICleaner the_cleaner(the_oi);
        number_value(the_oi);
      }
    void number_value(long to_write)
      {
        o_integer the_oi;
        oi_create_from_long_int(the_oi, to_write);
        OICleaner the_cleaner(the_oi);
        number_value(the_oi);
      }
    void number_value(unsigned long to_write)
      {
        o_integer the_oi;
        oi_create_from_unsigned_long_int(the_oi, to_write);
        OICleaner the_cleaner(the_oi);
        number_value(the_oi);
      }
    void number_value_uint64_t(uint64_t to_write)
      {
        char buffer[21];
        sprintf(&(buffer[0]), "%" PRId64, to_write);
        o_integer the_oi;
        oi_create_from_decimal_ascii(the_oi, strlen(&(buffer[0])),
                                     (&(buffer[0])), false);
        OICleaner the_cleaner(the_oi);
        number_value(the_oi);
      }
  };


#endif /* JSONINTEGERRANGEGENERATOR_H */
