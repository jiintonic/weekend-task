/* file "FetchEnable.h" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */


#ifndef FETCHENABLE_H
#define FETCHENABLE_H


extern void disable_fetches(const char *reason);
extern void disable_non_script_fetches(void);
extern void set_ignore_fetch_disable(void);
extern void enable_fetches(void);
extern bool fetches_are_enabled(void);
extern bool non_script_fetches_are_enabled(void);
extern const char *fetch_disable_reason(void);


#endif /* FETCHENABLE_H */
