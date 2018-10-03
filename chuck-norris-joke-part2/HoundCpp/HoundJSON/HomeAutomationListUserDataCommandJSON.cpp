/* file "HomeAutomationListUserDataCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationListUserDataCommandJSON.h"

#include "HomeAutomationListUserDataCommandJSON.h"


HomeAutomationListUserDataCommandJSON::HomeAutomationListUserDataCommandJSON(const HomeAutomationListUserDataCommandJSON &)
  {
    assert(false);
  }

HomeAutomationListUserDataCommandJSON &HomeAutomationListUserDataCommandJSON::operator=(const HomeAutomationListUserDataCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationListUserDataCommandJSON::extraDeviceSpecifierToJSON(void) const
  {
    JSONValueHandler handler_DeviceSpecifier;
    storeDeviceSpecifier->write_as_json(&handler_DeviceSpecifier);
    handler_DeviceSpecifier.result->add_reference();
    return handler_DeviceSpecifier.result;
  }

void HomeAutomationListUserDataCommandJSON::fromJSONDeviceSpecifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceSpecifierJSON *convert_classy = HomeAutomationDeviceSpecifierJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeviceSpecifier(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationListUserDataCommandJSON::HomeAutomationListUserDataCommandJSON(void) :
        flagHasDeviceSpecifier(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationListUserDataCommandJSON::~HomeAutomationListUserDataCommandJSON(void)
  {
    if (flagHasDeviceSpecifier)
      {
        storeDeviceSpecifier->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationListUserDataCommandJSON::getCommandKind(void) const
  {
    return "HomeAutomationListUserDataCommand";
  }

bool HomeAutomationListUserDataCommandJSON::hasDeviceSpecifier(void) const
  {
    return flagHasDeviceSpecifier;
  }

HomeAutomationDeviceSpecifierJSON * HomeAutomationListUserDataCommandJSON::getDeviceSpecifier(void)
  {
    assert(flagHasDeviceSpecifier);
    return storeDeviceSpecifier;
  }

const HomeAutomationDeviceSpecifierJSON * HomeAutomationListUserDataCommandJSON::getDeviceSpecifier(void) const
  {
    assert(flagHasDeviceSpecifier);
    return storeDeviceSpecifier;
  }

HomeAutomationListUserDataCommandJSON *HomeAutomationListUserDataCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationListUserDataCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationListUserDataCommandJSON>, HomeAutomationListUserDataCommandJSON *, bool> generator("Type HomeAutomationListUserDataCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
