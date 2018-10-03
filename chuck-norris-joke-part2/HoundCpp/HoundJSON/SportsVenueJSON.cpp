/* file "SportsVenueJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsVenueJSON.h"

#include "SportsVenueJSON.h"


SportsVenueJSON::SportsVenueJSON(const SportsVenueJSON &)
  {
    assert(false);
  }

SportsVenueJSON &SportsVenueJSON::operator=(const SportsVenueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsVenueJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of SportsVenueJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void SportsVenueJSON::fromJSONAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Address of SportsVenueJSON is not a string.");
    setAddress(std::string(json_string->getData()));
  }

void SportsVenueJSON::fromJSONCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field City of SportsVenueJSON is not a string.");
    setCity(std::string(json_string->getData()));
  }

void SportsVenueJSON::fromJSONState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field State of SportsVenueJSON is not a string.");
    setState(std::string(json_string->getData()));
  }

void SportsVenueJSON::fromJSONZip(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Zip of SportsVenueJSON is not a string.");
    setZip(std::string(json_string->getData()));
  }

void SportsVenueJSON::fromJSONCountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Country of SportsVenueJSON is not a string.");
    setCountry(std::string(json_string->getData()));
  }

SportsVenueJSON::SportsVenueJSON(void) :
        flagHasName(false),
        flagHasAddress(false),
        flagHasCity(false),
        flagHasState(false),
        flagHasZip(false),
        flagHasCountry(false)
  {
    extraIndex = create_string_index();
  }

SportsVenueJSON::~SportsVenueJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsVenueJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string SportsVenueJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string SportsVenueJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool SportsVenueJSON::hasAddress(void) const
  {
    return flagHasAddress;
  }

std::string SportsVenueJSON::getAddress(void)
  {
    assert(flagHasAddress);
    return storeAddress;
  }

const std::string SportsVenueJSON::getAddress(void) const
  {
    assert(flagHasAddress);
    return storeAddress;
  }

bool SportsVenueJSON::hasCity(void) const
  {
    return flagHasCity;
  }

std::string SportsVenueJSON::getCity(void)
  {
    assert(flagHasCity);
    return storeCity;
  }

const std::string SportsVenueJSON::getCity(void) const
  {
    assert(flagHasCity);
    return storeCity;
  }

bool SportsVenueJSON::hasState(void) const
  {
    return flagHasState;
  }

std::string SportsVenueJSON::getState(void)
  {
    assert(flagHasState);
    return storeState;
  }

const std::string SportsVenueJSON::getState(void) const
  {
    assert(flagHasState);
    return storeState;
  }

bool SportsVenueJSON::hasZip(void) const
  {
    return flagHasZip;
  }

std::string SportsVenueJSON::getZip(void)
  {
    assert(flagHasZip);
    return storeZip;
  }

const std::string SportsVenueJSON::getZip(void) const
  {
    assert(flagHasZip);
    return storeZip;
  }

bool SportsVenueJSON::hasCountry(void) const
  {
    return flagHasCountry;
  }

std::string SportsVenueJSON::getCountry(void)
  {
    assert(flagHasCountry);
    return storeCountry;
  }

const std::string SportsVenueJSON::getCountry(void) const
  {
    assert(flagHasCountry);
    return storeCountry;
  }

SportsVenueJSON *SportsVenueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsVenueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsVenueJSON>, SportsVenueJSON *, bool> generator("Type SportsVenue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
