/* file "FlightStatsFlightStatusResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsFlightStatusResponseJSON.h"

#include "FlightStatsFlightStatusResponseJSON.h"


FlightStatsFlightStatusResponseJSON::FlightStatsFlightStatusResponseJSON(const FlightStatsFlightStatusResponseJSON &)
  {
    assert(false);
  }

FlightStatsFlightStatusResponseJSON &FlightStatsFlightStatusResponseJSON::operator=(const FlightStatsFlightStatusResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsFlightStatusResponseJSON::fromJSONerror(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsErrorJSON *convert_classy = FlightStatsErrorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    seterror(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusResponseJSON::fromJSONflightStatuses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field flightStatuses of FlightStatsFlightStatusResponseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightStatsFlightStatusJSON * > vector_flightStatuses1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightStatsFlightStatusJSON *convert_classy = FlightStatsFlightStatusJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_flightStatuses1[num1] = convert_classy;
      }
    initflightStatuses();
    for (size_t num2 = 0; num2 < vector_flightStatuses1.size(); ++num2)
        appendflightStatuses(vector_flightStatuses1[num2]);
    for (size_t num1 = 0; num1 < vector_flightStatuses1.size(); ++num1)
      {
        vector_flightStatuses1[num1]->remove_reference();
      }
  }

FlightStatsFlightStatusResponseJSON::FlightStatsFlightStatusResponseJSON(void) :
        flagHaserror(false),
        flagHasflightStatuses(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsFlightStatusResponseJSON::~FlightStatsFlightStatusResponseJSON(void)
  {
    if (flagHaserror)
      {
        storeerror->remove_reference();
      }
    if (flagHasflightStatuses)
      {
        for (size_t num4 = 0; num4 < storeflightStatuses.size(); ++num4)
          {
            storeflightStatuses[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsFlightStatusResponseJSON::haserror(void) const
  {
    return flagHaserror;
  }

FlightStatsErrorJSON * FlightStatsFlightStatusResponseJSON::geterror(void)
  {
    assert(flagHaserror);
    return storeerror;
  }

const FlightStatsErrorJSON * FlightStatsFlightStatusResponseJSON::geterror(void) const
  {
    assert(flagHaserror);
    return storeerror;
  }

bool FlightStatsFlightStatusResponseJSON::hasflightStatuses(void) const
  {
    return flagHasflightStatuses;
  }

size_t FlightStatsFlightStatusResponseJSON::countOfflightStatuses(void) const
  {
    assert(flagHasflightStatuses);
    return storeflightStatuses.size();
  }

FlightStatsFlightStatusJSON * FlightStatsFlightStatusResponseJSON::elementOfflightStatuses(size_t element_num)
  {
    assert(flagHasflightStatuses);
    return storeflightStatuses[element_num];
  }

const FlightStatsFlightStatusJSON * FlightStatsFlightStatusResponseJSON::elementOfflightStatuses(size_t element_num) const
  {
    assert(flagHasflightStatuses);
    return storeflightStatuses[element_num];
  }

std::vector< FlightStatsFlightStatusJSON * > FlightStatsFlightStatusResponseJSON::getflightStatuses(void)
  {
    assert(flagHasflightStatuses);
    return storeflightStatuses;
  }

const std::vector< FlightStatsFlightStatusJSON * > FlightStatsFlightStatusResponseJSON::getflightStatuses(void) const
  {
    assert(flagHasflightStatuses);
    return storeflightStatuses;
  }

FlightStatsFlightStatusResponseJSON *FlightStatsFlightStatusResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsFlightStatusResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsFlightStatusResponseJSON>, FlightStatsFlightStatusResponseJSON *, bool> generator("Type FlightStatsFlightStatusResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
