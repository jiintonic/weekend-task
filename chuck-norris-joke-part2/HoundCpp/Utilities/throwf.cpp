/* file "throwf.cpp" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */

#include "throwf.h"
#include <stdarg.h>
extern "C"
  {
#include "buffer_print.h"
  }


extern void throwf(const char *format, ...)
  {
    va_list ap;
    va_start(ap, format);
    string_buffer buffer;
    string_buffer_init(&buffer, 10);
    vbuffer_printf(&buffer, 0, format, ap);
    va_end(ap);
    throw buffer.array;
  }
