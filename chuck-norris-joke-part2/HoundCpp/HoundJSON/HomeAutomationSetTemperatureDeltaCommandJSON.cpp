/* file "HomeAutomationSetTemperatureDeltaCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSetTemperatureDeltaCommandJSON.h"

#include "HomeAutomationSetTemperatureDeltaCommandJSON.h"


HomeAutomationSetTemperatureDeltaCommandJSON::HomeAutomationSetTemperatureDeltaCommandJSON(const HomeAutomationSetTemperatureDeltaCommandJSON &)
  {
    assert(false);
  }

HomeAutomationSetTemperatureDeltaCommandJSON &HomeAutomationSetTemperatureDeltaCommandJSON::operator=(const HomeAutomationSetTemperatureDeltaCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationSetTemperatureDeltaCommandJSON::extraTemperatureDeltaToJSON(void) const
  {
    JSONValueHandler handler_TemperatureDelta;
    storeTemperatureDelta->write_as_json(&handler_TemperatureDelta);
    handler_TemperatureDelta.result->add_reference();
    return handler_TemperatureDelta.result;
  }

void HomeAutomationSetTemperatureDeltaCommandJSON::fromJSONTemperatureDelta(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationTemperatureJSON *convert_classy = HomeAutomationTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemperatureDelta(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationSetTemperatureDeltaCommandJSON::HomeAutomationSetTemperatureDeltaCommandJSON(void) :
        flagHasTemperatureDelta(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationSetTemperatureDeltaCommandJSON::~HomeAutomationSetTemperatureDeltaCommandJSON(void)
  {
    if (flagHasTemperatureDelta)
      {
        storeTemperatureDelta->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationSetTemperatureDeltaCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationSetTemperatureDeltaCommand";
  }

bool HomeAutomationSetTemperatureDeltaCommandJSON::hasTemperatureDelta(void) const
  {
    return flagHasTemperatureDelta;
  }

HomeAutomationTemperatureJSON * HomeAutomationSetTemperatureDeltaCommandJSON::getTemperatureDelta(void)
  {
    assert(flagHasTemperatureDelta);
    return storeTemperatureDelta;
  }

const HomeAutomationTemperatureJSON * HomeAutomationSetTemperatureDeltaCommandJSON::getTemperatureDelta(void) const
  {
    assert(flagHasTemperatureDelta);
    return storeTemperatureDelta;
  }

HomeAutomationSetTemperatureDeltaCommandJSON *HomeAutomationSetTemperatureDeltaCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSetTemperatureDeltaCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetTemperatureDeltaCommandJSON>, HomeAutomationSetTemperatureDeltaCommandJSON *, bool> generator("Type HomeAutomationSetTemperatureDeltaCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
