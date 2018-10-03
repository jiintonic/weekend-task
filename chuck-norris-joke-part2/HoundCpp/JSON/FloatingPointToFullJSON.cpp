/* file "FloatingPointToFullJSON.cpp" */

/* Copyright 2017 SoundHound, Incorporated.  All rights reserved. */


#include "FloatingPointToFullJSON.h"
#include <stddef.h>
#include <stdlib.h>


template <> float from_json_number<float>(const char *number)
  {
    return (float)(atof(number));
  }

template <> double from_json_number<double>(const char *number)
  {
    return atof(number);
  }

template <> long double from_json_number<long double>(const char *number)
  {
    return strtold(number, NULL);
  }
