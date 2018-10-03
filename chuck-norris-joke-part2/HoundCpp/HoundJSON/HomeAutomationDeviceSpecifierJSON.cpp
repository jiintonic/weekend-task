/* file "HomeAutomationDeviceSpecifierJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationDeviceSpecifierJSON.h"

#include "HomeAutomationDeviceSpecifierJSON.h"


HomeAutomationDeviceSpecifierJSON::HomeAutomationDeviceSpecifierJSON(const HomeAutomationDeviceSpecifierJSON &)
  {
    assert(false);
  }

HomeAutomationDeviceSpecifierJSON &HomeAutomationDeviceSpecifierJSON::operator=(const HomeAutomationDeviceSpecifierJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationDeviceSpecifierJSON::fromJSONSpecifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationSpecifierJSON *convert_classy = HomeAutomationSpecifierJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSpecifier(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationDeviceSpecifierJSON::fromJSONGroups(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationGroupListJSON *convert_classy = HomeAutomationGroupListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGroups(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationDeviceSpecifierJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceTypeJSON *convert_classy = HomeAutomationDeviceTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationDeviceSpecifierJSON::fromJSONDevices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceListJSON *convert_classy = HomeAutomationDeviceListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDevices(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationDeviceSpecifierJSON::HomeAutomationDeviceSpecifierJSON(void) :
        flagHasSpecifier(false),
        flagHasGroups(false),
        flagHasType(false),
        flagHasDevices(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationDeviceSpecifierJSON::~HomeAutomationDeviceSpecifierJSON(void)
  {
    if (flagHasSpecifier)
      {
        storeSpecifier->remove_reference();
      }
    if (flagHasGroups)
      {
        storeGroups->remove_reference();
      }
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    if (flagHasDevices)
      {
        storeDevices->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationDeviceSpecifierJSON::hasSpecifier(void) const
  {
    return flagHasSpecifier;
  }

HomeAutomationSpecifierJSON * HomeAutomationDeviceSpecifierJSON::getSpecifier(void)
  {
    assert(flagHasSpecifier);
    return storeSpecifier;
  }

const HomeAutomationSpecifierJSON * HomeAutomationDeviceSpecifierJSON::getSpecifier(void) const
  {
    assert(flagHasSpecifier);
    return storeSpecifier;
  }

HomeAutomationSpecifierJSON::TypeValue HomeAutomationDeviceSpecifierJSON::getSpecifierValue(void)
  {
    return getSpecifier()->getValue();
  }

const HomeAutomationSpecifierJSON::TypeValue HomeAutomationDeviceSpecifierJSON::getSpecifierValue(void) const
  {
    return getSpecifier()->getValue();
  }

const char *HomeAutomationDeviceSpecifierJSON::getSpecifierAsChars(void) const
  {
    return getSpecifier()->getValueAsChars();
  }

std::string HomeAutomationDeviceSpecifierJSON::getSpecifierAsString(void) const
  {
    return getSpecifier()->getValueAsString();
  }

bool HomeAutomationDeviceSpecifierJSON::hasGroups(void) const
  {
    return flagHasGroups;
  }

HomeAutomationGroupListJSON * HomeAutomationDeviceSpecifierJSON::getGroups(void)
  {
    assert(flagHasGroups);
    return storeGroups;
  }

const HomeAutomationGroupListJSON * HomeAutomationDeviceSpecifierJSON::getGroups(void) const
  {
    assert(flagHasGroups);
    return storeGroups;
  }

bool HomeAutomationDeviceSpecifierJSON::hasType(void) const
  {
    return flagHasType;
  }

HomeAutomationDeviceTypeJSON * HomeAutomationDeviceSpecifierJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const HomeAutomationDeviceTypeJSON * HomeAutomationDeviceSpecifierJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

HomeAutomationDeviceTypeJSON::TypeValue HomeAutomationDeviceSpecifierJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const HomeAutomationDeviceTypeJSON::TypeValue HomeAutomationDeviceSpecifierJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *HomeAutomationDeviceSpecifierJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string HomeAutomationDeviceSpecifierJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

bool HomeAutomationDeviceSpecifierJSON::hasDevices(void) const
  {
    return flagHasDevices;
  }

HomeAutomationDeviceListJSON * HomeAutomationDeviceSpecifierJSON::getDevices(void)
  {
    assert(flagHasDevices);
    return storeDevices;
  }

const HomeAutomationDeviceListJSON * HomeAutomationDeviceSpecifierJSON::getDevices(void) const
  {
    assert(flagHasDevices);
    return storeDevices;
  }

HomeAutomationDeviceSpecifierJSON *HomeAutomationDeviceSpecifierJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationDeviceSpecifierJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceSpecifierJSON>, HomeAutomationDeviceSpecifierJSON *, bool> generator("Type HomeAutomationDeviceSpecifier", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
