/* file "sample_hound_driver.h" */

/* Copyright 2014, 2015 SoundHound, Incorporated.  All rights reserved. */


#ifndef SAMPLE_HOUND_DRIVER_H
#define SAMPLE_HOUND_DRIVER_H


class HoundRequester;

extern int sample_hound_driver(HoundRequester *requester,
                               bool show_local_or_remote_reason = false);


#endif /* SAMPLE_HOUND_DRIVER_H */
