/* file "SMSDisambiguateChoiceNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSDisambiguateChoiceNotUnderstoodCommandJSON.h"

#include "SMSDisambiguateChoiceNotUnderstoodCommandJSON.h"


SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON &SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONNotUnderstoodWords(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodWords of TypeNativeDataJSON is not a string.");
    setNotUnderstoodWords(std::string(json_string->getData()));
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasNotUnderstoodWords(false)
  {
    extraIndex = create_string_index();
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::hasNotUnderstoodWords(void) const
  {
    return flagHasNotUnderstoodWords;
  }

std::string SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getNotUnderstoodWords(void)
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

const std::string SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getNotUnderstoodWords(void) const
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON::SMSDisambiguateChoiceNotUnderstoodCommandJSON(const SMSDisambiguateChoiceNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON &SMSDisambiguateChoiceNotUnderstoodCommandJSON::operator=(const SMSDisambiguateChoiceNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSDisambiguateChoiceNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void SMSDisambiguateChoiceNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON::SMSDisambiguateChoiceNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON::~SMSDisambiguateChoiceNotUnderstoodCommandJSON(void)
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

bool SMSDisambiguateChoiceNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON * SMSDisambiguateChoiceNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON * SMSDisambiguateChoiceNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON *SMSDisambiguateChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SMSDisambiguateChoiceNotUnderstoodCommandJSON *SMSDisambiguateChoiceNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSDisambiguateChoiceNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSDisambiguateChoiceNotUnderstoodCommandJSON>, SMSDisambiguateChoiceNotUnderstoodCommandJSON *, bool> generator("Type SMSDisambiguateChoiceNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
