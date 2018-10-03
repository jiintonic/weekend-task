/* file "WhatsInDrinkQuestionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WhatsInDrinkQuestionJSON.h"

#include "WhatsInDrinkQuestionJSON.h"


WhatsInDrinkQuestionJSON::WhatsInDrinkQuestionJSON(const WhatsInDrinkQuestionJSON &)
  {
    assert(false);
  }

WhatsInDrinkQuestionJSON &WhatsInDrinkQuestionJSON::operator=(const WhatsInDrinkQuestionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *WhatsInDrinkQuestionJSON::extraRecipeToJSON(void) const
  {
    JSONValueHandler handler_Recipe;
    storeRecipe->write_as_json(&handler_Recipe);
    handler_Recipe.result->add_reference();
    return handler_Recipe.result;
  }

void WhatsInDrinkQuestionJSON::fromJSONRecipe(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DrinkRecipeJSON *convert_classy = DrinkRecipeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRecipe(convert_classy);
    convert_classy->remove_reference();
  }

WhatsInDrinkQuestionJSON::WhatsInDrinkQuestionJSON(void) :
        flagHasRecipe(false)
  {
    extraIndex = create_string_index();
  }

WhatsInDrinkQuestionJSON::~WhatsInDrinkQuestionJSON(void)
  {
    if (flagHasRecipe)
      {
        storeRecipe->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *WhatsInDrinkQuestionJSON::getNuggetKind(void) const
  {
    return "WhatsInDrinkNugget";
  }

bool WhatsInDrinkQuestionJSON::hasRecipe(void) const
  {
    return flagHasRecipe;
  }

DrinkRecipeJSON * WhatsInDrinkQuestionJSON::getRecipe(void)
  {
    assert(flagHasRecipe);
    return storeRecipe;
  }

const DrinkRecipeJSON * WhatsInDrinkQuestionJSON::getRecipe(void) const
  {
    assert(flagHasRecipe);
    return storeRecipe;
  }

WhatsInDrinkQuestionJSON *WhatsInDrinkQuestionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WhatsInDrinkQuestionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WhatsInDrinkQuestionJSON>, WhatsInDrinkQuestionJSON *, bool> generator("Type WhatsInDrinkQuestion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
