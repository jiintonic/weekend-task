/* file "HomeAutomationTurboControlCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationTurboControlCommandJSON.h"

#include "HomeAutomationTurboControlCommandJSON.h"


HomeAutomationTurboControlCommandJSON::HomeAutomationTurboControlCommandJSON(const HomeAutomationTurboControlCommandJSON &)
  {
    assert(false);
  }

HomeAutomationTurboControlCommandJSON &HomeAutomationTurboControlCommandJSON::operator=(const HomeAutomationTurboControlCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationTurboControlCommandJSON::extraTurboModeToJSON(void) const
  {
    JSONValueHandler handler_TurboMode;
    storeTurboMode->write_as_json(&handler_TurboMode);
    handler_TurboMode.result->add_reference();
    return handler_TurboMode.result;
  }

void HomeAutomationTurboControlCommandJSON::fromJSONTurboMode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationTurboModeJSON *convert_classy = HomeAutomationTurboModeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTurboMode(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationTurboControlCommandJSON::HomeAutomationTurboControlCommandJSON(void) :
        flagHasTurboMode(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationTurboControlCommandJSON::~HomeAutomationTurboControlCommandJSON(void)
  {
    if (flagHasTurboMode)
      {
        storeTurboMode->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationTurboControlCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationTurboControlCommand";
  }

bool HomeAutomationTurboControlCommandJSON::hasTurboMode(void) const
  {
    return flagHasTurboMode;
  }

HomeAutomationTurboModeJSON * HomeAutomationTurboControlCommandJSON::getTurboMode(void)
  {
    assert(flagHasTurboMode);
    return storeTurboMode;
  }

const HomeAutomationTurboModeJSON * HomeAutomationTurboControlCommandJSON::getTurboMode(void) const
  {
    assert(flagHasTurboMode);
    return storeTurboMode;
  }

HomeAutomationTurboModeJSON::TypeValue HomeAutomationTurboControlCommandJSON::getTurboModeValue(void)
  {
    return getTurboMode()->getValue();
  }

const HomeAutomationTurboModeJSON::TypeValue HomeAutomationTurboControlCommandJSON::getTurboModeValue(void) const
  {
    return getTurboMode()->getValue();
  }

const char *HomeAutomationTurboControlCommandJSON::getTurboModeAsChars(void) const
  {
    return getTurboMode()->getValueAsChars();
  }

std::string HomeAutomationTurboControlCommandJSON::getTurboModeAsString(void) const
  {
    return getTurboMode()->getValueAsString();
  }

HomeAutomationTurboControlCommandJSON *HomeAutomationTurboControlCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationTurboControlCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationTurboControlCommandJSON>, HomeAutomationTurboControlCommandJSON *, bool> generator("Type HomeAutomationTurboControlCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
