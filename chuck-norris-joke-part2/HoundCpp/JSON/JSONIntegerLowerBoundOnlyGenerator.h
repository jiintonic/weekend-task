/* file "JSONIntegerLowerBoundOnlyGenerator.h" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONINTEGERLOWERBOUNDONLYGENERATOR_H
#define JSONINTEGERLOWERBOUNDONLYGENERATOR_H

#include "JSONCoreIntegerGenerator.h"
#define __STDC_FORMAT_MACROS
#include <inttypes.h>


template <const char *lower_bound> class JSONIntegerLowerBoundOnlyGenerator :
        public JSONCoreIntegerGenerator
  {
  protected:
    o_integer oi_lower_bound;

    JSONIntegerLowerBoundOnlyGenerator(void)
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
    ~JSONIntegerLowerBoundOnlyGenerator(void)  { }

  public:
    using JSONCoreIntegerGenerator::number_value;

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
    void number_value(o_integer to_write)
      {
        if (oi_less_than(to_write, oi_lower_bound))
          {
            std::string bound_string = oi_to_string(oi_lower_bound);
            std::string to_write_string = oi_to_string(to_write);
            error("Expected an integer greater than or equal to %s for %what%, "
                  "found %s.", bound_string.c_str(), to_write_string.c_str());
          }
        handle_result(to_write);
      }
  };


#endif /* JSONINTEGERLOWERBOUNDONLYGENERATOR_H */
