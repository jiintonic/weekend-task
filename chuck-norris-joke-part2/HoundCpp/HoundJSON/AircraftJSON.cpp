/* file "AircraftJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AircraftJSON.h"

#include "AircraftJSON.h"


AircraftJSON::AircraftJSON(const AircraftJSON &)
  {
    assert(false);
  }

AircraftJSON &AircraftJSON::operator=(const AircraftJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AircraftJSON::fromJSONIATACode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field IATACode of AircraftJSON is not a string.");
    setIATACode(std::string(json_string->getData()));
  }

void AircraftJSON::fromJSONICAOCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ICAOCode of AircraftJSON is not a string.");
    setICAOCode(std::string(json_string->getData()));
  }

void AircraftJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of AircraftJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

void AircraftJSON::fromJSONManufacturer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Manufacturer of AircraftJSON is not a string.");
    setManufacturer(std::string(json_string->getData()));
  }

void AircraftJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of AircraftJSON is not a string.");
    setType(std::string(json_string->getData()));
  }

AircraftJSON::AircraftJSON(void) :
        flagHasIATACode(false),
        flagHasICAOCode(false),
        flagHasDescription(false),
        flagHasManufacturer(false),
        flagHasType(false)
  {
    extraIndex = create_string_index();
  }

AircraftJSON::~AircraftJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AircraftJSON::hasIATACode(void) const
  {
    return flagHasIATACode;
  }

std::string AircraftJSON::getIATACode(void)
  {
    assert(flagHasIATACode);
    return storeIATACode;
  }

const std::string AircraftJSON::getIATACode(void) const
  {
    assert(flagHasIATACode);
    return storeIATACode;
  }

bool AircraftJSON::hasICAOCode(void) const
  {
    return flagHasICAOCode;
  }

std::string AircraftJSON::getICAOCode(void)
  {
    assert(flagHasICAOCode);
    return storeICAOCode;
  }

const std::string AircraftJSON::getICAOCode(void) const
  {
    assert(flagHasICAOCode);
    return storeICAOCode;
  }

bool AircraftJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string AircraftJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string AircraftJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

bool AircraftJSON::hasManufacturer(void) const
  {
    return flagHasManufacturer;
  }

std::string AircraftJSON::getManufacturer(void)
  {
    assert(flagHasManufacturer);
    return storeManufacturer;
  }

const std::string AircraftJSON::getManufacturer(void) const
  {
    assert(flagHasManufacturer);
    return storeManufacturer;
  }

bool AircraftJSON::hasType(void) const
  {
    return flagHasType;
  }

std::string AircraftJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const std::string AircraftJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

AircraftJSON *AircraftJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AircraftJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AircraftJSON>, AircraftJSON *, bool> generator("Type Aircraft", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
