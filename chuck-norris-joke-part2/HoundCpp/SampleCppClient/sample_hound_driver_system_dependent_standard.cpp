/* file "sample_hound_driver_system_dependent_standard.cpp" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */


#include "sample_hound_driver_system_dependent.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <time.h>


extern unsigned int get_random_seed(void)
  {
    return time(NULL);
  }

extern std::string get_user_input_line(bool *done)
  {
    size_t space = 16;
    char *line_buffer = (char *)(malloc(space));
    *done = false;

    size_t position = 0;
    while (true)
      {
        assert(position < space);
        int inchar = getc(stdin);
        if (inchar == EOF)
          {
            if (position == 0)
                *done = true;
            break;
          }
        if (inchar == '\n')
            break;
        line_buffer[position] = (char)inchar;
        ++position;
        if (position == space)
          {
            char *new_buffer = (char *)(malloc(space * 2));
            memcpy(new_buffer, line_buffer, space);
            free(line_buffer);
            line_buffer = new_buffer;
            space *= 2;
          }
      }
    assert(position < space);
    line_buffer[position] = 0;
    std::string result = line_buffer;
    free(line_buffer);
    return result;
  }

extern void wait_half_a_second(void)
  {
    struct timespec sleep_time;
    sleep_time.tv_sec = 0;
    sleep_time.tv_nsec = 500000000;
    nanosleep(&sleep_time, NULL);
  }
