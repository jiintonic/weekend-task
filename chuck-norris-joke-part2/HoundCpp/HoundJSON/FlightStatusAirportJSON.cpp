/* file "FlightStatusAirportJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatusAirportJSON.h"

#include "FlightStatusAirportJSON.h"


FlightStatusAirportJSON::FlightStatusAirportJSON(const FlightStatusAirportJSON &)
  {
    assert(false);
  }

FlightStatusAirportJSON &FlightStatusAirportJSON::operator=(const FlightStatusAirportJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatusAirportJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of FlightStatusAirportJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void FlightStatusAirportJSON::fromJSONIATACode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field IATACode of FlightStatusAirportJSON is not a string.");
    setIATACode(std::string(json_string->getData()));
  }

void FlightStatusAirportJSON::fromJSONICAOCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ICAOCode of FlightStatusAirportJSON is not a string.");
    setICAOCode(std::string(json_string->getData()));
  }

void FlightStatusAirportJSON::fromJSONTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TimeZone of FlightStatusAirportJSON is not a string.");
    setTimeZone(std::string(json_string->getData()));
  }

void FlightStatusAirportJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocationJSON *convert_classy = LocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

FlightStatusAirportJSON::FlightStatusAirportJSON(void) :
        flagHasName(false),
        flagHasIATACode(false),
        flagHasICAOCode(false),
        flagHasTimeZone(false),
        flagHasLocation(false)
  {
    extraIndex = create_string_index();
  }

FlightStatusAirportJSON::~FlightStatusAirportJSON(void)
  {
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatusAirportJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string FlightStatusAirportJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string FlightStatusAirportJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool FlightStatusAirportJSON::hasIATACode(void) const
  {
    return flagHasIATACode;
  }

std::string FlightStatusAirportJSON::getIATACode(void)
  {
    assert(flagHasIATACode);
    return storeIATACode;
  }

const std::string FlightStatusAirportJSON::getIATACode(void) const
  {
    assert(flagHasIATACode);
    return storeIATACode;
  }

bool FlightStatusAirportJSON::hasICAOCode(void) const
  {
    return flagHasICAOCode;
  }

std::string FlightStatusAirportJSON::getICAOCode(void)
  {
    assert(flagHasICAOCode);
    return storeICAOCode;
  }

const std::string FlightStatusAirportJSON::getICAOCode(void) const
  {
    assert(flagHasICAOCode);
    return storeICAOCode;
  }

bool FlightStatusAirportJSON::hasTimeZone(void) const
  {
    return flagHasTimeZone;
  }

std::string FlightStatusAirportJSON::getTimeZone(void)
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

const std::string FlightStatusAirportJSON::getTimeZone(void) const
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

bool FlightStatusAirportJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

LocationJSON * FlightStatusAirportJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const LocationJSON * FlightStatusAirportJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

FlightStatusAirportJSON *FlightStatusAirportJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatusAirportJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatusAirportJSON>, FlightStatusAirportJSON *, bool> generator("Type FlightStatusAirport", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
