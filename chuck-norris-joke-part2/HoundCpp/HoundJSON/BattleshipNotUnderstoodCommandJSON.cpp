/* file "BattleshipNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipNotUnderstoodCommandJSON.h"

#include "BattleshipNotUnderstoodCommandJSON.h"


BattleshipNotUnderstoodCommandJSON::BattleshipNotUnderstoodCommandJSON(const BattleshipNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

BattleshipNotUnderstoodCommandJSON &BattleshipNotUnderstoodCommandJSON::operator=(const BattleshipNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BattleshipNotUnderstoodCommandJSON::extraUserDataToJSON(void) const
  {
    JSONValueHandler handler_UserData;
    storeUserData->write_as_json(&handler_UserData);
    handler_UserData.result->add_reference();
    return handler_UserData.result;
  }

JSONValue *BattleshipNotUnderstoodCommandJSON::extraComputerDataToJSON(void) const
  {
    JSONValueHandler handler_ComputerData;
    storeComputerData->write_as_json(&handler_ComputerData);
    handler_ComputerData.result->add_reference();
    return handler_ComputerData.result;
  }

JSONValue *BattleshipNotUnderstoodCommandJSON::extraStartDateAndOrTimeToJSON(void) const
  {
    JSONValueHandler handler_StartDateAndOrTime;
    storeStartDateAndOrTime->write_as_json(&handler_StartDateAndOrTime);
    handler_StartDateAndOrTime.result->add_reference();
    return handler_StartDateAndOrTime.result;
  }

void BattleshipNotUnderstoodCommandJSON::fromJSONUserData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BattleshipPlayerDataJSON *convert_classy = BattleshipPlayerDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserData(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipNotUnderstoodCommandJSON::fromJSONComputerData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BattleshipPlayerDataJSON *convert_classy = BattleshipPlayerDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComputerData(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipNotUnderstoodCommandJSON::fromJSONStartDateAndOrTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndOrTime(convert_classy);
    convert_classy->remove_reference();
  }

BattleshipNotUnderstoodCommandJSON::BattleshipNotUnderstoodCommandJSON(void) :
        flagHasUserData(false),
        flagHasComputerData(false),
        flagHasStartDateAndOrTime(false)
  {
    extraIndex = create_string_index();
  }

BattleshipNotUnderstoodCommandJSON::~BattleshipNotUnderstoodCommandJSON(void)
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

const char *BattleshipNotUnderstoodCommandJSON::getBattleshipCommandKind(void) const
  {
    return "BattleshipNotUnderstoodCommand";
  }

bool BattleshipNotUnderstoodCommandJSON::hasUserData(void) const
  {
    return flagHasUserData;
  }

BattleshipPlayerDataJSON * BattleshipNotUnderstoodCommandJSON::getUserData(void)
  {
    assert(flagHasUserData);
    return storeUserData;
  }

const BattleshipPlayerDataJSON * BattleshipNotUnderstoodCommandJSON::getUserData(void) const
  {
    assert(flagHasUserData);
    return storeUserData;
  }

bool BattleshipNotUnderstoodCommandJSON::hasComputerData(void) const
  {
    return flagHasComputerData;
  }

BattleshipPlayerDataJSON * BattleshipNotUnderstoodCommandJSON::getComputerData(void)
  {
    assert(flagHasComputerData);
    return storeComputerData;
  }

const BattleshipPlayerDataJSON * BattleshipNotUnderstoodCommandJSON::getComputerData(void) const
  {
    assert(flagHasComputerData);
    return storeComputerData;
  }

bool BattleshipNotUnderstoodCommandJSON::hasStartDateAndOrTime(void) const
  {
    return flagHasStartDateAndOrTime;
  }

DateAndOrTimeJSON * BattleshipNotUnderstoodCommandJSON::getStartDateAndOrTime(void)
  {
    assert(flagHasStartDateAndOrTime);
    return storeStartDateAndOrTime;
  }

const DateAndOrTimeJSON * BattleshipNotUnderstoodCommandJSON::getStartDateAndOrTime(void) const
  {
    assert(flagHasStartDateAndOrTime);
    return storeStartDateAndOrTime;
  }

BattleshipNotUnderstoodCommandJSON *BattleshipNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipNotUnderstoodCommandJSON>, BattleshipNotUnderstoodCommandJSON *, bool> generator("Type BattleshipNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
