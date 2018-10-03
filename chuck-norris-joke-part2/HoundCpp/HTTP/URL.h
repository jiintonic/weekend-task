/* file "URL.h" */

/* Copyright 2012 SoundHound, Incorporated.  All rights reserved. */


#ifndef URL_H
#define URL_H

#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

inline std::string urlEncode(std::string input)
  {
    const char *follow_in = input.c_str();
    char *buffer = new char[(strlen(follow_in) * 3) + 1];
    char *follow_out = buffer;
    while (*follow_in != 0)
      {
        if (((*follow_in >= 'a') && (*follow_in <= 'z')) ||
            ((*follow_in >= 'A') && (*follow_in <= 'Z')) ||
            ((*follow_in >= '0') && (*follow_in <= '9')) ||
            (*follow_in == '-') || (*follow_in == '_') || (*follow_in == '.') ||
            (*follow_in == '~'))
          {
            *follow_out = *follow_in;
            ++follow_out;
          }
        else
          {
            sprintf(follow_out, "%%%02x", (unsigned)(unsigned char)*follow_in);
            follow_out += 3;
          }
        ++follow_in;
      }
    *follow_out = 0;
    std::string result = std::string(buffer);
    delete[] buffer;
    return result;
  }

inline std::string urlDecode(std::string input)
  {
    const char *follow_in = input.c_str();
    char *buffer = new char[strlen(follow_in) + 1];
    char *follow_out = buffer;
    while (*follow_in != 0)
      {
        if (*follow_in == '%')
          {
            ++follow_in;
            char tmp[3];
            strncpy(tmp, follow_in, 2);
            tmp[2] = '\0';
            *follow_out = (char)strtol(tmp, NULL, 16);
            follow_in += 2;
          }
        else
          {
            *follow_out = *follow_in;
            ++follow_in;
          }
        ++follow_out;
      }
    *follow_out = 0;
    std::string result = std::string(buffer);
    delete[] buffer;
    return result;
  }


#endif /* URL_H */
