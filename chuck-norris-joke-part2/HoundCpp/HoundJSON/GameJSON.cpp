/* file "GameJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GameJSON.h"

#include "GameJSON.h"


GameJSON::GameJSON(const GameJSON &)
  {
    assert(false);
  }

GameJSON &GameJSON::operator=(const GameJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GameJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of GameJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void GameJSON::fromJSONShortDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ShortDescription of GameJSON is not a string.");
    setShortDescription(std::string(json_string->getData()));
  }

GameJSON::GameJSON(void) :
        flagHasName(false),
        flagHasShortDescription(false)
  {
    extraIndex = create_string_index();
  }

GameJSON::~GameJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool GameJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string GameJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string GameJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool GameJSON::hasShortDescription(void) const
  {
    return flagHasShortDescription;
  }

std::string GameJSON::getShortDescription(void)
  {
    assert(flagHasShortDescription);
    return storeShortDescription;
  }

const std::string GameJSON::getShortDescription(void) const
  {
    assert(flagHasShortDescription);
    return storeShortDescription;
  }

GameJSON *GameJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GameJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GameJSON>, GameJSON *, bool> generator("Type Game", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
