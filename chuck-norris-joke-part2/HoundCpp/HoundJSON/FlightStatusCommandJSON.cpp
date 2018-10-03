/* file "FlightStatusCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatusCommandJSON.h"

#include "FlightStatusCommandJSON.h"


FlightStatusCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

FlightStatusCommandJSON::TypeNativeDataJSON &FlightStatusCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatusCommandJSON::TypeNativeDataJSON::fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusCommandJSON::TypeNativeDataJSON::fromJSONFlightTravelLocationForClient(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightTravelLocationForClient(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusCommandJSON::TypeNativeDataJSON::fromJSONFlightStatusSearchResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightStatusSearchResults of TypeNativeDataJSON is not an array.");
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

FlightStatusCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasCurrentDateAndTime(false),
        flagHasFlightTravelLocationForClient(false),
        flagHasFlightStatusSearchResults(false)
  {
  }

FlightStatusCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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
  }

bool FlightStatusCommandJSON::TypeNativeDataJSON::hasCurrentDateAndTime(void) const
  {
    return flagHasCurrentDateAndTime;
  }

FlightTimesJSON * FlightStatusCommandJSON::TypeNativeDataJSON::getCurrentDateAndTime(void)
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

const FlightTimesJSON * FlightStatusCommandJSON::TypeNativeDataJSON::getCurrentDateAndTime(void) const
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

bool FlightStatusCommandJSON::TypeNativeDataJSON::hasFlightTravelLocationForClient(void) const
  {
    return flagHasFlightTravelLocationForClient;
  }

FlightTravelLocationJSON * FlightStatusCommandJSON::TypeNativeDataJSON::getFlightTravelLocationForClient(void)
  {
    assert(flagHasFlightTravelLocationForClient);
    return storeFlightTravelLocationForClient;
  }

const FlightTravelLocationJSON * FlightStatusCommandJSON::TypeNativeDataJSON::getFlightTravelLocationForClient(void) const
  {
    assert(flagHasFlightTravelLocationForClient);
    return storeFlightTravelLocationForClient;
  }

bool FlightStatusCommandJSON::TypeNativeDataJSON::hasFlightStatusSearchResults(void) const
  {
    return flagHasFlightStatusSearchResults;
  }

size_t FlightStatusCommandJSON::TypeNativeDataJSON::countOfFlightStatusSearchResults(void) const
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults.size();
  }

FlightStatusSearchResultJSON * FlightStatusCommandJSON::TypeNativeDataJSON::elementOfFlightStatusSearchResults(size_t element_num)
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults[element_num];
  }

const FlightStatusSearchResultJSON * FlightStatusCommandJSON::TypeNativeDataJSON::elementOfFlightStatusSearchResults(size_t element_num) const
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults[element_num];
  }

std::vector< FlightStatusSearchResultJSON * > FlightStatusCommandJSON::TypeNativeDataJSON::getFlightStatusSearchResults(void)
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults;
  }

const std::vector< FlightStatusSearchResultJSON * > FlightStatusCommandJSON::TypeNativeDataJSON::getFlightStatusSearchResults(void) const
  {
    assert(flagHasFlightStatusSearchResults);
    return storeFlightStatusSearchResults;
  }

FlightStatusCommandJSON::FlightStatusCommandJSON(const FlightStatusCommandJSON &)
  {
    assert(false);
  }

FlightStatusCommandJSON &FlightStatusCommandJSON::operator=(const FlightStatusCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *FlightStatusCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void FlightStatusCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

FlightStatusCommandJSON::FlightStatusCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

FlightStatusCommandJSON::~FlightStatusCommandJSON(void)
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

const char *FlightStatusCommandJSON::getCommandKind(void) const
  {
    return "FlightStatusCommand";
  }

bool FlightStatusCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

FlightStatusCommandJSON::TypeNativeDataJSON * FlightStatusCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const FlightStatusCommandJSON::TypeNativeDataJSON * FlightStatusCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

FlightStatusCommandJSON::TypeNativeDataJSON *FlightStatusCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
FlightStatusCommandJSON *FlightStatusCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatusCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatusCommandJSON>, FlightStatusCommandJSON *, bool> generator("Type FlightStatusCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
