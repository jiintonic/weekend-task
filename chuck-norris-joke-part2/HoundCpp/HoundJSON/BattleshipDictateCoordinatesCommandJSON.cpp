/* file "BattleshipDictateCoordinatesCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipDictateCoordinatesCommandJSON.h"

#include "BattleshipDictateCoordinatesCommandJSON.h"


BattleshipDictateCoordinatesCommandJSON::BattleshipDictateCoordinatesCommandJSON(const BattleshipDictateCoordinatesCommandJSON &)
  {
    assert(false);
  }

BattleshipDictateCoordinatesCommandJSON &BattleshipDictateCoordinatesCommandJSON::operator=(const BattleshipDictateCoordinatesCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BattleshipDictateCoordinatesCommandJSON::extraUserDataToJSON(void) const
  {
    JSONValueHandler handler_UserData;
    storeUserData->write_as_json(&handler_UserData);
    handler_UserData.result->add_reference();
    return handler_UserData.result;
  }

JSONValue *BattleshipDictateCoordinatesCommandJSON::extraComputerDataToJSON(void) const
  {
    JSONValueHandler handler_ComputerData;
    storeComputerData->write_as_json(&handler_ComputerData);
    handler_ComputerData.result->add_reference();
    return handler_ComputerData.result;
  }

JSONValue *BattleshipDictateCoordinatesCommandJSON::extraStartDateAndOrTimeToJSON(void) const
  {
    JSONValueHandler handler_StartDateAndOrTime;
    storeStartDateAndOrTime->write_as_json(&handler_StartDateAndOrTime);
    handler_StartDateAndOrTime.result->add_reference();
    return handler_StartDateAndOrTime.result;
  }

JSONValue *BattleshipDictateCoordinatesCommandJSON::extraCountToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Count = new JSONIntegerValue(storeCount.get_o_integer());
    return generated_integer_Count;
  }

void BattleshipDictateCoordinatesCommandJSON::fromJSONUserData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BattleshipPlayerDataJSON *convert_classy = BattleshipPlayerDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserData(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipDictateCoordinatesCommandJSON::fromJSONComputerData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BattleshipPlayerDataJSON *convert_classy = BattleshipPlayerDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComputerData(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipDictateCoordinatesCommandJSON::fromJSONStartDateAndOrTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndOrTime(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipDictateCoordinatesCommandJSON::fromJSONCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Count of BattleshipDictateCoordinatesCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Count of BattleshipDictateCoordinatesCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setCount(extracted_integer);
  }

BattleshipDictateCoordinatesCommandJSON::BattleshipDictateCoordinatesCommandJSON(void) :
        flagHasUserData(false),
        flagHasComputerData(false),
        flagHasStartDateAndOrTime(false),
        flagHasCount(false)
  {
    extraIndex = create_string_index();
  }

BattleshipDictateCoordinatesCommandJSON::~BattleshipDictateCoordinatesCommandJSON(void)
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

const char *BattleshipDictateCoordinatesCommandJSON::getBattleshipCommandKind(void) const
  {
    return "BattleshipDictateCoordinatesCommand";
  }

bool BattleshipDictateCoordinatesCommandJSON::hasUserData(void) const
  {
    return flagHasUserData;
  }

BattleshipPlayerDataJSON * BattleshipDictateCoordinatesCommandJSON::getUserData(void)
  {
    assert(flagHasUserData);
    return storeUserData;
  }

const BattleshipPlayerDataJSON * BattleshipDictateCoordinatesCommandJSON::getUserData(void) const
  {
    assert(flagHasUserData);
    return storeUserData;
  }

bool BattleshipDictateCoordinatesCommandJSON::hasComputerData(void) const
  {
    return flagHasComputerData;
  }

BattleshipPlayerDataJSON * BattleshipDictateCoordinatesCommandJSON::getComputerData(void)
  {
    assert(flagHasComputerData);
    return storeComputerData;
  }

const BattleshipPlayerDataJSON * BattleshipDictateCoordinatesCommandJSON::getComputerData(void) const
  {
    assert(flagHasComputerData);
    return storeComputerData;
  }

bool BattleshipDictateCoordinatesCommandJSON::hasStartDateAndOrTime(void) const
  {
    return flagHasStartDateAndOrTime;
  }

DateAndOrTimeJSON * BattleshipDictateCoordinatesCommandJSON::getStartDateAndOrTime(void)
  {
    assert(flagHasStartDateAndOrTime);
    return storeStartDateAndOrTime;
  }

const DateAndOrTimeJSON * BattleshipDictateCoordinatesCommandJSON::getStartDateAndOrTime(void) const
  {
    assert(flagHasStartDateAndOrTime);
    return storeStartDateAndOrTime;
  }

bool BattleshipDictateCoordinatesCommandJSON::hasCount(void) const
  {
    return flagHasCount;
  }

OInteger BattleshipDictateCoordinatesCommandJSON::getCount(void)
  {
    assert(flagHasCount);
    return storeCount;
  }

const OInteger BattleshipDictateCoordinatesCommandJSON::getCount(void) const
  {
    assert(flagHasCount);
    return storeCount;
  }

char BattleshipDictateCoordinatesCommandJSON::Generator::lowerBoundCount[] = "0";
BattleshipDictateCoordinatesCommandJSON *BattleshipDictateCoordinatesCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipDictateCoordinatesCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipDictateCoordinatesCommandJSON>, BattleshipDictateCoordinatesCommandJSON *, bool> generator("Type BattleshipDictateCoordinatesCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
