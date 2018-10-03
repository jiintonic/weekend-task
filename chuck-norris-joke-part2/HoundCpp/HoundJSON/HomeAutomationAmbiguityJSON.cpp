/* file "HomeAutomationAmbiguityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationAmbiguityJSON.h"

#include "HomeAutomationAmbiguityJSON.h"


HomeAutomationAmbiguityJSON::HomeAutomationAmbiguityJSON(const HomeAutomationAmbiguityJSON &)
  {
    assert(false);
  }

HomeAutomationAmbiguityJSON &HomeAutomationAmbiguityJSON::operator=(const HomeAutomationAmbiguityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationAmbiguityJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of HomeAutomationAmbiguityJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void HomeAutomationAmbiguityJSON::fromJSONGroups(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationGroupListJSON *convert_classy = HomeAutomationGroupListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGroups(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationAmbiguityJSON::fromJSONGroupAmbiguityFlags(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GroupAmbiguityFlags of HomeAutomationAmbiguityJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field GroupAmbiguityFlags of HomeAutomationAmbiguityJSON has too few elements.");
    std::vector< HomeAutomationAmbiguityFlagsJSON * > vector_GroupAmbiguityFlags1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationAmbiguityFlagsJSON *convert_classy = HomeAutomationAmbiguityFlagsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_GroupAmbiguityFlags1[num1] = convert_classy;
      }
    assert(vector_GroupAmbiguityFlags1.size() >= 1);
    initGroupAmbiguityFlags();
    for (size_t num3 = 0; num3 < vector_GroupAmbiguityFlags1.size(); ++num3)
        appendGroupAmbiguityFlags(vector_GroupAmbiguityFlags1[num3]);
    for (size_t num1 = 0; num1 < vector_GroupAmbiguityFlags1.size(); ++num1)
      {
        vector_GroupAmbiguityFlags1[num1]->remove_reference();
      }
  }

void HomeAutomationAmbiguityJSON::fromJSONDevices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceListJSON *convert_classy = HomeAutomationDeviceListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDevices(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationAmbiguityJSON::fromJSONDeviceAmbiguityFlags(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DeviceAmbiguityFlags of HomeAutomationAmbiguityJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field DeviceAmbiguityFlags of HomeAutomationAmbiguityJSON has too few elements.");
    std::vector< HomeAutomationAmbiguityFlagsJSON * > vector_DeviceAmbiguityFlags1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationAmbiguityFlagsJSON *convert_classy = HomeAutomationAmbiguityFlagsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DeviceAmbiguityFlags1[num1] = convert_classy;
      }
    assert(vector_DeviceAmbiguityFlags1.size() >= 1);
    initDeviceAmbiguityFlags();
    for (size_t num4 = 0; num4 < vector_DeviceAmbiguityFlags1.size(); ++num4)
        appendDeviceAmbiguityFlags(vector_DeviceAmbiguityFlags1[num4]);
    for (size_t num1 = 0; num1 < vector_DeviceAmbiguityFlags1.size(); ++num1)
      {
        vector_DeviceAmbiguityFlags1[num1]->remove_reference();
      }
  }

HomeAutomationAmbiguityJSON::HomeAutomationAmbiguityJSON(void) :
        flagHasName(false),
        flagHasGroups(false),
        flagHasGroupAmbiguityFlags(false),
        flagHasDevices(false),
        flagHasDeviceAmbiguityFlags(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationAmbiguityJSON::~HomeAutomationAmbiguityJSON(void)
  {
    if (flagHasGroups)
      {
        storeGroups->remove_reference();
      }
    if (flagHasGroupAmbiguityFlags)
      {
        for (size_t num7 = 0; num7 < storeGroupAmbiguityFlags.size(); ++num7)
          {
            storeGroupAmbiguityFlags[num7]->remove_reference();
          }
      }
    if (flagHasDevices)
      {
        storeDevices->remove_reference();
      }
    if (flagHasDeviceAmbiguityFlags)
      {
        for (size_t num8 = 0; num8 < storeDeviceAmbiguityFlags.size(); ++num8)
          {
            storeDeviceAmbiguityFlags[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationAmbiguityJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string HomeAutomationAmbiguityJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string HomeAutomationAmbiguityJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool HomeAutomationAmbiguityJSON::hasGroups(void) const
  {
    return flagHasGroups;
  }

HomeAutomationGroupListJSON * HomeAutomationAmbiguityJSON::getGroups(void)
  {
    assert(flagHasGroups);
    return storeGroups;
  }

const HomeAutomationGroupListJSON * HomeAutomationAmbiguityJSON::getGroups(void) const
  {
    assert(flagHasGroups);
    return storeGroups;
  }

bool HomeAutomationAmbiguityJSON::hasGroupAmbiguityFlags(void) const
  {
    return flagHasGroupAmbiguityFlags;
  }

size_t HomeAutomationAmbiguityJSON::countOfGroupAmbiguityFlags(void) const
  {
    assert(flagHasGroupAmbiguityFlags);
    return storeGroupAmbiguityFlags.size();
  }

HomeAutomationAmbiguityFlagsJSON * HomeAutomationAmbiguityJSON::elementOfGroupAmbiguityFlags(size_t element_num)
  {
    assert(flagHasGroupAmbiguityFlags);
    return storeGroupAmbiguityFlags[element_num];
  }

const HomeAutomationAmbiguityFlagsJSON * HomeAutomationAmbiguityJSON::elementOfGroupAmbiguityFlags(size_t element_num) const
  {
    assert(flagHasGroupAmbiguityFlags);
    return storeGroupAmbiguityFlags[element_num];
  }

std::vector< HomeAutomationAmbiguityFlagsJSON * > HomeAutomationAmbiguityJSON::getGroupAmbiguityFlags(void)
  {
    assert(flagHasGroupAmbiguityFlags);
    return storeGroupAmbiguityFlags;
  }

const std::vector< HomeAutomationAmbiguityFlagsJSON * > HomeAutomationAmbiguityJSON::getGroupAmbiguityFlags(void) const
  {
    assert(flagHasGroupAmbiguityFlags);
    return storeGroupAmbiguityFlags;
  }

bool HomeAutomationAmbiguityJSON::hasDevices(void) const
  {
    return flagHasDevices;
  }

HomeAutomationDeviceListJSON * HomeAutomationAmbiguityJSON::getDevices(void)
  {
    assert(flagHasDevices);
    return storeDevices;
  }

const HomeAutomationDeviceListJSON * HomeAutomationAmbiguityJSON::getDevices(void) const
  {
    assert(flagHasDevices);
    return storeDevices;
  }

bool HomeAutomationAmbiguityJSON::hasDeviceAmbiguityFlags(void) const
  {
    return flagHasDeviceAmbiguityFlags;
  }

size_t HomeAutomationAmbiguityJSON::countOfDeviceAmbiguityFlags(void) const
  {
    assert(flagHasDeviceAmbiguityFlags);
    return storeDeviceAmbiguityFlags.size();
  }

HomeAutomationAmbiguityFlagsJSON * HomeAutomationAmbiguityJSON::elementOfDeviceAmbiguityFlags(size_t element_num)
  {
    assert(flagHasDeviceAmbiguityFlags);
    return storeDeviceAmbiguityFlags[element_num];
  }

const HomeAutomationAmbiguityFlagsJSON * HomeAutomationAmbiguityJSON::elementOfDeviceAmbiguityFlags(size_t element_num) const
  {
    assert(flagHasDeviceAmbiguityFlags);
    return storeDeviceAmbiguityFlags[element_num];
  }

std::vector< HomeAutomationAmbiguityFlagsJSON * > HomeAutomationAmbiguityJSON::getDeviceAmbiguityFlags(void)
  {
    assert(flagHasDeviceAmbiguityFlags);
    return storeDeviceAmbiguityFlags;
  }

const std::vector< HomeAutomationAmbiguityFlagsJSON * > HomeAutomationAmbiguityJSON::getDeviceAmbiguityFlags(void) const
  {
    assert(flagHasDeviceAmbiguityFlags);
    return storeDeviceAmbiguityFlags;
  }

HomeAutomationAmbiguityJSON *HomeAutomationAmbiguityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationAmbiguityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationAmbiguityJSON>, HomeAutomationAmbiguityJSON *, bool> generator("Type HomeAutomationAmbiguity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
