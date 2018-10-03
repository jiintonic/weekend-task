/* file "JSONIntegerUnboundRangeGenerator.h" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONINTEGERUNBOUNDRANGEGENERATOR_H
#define JSONINTEGERUNBOUNDRANGEGENERATOR_H

#include "JSONCoreIntegerGenerator.h"
#define __STDC_FORMAT_MACROS
#include <inttypes.h>


class JSONIntegerUnboundRangeGenerator : public JSONCoreIntegerGenerator
  {
  protected:
    JSONIntegerUnboundRangeGenerator(void)  { }
    ~JSONIntegerUnboundRangeGenerator(void)  { }

  public:
    using JSONCoreIntegerGenerator::number_value;

    void number_value(o_integer to_write)
      {
        handle_result(to_write);
      }
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


#endif /* JSONINTEGERUNBOUNDRANGEGENERATOR_H */
