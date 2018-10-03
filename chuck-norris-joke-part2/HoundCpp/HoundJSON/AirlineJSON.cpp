/* file "AirlineJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AirlineJSON.h"

#include "AirlineJSON.h"


AirlineJSON::AirlineJSON(const AirlineJSON &)
  {
    assert(false);
  }

AirlineJSON &AirlineJSON::operator=(const AirlineJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AirlineJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of AirlineJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void AirlineJSON::fromJSONSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenName of AirlineJSON is not a string.");
    setSpokenName(std::string(json_string->getData()));
  }

void AirlineJSON::fromJSONIATACode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field IATACode of AirlineJSON is not a string.");
    setIATACode(std::string(json_string->getData()));
  }

void AirlineJSON::fromJSONICAOCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ICAOCode of AirlineJSON is not a string.");
    setICAOCode(std::string(json_string->getData()));
  }

AirlineJSON::AirlineJSON(void) :
        flagHasName(false),
        flagHasSpokenName(false),
        flagHasIATACode(false),
        flagHasICAOCode(false)
  {
    extraIndex = create_string_index();
  }

AirlineJSON::~AirlineJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AirlineJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string AirlineJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string AirlineJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool AirlineJSON::hasSpokenName(void) const
  {
    return flagHasSpokenName;
  }

std::string AirlineJSON::getSpokenName(void)
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

const std::string AirlineJSON::getSpokenName(void) const
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

bool AirlineJSON::hasIATACode(void) const
  {
    return flagHasIATACode;
  }

std::string AirlineJSON::getIATACode(void)
  {
    assert(flagHasIATACode);
    return storeIATACode;
  }

const std::string AirlineJSON::getIATACode(void) const
  {
    assert(flagHasIATACode);
    return storeIATACode;
  }

bool AirlineJSON::hasICAOCode(void) const
  {
    return flagHasICAOCode;
  }

std::string AirlineJSON::getICAOCode(void)
  {
    assert(flagHasICAOCode);
    return storeICAOCode;
  }

const std::string AirlineJSON::getICAOCode(void) const
  {
    assert(flagHasICAOCode);
    return storeICAOCode;
  }

AirlineJSON *AirlineJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AirlineJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AirlineJSON>, AirlineJSON *, bool> generator("Type Airline", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
