/* file "HoundHMACSHA256.h" */

/* Copyright 2014-2016 SoundHound, Incorporated.  All rights reserved. */


#ifndef HOUNDHMACSHA256_H
#define HOUNDHMACSHA256_H

#include <stddef.h>
#include <stdint.h>


extern void hound_hmac_sha_256(const uint8_t *key,
        const uint8_t *plain_text_bytes, size_t plain_text_byte_count,
        uint8_t *result);


#endif /* HOUNDHMACSHA256_H */
