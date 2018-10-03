/* file "OneInstalledAppJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "OneInstalledAppJSON.h"

#include "OneInstalledAppJSON.h"


OneInstalledAppJSON::OneInstalledAppJSON(const OneInstalledAppJSON &)
  {
    assert(false);
  }

OneInstalledAppJSON &OneInstalledAppJSON::operator=(const OneInstalledAppJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void OneInstalledAppJSON::fromJSONAppName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AppName of OneInstalledAppJSON is not a string.");
    setAppName(std::string(json_string->getData()));
  }

void OneInstalledAppJSON::fromJSONAliases(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Aliases of OneInstalledAppJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_Aliases1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Aliases of OneInstalledAppJSON is not a string.");
        vector_Aliases1[num1] = std::string(json_string->getData());
      }
    initAliases();
    for (size_t num2 = 0; num2 < vector_Aliases1.size(); ++num2)
        appendAliases(vector_Aliases1[num2]);
    for (size_t num1 = 0; num1 < vector_Aliases1.size(); ++num1)
      {
      }
  }

OneInstalledAppJSON::OneInstalledAppJSON(void) :
        flagHasAppName(false),
        flagHasAliases(false)
  {
    extraIndex = create_string_index();
  }

OneInstalledAppJSON::~OneInstalledAppJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool OneInstalledAppJSON::hasAppName(void) const
  {
    return flagHasAppName;
  }

std::string OneInstalledAppJSON::getAppName(void)
  {
    assert(flagHasAppName);
    return storeAppName;
  }

const std::string OneInstalledAppJSON::getAppName(void) const
  {
    assert(flagHasAppName);
    return storeAppName;
  }

bool OneInstalledAppJSON::hasAliases(void) const
  {
    return flagHasAliases;
  }

size_t OneInstalledAppJSON::countOfAliases(void) const
  {
    assert(flagHasAliases);
    return storeAliases.size();
  }

std::string OneInstalledAppJSON::elementOfAliases(size_t element_num)
  {
    assert(flagHasAliases);
    return storeAliases[element_num];
  }

const std::string OneInstalledAppJSON::elementOfAliases(size_t element_num) const
  {
    assert(flagHasAliases);
    return storeAliases[element_num];
  }

std::vector< std::string > OneInstalledAppJSON::getAliases(void)
  {
    assert(flagHasAliases);
    return storeAliases;
  }

const std::vector< std::string > OneInstalledAppJSON::getAliases(void) const
  {
    assert(flagHasAliases);
    return storeAliases;
  }

OneInstalledAppJSON *OneInstalledAppJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    OneInstalledAppJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<OneInstalledAppJSON>, OneInstalledAppJSON *, bool> generator("Type OneInstalledApp", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
