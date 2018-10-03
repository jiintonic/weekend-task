/* file "RecipientInfoNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RecipientInfoNotUnderstoodCommandJSON.h"

#include "RecipientInfoNotUnderstoodCommandJSON.h"


RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON &RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONCommunicationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CommunicationTypeJSON *convert_classy = CommunicationTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCommunicationType(convert_classy);
    convert_classy->remove_reference();
  }

void RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONNotUnderstoodWords(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodWords of TypeNativeDataJSON is not a string.");
    setNotUnderstoodWords(std::string(json_string->getData()));
  }

RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasCommunicationType(false),
        flagHasNotUnderstoodWords(false)
  {
    extraIndex = create_string_index();
  }

RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasCommunicationType)
      {
        storeCommunicationType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::hasCommunicationType(void) const
  {
    return flagHasCommunicationType;
  }

CommunicationTypeJSON * RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationType(void)
  {
    assert(flagHasCommunicationType);
    return storeCommunicationType;
  }

const CommunicationTypeJSON * RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationType(void) const
  {
    assert(flagHasCommunicationType);
    return storeCommunicationType;
  }

CommunicationTypeJSON::TypeValue RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationTypeValue(void)
  {
    return getCommunicationType()->getValue();
  }

const CommunicationTypeJSON::TypeValue RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationTypeValue(void) const
  {
    return getCommunicationType()->getValue();
  }

const char *RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationTypeAsChars(void) const
  {
    return getCommunicationType()->getValueAsChars();
  }

std::string RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationTypeAsString(void) const
  {
    return getCommunicationType()->getValueAsString();
  }

bool RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::hasNotUnderstoodWords(void) const
  {
    return flagHasNotUnderstoodWords;
  }

std::string RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::getNotUnderstoodWords(void)
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

const std::string RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::getNotUnderstoodWords(void) const
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

RecipientInfoNotUnderstoodCommandJSON::RecipientInfoNotUnderstoodCommandJSON(const RecipientInfoNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

RecipientInfoNotUnderstoodCommandJSON &RecipientInfoNotUnderstoodCommandJSON::operator=(const RecipientInfoNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RecipientInfoNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void RecipientInfoNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

RecipientInfoNotUnderstoodCommandJSON::RecipientInfoNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

RecipientInfoNotUnderstoodCommandJSON::~RecipientInfoNotUnderstoodCommandJSON(void)
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

const char *RecipientInfoNotUnderstoodCommandJSON::getCommunicationCommandKind(void) const
  {
    return "RecipientInfoNotUnderstoodCommand";
  }

bool RecipientInfoNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON * RecipientInfoNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON * RecipientInfoNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON *RecipientInfoNotUnderstoodCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
RecipientInfoNotUnderstoodCommandJSON *RecipientInfoNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RecipientInfoNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RecipientInfoNotUnderstoodCommandJSON>, RecipientInfoNotUnderstoodCommandJSON *, bool> generator("Type RecipientInfoNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
