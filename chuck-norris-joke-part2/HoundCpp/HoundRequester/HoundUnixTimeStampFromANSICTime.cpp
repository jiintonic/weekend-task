/* file "HoundUnixTimeStampFromANSICTime.cpp" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */


#include "HoundUnixTimeStamp.h"
#include <time.h>
#include <stdint.h>


extern int64_t hound_unix_time_stamp(void)
  {
    return time(NULL);
  }
