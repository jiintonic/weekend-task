/* file "FlightDataProviderJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightDataProviderJSON.h"

#include "FlightDataProviderJSON.h"


FlightDataProviderJSON::FlightDataProviderJSON(const FlightDataProviderJSON &)
  {
    assert(false);
  }

FlightDataProviderJSON &FlightDataProviderJSON::operator=(const FlightDataProviderJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightDataProviderJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of FlightDataProviderJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

FlightDataProviderJSON::FlightDataProviderJSON(void) :
        flagHasName(false)
  {
    extraIndex = create_string_index();
  }

FlightDataProviderJSON::~FlightDataProviderJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightDataProviderJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string FlightDataProviderJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string FlightDataProviderJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

FlightDataProviderJSON *FlightDataProviderJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightDataProviderJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightDataProviderJSON>, FlightDataProviderJSON *, bool> generator("Type FlightDataProvider", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
