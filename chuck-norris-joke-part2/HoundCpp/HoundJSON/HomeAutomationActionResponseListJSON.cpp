/* file "HomeAutomationActionResponseListJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationActionResponseListJSON.h"

#include "HomeAutomationActionResponseListJSON.h"


HomeAutomationActionResponseListJSON::TypeDevicesJSON::TypeDevicesJSON(const TypeDevicesJSON &)
  {
    assert(false);
  }

HomeAutomationActionResponseListJSON::TypeDevicesJSON &HomeAutomationActionResponseListJSON::TypeDevicesJSON::operator=(const TypeDevicesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationActionResponseListJSON::TypeDevicesJSON::fromJSONDevice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceJSON *convert_classy = HomeAutomationDeviceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDevice(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResponseListJSON::TypeDevicesJSON::fromJSONResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationActionResponseJSON *convert_classy = HomeAutomationActionResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResponse(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationActionResponseListJSON::TypeDevicesJSON::TypeDevicesJSON(void) :
        flagHasDevice(false),
        flagHasResponse(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationActionResponseListJSON::TypeDevicesJSON::~TypeDevicesJSON(void)
  {
    if (flagHasDevice)
      {
        storeDevice->remove_reference();
      }
    if (flagHasResponse)
      {
        storeResponse->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationActionResponseListJSON::TypeDevicesJSON::hasDevice(void) const
  {
    return flagHasDevice;
  }

HomeAutomationDeviceJSON * HomeAutomationActionResponseListJSON::TypeDevicesJSON::getDevice(void)
  {
    assert(flagHasDevice);
    return storeDevice;
  }

const HomeAutomationDeviceJSON * HomeAutomationActionResponseListJSON::TypeDevicesJSON::getDevice(void) const
  {
    assert(flagHasDevice);
    return storeDevice;
  }

bool HomeAutomationActionResponseListJSON::TypeDevicesJSON::hasResponse(void) const
  {
    return flagHasResponse;
  }

HomeAutomationActionResponseJSON * HomeAutomationActionResponseListJSON::TypeDevicesJSON::getResponse(void)
  {
    assert(flagHasResponse);
    return storeResponse;
  }

const HomeAutomationActionResponseJSON * HomeAutomationActionResponseListJSON::TypeDevicesJSON::getResponse(void) const
  {
    assert(flagHasResponse);
    return storeResponse;
  }

HomeAutomationActionResponseListJSON::TypeGroupsJSON::TypeGroupsJSON(const TypeGroupsJSON &)
  {
    assert(false);
  }

HomeAutomationActionResponseListJSON::TypeGroupsJSON &HomeAutomationActionResponseListJSON::TypeGroupsJSON::operator=(const TypeGroupsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationActionResponseListJSON::TypeGroupsJSON::fromJSONGroup(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationGroupJSON *convert_classy = HomeAutomationGroupJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGroup(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResponseListJSON::TypeGroupsJSON::fromJSONResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationActionResponseJSON *convert_classy = HomeAutomationActionResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResponse(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationActionResponseListJSON::TypeGroupsJSON::TypeGroupsJSON(void) :
        flagHasGroup(false),
        flagHasResponse(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationActionResponseListJSON::TypeGroupsJSON::~TypeGroupsJSON(void)
  {
    if (flagHasGroup)
      {
        storeGroup->remove_reference();
      }
    if (flagHasResponse)
      {
        storeResponse->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationActionResponseListJSON::TypeGroupsJSON::hasGroup(void) const
  {
    return flagHasGroup;
  }

HomeAutomationGroupJSON * HomeAutomationActionResponseListJSON::TypeGroupsJSON::getGroup(void)
  {
    assert(flagHasGroup);
    return storeGroup;
  }

const HomeAutomationGroupJSON * HomeAutomationActionResponseListJSON::TypeGroupsJSON::getGroup(void) const
  {
    assert(flagHasGroup);
    return storeGroup;
  }

bool HomeAutomationActionResponseListJSON::TypeGroupsJSON::hasResponse(void) const
  {
    return flagHasResponse;
  }

HomeAutomationActionResponseJSON * HomeAutomationActionResponseListJSON::TypeGroupsJSON::getResponse(void)
  {
    assert(flagHasResponse);
    return storeResponse;
  }

const HomeAutomationActionResponseJSON * HomeAutomationActionResponseListJSON::TypeGroupsJSON::getResponse(void) const
  {
    assert(flagHasResponse);
    return storeResponse;
  }

HomeAutomationActionResponseListJSON::HomeAutomationActionResponseListJSON(const HomeAutomationActionResponseListJSON &)
  {
    assert(false);
  }

HomeAutomationActionResponseListJSON &HomeAutomationActionResponseListJSON::operator=(const HomeAutomationActionResponseListJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationActionResponseListJSON::fromJSONDevices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Devices of HomeAutomationActionResponseListJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeDevicesJSON * > vector_Devices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeDevicesJSON *convert_classy = TypeDevicesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Devices1[num1] = convert_classy;
      }
    initDevices();
    for (size_t num3 = 0; num3 < vector_Devices1.size(); ++num3)
        appendDevices(vector_Devices1[num3]);
    for (size_t num1 = 0; num1 < vector_Devices1.size(); ++num1)
      {
        vector_Devices1[num1]->remove_reference();
      }
  }

void HomeAutomationActionResponseListJSON::fromJSONGroups(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Groups of HomeAutomationActionResponseListJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeGroupsJSON * > vector_Groups1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeGroupsJSON *convert_classy = TypeGroupsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Groups1[num1] = convert_classy;
      }
    initGroups();
    for (size_t num4 = 0; num4 < vector_Groups1.size(); ++num4)
        appendGroups(vector_Groups1[num4]);
    for (size_t num1 = 0; num1 < vector_Groups1.size(); ++num1)
      {
        vector_Groups1[num1]->remove_reference();
      }
  }

HomeAutomationActionResponseListJSON::HomeAutomationActionResponseListJSON(void) :
        flagHasDevices(false),
        flagHasGroups(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationActionResponseListJSON::~HomeAutomationActionResponseListJSON(void)
  {
    if (flagHasDevices)
      {
        for (size_t num7 = 0; num7 < storeDevices.size(); ++num7)
          {
            storeDevices[num7]->remove_reference();
          }
      }
    if (flagHasGroups)
      {
        for (size_t num8 = 0; num8 < storeGroups.size(); ++num8)
          {
            storeGroups[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationActionResponseListJSON::hasDevices(void) const
  {
    return flagHasDevices;
  }

size_t HomeAutomationActionResponseListJSON::countOfDevices(void) const
  {
    assert(flagHasDevices);
    return storeDevices.size();
  }

HomeAutomationActionResponseListJSON::TypeDevicesJSON * HomeAutomationActionResponseListJSON::elementOfDevices(size_t element_num)
  {
    assert(flagHasDevices);
    return storeDevices[element_num];
  }

const HomeAutomationActionResponseListJSON::TypeDevicesJSON * HomeAutomationActionResponseListJSON::elementOfDevices(size_t element_num) const
  {
    assert(flagHasDevices);
    return storeDevices[element_num];
  }

std::vector< HomeAutomationActionResponseListJSON::TypeDevicesJSON * > HomeAutomationActionResponseListJSON::getDevices(void)
  {
    assert(flagHasDevices);
    return storeDevices;
  }

const std::vector< HomeAutomationActionResponseListJSON::TypeDevicesJSON * > HomeAutomationActionResponseListJSON::getDevices(void) const
  {
    assert(flagHasDevices);
    return storeDevices;
  }

bool HomeAutomationActionResponseListJSON::hasGroups(void) const
  {
    return flagHasGroups;
  }

size_t HomeAutomationActionResponseListJSON::countOfGroups(void) const
  {
    assert(flagHasGroups);
    return storeGroups.size();
  }

HomeAutomationActionResponseListJSON::TypeGroupsJSON * HomeAutomationActionResponseListJSON::elementOfGroups(size_t element_num)
  {
    assert(flagHasGroups);
    return storeGroups[element_num];
  }

const HomeAutomationActionResponseListJSON::TypeGroupsJSON * HomeAutomationActionResponseListJSON::elementOfGroups(size_t element_num) const
  {
    assert(flagHasGroups);
    return storeGroups[element_num];
  }

std::vector< HomeAutomationActionResponseListJSON::TypeGroupsJSON * > HomeAutomationActionResponseListJSON::getGroups(void)
  {
    assert(flagHasGroups);
    return storeGroups;
  }

const std::vector< HomeAutomationActionResponseListJSON::TypeGroupsJSON * > HomeAutomationActionResponseListJSON::getGroups(void) const
  {
    assert(flagHasGroups);
    return storeGroups;
  }

HomeAutomationActionResponseListJSON::TypeDevicesJSON *HomeAutomationActionResponseListJSON::TypeDevicesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDevicesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDevicesJSON>, TypeDevicesJSON *, bool> generator("Type TypeDevices", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HomeAutomationActionResponseListJSON::TypeGroupsJSON *HomeAutomationActionResponseListJSON::TypeGroupsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeGroupsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeGroupsJSON>, TypeGroupsJSON *, bool> generator("Type TypeGroups", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HomeAutomationActionResponseListJSON *HomeAutomationActionResponseListJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationActionResponseListJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResponseListJSON>, HomeAutomationActionResponseListJSON *, bool> generator("Type HomeAutomationActionResponseList", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
