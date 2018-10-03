/* file "OInteger.cpp" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */


#define __STDC_LIMIT_MACROS
#define __STDC_FORMAT_MACROS
#include "OInteger.h"
#include <stdint.h>
#include <string.h>
#include <inttypes.h>


OInteger OInteger::from_int64_t(int64_t input_value)
  {
#if (INT64_MAX > LONG_MAX)
    if (input_value > (int64_t)LONG_MAX)
      {
        char buffer[(64 * 3) + 2];
        sprintf(&(buffer[0]), PRId64, input_value);
        char *digits = &(buffer[0]);
        if (*digits == '-')
            ++digits;
        o_integer result_oi;
        oi_create_from_decimal_ascii(result_oi, strlen(digits), digits,
                                     (input_value < 0));
        return OInteger(result_oi);
      }
#endif
#if (INT64_MIN < LONG_MIN)
    if (input_value < (int64_t)LONG_MIN)
      {
        char buffer[(64 * 3) + 2];
        sprintf(&(buffer[0]), PRId64, input_value);
        char *digits = &(buffer[0]);
        if (*digits == '-')
            ++digits;
        o_integer result_oi;
        oi_create_from_decimal_ascii(result_oi, strlen(digits), digits,
                                     (input_value < 0));
        return OInteger(result_oi);
      }
#endif
    o_integer result_oi;
    oi_create_from_long_int(result_oi, (long)input_value);
    if (oi_out_of_memory(result_oi))
        throw("Out of memory");
    return OInteger(result_oi);
  }

OInteger OInteger::from_uint64_t(uint64_t input_value)
  {
#if (UINT64_MAX > LONG_MAX)
    if (input_value > (uint64_t)LONG_MAX)
      {
        char buffer[(64 * 3) + 2];
        sprintf(&(buffer[0]), "%" PRIu64, input_value);
        char *digits = &(buffer[0]);
        if (*digits == '-')
            ++digits;
        o_integer result_oi;
        oi_create_from_decimal_ascii(result_oi, strlen(digits), digits,
                                     (input_value < 0));
        return OInteger(result_oi);
      }
#endif
    o_integer result_oi;
    oi_create_from_long_int(result_oi, (long)input_value);
    if (oi_out_of_memory(result_oi))
        throw("Out of memory");
    return OInteger(result_oi);
  }

OInteger OInteger::from_size_t(size_t input_value)
  {
#if (SIZE_MAX > LONG_MAX)
    if (input_value > (size_t)LONG_MAX)
      {
        char buffer[(sizeof(size_t) * 3) + 2];
        sprintf(&(buffer[0]), "%zu", input_value);
        char *digits = &(buffer[0]);
        if (*digits == '-')
            ++digits;
        o_integer result_oi;
        oi_create_from_decimal_ascii(result_oi, strlen(digits), digits,
                                     (input_value < 0));
        return OInteger(result_oi);
      }
#endif
    o_integer result_oi;
    oi_create_from_long_int(result_oi, (long)input_value);
    if (oi_out_of_memory(result_oi))
        throw("Out of memory");
    return OInteger(result_oi);
  }
