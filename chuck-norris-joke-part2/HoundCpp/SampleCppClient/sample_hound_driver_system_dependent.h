/* file "sample_hound_driver_system_dependent.h" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */


#ifndef SAMPLE_HOUND_DRIVER_SYSTEM_DEPENDENT_H
#define SAMPLE_HOUND_DRIVER_SYSTEM_DEPENDENT_H

#include <string>


extern unsigned int get_random_seed(void);
extern std::string get_user_input_line(bool *done);
extern void wait_half_a_second(void);


#endif /* SAMPLE_HOUND_DRIVER_SYSTEM_DEPENDENT_H */
