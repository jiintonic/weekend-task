/* file "RockPaperScissorsQuitGameInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RockPaperScissorsQuitGameInformationNuggetJSON.h"

#include "RockPaperScissorsQuitGameInformationNuggetJSON.h"


RockPaperScissorsQuitGameInformationNuggetJSON::RockPaperScissorsQuitGameInformationNuggetJSON(const RockPaperScissorsQuitGameInformationNuggetJSON &)
  {
    assert(false);
  }

RockPaperScissorsQuitGameInformationNuggetJSON &RockPaperScissorsQuitGameInformationNuggetJSON::operator=(const RockPaperScissorsQuitGameInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RockPaperScissorsQuitGameInformationNuggetJSON::extraGameStateToJSON(void) const
  {
    JSONStringValue *generated_string_GameState = new JSONStringValue(storeGameState.c_str());
    return generated_string_GameState;
  }

void RockPaperScissorsQuitGameInformationNuggetJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of RockPaperScissorsQuitGameInformationNuggetJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

RockPaperScissorsQuitGameInformationNuggetJSON::RockPaperScissorsQuitGameInformationNuggetJSON(void) :
        flagHasGameState(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsQuitGameInformationNuggetJSON::~RockPaperScissorsQuitGameInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RockPaperScissorsQuitGameInformationNuggetJSON::getRockPaperScissorsNuggetKind(void) const
  {
    return "RockPaperScissorsQuitCommand";
  }

bool RockPaperScissorsQuitGameInformationNuggetJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string RockPaperScissorsQuitGameInformationNuggetJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string RockPaperScissorsQuitGameInformationNuggetJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

RockPaperScissorsQuitGameInformationNuggetJSON *RockPaperScissorsQuitGameInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RockPaperScissorsQuitGameInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RockPaperScissorsQuitGameInformationNuggetJSON>, RockPaperScissorsQuitGameInformationNuggetJSON *, bool> generator("Type RockPaperScissorsQuitGameInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
