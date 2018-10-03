/* file "DrinkIngredientJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DrinkIngredientJSON.h"

#include "DrinkIngredientJSON.h"


DrinkIngredientJSON::DrinkIngredientJSON(const DrinkIngredientJSON &)
  {
    assert(false);
  }

DrinkIngredientJSON &DrinkIngredientJSON::operator=(const DrinkIngredientJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DrinkIngredientJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of DrinkIngredientJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void DrinkIngredientJSON::fromJSONVolume(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Volume of DrinkIngredientJSON is not a string.");
    setVolume(std::string(json_string->getData()));
  }

DrinkIngredientJSON::DrinkIngredientJSON(void) :
        flagHasName(false),
        flagHasVolume(false)
  {
    extraIndex = create_string_index();
  }

DrinkIngredientJSON::~DrinkIngredientJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DrinkIngredientJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string DrinkIngredientJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string DrinkIngredientJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool DrinkIngredientJSON::hasVolume(void) const
  {
    return flagHasVolume;
  }

std::string DrinkIngredientJSON::getVolume(void)
  {
    assert(flagHasVolume);
    return storeVolume;
  }

const std::string DrinkIngredientJSON::getVolume(void) const
  {
    assert(flagHasVolume);
    return storeVolume;
  }

DrinkIngredientJSON *DrinkIngredientJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DrinkIngredientJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DrinkIngredientJSON>, DrinkIngredientJSON *, bool> generator("Type DrinkIngredient", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
