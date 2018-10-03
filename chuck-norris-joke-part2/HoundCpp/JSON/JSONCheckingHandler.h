/* file "JSONCheckingHandler.h" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONCHECKINGHANDLER_H
#define JSONCHECKINGHANDLER_H

#include "JSONHandler.h"
#include <string>


class JSONCheckingHandler : public JSONHandler
  {
  private:
    char *what;

  protected:
    JSONCheckingHandler(void);
    ~JSONCheckingHandler(void);

    virtual std::string get_what(void);
    void set_what(const char *new_what);
    virtual void error(const char *message, ...);
    void bad_integer(o_integer the_oi, const char *expected, ...);
    void bad_integer(uint64_t the_integer, const char *expected, ...);
    void bad_number(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent,
            const char *expected, ...);
  };


#endif /* JSONCHECKINGHANDLER_H */
