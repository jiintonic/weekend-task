/* file "SpeechToTextOnlyCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SpeechToTextOnlyCommandJSON.h"

#include "SpeechToTextOnlyCommandJSON.h"


SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

SpeechToTextOnlyCommandJSON::TypeNativeDataJSON &SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::fromJSONRawTranscription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RawTranscription of TypeNativeDataJSON is not a string.");
    setRawTranscription(std::string(json_string->getData()));
  }

void SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::fromJSONFormattedTranscription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FormattedTranscription of TypeNativeDataJSON is not a string.");
    setFormattedTranscription(std::string(json_string->getData()));
  }

SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasRawTranscription(false),
        flagHasFormattedTranscription(false)
  {
    extraIndex = create_string_index();
  }

SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::hasRawTranscription(void) const
  {
    return flagHasRawTranscription;
  }

std::string SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::getRawTranscription(void)
  {
    assert(flagHasRawTranscription);
    return storeRawTranscription;
  }

const std::string SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::getRawTranscription(void) const
  {
    assert(flagHasRawTranscription);
    return storeRawTranscription;
  }

bool SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::hasFormattedTranscription(void) const
  {
    return flagHasFormattedTranscription;
  }

std::string SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::getFormattedTranscription(void)
  {
    assert(flagHasFormattedTranscription);
    return storeFormattedTranscription;
  }

const std::string SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::getFormattedTranscription(void) const
  {
    assert(flagHasFormattedTranscription);
    return storeFormattedTranscription;
  }

SpeechToTextOnlyCommandJSON::SpeechToTextOnlyCommandJSON(const SpeechToTextOnlyCommandJSON &)
  {
    assert(false);
  }

SpeechToTextOnlyCommandJSON &SpeechToTextOnlyCommandJSON::operator=(const SpeechToTextOnlyCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SpeechToTextOnlyCommandJSON::extraRawTranscriptionToJSON(void) const
  {
    JSONStringValue *generated_string_RawTranscription = new JSONStringValue(storeRawTranscription.c_str());
    return generated_string_RawTranscription;
  }

JSONValue *SpeechToTextOnlyCommandJSON::extraFormattedTranscriptionToJSON(void) const
  {
    JSONStringValue *generated_string_FormattedTranscription = new JSONStringValue(storeFormattedTranscription.c_str());
    return generated_string_FormattedTranscription;
  }

JSONValue *SpeechToTextOnlyCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void SpeechToTextOnlyCommandJSON::fromJSONRawTranscription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RawTranscription of SpeechToTextOnlyCommandJSON is not a string.");
    setRawTranscription(std::string(json_string->getData()));
  }

void SpeechToTextOnlyCommandJSON::fromJSONFormattedTranscription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FormattedTranscription of SpeechToTextOnlyCommandJSON is not a string.");
    setFormattedTranscription(std::string(json_string->getData()));
  }

void SpeechToTextOnlyCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

SpeechToTextOnlyCommandJSON::SpeechToTextOnlyCommandJSON(void) :
        flagHasRawTranscription(false),
        flagHasFormattedTranscription(false),
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

SpeechToTextOnlyCommandJSON::~SpeechToTextOnlyCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SpeechToTextOnlyCommandJSON::getCommandKind(void) const
  {
    return "SpeechToTextOnlyCommand";
  }

bool SpeechToTextOnlyCommandJSON::hasRawTranscription(void) const
  {
    return flagHasRawTranscription;
  }

std::string SpeechToTextOnlyCommandJSON::getRawTranscription(void)
  {
    assert(flagHasRawTranscription);
    return storeRawTranscription;
  }

const std::string SpeechToTextOnlyCommandJSON::getRawTranscription(void) const
  {
    assert(flagHasRawTranscription);
    return storeRawTranscription;
  }

bool SpeechToTextOnlyCommandJSON::hasFormattedTranscription(void) const
  {
    return flagHasFormattedTranscription;
  }

std::string SpeechToTextOnlyCommandJSON::getFormattedTranscription(void)
  {
    assert(flagHasFormattedTranscription);
    return storeFormattedTranscription;
  }

const std::string SpeechToTextOnlyCommandJSON::getFormattedTranscription(void) const
  {
    assert(flagHasFormattedTranscription);
    return storeFormattedTranscription;
  }

bool SpeechToTextOnlyCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

SpeechToTextOnlyCommandJSON::TypeNativeDataJSON * SpeechToTextOnlyCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const SpeechToTextOnlyCommandJSON::TypeNativeDataJSON * SpeechToTextOnlyCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

SpeechToTextOnlyCommandJSON::TypeNativeDataJSON *SpeechToTextOnlyCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SpeechToTextOnlyCommandJSON *SpeechToTextOnlyCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SpeechToTextOnlyCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SpeechToTextOnlyCommandJSON>, SpeechToTextOnlyCommandJSON *, bool> generator("Type SpeechToTextOnlyCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
