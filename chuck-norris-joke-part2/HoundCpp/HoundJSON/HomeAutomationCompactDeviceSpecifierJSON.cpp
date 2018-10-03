/* file "HomeAutomationCompactDeviceSpecifierJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationCompactDeviceSpecifierJSON.h"

#include "HomeAutomationCompactDeviceSpecifierJSON.h"


HomeAutomationCompactDeviceSpecifierJSON::HomeAutomationCompactDeviceSpecifierJSON(const HomeAutomationCompactDeviceSpecifierJSON &)
  {
    assert(false);
  }

HomeAutomationCompactDeviceSpecifierJSON &HomeAutomationCompactDeviceSpecifierJSON::operator=(const HomeAutomationCompactDeviceSpecifierJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONSpecifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationSpecifierJSON *convert_classy = HomeAutomationSpecifierJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSpecifier(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONGroupItems(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GroupItems of HomeAutomationCompactDeviceSpecifierJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field GroupItems of HomeAutomationCompactDeviceSpecifierJSON has too few elements.");
    std::vector< HomeAutomationGroupParsingItemJSON * > vector_GroupItems1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationGroupParsingItemJSON *convert_classy = HomeAutomationGroupParsingItemJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_GroupItems1[num1] = convert_classy;
      }
    assert(vector_GroupItems1.size() >= 1);
    initGroupItems();
    for (size_t num5 = 0; num5 < vector_GroupItems1.size(); ++num5)
        appendGroupItems(vector_GroupItems1[num5]);
    for (size_t num1 = 0; num1 < vector_GroupItems1.size(); ++num1)
      {
        vector_GroupItems1[num1]->remove_reference();
      }
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONDeviceItems(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DeviceItems of HomeAutomationCompactDeviceSpecifierJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field DeviceItems of HomeAutomationCompactDeviceSpecifierJSON has too few elements.");
    std::vector< HomeAutomationDeviceParsingItemJSON * > vector_DeviceItems1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationDeviceParsingItemJSON *convert_classy = HomeAutomationDeviceParsingItemJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DeviceItems1[num1] = convert_classy;
      }
    assert(vector_DeviceItems1.size() >= 1);
    initDeviceItems();
    for (size_t num6 = 0; num6 < vector_DeviceItems1.size(); ++num6)
        appendDeviceItems(vector_DeviceItems1[num6]);
    for (size_t num1 = 0; num1 < vector_DeviceItems1.size(); ++num1)
      {
        vector_DeviceItems1[num1]->remove_reference();
      }
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONExcludedGroupItems(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ExcludedGroupItems of HomeAutomationCompactDeviceSpecifierJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ExcludedGroupItems of HomeAutomationCompactDeviceSpecifierJSON has too few elements.");
    std::vector< HomeAutomationGroupParsingItemJSON * > vector_ExcludedGroupItems1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationGroupParsingItemJSON *convert_classy = HomeAutomationGroupParsingItemJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ExcludedGroupItems1[num1] = convert_classy;
      }
    assert(vector_ExcludedGroupItems1.size() >= 1);
    initExcludedGroupItems();
    for (size_t num7 = 0; num7 < vector_ExcludedGroupItems1.size(); ++num7)
        appendExcludedGroupItems(vector_ExcludedGroupItems1[num7]);
    for (size_t num1 = 0; num1 < vector_ExcludedGroupItems1.size(); ++num1)
      {
        vector_ExcludedGroupItems1[num1]->remove_reference();
      }
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONExcludedDeviceItems(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ExcludedDeviceItems of HomeAutomationCompactDeviceSpecifierJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ExcludedDeviceItems of HomeAutomationCompactDeviceSpecifierJSON has too few elements.");
    std::vector< HomeAutomationDeviceParsingItemJSON * > vector_ExcludedDeviceItems1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationDeviceParsingItemJSON *convert_classy = HomeAutomationDeviceParsingItemJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ExcludedDeviceItems1[num1] = convert_classy;
      }
    assert(vector_ExcludedDeviceItems1.size() >= 1);
    initExcludedDeviceItems();
    for (size_t num8 = 0; num8 < vector_ExcludedDeviceItems1.size(); ++num8)
        appendExcludedDeviceItems(vector_ExcludedDeviceItems1[num8]);
    for (size_t num1 = 0; num1 < vector_ExcludedDeviceItems1.size(); ++num1)
      {
        vector_ExcludedDeviceItems1[num1]->remove_reference();
      }
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceTypeJSON *convert_classy = HomeAutomationDeviceTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONHint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationQueryHintJSON *convert_classy = HomeAutomationQueryHintJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHint(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONUnambiguousGroups(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationGroupListJSON *convert_classy = HomeAutomationGroupListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUnambiguousGroups(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationCompactDeviceSpecifierJSON::fromJSONUnambiguousDevices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceListJSON *convert_classy = HomeAutomationDeviceListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUnambiguousDevices(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationCompactDeviceSpecifierJSON::HomeAutomationCompactDeviceSpecifierJSON(void) :
        flagHasSpecifier(false),
        flagHasGroupItems(false),
        flagHasDeviceItems(false),
        flagHasExcludedGroupItems(false),
        flagHasExcludedDeviceItems(false),
        flagHasType(false),
        flagHasHint(false),
        flagHasUnambiguousGroups(false),
        flagHasUnambiguousDevices(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationCompactDeviceSpecifierJSON::~HomeAutomationCompactDeviceSpecifierJSON(void)
  {
    if (flagHasSpecifier)
      {
        storeSpecifier->remove_reference();
      }
    if (flagHasGroupItems)
      {
        for (size_t num13 = 0; num13 < storeGroupItems.size(); ++num13)
          {
            storeGroupItems[num13]->remove_reference();
          }
      }
    if (flagHasDeviceItems)
      {
        for (size_t num14 = 0; num14 < storeDeviceItems.size(); ++num14)
          {
            storeDeviceItems[num14]->remove_reference();
          }
      }
    if (flagHasExcludedGroupItems)
      {
        for (size_t num15 = 0; num15 < storeExcludedGroupItems.size(); ++num15)
          {
            storeExcludedGroupItems[num15]->remove_reference();
          }
      }
    if (flagHasExcludedDeviceItems)
      {
        for (size_t num16 = 0; num16 < storeExcludedDeviceItems.size(); ++num16)
          {
            storeExcludedDeviceItems[num16]->remove_reference();
          }
      }
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    if (flagHasHint)
      {
        storeHint->remove_reference();
      }
    if (flagHasUnambiguousGroups)
      {
        storeUnambiguousGroups->remove_reference();
      }
    if (flagHasUnambiguousDevices)
      {
        storeUnambiguousDevices->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasSpecifier(void) const
  {
    return flagHasSpecifier;
  }

HomeAutomationSpecifierJSON * HomeAutomationCompactDeviceSpecifierJSON::getSpecifier(void)
  {
    assert(flagHasSpecifier);
    return storeSpecifier;
  }

const HomeAutomationSpecifierJSON * HomeAutomationCompactDeviceSpecifierJSON::getSpecifier(void) const
  {
    assert(flagHasSpecifier);
    return storeSpecifier;
  }

HomeAutomationSpecifierJSON::TypeValue HomeAutomationCompactDeviceSpecifierJSON::getSpecifierValue(void)
  {
    return getSpecifier()->getValue();
  }

const HomeAutomationSpecifierJSON::TypeValue HomeAutomationCompactDeviceSpecifierJSON::getSpecifierValue(void) const
  {
    return getSpecifier()->getValue();
  }

const char *HomeAutomationCompactDeviceSpecifierJSON::getSpecifierAsChars(void) const
  {
    return getSpecifier()->getValueAsChars();
  }

std::string HomeAutomationCompactDeviceSpecifierJSON::getSpecifierAsString(void) const
  {
    return getSpecifier()->getValueAsString();
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasGroupItems(void) const
  {
    return flagHasGroupItems;
  }

size_t HomeAutomationCompactDeviceSpecifierJSON::countOfGroupItems(void) const
  {
    assert(flagHasGroupItems);
    return storeGroupItems.size();
  }

HomeAutomationGroupParsingItemJSON * HomeAutomationCompactDeviceSpecifierJSON::elementOfGroupItems(size_t element_num)
  {
    assert(flagHasGroupItems);
    return storeGroupItems[element_num];
  }

const HomeAutomationGroupParsingItemJSON * HomeAutomationCompactDeviceSpecifierJSON::elementOfGroupItems(size_t element_num) const
  {
    assert(flagHasGroupItems);
    return storeGroupItems[element_num];
  }

std::vector< HomeAutomationGroupParsingItemJSON * > HomeAutomationCompactDeviceSpecifierJSON::getGroupItems(void)
  {
    assert(flagHasGroupItems);
    return storeGroupItems;
  }

const std::vector< HomeAutomationGroupParsingItemJSON * > HomeAutomationCompactDeviceSpecifierJSON::getGroupItems(void) const
  {
    assert(flagHasGroupItems);
    return storeGroupItems;
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasDeviceItems(void) const
  {
    return flagHasDeviceItems;
  }

size_t HomeAutomationCompactDeviceSpecifierJSON::countOfDeviceItems(void) const
  {
    assert(flagHasDeviceItems);
    return storeDeviceItems.size();
  }

HomeAutomationDeviceParsingItemJSON * HomeAutomationCompactDeviceSpecifierJSON::elementOfDeviceItems(size_t element_num)
  {
    assert(flagHasDeviceItems);
    return storeDeviceItems[element_num];
  }

const HomeAutomationDeviceParsingItemJSON * HomeAutomationCompactDeviceSpecifierJSON::elementOfDeviceItems(size_t element_num) const
  {
    assert(flagHasDeviceItems);
    return storeDeviceItems[element_num];
  }

std::vector< HomeAutomationDeviceParsingItemJSON * > HomeAutomationCompactDeviceSpecifierJSON::getDeviceItems(void)
  {
    assert(flagHasDeviceItems);
    return storeDeviceItems;
  }

const std::vector< HomeAutomationDeviceParsingItemJSON * > HomeAutomationCompactDeviceSpecifierJSON::getDeviceItems(void) const
  {
    assert(flagHasDeviceItems);
    return storeDeviceItems;
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasExcludedGroupItems(void) const
  {
    return flagHasExcludedGroupItems;
  }

size_t HomeAutomationCompactDeviceSpecifierJSON::countOfExcludedGroupItems(void) const
  {
    assert(flagHasExcludedGroupItems);
    return storeExcludedGroupItems.size();
  }

HomeAutomationGroupParsingItemJSON * HomeAutomationCompactDeviceSpecifierJSON::elementOfExcludedGroupItems(size_t element_num)
  {
    assert(flagHasExcludedGroupItems);
    return storeExcludedGroupItems[element_num];
  }

const HomeAutomationGroupParsingItemJSON * HomeAutomationCompactDeviceSpecifierJSON::elementOfExcludedGroupItems(size_t element_num) const
  {
    assert(flagHasExcludedGroupItems);
    return storeExcludedGroupItems[element_num];
  }

std::vector< HomeAutomationGroupParsingItemJSON * > HomeAutomationCompactDeviceSpecifierJSON::getExcludedGroupItems(void)
  {
    assert(flagHasExcludedGroupItems);
    return storeExcludedGroupItems;
  }

const std::vector< HomeAutomationGroupParsingItemJSON * > HomeAutomationCompactDeviceSpecifierJSON::getExcludedGroupItems(void) const
  {
    assert(flagHasExcludedGroupItems);
    return storeExcludedGroupItems;
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasExcludedDeviceItems(void) const
  {
    return flagHasExcludedDeviceItems;
  }

size_t HomeAutomationCompactDeviceSpecifierJSON::countOfExcludedDeviceItems(void) const
  {
    assert(flagHasExcludedDeviceItems);
    return storeExcludedDeviceItems.size();
  }

HomeAutomationDeviceParsingItemJSON * HomeAutomationCompactDeviceSpecifierJSON::elementOfExcludedDeviceItems(size_t element_num)
  {
    assert(flagHasExcludedDeviceItems);
    return storeExcludedDeviceItems[element_num];
  }

const HomeAutomationDeviceParsingItemJSON * HomeAutomationCompactDeviceSpecifierJSON::elementOfExcludedDeviceItems(size_t element_num) const
  {
    assert(flagHasExcludedDeviceItems);
    return storeExcludedDeviceItems[element_num];
  }

std::vector< HomeAutomationDeviceParsingItemJSON * > HomeAutomationCompactDeviceSpecifierJSON::getExcludedDeviceItems(void)
  {
    assert(flagHasExcludedDeviceItems);
    return storeExcludedDeviceItems;
  }

const std::vector< HomeAutomationDeviceParsingItemJSON * > HomeAutomationCompactDeviceSpecifierJSON::getExcludedDeviceItems(void) const
  {
    assert(flagHasExcludedDeviceItems);
    return storeExcludedDeviceItems;
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasType(void) const
  {
    return flagHasType;
  }

HomeAutomationDeviceTypeJSON * HomeAutomationCompactDeviceSpecifierJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const HomeAutomationDeviceTypeJSON * HomeAutomationCompactDeviceSpecifierJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

HomeAutomationDeviceTypeJSON::TypeValue HomeAutomationCompactDeviceSpecifierJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const HomeAutomationDeviceTypeJSON::TypeValue HomeAutomationCompactDeviceSpecifierJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *HomeAutomationCompactDeviceSpecifierJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string HomeAutomationCompactDeviceSpecifierJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasHint(void) const
  {
    return flagHasHint;
  }

HomeAutomationQueryHintJSON * HomeAutomationCompactDeviceSpecifierJSON::getHint(void)
  {
    assert(flagHasHint);
    return storeHint;
  }

const HomeAutomationQueryHintJSON * HomeAutomationCompactDeviceSpecifierJSON::getHint(void) const
  {
    assert(flagHasHint);
    return storeHint;
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasUnambiguousGroups(void) const
  {
    return flagHasUnambiguousGroups;
  }

HomeAutomationGroupListJSON * HomeAutomationCompactDeviceSpecifierJSON::getUnambiguousGroups(void)
  {
    assert(flagHasUnambiguousGroups);
    return storeUnambiguousGroups;
  }

const HomeAutomationGroupListJSON * HomeAutomationCompactDeviceSpecifierJSON::getUnambiguousGroups(void) const
  {
    assert(flagHasUnambiguousGroups);
    return storeUnambiguousGroups;
  }

bool HomeAutomationCompactDeviceSpecifierJSON::hasUnambiguousDevices(void) const
  {
    return flagHasUnambiguousDevices;
  }

HomeAutomationDeviceListJSON * HomeAutomationCompactDeviceSpecifierJSON::getUnambiguousDevices(void)
  {
    assert(flagHasUnambiguousDevices);
    return storeUnambiguousDevices;
  }

const HomeAutomationDeviceListJSON * HomeAutomationCompactDeviceSpecifierJSON::getUnambiguousDevices(void) const
  {
    assert(flagHasUnambiguousDevices);
    return storeUnambiguousDevices;
  }

HomeAutomationCompactDeviceSpecifierJSON *HomeAutomationCompactDeviceSpecifierJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationCompactDeviceSpecifierJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationCompactDeviceSpecifierJSON>, HomeAutomationCompactDeviceSpecifierJSON *, bool> generator("Type HomeAutomationCompactDeviceSpecifier", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
