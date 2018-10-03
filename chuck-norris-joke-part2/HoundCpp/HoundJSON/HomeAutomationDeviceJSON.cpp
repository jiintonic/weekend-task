/* file "HomeAutomationDeviceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationDeviceJSON.h"

#include "HomeAutomationDeviceJSON.h"


HomeAutomationDeviceJSON::HomeAutomationDeviceJSON(const HomeAutomationDeviceJSON &)
  {
    assert(false);
  }

HomeAutomationDeviceJSON &HomeAutomationDeviceJSON::operator=(const HomeAutomationDeviceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationDeviceJSON::fromJSONHomeAutomationSolution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationSolutionJSON *convert_classy = HomeAutomationSolutionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHomeAutomationSolution(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationDeviceJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of HomeAutomationDeviceJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void HomeAutomationDeviceJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of HomeAutomationDeviceJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void HomeAutomationDeviceJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceTypeJSON *convert_classy = HomeAutomationDeviceTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationDeviceJSON::fromJSONCapabilities(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Capabilities of HomeAutomationDeviceJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< HomeAutomationOperationJSON * > vector_Capabilities1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationOperationJSON *convert_classy = HomeAutomationOperationJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Capabilities1[num1] = convert_classy;
      }
    initCapabilities();
    for (size_t num3 = 0; num3 < vector_Capabilities1.size(); ++num3)
        appendCapabilities(vector_Capabilities1[num3]);
    for (size_t num1 = 0; num1 < vector_Capabilities1.size(); ++num1)
      {
        vector_Capabilities1[num1]->remove_reference();
      }
  }

void HomeAutomationDeviceJSON::fromJSONProperties(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Properties of HomeAutomationDeviceJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< HomeAutomationPropertyJSON * > vector_Properties1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationPropertyJSON *convert_classy = HomeAutomationPropertyJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Properties1[num1] = convert_classy;
      }
    initProperties();
    for (size_t num4 = 0; num4 < vector_Properties1.size(); ++num4)
        appendProperties(vector_Properties1[num4]);
    for (size_t num1 = 0; num1 < vector_Properties1.size(); ++num1)
      {
        vector_Properties1[num1]->remove_reference();
      }
  }

void HomeAutomationDeviceJSON::fromJSONSolutionData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setSolutionData(json_value);
  }

HomeAutomationDeviceJSON::HomeAutomationDeviceJSON(void) :
        flagHasHomeAutomationSolution(false),
        flagHasName(false),
        flagHasID(false),
        flagHasType(false),
        flagHasCapabilities(false),
        flagHasProperties(false),
        flagHasSolutionData(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationDeviceJSON::~HomeAutomationDeviceJSON(void)
  {
    if (flagHasHomeAutomationSolution)
      {
        storeHomeAutomationSolution->remove_reference();
      }
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    if (flagHasCapabilities)
      {
        for (size_t num7 = 0; num7 < storeCapabilities.size(); ++num7)
          {
            storeCapabilities[num7]->remove_reference();
          }
      }
    if (flagHasProperties)
      {
        for (size_t num8 = 0; num8 < storeProperties.size(); ++num8)
          {
            storeProperties[num8]->remove_reference();
          }
      }
    if (flagHasSolutionData)
      {
        storeSolutionData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationDeviceJSON::hasHomeAutomationSolution(void) const
  {
    return flagHasHomeAutomationSolution;
  }

HomeAutomationSolutionJSON * HomeAutomationDeviceJSON::getHomeAutomationSolution(void)
  {
    assert(flagHasHomeAutomationSolution);
    return storeHomeAutomationSolution;
  }

const HomeAutomationSolutionJSON * HomeAutomationDeviceJSON::getHomeAutomationSolution(void) const
  {
    assert(flagHasHomeAutomationSolution);
    return storeHomeAutomationSolution;
  }

HomeAutomationSolutionJSON::TypeValue HomeAutomationDeviceJSON::getHomeAutomationSolutionValue(void)
  {
    return getHomeAutomationSolution()->getValue();
  }

const HomeAutomationSolutionJSON::TypeValue HomeAutomationDeviceJSON::getHomeAutomationSolutionValue(void) const
  {
    return getHomeAutomationSolution()->getValue();
  }

const char *HomeAutomationDeviceJSON::getHomeAutomationSolutionAsChars(void) const
  {
    return getHomeAutomationSolution()->getValueAsChars();
  }

std::string HomeAutomationDeviceJSON::getHomeAutomationSolutionAsString(void) const
  {
    return getHomeAutomationSolution()->getValueAsString();
  }

bool HomeAutomationDeviceJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string HomeAutomationDeviceJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string HomeAutomationDeviceJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool HomeAutomationDeviceJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string HomeAutomationDeviceJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string HomeAutomationDeviceJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool HomeAutomationDeviceJSON::hasType(void) const
  {
    return flagHasType;
  }

HomeAutomationDeviceTypeJSON * HomeAutomationDeviceJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const HomeAutomationDeviceTypeJSON * HomeAutomationDeviceJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

HomeAutomationDeviceTypeJSON::TypeValue HomeAutomationDeviceJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const HomeAutomationDeviceTypeJSON::TypeValue HomeAutomationDeviceJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *HomeAutomationDeviceJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string HomeAutomationDeviceJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

bool HomeAutomationDeviceJSON::hasCapabilities(void) const
  {
    return flagHasCapabilities;
  }

size_t HomeAutomationDeviceJSON::countOfCapabilities(void) const
  {
    assert(flagHasCapabilities);
    return storeCapabilities.size();
  }

HomeAutomationOperationJSON * HomeAutomationDeviceJSON::elementOfCapabilities(size_t element_num)
  {
    assert(flagHasCapabilities);
    return storeCapabilities[element_num];
  }

const HomeAutomationOperationJSON * HomeAutomationDeviceJSON::elementOfCapabilities(size_t element_num) const
  {
    assert(flagHasCapabilities);
    return storeCapabilities[element_num];
  }

std::vector< HomeAutomationOperationJSON * > HomeAutomationDeviceJSON::getCapabilities(void)
  {
    assert(flagHasCapabilities);
    return storeCapabilities;
  }

const std::vector< HomeAutomationOperationJSON * > HomeAutomationDeviceJSON::getCapabilities(void) const
  {
    assert(flagHasCapabilities);
    return storeCapabilities;
  }

bool HomeAutomationDeviceJSON::hasProperties(void) const
  {
    return flagHasProperties;
  }

size_t HomeAutomationDeviceJSON::countOfProperties(void) const
  {
    assert(flagHasProperties);
    return storeProperties.size();
  }

HomeAutomationPropertyJSON * HomeAutomationDeviceJSON::elementOfProperties(size_t element_num)
  {
    assert(flagHasProperties);
    return storeProperties[element_num];
  }

const HomeAutomationPropertyJSON * HomeAutomationDeviceJSON::elementOfProperties(size_t element_num) const
  {
    assert(flagHasProperties);
    return storeProperties[element_num];
  }

std::vector< HomeAutomationPropertyJSON * > HomeAutomationDeviceJSON::getProperties(void)
  {
    assert(flagHasProperties);
    return storeProperties;
  }

const std::vector< HomeAutomationPropertyJSON * > HomeAutomationDeviceJSON::getProperties(void) const
  {
    assert(flagHasProperties);
    return storeProperties;
  }

bool HomeAutomationDeviceJSON::hasSolutionData(void) const
  {
    return flagHasSolutionData;
  }

JSONValue * HomeAutomationDeviceJSON::getSolutionData(void)
  {
    assert(flagHasSolutionData);
    return storeSolutionData;
  }

const JSONValue * HomeAutomationDeviceJSON::getSolutionData(void) const
  {
    assert(flagHasSolutionData);
    return storeSolutionData;
  }

HomeAutomationDeviceJSON *HomeAutomationDeviceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationDeviceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceJSON>, HomeAutomationDeviceJSON *, bool> generator("Type HomeAutomationDevice", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
