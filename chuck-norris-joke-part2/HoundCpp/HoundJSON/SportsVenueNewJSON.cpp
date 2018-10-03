/* file "SportsVenueNewJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsVenueNewJSON.h"

#include "SportsVenueNewJSON.h"


SportsVenueNewJSON::SportsVenueNewJSON(const SportsVenueNewJSON &)
  {
    assert(false);
  }

SportsVenueNewJSON &SportsVenueNewJSON::operator=(const SportsVenueNewJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsVenueNewJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of SportsVenueNewJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void SportsVenueNewJSON::fromJSONAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Address of SportsVenueNewJSON is not a string.");
    setAddress(std::string(json_string->getData()));
  }

void SportsVenueNewJSON::fromJSONCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field City of SportsVenueNewJSON is not a string.");
    setCity(std::string(json_string->getData()));
  }

void SportsVenueNewJSON::fromJSONState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field State of SportsVenueNewJSON is not a string.");
    setState(std::string(json_string->getData()));
  }

void SportsVenueNewJSON::fromJSONPostalCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PostalCode of SportsVenueNewJSON is not a string.");
    setPostalCode(std::string(json_string->getData()));
  }

void SportsVenueNewJSON::fromJSONCountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Country of SportsVenueNewJSON is not a string.");
    setCountry(std::string(json_string->getData()));
  }

SportsVenueNewJSON::SportsVenueNewJSON(void) :
        flagHasName(false),
        flagHasAddress(false),
        flagHasCity(false),
        flagHasState(false),
        flagHasPostalCode(false),
        flagHasCountry(false)
  {
    extraIndex = create_string_index();
  }

SportsVenueNewJSON::~SportsVenueNewJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsVenueNewJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string SportsVenueNewJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string SportsVenueNewJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool SportsVenueNewJSON::hasAddress(void) const
  {
    return flagHasAddress;
  }

std::string SportsVenueNewJSON::getAddress(void)
  {
    assert(flagHasAddress);
    return storeAddress;
  }

const std::string SportsVenueNewJSON::getAddress(void) const
  {
    assert(flagHasAddress);
    return storeAddress;
  }

bool SportsVenueNewJSON::hasCity(void) const
  {
    return flagHasCity;
  }

std::string SportsVenueNewJSON::getCity(void)
  {
    assert(flagHasCity);
    return storeCity;
  }

const std::string SportsVenueNewJSON::getCity(void) const
  {
    assert(flagHasCity);
    return storeCity;
  }

bool SportsVenueNewJSON::hasState(void) const
  {
    return flagHasState;
  }

std::string SportsVenueNewJSON::getState(void)
  {
    assert(flagHasState);
    return storeState;
  }

const std::string SportsVenueNewJSON::getState(void) const
  {
    assert(flagHasState);
    return storeState;
  }

bool SportsVenueNewJSON::hasPostalCode(void) const
  {
    return flagHasPostalCode;
  }

std::string SportsVenueNewJSON::getPostalCode(void)
  {
    assert(flagHasPostalCode);
    return storePostalCode;
  }

const std::string SportsVenueNewJSON::getPostalCode(void) const
  {
    assert(flagHasPostalCode);
    return storePostalCode;
  }

bool SportsVenueNewJSON::hasCountry(void) const
  {
    return flagHasCountry;
  }

std::string SportsVenueNewJSON::getCountry(void)
  {
    assert(flagHasCountry);
    return storeCountry;
  }

const std::string SportsVenueNewJSON::getCountry(void) const
  {
    assert(flagHasCountry);
    return storeCountry;
  }

SportsVenueNewJSON *SportsVenueNewJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsVenueNewJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsVenueNewJSON>, SportsVenueNewJSON *, bool> generator("Type SportsVenueNew", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
