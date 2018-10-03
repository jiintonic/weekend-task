/* file "ComposeSMSCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ComposeSMSCommandJSON.h"

#include "ComposeSMSCommandJSON.h"


ComposeSMSCommandJSON::ComposeSMSCommandJSON(const ComposeSMSCommandJSON &)
  {
    assert(false);
  }

ComposeSMSCommandJSON &ComposeSMSCommandJSON::operator=(const ComposeSMSCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ComposeSMSCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *ComposeSMSCommandJSON::extraNoSMSAppResultToJSON(void) const
  {
    JSONValueHandler handler_NoSMSAppResult;
    storeNoSMSAppResult->write_as_json(&handler_NoSMSAppResult);
    handler_NoSMSAppResult.result->add_reference();
    return handler_NoSMSAppResult.result;
  }

JSONValue *ComposeSMSCommandJSON::extraComposeSMSResultToJSON(void) const
  {
    JSONValueHandler handler_ComposeSMSResult;
    storeComposeSMSResult->write_as_json(&handler_ComposeSMSResult);
    handler_ComposeSMSResult.result->add_reference();
    return handler_ComposeSMSResult.result;
  }

JSONValue *ComposeSMSCommandJSON::extraDisambiguationSMSResultToJSON(void) const
  {
    JSONValueHandler handler_DisambiguationSMSResult;
    storeDisambiguationSMSResult->write_as_json(&handler_DisambiguationSMSResult);
    handler_DisambiguationSMSResult.result->add_reference();
    return handler_DisambiguationSMSResult.result;
  }

JSONValue *ComposeSMSCommandJSON::extraSendingSMSResultToJSON(void) const
  {
    JSONValueHandler handler_SendingSMSResult;
    storeSendingSMSResult->write_as_json(&handler_SendingSMSResult);
    handler_SendingSMSResult.result->add_reference();
    return handler_SendingSMSResult.result;
  }

JSONValue *ComposeSMSCommandJSON::extraSentSMSResultToJSON(void) const
  {
    JSONValueHandler handler_SentSMSResult;
    storeSentSMSResult->write_as_json(&handler_SentSMSResult);
    handler_SentSMSResult.result->add_reference();
    return handler_SentSMSResult.result;
  }

JSONValue *ComposeSMSCommandJSON::extraExitSMSResultToJSON(void) const
  {
    JSONValueHandler handler_ExitSMSResult;
    storeExitSMSResult->write_as_json(&handler_ExitSMSResult);
    handler_ExitSMSResult.result->add_reference();
    return handler_ExitSMSResult.result;
  }

void ComposeSMSCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ComposeSMSCommandNativeDataJSON *convert_classy = ComposeSMSCommandNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandJSON::fromJSONNoSMSAppResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNoSMSAppResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandJSON::fromJSONComposeSMSResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComposeSMSResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandJSON::fromJSONDisambiguationSMSResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisambiguationSMSResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandJSON::fromJSONSendingSMSResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSendingSMSResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandJSON::fromJSONSentSMSResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSentSMSResult(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandJSON::fromJSONExitSMSResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setExitSMSResult(convert_classy);
    convert_classy->remove_reference();
  }

ComposeSMSCommandJSON::ComposeSMSCommandJSON(void) :
        flagHasNativeData(false),
        flagHasNoSMSAppResult(false),
        flagHasComposeSMSResult(false),
        flagHasDisambiguationSMSResult(false),
        flagHasSendingSMSResult(false),
        flagHasSentSMSResult(false),
        flagHasExitSMSResult(false)
  {
    extraIndex = create_string_index();
  }

ComposeSMSCommandJSON::~ComposeSMSCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasNoSMSAppResult)
      {
        storeNoSMSAppResult->remove_reference();
      }
    if (flagHasComposeSMSResult)
      {
        storeComposeSMSResult->remove_reference();
      }
    if (flagHasDisambiguationSMSResult)
      {
        storeDisambiguationSMSResult->remove_reference();
      }
    if (flagHasSendingSMSResult)
      {
        storeSendingSMSResult->remove_reference();
      }
    if (flagHasSentSMSResult)
      {
        storeSentSMSResult->remove_reference();
      }
    if (flagHasExitSMSResult)
      {
        storeExitSMSResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ComposeSMSCommandJSON::getSMSCommandKind(void) const
  {
    return "ComposeSMSCommand";
  }

bool ComposeSMSCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

ComposeSMSCommandNativeDataJSON * ComposeSMSCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const ComposeSMSCommandNativeDataJSON * ComposeSMSCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool ComposeSMSCommandJSON::hasNoSMSAppResult(void) const
  {
    return flagHasNoSMSAppResult;
  }

DynamicResponseJSON * ComposeSMSCommandJSON::getNoSMSAppResult(void)
  {
    assert(flagHasNoSMSAppResult);
    return storeNoSMSAppResult;
  }

const DynamicResponseJSON * ComposeSMSCommandJSON::getNoSMSAppResult(void) const
  {
    assert(flagHasNoSMSAppResult);
    return storeNoSMSAppResult;
  }

bool ComposeSMSCommandJSON::hasComposeSMSResult(void) const
  {
    return flagHasComposeSMSResult;
  }

DynamicResponseJSON * ComposeSMSCommandJSON::getComposeSMSResult(void)
  {
    assert(flagHasComposeSMSResult);
    return storeComposeSMSResult;
  }

const DynamicResponseJSON * ComposeSMSCommandJSON::getComposeSMSResult(void) const
  {
    assert(flagHasComposeSMSResult);
    return storeComposeSMSResult;
  }

bool ComposeSMSCommandJSON::hasDisambiguationSMSResult(void) const
  {
    return flagHasDisambiguationSMSResult;
  }

DynamicResponseJSON * ComposeSMSCommandJSON::getDisambiguationSMSResult(void)
  {
    assert(flagHasDisambiguationSMSResult);
    return storeDisambiguationSMSResult;
  }

const DynamicResponseJSON * ComposeSMSCommandJSON::getDisambiguationSMSResult(void) const
  {
    assert(flagHasDisambiguationSMSResult);
    return storeDisambiguationSMSResult;
  }

bool ComposeSMSCommandJSON::hasSendingSMSResult(void) const
  {
    return flagHasSendingSMSResult;
  }

DynamicResponseJSON * ComposeSMSCommandJSON::getSendingSMSResult(void)
  {
    assert(flagHasSendingSMSResult);
    return storeSendingSMSResult;
  }

const DynamicResponseJSON * ComposeSMSCommandJSON::getSendingSMSResult(void) const
  {
    assert(flagHasSendingSMSResult);
    return storeSendingSMSResult;
  }

bool ComposeSMSCommandJSON::hasSentSMSResult(void) const
  {
    return flagHasSentSMSResult;
  }

DynamicResponseJSON * ComposeSMSCommandJSON::getSentSMSResult(void)
  {
    assert(flagHasSentSMSResult);
    return storeSentSMSResult;
  }

const DynamicResponseJSON * ComposeSMSCommandJSON::getSentSMSResult(void) const
  {
    assert(flagHasSentSMSResult);
    return storeSentSMSResult;
  }

bool ComposeSMSCommandJSON::hasExitSMSResult(void) const
  {
    return flagHasExitSMSResult;
  }

DynamicResponseJSON * ComposeSMSCommandJSON::getExitSMSResult(void)
  {
    assert(flagHasExitSMSResult);
    return storeExitSMSResult;
  }

const DynamicResponseJSON * ComposeSMSCommandJSON::getExitSMSResult(void) const
  {
    assert(flagHasExitSMSResult);
    return storeExitSMSResult;
  }

ComposeSMSCommandJSON *ComposeSMSCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ComposeSMSCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ComposeSMSCommandJSON>, ComposeSMSCommandJSON *, bool> generator("Type ComposeSMSCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
