/* file "FlightTimesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightTimesJSON.h"

#include "FlightTimesJSON.h"


FlightTimesJSON::FlightTimesJSON(const FlightTimesJSON &)
  {
    assert(false);
  }

FlightTimesJSON &FlightTimesJSON::operator=(const FlightTimesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightTimesJSON::fromJSONLocal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocal(convert_classy);
    convert_classy->remove_reference();
  }

void FlightTimesJSON::fromJSONUTC(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUTC(convert_classy);
    convert_classy->remove_reference();
  }

FlightTimesJSON::FlightTimesJSON(void) :
        flagHasLocal(false),
        flagHasUTC(false)
  {
    extraIndex = create_string_index();
  }

FlightTimesJSON::~FlightTimesJSON(void)
  {
    if (flagHasLocal)
      {
        storeLocal->remove_reference();
      }
    if (flagHasUTC)
      {
        storeUTC->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightTimesJSON::hasLocal(void) const
  {
    return flagHasLocal;
  }

DateAndOrTimeJSON * FlightTimesJSON::getLocal(void)
  {
    assert(flagHasLocal);
    return storeLocal;
  }

const DateAndOrTimeJSON * FlightTimesJSON::getLocal(void) const
  {
    assert(flagHasLocal);
    return storeLocal;
  }

bool FlightTimesJSON::hasUTC(void) const
  {
    return flagHasUTC;
  }

DateAndOrTimeJSON * FlightTimesJSON::getUTC(void)
  {
    assert(flagHasUTC);
    return storeUTC;
  }

const DateAndOrTimeJSON * FlightTimesJSON::getUTC(void) const
  {
    assert(flagHasUTC);
    return storeUTC;
  }

FlightTimesJSON *FlightTimesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightTimesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool> generator("Type FlightTimes", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
