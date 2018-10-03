/* file "BattleshipQuitInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipQuitInformationNuggetJSON.h"

#include "BattleshipQuitInformationNuggetJSON.h"


BattleshipQuitInformationNuggetJSON::BattleshipQuitInformationNuggetJSON(const BattleshipQuitInformationNuggetJSON &)
  {
    assert(false);
  }

BattleshipQuitInformationNuggetJSON &BattleshipQuitInformationNuggetJSON::operator=(const BattleshipQuitInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BattleshipQuitInformationNuggetJSON::extraGameNameToJSON(void) const
  {
    JSONStringValue *generated_string_GameName = new JSONStringValue(storeGameName.c_str());
    return generated_string_GameName;
  }

void BattleshipQuitInformationNuggetJSON::fromJSONGameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameName of BattleshipQuitInformationNuggetJSON is not a string.");
    setGameName(std::string(json_string->getData()));
  }

BattleshipQuitInformationNuggetJSON::BattleshipQuitInformationNuggetJSON(void) :
        flagHasGameName(false)
  {
    extraIndex = create_string_index();
  }

BattleshipQuitInformationNuggetJSON::~BattleshipQuitInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BattleshipQuitInformationNuggetJSON::getNuggetKind(void) const
  {
    return "BattleshipQuit";
  }

bool BattleshipQuitInformationNuggetJSON::hasGameName(void) const
  {
    return flagHasGameName;
  }

std::string BattleshipQuitInformationNuggetJSON::getGameName(void)
  {
    assert(flagHasGameName);
    return storeGameName;
  }

const std::string BattleshipQuitInformationNuggetJSON::getGameName(void) const
  {
    assert(flagHasGameName);
    return storeGameName;
  }

BattleshipQuitInformationNuggetJSON *BattleshipQuitInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipQuitInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipQuitInformationNuggetJSON>, BattleshipQuitInformationNuggetJSON *, bool> generator("Type BattleshipQuitInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
