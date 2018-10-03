/* file "HoundConverser.cpp" */

/* Copyright 2016-2018 SoundHound, Incorporated.  All rights reserved. */


#include "HoundConverser.h"
#include "Fetch.h"
#include <stdlib.h>
#include <assert.h>


class HoldingDynamicResponseHandler : public DynamicResponseHandler
  {
  public:
    HoldingDynamicResponseHandler(void) : result(NULL)
      {
      }
    ~HoldingDynamicResponseHandler(void)
      {
        if (result != NULL)
            result->remove_reference();
      }

    DynamicResponseJSON *result;

    void handle(DynamicResponseJSON *dynamic_response)
      {
        assert(dynamic_response != NULL);
        dynamic_response->add_reference();
        if (result != NULL)
            result->remove_reference();
        result = dynamic_response;
      }
  };

class ConverserPartialHandler : public HoundRequester::PartialTranscriptHandler
  {
  private:
    HoundConverser *converser;

  public:
    ConverserPartialHandler(HoundConverser *converser) : converser(converser)
      { }
    ~ConverserPartialHandler(void)  { }

    void handle(HoundPartialTranscriptJSON *partial)
      {
        assert(partial != NULL);
        size_t count = converser->partial_handlers.size();
        for (size_t num = 0; num < count; ++num)
            converser->partial_handlers[num]->handle(partial);
      }
  };

class ConverserVoiceRequest : public HoundConverser::VoiceRequest
  {
  private:
    HoundConverser *converser;
    HoundRequester::VoiceRequest *requester_request;
    ConverserPartialHandler *partial_handler;

  public:
    ConverserVoiceRequest(HoundConverser *converser,
            HoundRequester::VoiceRequest *requester_request,
            ConverserPartialHandler *partial_handler) : converser(converser),
                    requester_request(requester_request),
                    partial_handler(partial_handler)
      {
        assert(converser != NULL);
        assert(requester_request != NULL);
      }
    ~ConverserVoiceRequest(void)
      {
        delete requester_request;
        delete partial_handler;
      }

    void add_audio(size_t byte_count, const void *data)
      {
        requester_request->add_audio(byte_count, data);
      }
    bool more_ok(void)
      {
        return requester_request->more_ok();
      }
    void finish(void)
      {
        HoundServerJSON *server_json = requester_request->finish();
        server_json->add_reference();
        assert(server_json != NULL);
        converser->handle_server_json(server_json);
        server_json->remove_reference();
      }
  };


RequestInfoJSON *HoundConverser::generate_request_info(void)
  {
    RequestInfoJSON *result = new RequestInfoJSON();
    size_t preparer_count = request_info_preparers.size();
    for (size_t preparer_num = 0; preparer_num < preparer_count; ++preparer_num)
        request_info_preparers[preparer_num]->prepare(result);

    if (!(result->hasRequestID()))
      {
        char request_id[41];
        for (size_t num = 0; num < 10; ++num)
          {
            char bits[3];
            bits[0] = (char)(rand());
            bits[1] = (char)(rand());
            bits[2] = (char)(rand());
            base64url_encode_three(&(request_id[num * 4]), &(bits[0]));
          }
        request_id[40] = 0;
        result->setRequestID(request_id);
      }

    if (!(result->hasSessionID()))
      {
        if (session_id.c_str()[0] == 0)
          {
            char new_session_id[41];
            for (size_t num = 0; num < 10; ++num)
              {
                char bits[3];
                bits[0] = (char)(rand());
                bits[1] = (char)(rand());
                bits[2] = (char)(rand());
                base64url_encode_three(&(new_session_id[num * 4]), &(bits[0]));
              }
            new_session_id[40] = 0;
            session_id = &(new_session_id[0]);
          }
        result->setSessionID(session_id);
      }

    size_t watcher_count = request_info_watchers.size();
    for (size_t watcher_num = 0; watcher_num < watcher_count; ++watcher_num)
        request_info_watchers[watcher_num]->handle(result);

    return result;
  }

void HoundConverser::handle_server_json(HoundServerJSON *server_json)
  {
    assert(server_json != NULL);

    if (server_json->hasAllResults() && (server_json->countOfAllResults() > 0))
      {
        CommandResultJSON *command_result = server_json->elementOfAllResults(0);
        HoldingDynamicResponseHandler dynamic_response_holder;
        size_t result_handler_count = result_handlers.size();
        for (size_t result_handler_num = 0;
             result_handler_num < result_handler_count; ++result_handler_num)
          {
            result_handlers[result_handler_num]->handle(command_result,
                    &dynamic_response_holder);
            if (dynamic_response_holder.result != NULL)
                break;
          }
        DynamicResponseJSON *dynamic_response = dynamic_response_holder.result;
        if ((dynamic_response == NULL) &&
            command_result->hasRequiredFeaturesSupportedResult() &&
            command_result->hasRequiredFeatures())
          {
            size_t feature_count = command_result->countOfRequiredFeatures();
            size_t feature_num = 0;
            while (true)
              {
                assert(feature_num <= feature_count);
                if (feature_num == feature_count)
                  {
                    dynamic_response = command_result->
                            getRequiredFeaturesSupportedResult();
                    dynamic_response_holder.handle(dynamic_response);
                    break;
                  }
                std::string feature_name =
                        command_result->elementOfRequiredFeatures(feature_num);
                if (!(exists_in_string_index(supported_feature_index,
                                             feature_name.c_str())))
                  {
                    break;
                  }
                ++feature_num;
              }
          }
        if (dynamic_response == NULL)
          {
            dynamic_response = new DynamicResponseJSON();
            dynamic_response->setSpokenResponse(
                    command_result->getSpokenResponse());
            dynamic_response->setSpokenResponseLong(
                    command_result->getSpokenResponseLong());
            dynamic_response->setWrittenResponse(
                    command_result->getWrittenResponse());
            dynamic_response->setWrittenResponseLong(
                    command_result->getWrittenResponseLong());
            if (command_result->hasAutoListen())
              {
                dynamic_response->setAutoListen(
                        command_result->getAutoListen());
              }
            if (command_result->hasUserVisibleMode())
              {
                dynamic_response->setUserVisibleMode(
                        command_result->getUserVisibleMode());
              }
            if (command_result->hasConversationState())
              {
                dynamic_response->setConversationState(
                        command_result->getConversationState());
              }
            if (command_result->hasViewType())
              {
                size_t count = command_result->countOfViewType();
                for (size_t num = 0; num < count; ++num)
                  {
                    dynamic_response->appendViewType(
                            CommandResultJSON::stringFromViewType(
                                    command_result->elementOfViewType(num)));
                  }
              }
            if (command_result->hasTemplateName())
              {
                dynamic_response->setTemplateName(
                        command_result->getTemplateName());
              }
            if (command_result->hasTemplateData())
              {
                dynamic_response->setTemplateData(
                        command_result->getTemplateData());
              }
            if (command_result->hasHTMLData())
              {
                HTMLDataJSON *html_data = command_result->getHTMLData();
                if (html_data->hasSmallScreenHTML())
                  {
                    dynamic_response->setSmallScreenHTML(
                            html_data->getSmallScreenHTML());
                  }
                if (html_data->hasLargeScreenHTML())
                  {
                    dynamic_response->setLargeScreenHTML(
                            html_data->getLargeScreenHTML());
                  }
              }
            if (command_result->hasHints())
                dynamic_response->setHints(command_result->getHints());
            if (command_result->hasEmotion())
                dynamic_response->setEmotion(command_result->getEmotion());
            if (command_result->hasIcon())
                dynamic_response->setIcon(command_result->getIcon());
            if (command_result->hasResponseAudioBytes())
              {
                dynamic_response->setResponseAudioBytes(
                        command_result->getResponseAudioBytes());
              }
            if (command_result->hasResponseAudioError())
              {
                dynamic_response->setResponseAudioError(
                        command_result->getResponseAudioError());
              }
            dynamic_response_holder.handle(dynamic_response);
          }
        assert(dynamic_response != NULL);

        ConversationStateJSON *new_conversation_state =
                (dynamic_response->hasConversationState() ?
                 dynamic_response->getConversationState() : NULL);
        if (new_conversation_state != NULL)
            new_conversation_state->add_reference();
        if (conversation_state != NULL)
            conversation_state->remove_reference();
        conversation_state = new_conversation_state;

        size_t dynamic_response_handler_count =
                dynamic_response_handlers.size();
        for (size_t dynamic_response_handler_num = 0;
             dynamic_response_handler_num < dynamic_response_handler_count;
             ++dynamic_response_handler_num)
          {
            dynamic_response_handlers[dynamic_response_handler_num]->handle(
                    dynamic_response);
          }

        size_t command_result_watcher_count = command_result_watchers.size();
        for (size_t command_result_watcher_num = 0;
             command_result_watcher_num < command_result_watcher_count;
             ++command_result_watcher_num)
          {
            command_result_watchers[command_result_watcher_num]->handle(
                    command_result);
          }
      }

    size_t full_result_handler_count = full_result_handlers.size();
    for (size_t full_result_handler_num = 0;
         full_result_handler_num < full_result_handler_count;
         ++full_result_handler_num)
      {
        full_result_handlers[full_result_handler_num]->handle(server_json);
      }
  }

HoundConverser::HoundConverser(HoundRequester *requester) :
        requester(requester), conversation_state(NULL)
  {
    assert(requester != NULL);
    supported_feature_index = create_string_index();
  }

HoundConverser::~HoundConverser(void)
  {
    if (conversation_state != NULL)
        conversation_state->remove_reference();
    destroy_string_index(supported_feature_index);
  }

void HoundConverser::make_text_request(const char *query)
  {
    RequestInfoJSON *request_info = generate_request_info();
    request_info->add_reference();
    HoundServerJSON *server_json =
            requester->do_text_request(query, conversation_state, request_info);
    server_json->add_reference();
    request_info->remove_reference();
    assert(server_json != NULL);
    handle_server_json(server_json);
    server_json->remove_reference();
  }

HoundConverser::VoiceRequest *HoundConverser::start_voice_request(void)
  {
    RequestInfoJSON *request_info = generate_request_info();
    request_info->add_reference();
    ConverserPartialHandler *partial_handler =
            new ConverserPartialHandler(this);
    HoundRequester::VoiceRequest *requester_request =
            requester->start_voice_request(conversation_state, request_info,
                                           partial_handler);
    request_info->remove_reference();
    return new ConverserVoiceRequest(this, requester_request, partial_handler);
  }

void HoundConverser::clear_conversation_state(void)
  {
    if (conversation_state != NULL)
        conversation_state->remove_reference();
    conversation_state = NULL;
  }

void HoundConverser::register_request_info_preparer(
        RequestInfoPreparer *new_preparer)
  {
    request_info_preparers.push_back(new_preparer);
  }

void HoundConverser::register_request_info_watcher(
        RequestInfoHandler *new_watcher)
  {
    request_info_watchers.push_back(new_watcher);
  }

void HoundConverser::register_partial_handler(
        HoundRequester::PartialTranscriptHandler *new_handler)
  {
    partial_handlers.push_back(new_handler);
  }

void HoundConverser::register_result_handler(ResultHandler *new_handler)
  {
    result_handlers.push_back(new_handler);
  }

void HoundConverser::register_dynamic_response_handler(
        DynamicResponseHandler *new_handler)
  {
    dynamic_response_handlers.push_back(new_handler);
  }

void HoundConverser::register_command_result_watcher(
        CommandResultHandler *new_handler)
  {
    command_result_watchers.push_back(new_handler);
  }

void HoundConverser::register_full_result_handler(
        HoundServerHandler *new_handler)
  {
    full_result_handlers.push_back(new_handler);
  }

void HoundConverser::register_supported_feature(const char *feature_name)
  {
    enter_into_string_index(supported_feature_index, feature_name,
                            supported_feature_index);
  }
