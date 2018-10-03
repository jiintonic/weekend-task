/* file "HoundHMACSHA256.cpp" */

/* Copyright 2014-2016 SoundHound, Incorporated.  All rights reserved. */


#include "HoundHMACSHA256.h"
#include <stddef.h>
#include <string.h>
#include <openssl/x509.h>
#include <openssl/hmac.h>


extern void hound_hmac_sha_256(const uint8_t *key,
        const uint8_t *plain_text_bytes, size_t plain_text_byte_count,
        uint8_t *result)
  {
    uint8_t *inner_buffer = new uint8_t[64 + plain_text_byte_count];
    for (size_t num = 0; num < 64; ++num)
        inner_buffer[num] = key[num] ^ 0x36;
    memcpy(&(inner_buffer[64]), plain_text_bytes, plain_text_byte_count);
    uint8_t outer_buffer[96];
    SHA256(inner_buffer, 64 + plain_text_byte_count, &(outer_buffer[64]));
    delete[] inner_buffer;
    for (size_t num = 0; num < 64; ++num)
        outer_buffer[num] = key[num] ^ 0x5c;
    SHA256(&(outer_buffer[0]), 96, result);
  }
