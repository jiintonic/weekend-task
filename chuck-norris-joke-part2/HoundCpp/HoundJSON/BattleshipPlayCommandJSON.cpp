/* file "BattleshipPlayCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipPlayCommandJSON.h"

#include "BattleshipPlayCommandJSON.h"


BattleshipPlayCommandJSON::BattleshipPlayCommandJSON(const BattleshipPlayCommandJSON &)
  {
    assert(false);
  }

BattleshipPlayCommandJSON &BattleshipPlayCommandJSON::operator=(const BattleshipPlayCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BattleshipPlayCommandJSON::extraUserDataToJSON(void) const
  {
    JSONValueHandler handler_UserData;
    storeUserData->write_as_json(&handler_UserData);
    handler_UserData.result->add_reference();
    return handler_UserData.result;
  }

JSONValue *BattleshipPlayCommandJSON::extraComputerDataToJSON(void) const
  {
    JSONValueHandler handler_ComputerData;
    storeComputerData->write_as_json(&handler_ComputerData);
    handler_ComputerData.result->add_reference();
    return handler_ComputerData.result;
  }

JSONValue *BattleshipPlayCommandJSON::extraStartDateAndOrTimeToJSON(void) const
  {
    JSONValueHandler handler_StartDateAndOrTime;
    storeStartDateAndOrTime->write_as_json(&handler_StartDateAndOrTime);
    handler_StartDateAndOrTime.result->add_reference();
    return handler_StartDateAndOrTime.result;
  }

void BattleshipPlayCommandJSON::fromJSONUserData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BattleshipPlayerDataJSON *convert_classy = BattleshipPlayerDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserData(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipPlayCommandJSON::fromJSONComputerData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BattleshipPlayerDataJSON *convert_classy = BattleshipPlayerDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComputerData(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipPlayCommandJSON::fromJSONStartDateAndOrTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndOrTime(convert_classy);
    convert_classy->remove_reference();
  }

BattleshipPlayCommandJSON::BattleshipPlayCommandJSON(void) :
        flagHasUserData(false),
        flagHasComputerData(false),
        flagHasStartDateAndOrTime(false)
  {
    extraIndex = create_string_index();
  }

BattleshipPlayCommandJSON::~BattleshipPlayCommandJSON(void)
  {
    if (flagHasUserData)
      {
        storeUserData->remove_reference();
      }
    if (flagHasComputerData)
      {
        storeComputerData->remove_reference();
      }
    if (flagHasStartDateAndOrTime)
      {
        storeStartDateAndOrTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BattleshipPlayCommandJSON::getBattleshipCommandKind(void) const
  {
    return "BattleshipPlayCommand";
  }

bool BattleshipPlayCommandJSON::hasUserData(void) const
  {
    return flagHasUserData;
  }

BattleshipPlayerDataJSON * BattleshipPlayCommandJSON::getUserData(void)
  {
    assert(flagHasUserData);
    return storeUserData;
  }

const BattleshipPlayerDataJSON * BattleshipPlayCommandJSON::getUserData(void) const
  {
    assert(flagHasUserData);
    return storeUserData;
  }

bool BattleshipPlayCommandJSON::hasComputerData(void) const
  {
    return flagHasComputerData;
  }

BattleshipPlayerDataJSON * BattleshipPlayCommandJSON::getComputerData(void)
  {
    assert(flagHasComputerData);
    return storeComputerData;
  }

const BattleshipPlayerDataJSON * BattleshipPlayCommandJSON::getComputerData(void) const
  {
    assert(flagHasComputerData);
    return storeComputerData;
  }

bool BattleshipPlayCommandJSON::hasStartDateAndOrTime(void) const
  {
    return flagHasStartDateAndOrTime;
  }

DateAndOrTimeJSON * BattleshipPlayCommandJSON::getStartDateAndOrTime(void)
  {
    assert(flagHasStartDateAndOrTime);
    return storeStartDateAndOrTime;
  }

const DateAndOrTimeJSON * BattleshipPlayCommandJSON::getStartDateAndOrTime(void) const
  {
    assert(flagHasStartDateAndOrTime);
    return storeStartDateAndOrTime;
  }

BattleshipPlayCommandJSON *BattleshipPlayCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipPlayCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipPlayCommandJSON>, BattleshipPlayCommandJSON *, bool> generator("Type BattleshipPlayCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
