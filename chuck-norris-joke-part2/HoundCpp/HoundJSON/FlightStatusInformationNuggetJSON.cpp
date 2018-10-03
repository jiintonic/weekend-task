/* file "FlightStatusInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatusInformationNuggetJSON.h"

#include "FlightStatusInformationNuggetJSON.h"


FlightStatusInformationNuggetJSON::FlightStatusInformationNuggetJSON(const FlightStatusInformationNuggetJSON &)
  {
    assert(false);
  }

FlightStatusInformationNuggetJSON &FlightStatusInformationNuggetJSON::operator=(const FlightStatusInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *FlightStatusInformationNuggetJSON::extraCurrentDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_CurrentDateAndTime;
    storeCurrentDateAndTime->write_as_json(&handler_CurrentDateAndTime);
    handler_CurrentDateAndTime.result->add_reference();
    return handler_CurrentDateAndTime.result;
  }

JSONValue *FlightStatusInformationNuggetJSON::extraFlightTravelLocationForClientToJSON(void) const
  {
    JSONValueHandler handler_FlightTravelLocationForClient;
    storeFlightTravelLocationForClient->write_as_json(&handler_FlightTravelLocationForClient);
    handler_FlightTravelLocationForClient.result->add_reference();
    return handler_FlightTravelLocationForClient.result;
  }

JSONValue *FlightStatusInformationNuggetJSON::extraFlightStatusSearchResultsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_FlightStatusSearchResults = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeFlightStatusSearchResults.size(); ++num1)
      {
        JSONValueHandler handler_FlightStatusSearchResults;
        storeFlightStatusSearchResults[num1]->write_as_json(&handler_FlightStatusSearchResults);
        handler_FlightStatusSearchResults.result->add_reference();
        generated_array_1_FlightStatusSearchResults->appendComponent(handler_FlightStatusSearchResults.result);
        handler_FlightStatusSearchResults.result->remove_reference();
      }
    return generated_array_1_FlightStatusSearchResults;
  }

void FlightStatusInformationNuggetJSON::fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusInformationNuggetJSON::fromJSONFlightTravelLocationForClient(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightTravelLocationForClient(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusInformationNuggetJSON::fromJSONFlightStatusSearchResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightStatusSearchResults of FlightStatusInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightStatusSearchResultJSON * > vector_FlightStatusSearchResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightStatusSearchResultJSON *convert_classy = FlightStatusSearchResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FlightStatusSearchResults1[num1] = convert_classy;
      }
    initFlightStatusSearchResults();
    for (size_t num2 = 0; num2 < vector_FlightStatusSearchResults1.size(); ++num2)
        appendFlightStatusSearchResults(vector_FlightStatusSearchResults1[num2]);
    for (size_t num1 = 0; num1 < vector_FlightStatusSearchResults1.size(); ++num1)
      {
        vector_FlightStatusSearchResults1[num1]->remove_reference();
      }
  }

FlightStatusInformationNuggetJSON::FlightStatusInformationNuggetJSON(void) :
        flagHasCurrentDateAndTime(false),
        flagHasFlightTravelLocationForClient(false),
        flagHasFlightStatusSearchResults(false)
  {
    extraIndex = create_string_index();
  }

FlightStatusInformationNuggetJSON::~FlightStatusInformationNuggetJSON(void)
  {
    if (flagHasCurrentDateAndTime)
      {
        storeCurrentDateAndTime->remove_reference();
      }
    if (flagHasFlightTravelLocationForClient)
      {
        storeFlightTravelLocationForClient->remove_reference();
      }
    if (flagHasFlightStatusSearchResults)
      {
        for (size_t num4 = 0; num4 < storeFlightStatusSearchResults.size(); ++num4)
          {
            storeFlightStatusSearchResults[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *FlightStatusInformationNuggetJSON::getNuggetKind(void) const
  {
    return "FlightStatus";
  }

bool FlightStatusInformationNuggetJSON::hasCurrentDateAndTime(void) const
  {
    return flagHasCurrentDateAndTime;
  }

FlightTimesJSON * FlightStatusInformationNuggetJSON::getCurrentDateAndTime(void)
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

const FlightTimesJSON * FlightStatusInformationNuggetJSON::getCurrentDateAndTime(void) const
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

bool FlightStatusInformationNuggetJSON::hasFlightTravelLocationForClient(void) const
  {
    return flagHasFlightTravelLocationForClient;
  }

FlightTravelLocationJSON * FlightStatusInformationNuggetJSON::getFlightTravelLocationForClient(void)
  {
    assert(flagHasFlightTravelLocationForClient);
    return storeFlightTravelLocationForClient;
  }

const FlightTravelLocationJSON * FlightStatusInformationNuggetJSON::getFlightTravelLocationForClient(void) const
  {
    assert(flagHasFlightTravelLocationForClient);
    return storeFlightTravelLocationForClient;
  }

bool FlightStatusInformationNuggetJSON::hasFlightStatusSearchResults(void) const
  {
    return flagHasFlightStatusSearchResults;
  }

size_t FlightStatusInformationNuggetJSON::countOfFlightStatusSearchResults(void) const
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults.size();
  }

FlightStatusSearchResultJSON * FlightStatusInformationNuggetJSON::elementOfFlightStatusSearchResults(size_t element_num)
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults[element_num];
  }

const FlightStatusSearchResultJSON * FlightStatusInformationNuggetJSON::elementOfFlightStatusSearchResults(size_t element_num) const
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults[element_num];
  }

std::vector< FlightStatusSearchResultJSON * > FlightStatusInformationNuggetJSON::getFlightStatusSearchResults(void)
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults;
  }

const std::vector< FlightStatusSearchResultJSON * > FlightStatusInformationNuggetJSON::getFlightStatusSearchResults(void) const
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults;
  }

FlightStatusInformationNuggetJSON *FlightStatusInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatusInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatusInformationNuggetJSON>, FlightStatusInformationNuggetJSON *, bool> generator("Type FlightStatusInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
