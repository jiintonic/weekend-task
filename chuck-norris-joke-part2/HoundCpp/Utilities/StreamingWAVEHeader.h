/* file "StreamingWAVEHeader.h" */

/* Copyright 2017 SoundHound, Incorporated.  All rights reserved. */

#ifndef STREAMINGWAVEHEADER_H
#define STREAMINGWAVEHEADER_H

#include <stddef.h>
#include <stdint.h>


class StreamingWAVEHeader
  {
  public:
    static const size_t header_byte_count = 44;


  private:
    static uint8_t header_template[header_byte_count];

    uint8_t header[header_byte_count];

  public:
    StreamingWAVEHeader(uint16_t channel_count, uint32_t samples_per_second,
                        uint16_t bits_per_sample);
    ~StreamingWAVEHeader(void)
      {
      }

    uint8_t *get_header_bytes(void)
      {
        return &(header[0]);
      }
  };


#endif /* STREAMINGWAVEHEADER_H */
