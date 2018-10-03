/* file "HomeAutomationSetTemperatureCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationSetTemperatureCommandJSON.h"

#include "HomeAutomationSetTemperatureCommandJSON.h"


HomeAutomationSetTemperatureCommandJSON::HomeAutomationSetTemperatureCommandJSON(const HomeAutomationSetTemperatureCommandJSON &)
  {
    assert(false);
  }

HomeAutomationSetTemperatureCommandJSON &HomeAutomationSetTemperatureCommandJSON::operator=(const HomeAutomationSetTemperatureCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationSetTemperatureCommandJSON::extraTemperatureToJSON(void) const
  {
    JSONValueHandler handler_Temperature;
    storeTemperature->write_as_json(&handler_Temperature);
    handler_Temperature.result->add_reference();
    return handler_Temperature.result;
  }

void HomeAutomationSetTemperatureCommandJSON::fromJSONTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationTemperatureJSON *convert_classy = HomeAutomationTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemperature(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationSetTemperatureCommandJSON::HomeAutomationSetTemperatureCommandJSON(void) :
        flagHasTemperature(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationSetTemperatureCommandJSON::~HomeAutomationSetTemperatureCommandJSON(void)
  {
    if (flagHasTemperature)
      {
        storeTemperature->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationSetTemperatureCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationSetTemperatureCommand";
  }

bool HomeAutomationSetTemperatureCommandJSON::hasTemperature(void) const
  {
    return flagHasTemperature;
  }

HomeAutomationTemperatureJSON * HomeAutomationSetTemperatureCommandJSON::getTemperature(void)
  {
    assert(flagHasTemperature);
    return storeTemperature;
  }

const HomeAutomationTemperatureJSON * HomeAutomationSetTemperatureCommandJSON::getTemperature(void) const
  {
    assert(flagHasTemperature);
    return storeTemperature;
  }

HomeAutomationSetTemperatureCommandJSON *HomeAutomationSetTemperatureCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationSetTemperatureCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetTemperatureCommandJSON>, HomeAutomationSetTemperatureCommandJSON *, bool> generator("Type HomeAutomationSetTemperatureCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
