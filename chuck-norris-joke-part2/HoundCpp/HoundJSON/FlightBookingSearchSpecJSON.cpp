/* file "FlightBookingSearchSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightBookingSearchSpecJSON.h"

#include "FlightBookingSearchSpecJSON.h"


FlightBookingSearchSpecJSON::FlightBookingSearchSpecJSON(const FlightBookingSearchSpecJSON &)
  {
    assert(false);
  }

FlightBookingSearchSpecJSON &FlightBookingSearchSpecJSON::operator=(const FlightBookingSearchSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightBookingSearchSpecJSON::fromJSONCountryCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CountryCode of FlightBookingSearchSpecJSON is not a string.");
    setCountryCode(std::string(json_string->getData()));
  }

void FlightBookingSearchSpecJSON::fromJSONLanguageCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LanguageCode of FlightBookingSearchSpecJSON is not a string.");
    setLanguageCode(std::string(json_string->getData()));
  }

void FlightBookingSearchSpecJSON::fromJSONFlightTravelLocationForClient(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightTravelLocationForClient(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingSearchSpecJSON::fromJSONFlightBookingFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightBookingFilterJSON *convert_classy = FlightBookingFilterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightBookingFilter(convert_classy);
    convert_classy->remove_reference();
  }

FlightBookingSearchSpecJSON::FlightBookingSearchSpecJSON(void) :
        flagHasCountryCode(false),
        flagHasLanguageCode(false),
        flagHasFlightTravelLocationForClient(false),
        flagHasFlightBookingFilter(false)
  {
    extraIndex = create_string_index();
  }

FlightBookingSearchSpecJSON::~FlightBookingSearchSpecJSON(void)
  {
    if (flagHasFlightTravelLocationForClient)
      {
        storeFlightTravelLocationForClient->remove_reference();
      }
    if (flagHasFlightBookingFilter)
      {
        storeFlightBookingFilter->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightBookingSearchSpecJSON::hasCountryCode(void) const
  {
    return flagHasCountryCode;
  }

std::string FlightBookingSearchSpecJSON::getCountryCode(void)
  {
    assert(flagHasCountryCode);
    return storeCountryCode;
  }

const std::string FlightBookingSearchSpecJSON::getCountryCode(void) const
  {
    assert(flagHasCountryCode);
    return storeCountryCode;
  }

bool FlightBookingSearchSpecJSON::hasLanguageCode(void) const
  {
    return flagHasLanguageCode;
  }

std::string FlightBookingSearchSpecJSON::getLanguageCode(void)
  {
    assert(flagHasLanguageCode);
    return storeLanguageCode;
  }

const std::string FlightBookingSearchSpecJSON::getLanguageCode(void) const
  {
    assert(flagHasLanguageCode);
    return storeLanguageCode;
  }

bool FlightBookingSearchSpecJSON::hasFlightTravelLocationForClient(void) const
  {
    return flagHasFlightTravelLocationForClient;
  }

FlightTravelLocationJSON * FlightBookingSearchSpecJSON::getFlightTravelLocationForClient(void)
  {
    assert(flagHasFlightTravelLocationForClient);
    return storeFlightTravelLocationForClient;
  }

const FlightTravelLocationJSON * FlightBookingSearchSpecJSON::getFlightTravelLocationForClient(void) const
  {
    assert(flagHasFlightTravelLocationForClient);
    return storeFlightTravelLocationForClient;
  }

bool FlightBookingSearchSpecJSON::hasFlightBookingFilter(void) const
  {
    return flagHasFlightBookingFilter;
  }

FlightBookingFilterJSON * FlightBookingSearchSpecJSON::getFlightBookingFilter(void)
  {
    assert(flagHasFlightBookingFilter);
    return storeFlightBookingFilter;
  }

const FlightBookingFilterJSON * FlightBookingSearchSpecJSON::getFlightBookingFilter(void) const
  {
    assert(flagHasFlightBookingFilter);
    return storeFlightBookingFilter;
  }

FlightBookingSearchSpecJSON *FlightBookingSearchSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightBookingSearchSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightBookingSearchSpecJSON>, FlightBookingSearchSpecJSON *, bool> generator("Type FlightBookingSearchSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
