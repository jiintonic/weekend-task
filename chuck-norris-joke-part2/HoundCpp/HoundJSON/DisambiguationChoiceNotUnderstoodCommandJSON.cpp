/* file "DisambiguationChoiceNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguationChoiceNotUnderstoodCommandJSON.h"

#include "DisambiguationChoiceNotUnderstoodCommandJSON.h"


DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON &DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONCommunicationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CommunicationTypeJSON *convert_classy = CommunicationTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCommunicationType(convert_classy);
    convert_classy->remove_reference();
  }

void DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONNotUnderstoodWords(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodWords of TypeNativeDataJSON is not a string.");
    setNotUnderstoodWords(std::string(json_string->getData()));
  }

DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasCommunicationType(false),
        flagHasNotUnderstoodWords(false)
  {
    extraIndex = create_string_index();
  }

DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::hasCommunicationType(void) const
  {
    return flagHasCommunicationType;
  }

CommunicationTypeJSON * DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationType(void)
  {
    assert(flagHasCommunicationType);
    return storeCommunicationType;
  }

const CommunicationTypeJSON * DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationType(void) const
  {
    assert(flagHasCommunicationType);
    return storeCommunicationType;
  }

CommunicationTypeJSON::TypeValue DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationTypeValue(void)
  {
    return getCommunicationType()->getValue();
  }

const CommunicationTypeJSON::TypeValue DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationTypeValue(void) const
  {
    return getCommunicationType()->getValue();
  }

const char *DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationTypeAsChars(void) const
  {
    return getCommunicationType()->getValueAsChars();
  }

std::string DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getCommunicationTypeAsString(void) const
  {
    return getCommunicationType()->getValueAsString();
  }

bool DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::hasNotUnderstoodWords(void) const
  {
    return flagHasNotUnderstoodWords;
  }

std::string DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getNotUnderstoodWords(void)
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

const std::string DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::getNotUnderstoodWords(void) const
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

DisambiguationChoiceNotUnderstoodCommandJSON::DisambiguationChoiceNotUnderstoodCommandJSON(const DisambiguationChoiceNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

DisambiguationChoiceNotUnderstoodCommandJSON &DisambiguationChoiceNotUnderstoodCommandJSON::operator=(const DisambiguationChoiceNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DisambiguationChoiceNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void DisambiguationChoiceNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

DisambiguationChoiceNotUnderstoodCommandJSON::DisambiguationChoiceNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

DisambiguationChoiceNotUnderstoodCommandJSON::~DisambiguationChoiceNotUnderstoodCommandJSON(void)
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

const char *DisambiguationChoiceNotUnderstoodCommandJSON::getCommunicationCommandKind(void) const
  {
    return "DisambiguationChoiceNotUnderstoodCommand";
  }

bool DisambiguationChoiceNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON * DisambiguationChoiceNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON * DisambiguationChoiceNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON *DisambiguationChoiceNotUnderstoodCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DisambiguationChoiceNotUnderstoodCommandJSON *DisambiguationChoiceNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguationChoiceNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguationChoiceNotUnderstoodCommandJSON>, DisambiguationChoiceNotUnderstoodCommandJSON *, bool> generator("Type DisambiguationChoiceNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
