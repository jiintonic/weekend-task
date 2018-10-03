/* file "HoundConverser.h" */

/* Copyright 2016-2018 SoundHound, Incorporated.  All rights reserved. */

#ifndef HOUNDCONVERSER_H
#define HOUNDCONVERSER_H

#include "HoundRequester.h"
#include "RequestInfoPreparer.h"
#include "RequestInfoHandler.h"
#include "CommandResultJSON.h"
#include "ConversationStateJSON.h"
#include "DynamicResponseHandler.h"
#include "CommandResultHandler.h"
#include "HoundServerHandler.h"
extern "C"
  {
#include "string_index.h"
  }
#include <string>
#include <vector>


class HoundConverser
  {
  public:
    class ResultHandler
      {
      protected:
        ResultHandler(void)  { }
        ~ResultHandler(void)  { }

      public:
        virtual void handle(const CommandResultJSON *command_result,
                DynamicResponseHandler *dynamic_response_handler) = 0;
      };

  private:
    friend class ConverserPartialHandler;
    friend class ConverserVoiceRequest;

    HoundRequester *requester;
    ConversationStateJSON *conversation_state;
    std::vector<RequestInfoPreparer *> request_info_preparers;
    std::vector<RequestInfoHandler *> request_info_watchers;
    std::vector<HoundRequester::PartialTranscriptHandler *> partial_handlers;
    std::vector<ResultHandler *> result_handlers;
    std::vector<DynamicResponseHandler *> dynamic_response_handlers;
    std::vector<CommandResultHandler *> command_result_watchers;
    std::vector<HoundServerHandler *> full_result_handlers;
    string_index *supported_feature_index;
    std::string session_id;

    RequestInfoJSON *generate_request_info(void);
    void handle_server_json(HoundServerJSON *server_json);

  public:
    HoundConverser(HoundRequester *requester);
    virtual ~HoundConverser(void);

    void make_text_request(const char *query);

    class VoiceRequest
      {
      protected:
        VoiceRequest(void)  { }

      public:
        virtual ~VoiceRequest(void)  { }

        virtual void add_audio(size_t byte_count, const void *data) = 0;
        virtual bool more_ok(void) = 0;
        virtual void finish(void) = 0;
      };

    VoiceRequest *start_voice_request(void);

    void set_session_id(const char *new_session_id)
      { session_id = new_session_id; }
    void clear_conversation_state(void);

    void register_request_info_preparer(RequestInfoPreparer *new_preparer);
    void register_request_info_watcher(RequestInfoHandler *new_watcher);
    void register_partial_handler(
            HoundRequester::PartialTranscriptHandler *new_handler);
    void register_result_handler(ResultHandler *new_handler);
    void register_dynamic_response_handler(DynamicResponseHandler *new_handler);
    void register_command_result_watcher(CommandResultHandler *new_handler);
    void register_full_result_handler(HoundServerHandler *new_handler);
    void register_supported_feature(const char *feature_name);
  };


#endif /* HOUNDCONVERSER_H */
