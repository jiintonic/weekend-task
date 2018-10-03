/* file "JSONParse.h" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */


#ifndef JSONPARSE_H
#define JSONPARSE_H

#include <string.h>
#include "JSONHandler.h"


/* Some systems implement the global getchar() and/or ungetchar from stdio.h as
 * macros.  The following lines will make sure this doesn't cause us a problem
 * with using getchar and ungetchar as method names. */
#include <stdio.h>
#ifdef getchar
#undef getchar
#endif
#ifdef ungetchar
#undef ungetchar
#endif

class JSONTextSource
  {
  protected:
    JSONTextSource(void)  { }
    ~JSONTextSource(void)  { }

  public:
    virtual int getchar(void) = 0;
    virtual void ungetchar(int to_unget) = 0;
    virtual const char *file_name(void) = 0;
  };


extern void parse_json_value(JSONTextSource *source, JSONHandler *handler);
extern void parse_json_value(FILE *fp, const char *file_name,
                             JSONHandler *handler);
extern void parse_json_value(const char *text, const char *file_name,
                             JSONHandler *handler);
extern void parse_json_value(std::string text, const char *file_name,
                             JSONHandler *handler);


#endif /* JSONPARSE_H */
