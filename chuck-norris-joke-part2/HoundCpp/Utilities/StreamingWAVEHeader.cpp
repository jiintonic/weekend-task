/* file "StreamingWAVEHeader.cpp" */

/* Copyright 2017 SoundHound, Incorporated.  All rights reserved. */

#include "StreamingWAVEHeader.h"
#include <string.h>


uint8_t StreamingWAVEHeader::header_template[
        StreamingWAVEHeader::header_byte_count] =
  {
    'R',
    'I',
    'F',
    'F',
    0,
    0,
    0,
    0,
    'W',
    'A',
    'V',
    'E',
    'f',
    'm',
    't',
    ' ',
    16,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    'd',
    'a',
    't',
    'a',
    0,
    0,
    0,
    0
  };


StreamingWAVEHeader::StreamingWAVEHeader(uint16_t channel_count,
        uint32_t samples_per_second, uint16_t bits_per_sample)
  {
    memcpy(&(header[0]), &(header_template[0]), header_byte_count);
    header[22] = channel_count & 0xff;
    header[23] = (channel_count >> 8) & 0xff;
    header[24] = samples_per_second & 0xff;
    header[25] = (samples_per_second >> 8) & 0xff;
    header[26] = (samples_per_second >> 16) & 0xff;
    header[27] = (samples_per_second >> 24) & 0xff;
    uint32_t bytes_per_second =
            samples_per_second * channel_count * (bits_per_sample / 8);
    header[28] = bytes_per_second & 0xff;
    header[29] = (bytes_per_second >> 8) & 0xff;
    header[30] = (bytes_per_second >> 16) & 0xff;
    header[31] = (bytes_per_second >> 24) & 0xff;
    uint16_t bytes_per_sample = channel_count * (bits_per_sample / 8);
    header[32] = bytes_per_sample & 0xff;
    header[33] = (bytes_per_sample >> 8) & 0xff;
    header[34] = bits_per_sample & 0xff;
    header[35] = (bits_per_sample >> 8) & 0xff;
  }
