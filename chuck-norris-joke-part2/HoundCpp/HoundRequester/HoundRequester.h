/* file "HoundRequester.h" */

/* Copyright 2014-2018 SoundHound, Incorporated.  All rights reserved. */


#ifndef HOUNDREQUESTER_H
#define HOUNDREQUESTER_H

#include <stddef.h>
#include <stdio.h>
#include "RequestInfoJSON.h"
#include "HoundServerJSON.h"
#include "HoundPartialTranscriptJSON.h"


class HoundRequester
  {
  protected:
    HoundRequester(void)  { }

  public:
    virtual ~HoundRequester(void)  { }

    class PartialTranscriptHandler
      {
      protected:
        PartialTranscriptHandler(void)  { }
        ~PartialTranscriptHandler(void)  { }

      public:
        virtual void handle(HoundPartialTranscriptJSON *partial) = 0;
      };

    class PartialResultHandler
      {
      protected:
        PartialResultHandler(void)  { }
        ~PartialResultHandler(void)  { }

      public:
        virtual void handle(HoundServerJSON *partial) = 0;
      };

    class VoiceRequest
      {
      protected:
        VoiceRequest(void)  { }

      public:
        virtual ~VoiceRequest(void)  { }

        virtual void add_audio(size_t byte_count, const void *data) = 0;
        virtual bool more_ok(void)  { return true; }
        virtual HoundServerJSON *finish(void) = 0;
      };

    virtual HoundServerJSON *do_text_request(const char *query,
            ConversationStateJSON *conversation_state,
            RequestInfoJSON *request_info,
            PartialResultHandler *partial_result_handler = NULL) = 0;
    virtual VoiceRequest *start_voice_request(
            ConversationStateJSON *conversation_state,
            RequestInfoJSON *request_info,
            PartialTranscriptHandler *partial_transcript_handler = NULL,
            PartialResultHandler *partial_result_handler = NULL) = 0;

    static void show_version_information(FILE *fp);
  };


#endif /* HOUNDREQUESTER_H */
