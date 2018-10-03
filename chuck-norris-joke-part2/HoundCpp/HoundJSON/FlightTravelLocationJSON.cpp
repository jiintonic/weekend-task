/* file "FlightTravelLocationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightTravelLocationJSON.h"

#include "FlightTravelLocationJSON.h"


FlightTravelLocationJSON::FlightTravelLocationJSON(const FlightTravelLocationJSON &)
  {
    assert(false);
  }

FlightTravelLocationJSON &FlightTravelLocationJSON::operator=(const FlightTravelLocationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightTravelLocationJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void FlightTravelLocationJSON::fromJSONAirportIATACodes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AirportIATACodes of FlightTravelLocationJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_AirportIATACodes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field AirportIATACodes of FlightTravelLocationJSON is not a string.");
        vector_AirportIATACodes1[num1] = std::string(json_string->getData());
      }
    initAirportIATACodes();
    for (size_t num2 = 0; num2 < vector_AirportIATACodes1.size(); ++num2)
        appendAirportIATACodes(vector_AirportIATACodes1[num2]);
    for (size_t num1 = 0; num1 < vector_AirportIATACodes1.size(); ++num1)
      {
      }
  }

FlightTravelLocationJSON::FlightTravelLocationJSON(void) :
        flagHasLocation(false),
        flagHasAirportIATACodes(false)
  {
    extraIndex = create_string_index();
  }

FlightTravelLocationJSON::~FlightTravelLocationJSON(void)
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

bool FlightTravelLocationJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * FlightTravelLocationJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * FlightTravelLocationJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool FlightTravelLocationJSON::hasAirportIATACodes(void) const
  {
    return flagHasAirportIATACodes;
  }

size_t FlightTravelLocationJSON::countOfAirportIATACodes(void) const
  {
    assert(flagHasAirportIATACodes);
    return storeAirportIATACodes.size();
  }

std::string FlightTravelLocationJSON::elementOfAirportIATACodes(size_t element_num)
  {
    assert(flagHasAirportIATACodes);
    return storeAirportIATACodes[element_num];
  }

const std::string FlightTravelLocationJSON::elementOfAirportIATACodes(size_t element_num) const
  {
    assert(flagHasAirportIATACodes);
    return storeAirportIATACodes[element_num];
  }

std::vector< std::string > FlightTravelLocationJSON::getAirportIATACodes(void)
  {
    assert(flagHasAirportIATACodes);
    return storeAirportIATACodes;
  }

const std::vector< std::string > FlightTravelLocationJSON::getAirportIATACodes(void) const
  {
    assert(flagHasAirportIATACodes);
    return storeAirportIATACodes;
  }

FlightTravelLocationJSON *FlightTravelLocationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightTravelLocationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightTravelLocationJSON>, FlightTravelLocationJSON *, bool> generator("Type FlightTravelLocation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
