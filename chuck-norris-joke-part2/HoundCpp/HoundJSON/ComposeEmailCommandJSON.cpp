/* file "ComposeEmailCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ComposeEmailCommandJSON.h"

#include "ComposeEmailCommandJSON.h"


ComposeEmailCommandJSON::ComposeEmailCommandJSON(const ComposeEmailCommandJSON &)
  {
    assert(false);
  }

ComposeEmailCommandJSON &ComposeEmailCommandJSON::operator=(const ComposeEmailCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ComposeEmailCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *ComposeEmailCommandJSON::extraNoEmailAppResultToJSON(void) const
  {
    JSONValueHandler handler_NoEmailAppResult;
    storeNoEmailAppResult->write_as_json(&handler_NoEmailAppResult);
    handler_NoEmailAppResult.result->add_reference();
    return handler_NoEmailAppResult.result;
  }

JSONValue *ComposeEmailCommandJSON::extraComposeEmailResultToJSON(void) const
  {
    JSONValueHandler handler_ComposeEmailResult;
    storeComposeEmailResult->write_as_json(&handler_ComposeEmailResult);
    handler_ComposeEmailResult.result->add_reference();
    return handler_ComposeEmailResult.result;
  }

JSONValue *ComposeEmailCommandJSON::extraDisambiguationEmailResultToJSON(void) const
  {
    JSONValueHandler handler_DisambiguationEmailResult;
    storeDisambiguationEmailResult->write_as_json(&handler_DisambiguationEmailResult);
    handler_DisambiguationEmailResult.result->add_reference();
    return handler_DisambiguationEmailResult.result;
  }

JSONValue *ComposeEmailCommandJSON::extraSendingEmailResultToJSON(void) const
  {
    JSONValueHandler handler_SendingEmailResult;
    storeSendingEmailResult->write_as_json(&handler_SendingEmailResult);
    handler_SendingEmailResult.result->add_reference();
    return handler_SendingEmailResult.result;
  }

JSONValue *ComposeEmailCommandJSON::extraSentEmailResultToJSON(void) const
  {
    JSONValueHandler handler_SentEmailResult;
    storeSentEmailResult->write_as_json(&handler_SentEmailResult);
    handler_SentEmailResult.result->add_reference();
    return handler_SentEmailResult.result;
  }

JSONValue *ComposeEmailCommandJSON::extraExitEmailResultToJSON(void) const
  {
    JSONValueHandler handler_ExitEmailResult;
    storeExitEmailResult->write_as_json(&handler_ExitEmailResult);
    handler_ExitEmailResult.result->add_reference();
    return handler_ExitEmailResult.result;
  }

void ComposeEmailCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ComposeEmailCommandNativeDataJSON *convert_classy = ComposeEmailCommandNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandJSON::fromJSONNoEmailAppResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNoEmailAppResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandJSON::fromJSONComposeEmailResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComposeEmailResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandJSON::fromJSONDisambiguationEmailResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisambiguationEmailResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandJSON::fromJSONSendingEmailResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSendingEmailResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandJSON::fromJSONSentEmailResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSentEmailResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandJSON::fromJSONExitEmailResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setExitEmailResult(convert_classy);
    convert_classy->remove_reference();
  }

ComposeEmailCommandJSON::ComposeEmailCommandJSON(void) :
        flagHasNativeData(false),
        flagHasNoEmailAppResult(false),
        flagHasComposeEmailResult(false),
        flagHasDisambiguationEmailResult(false),
        flagHasSendingEmailResult(false),
        flagHasSentEmailResult(false),
        flagHasExitEmailResult(false)
  {
    extraIndex = create_string_index();
  }

ComposeEmailCommandJSON::~ComposeEmailCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasNoEmailAppResult)
      {
        storeNoEmailAppResult->remove_reference();
      }
    if (flagHasComposeEmailResult)
      {
        storeComposeEmailResult->remove_reference();
      }
    if (flagHasDisambiguationEmailResult)
      {
        storeDisambiguationEmailResult->remove_reference();
      }
    if (flagHasSendingEmailResult)
      {
        storeSendingEmailResult->remove_reference();
      }
    if (flagHasSentEmailResult)
      {
        storeSentEmailResult->remove_reference();
      }
    if (flagHasExitEmailResult)
      {
        storeExitEmailResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ComposeEmailCommandJSON::getEmailCommandKind(void) const
  {
    return "ComposeEmailCommand";
  }

bool ComposeEmailCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

ComposeEmailCommandNativeDataJSON * ComposeEmailCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const ComposeEmailCommandNativeDataJSON * ComposeEmailCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool ComposeEmailCommandJSON::hasNoEmailAppResult(void) const
  {
    return flagHasNoEmailAppResult;
  }

DynamicResponseJSON * ComposeEmailCommandJSON::getNoEmailAppResult(void)
  {
    assert(flagHasNoEmailAppResult);
    return storeNoEmailAppResult;
  }

const DynamicResponseJSON * ComposeEmailCommandJSON::getNoEmailAppResult(void) const
  {
    assert(flagHasNoEmailAppResult);
    return storeNoEmailAppResult;
  }

bool ComposeEmailCommandJSON::hasComposeEmailResult(void) const
  {
    return flagHasComposeEmailResult;
  }

DynamicResponseJSON * ComposeEmailCommandJSON::getComposeEmailResult(void)
  {
    assert(flagHasComposeEmailResult);
    return storeComposeEmailResult;
  }

const DynamicResponseJSON * ComposeEmailCommandJSON::getComposeEmailResult(void) const
  {
    assert(flagHasComposeEmailResult);
    return storeComposeEmailResult;
  }

bool ComposeEmailCommandJSON::hasDisambiguationEmailResult(void) const
  {
    return flagHasDisambiguationEmailResult;
  }

DynamicResponseJSON * ComposeEmailCommandJSON::getDisambiguationEmailResult(void)
  {
    assert(flagHasDisambiguationEmailResult);
    return storeDisambiguationEmailResult;
  }

const DynamicResponseJSON * ComposeEmailCommandJSON::getDisambiguationEmailResult(void) const
  {
    assert(flagHasDisambiguationEmailResult);
    return storeDisambiguationEmailResult;
  }

bool ComposeEmailCommandJSON::hasSendingEmailResult(void) const
  {
    return flagHasSendingEmailResult;
  }

DynamicResponseJSON * ComposeEmailCommandJSON::getSendingEmailResult(void)
  {
    assert(flagHasSendingEmailResult);
    return storeSendingEmailResult;
  }

const DynamicResponseJSON * ComposeEmailCommandJSON::getSendingEmailResult(void) const
  {
    assert(flagHasSendingEmailResult);
    return storeSendingEmailResult;
  }

bool ComposeEmailCommandJSON::hasSentEmailResult(void) const
  {
    return flagHasSentEmailResult;
  }

DynamicResponseJSON * ComposeEmailCommandJSON::getSentEmailResult(void)
  {
    assert(flagHasSentEmailResult);
    return storeSentEmailResult;
  }

const DynamicResponseJSON * ComposeEmailCommandJSON::getSentEmailResult(void) const
  {
    assert(flagHasSentEmailResult);
    return storeSentEmailResult;
  }

bool ComposeEmailCommandJSON::hasExitEmailResult(void) const
  {
    return flagHasExitEmailResult;
  }

DynamicResponseJSON * ComposeEmailCommandJSON::getExitEmailResult(void)
  {
    assert(flagHasExitEmailResult);
    return storeExitEmailResult;
  }

const DynamicResponseJSON * ComposeEmailCommandJSON::getExitEmailResult(void) const
  {
    assert(flagHasExitEmailResult);
    return storeExitEmailResult;
  }

ComposeEmailCommandJSON *ComposeEmailCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ComposeEmailCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ComposeEmailCommandJSON>, ComposeEmailCommandJSON *, bool> generator("Type ComposeEmailCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
