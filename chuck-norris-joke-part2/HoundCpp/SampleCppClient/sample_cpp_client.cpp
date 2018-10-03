/* file "sample_cpp_client.cpp" */

/* Copyright 2014, 2015 SoundHound, Incorporated.  All rights reserved. */


#include <stdio.h>
#include <string.h>
#include "sample_hound_driver.h"
#include "HoundCloudRequester.h"
extern "C"
  {
#define class CLASS
#include "driver.h"
#undef class
  }


extern int main(int argc, char *argv[])
  {
    if ((argc > 6) || (argc < 4))
      {
        fprintf(stderr,
                "Usage: %s <client-id> <client-key> <user-id> "
                "{ <text-URL-base> { <voice-URL-base> }? }?\n", argv[0]);
        HoundRequester::show_version_information(stderr);
        return 1;
      }

    const char *client_id = argv[1];
    const char *client_key = argv[2];
    const char *user_id = argv[3];
    const char *text_request_url_base =
            ((argc >= 5) ? argv[4] :
             HoundCloudRequester::default_text_request_url_base());
    const char *voice_request_url_base =
            ((argc >= 6) ? argv[5] :
             HoundCloudRequester::default_voice_request_url_base());

    if (strlen(client_key) != 88)
      {
        fprintf(stderr,
                "Error: The client key must be 88 characters long, but it is "
                "%lu characters long.\n", (unsigned long)(strlen(client_key)));
        return 1;
      }

    init_salmoneye();

    HoundCloudRequester requester(client_id, client_key, user_id,
            text_request_url_base, voice_request_url_base);
    int result = sample_hound_driver(&requester);

    cleanup_salmoneye();

    return result;
  }
