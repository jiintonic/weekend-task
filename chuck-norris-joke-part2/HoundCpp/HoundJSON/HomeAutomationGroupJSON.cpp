/* file "HomeAutomationGroupJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationGroupJSON.h"

#include "HomeAutomationGroupJSON.h"


HomeAutomationGroupJSON::HomeAutomationGroupJSON(const HomeAutomationGroupJSON &)
  {
    assert(false);
  }

HomeAutomationGroupJSON &HomeAutomationGroupJSON::operator=(const HomeAutomationGroupJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationGroupJSON::fromJSONHomeAutomationSolution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationSolutionJSON *convert_classy = HomeAutomationSolutionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHomeAutomationSolution(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationGroupJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of HomeAutomationGroupJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void HomeAutomationGroupJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of HomeAutomationGroupJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void HomeAutomationGroupJSON::fromJSONSolutionData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setSolutionData(json_value);
  }

HomeAutomationGroupJSON::HomeAutomationGroupJSON(void) :
        flagHasHomeAutomationSolution(false),
        flagHasName(false),
        flagHasID(false),
        flagHasSolutionData(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationGroupJSON::~HomeAutomationGroupJSON(void)
  {
    if (flagHasHomeAutomationSolution)
      {
        storeHomeAutomationSolution->remove_reference();
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

bool HomeAutomationGroupJSON::hasHomeAutomationSolution(void) const
  {
    return flagHasHomeAutomationSolution;
  }

HomeAutomationSolutionJSON * HomeAutomationGroupJSON::getHomeAutomationSolution(void)
  {
    assert(flagHasHomeAutomationSolution);
    return storeHomeAutomationSolution;
  }

const HomeAutomationSolutionJSON * HomeAutomationGroupJSON::getHomeAutomationSolution(void) const
  {
    assert(flagHasHomeAutomationSolution);
    return storeHomeAutomationSolution;
  }

HomeAutomationSolutionJSON::TypeValue HomeAutomationGroupJSON::getHomeAutomationSolutionValue(void)
  {
    return getHomeAutomationSolution()->getValue();
  }

const HomeAutomationSolutionJSON::TypeValue HomeAutomationGroupJSON::getHomeAutomationSolutionValue(void) const
  {
    return getHomeAutomationSolution()->getValue();
  }

const char *HomeAutomationGroupJSON::getHomeAutomationSolutionAsChars(void) const
  {
    return getHomeAutomationSolution()->getValueAsChars();
  }

std::string HomeAutomationGroupJSON::getHomeAutomationSolutionAsString(void) const
  {
    return getHomeAutomationSolution()->getValueAsString();
  }

bool HomeAutomationGroupJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string HomeAutomationGroupJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string HomeAutomationGroupJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool HomeAutomationGroupJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string HomeAutomationGroupJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string HomeAutomationGroupJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool HomeAutomationGroupJSON::hasSolutionData(void) const
  {
    return flagHasSolutionData;
  }

JSONValue * HomeAutomationGroupJSON::getSolutionData(void)
  {
    assert(flagHasSolutionData);
    return storeSolutionData;
  }

const JSONValue * HomeAutomationGroupJSON::getSolutionData(void) const
  {
    assert(flagHasSolutionData);
    return storeSolutionData;
  }

HomeAutomationGroupJSON *HomeAutomationGroupJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationGroupJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationGroupJSON>, HomeAutomationGroupJSON *, bool> generator("Type HomeAutomationGroup", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
