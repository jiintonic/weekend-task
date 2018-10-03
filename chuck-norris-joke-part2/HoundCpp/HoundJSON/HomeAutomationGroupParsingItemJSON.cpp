/* file "HomeAutomationGroupParsingItemJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationGroupParsingItemJSON.h"

#include "HomeAutomationGroupParsingItemJSON.h"


HomeAutomationGroupParsingItemJSON::HomeAutomationGroupParsingItemJSON(const HomeAutomationGroupParsingItemJSON &)
  {
    assert(false);
  }

HomeAutomationGroupParsingItemJSON &HomeAutomationGroupParsingItemJSON::operator=(const HomeAutomationGroupParsingItemJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationGroupParsingItemJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of HomeAutomationGroupParsingItemJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void HomeAutomationGroupParsingItemJSON::fromJSONActualNames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActualNames of HomeAutomationGroupParsingItemJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActualNames of HomeAutomationGroupParsingItemJSON has too few elements.");
    std::vector< std::string > vector_ActualNames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActualNames of HomeAutomationGroupParsingItemJSON is not a string.");
        vector_ActualNames1[num1] = std::string(json_string->getData());
      }
    assert(vector_ActualNames1.size() >= 1);
    initActualNames();
    for (size_t num2 = 0; num2 < vector_ActualNames1.size(); ++num2)
        appendActualNames(vector_ActualNames1[num2]);
    for (size_t num1 = 0; num1 < vector_ActualNames1.size(); ++num1)
      {
      }
  }

void HomeAutomationGroupParsingItemJSON::fromJSONSpokenPrefix(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenPrefix of HomeAutomationGroupParsingItemJSON is not a string.");
    setSpokenPrefix(std::string(json_string->getData()));
  }

HomeAutomationGroupParsingItemJSON::HomeAutomationGroupParsingItemJSON(void) :
        flagHasName(false),
        flagHasActualNames(false),
        flagHasSpokenPrefix(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationGroupParsingItemJSON::~HomeAutomationGroupParsingItemJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationGroupParsingItemJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string HomeAutomationGroupParsingItemJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string HomeAutomationGroupParsingItemJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool HomeAutomationGroupParsingItemJSON::hasActualNames(void) const
  {
    return flagHasActualNames;
  }

size_t HomeAutomationGroupParsingItemJSON::countOfActualNames(void) const
  {
    assert(flagHasActualNames);
    return storeActualNames.size();
  }

std::string HomeAutomationGroupParsingItemJSON::elementOfActualNames(size_t element_num)
  {
    assert(flagHasActualNames);
    return storeActualNames[element_num];
  }

const std::string HomeAutomationGroupParsingItemJSON::elementOfActualNames(size_t element_num) const
  {
    assert(flagHasActualNames);
    return storeActualNames[element_num];
  }

std::vector< std::string > HomeAutomationGroupParsingItemJSON::getActualNames(void)
  {
    assert(flagHasActualNames);
    return storeActualNames;
  }

const std::vector< std::string > HomeAutomationGroupParsingItemJSON::getActualNames(void) const
  {
    assert(flagHasActualNames);
    return storeActualNames;
  }

bool HomeAutomationGroupParsingItemJSON::hasSpokenPrefix(void) const
  {
    return flagHasSpokenPrefix;
  }

std::string HomeAutomationGroupParsingItemJSON::getSpokenPrefix(void)
  {
    assert(flagHasSpokenPrefix);
    return storeSpokenPrefix;
  }

const std::string HomeAutomationGroupParsingItemJSON::getSpokenPrefix(void) const
  {
    assert(flagHasSpokenPrefix);
    return storeSpokenPrefix;
  }

HomeAutomationGroupParsingItemJSON *HomeAutomationGroupParsingItemJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationGroupParsingItemJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationGroupParsingItemJSON>, HomeAutomationGroupParsingItemJSON *, bool> generator("Type HomeAutomationGroupParsingItem", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
