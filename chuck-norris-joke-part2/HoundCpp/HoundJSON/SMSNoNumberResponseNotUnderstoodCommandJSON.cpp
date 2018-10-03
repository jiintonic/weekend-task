/* file "SMSNoNumberResponseNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSNoNumberResponseNotUnderstoodCommandJSON.h"

#include "SMSNoNumberResponseNotUnderstoodCommandJSON.h"


SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON &SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONNotUnderstoodWords(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodWords of TypeNativeDataJSON is not a string.");
    setNotUnderstoodWords(std::string(json_string->getData()));
  }

SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasNotUnderstoodWords(false)
  {
    extraIndex = create_string_index();
  }

SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::hasNotUnderstoodWords(void) const
  {
    return flagHasNotUnderstoodWords;
  }

std::string SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::getNotUnderstoodWords(void)
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

const std::string SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::getNotUnderstoodWords(void) const
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

SMSNoNumberResponseNotUnderstoodCommandJSON::SMSNoNumberResponseNotUnderstoodCommandJSON(const SMSNoNumberResponseNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

SMSNoNumberResponseNotUnderstoodCommandJSON &SMSNoNumberResponseNotUnderstoodCommandJSON::operator=(const SMSNoNumberResponseNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSNoNumberResponseNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void SMSNoNumberResponseNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

SMSNoNumberResponseNotUnderstoodCommandJSON::SMSNoNumberResponseNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

SMSNoNumberResponseNotUnderstoodCommandJSON::~SMSNoNumberResponseNotUnderstoodCommandJSON(void)
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

bool SMSNoNumberResponseNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON * SMSNoNumberResponseNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON * SMSNoNumberResponseNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON *SMSNoNumberResponseNotUnderstoodCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SMSNoNumberResponseNotUnderstoodCommandJSON *SMSNoNumberResponseNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSNoNumberResponseNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSNoNumberResponseNotUnderstoodCommandJSON>, SMSNoNumberResponseNotUnderstoodCommandJSON *, bool> generator("Type SMSNoNumberResponseNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
