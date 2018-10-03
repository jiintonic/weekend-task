/* file "BattleshipPlayerDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipPlayerDataJSON.h"

#include "BattleshipPlayerDataJSON.h"


BattleshipPlayerDataJSON::BattleshipPlayerDataJSON(const BattleshipPlayerDataJSON &)
  {
    assert(false);
  }

BattleshipPlayerDataJSON &BattleshipPlayerDataJSON::operator=(const BattleshipPlayerDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BattleshipPlayerDataJSON::fromJSONCoordinates(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Coordinates of BattleshipPlayerDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< BattleshipCoordinateJSON * > vector_Coordinates1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        BattleshipCoordinateJSON *convert_classy = BattleshipCoordinateJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Coordinates1[num1] = convert_classy;
      }
    initCoordinates();
    for (size_t num3 = 0; num3 < vector_Coordinates1.size(); ++num3)
        appendCoordinates(vector_Coordinates1[num3]);
    for (size_t num1 = 0; num1 < vector_Coordinates1.size(); ++num1)
      {
        vector_Coordinates1[num1]->remove_reference();
      }
  }

void BattleshipPlayerDataJSON::fromJSONSunkShip(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BattleshipShipTypeJSON *convert_classy = BattleshipShipTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSunkShip(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipPlayerDataJSON::fromJSONShipLocations(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ShipLocations of BattleshipPlayerDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< BattleshipShipTypeJSON * > vector_ShipLocations1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        BattleshipShipTypeJSON *convert_classy = BattleshipShipTypeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ShipLocations1[num1] = convert_classy;
      }
    initShipLocations();
    for (size_t num4 = 0; num4 < vector_ShipLocations1.size(); ++num4)
        appendShipLocations(vector_ShipLocations1[num4]);
    for (size_t num1 = 0; num1 < vector_ShipLocations1.size(); ++num1)
      {
        vector_ShipLocations1[num1]->remove_reference();
      }
  }

void BattleshipPlayerDataJSON::fromJSONIsGameOver(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsGameOver of BattleshipPlayerDataJSON is not true for false.");
          }
      }
    setIsGameOver(the_bool);
  }

BattleshipPlayerDataJSON::BattleshipPlayerDataJSON(void) :
        flagHasCoordinates(false),
        flagHasSunkShip(false),
        flagHasShipLocations(false),
        flagHasIsGameOver(false)
  {
    extraIndex = create_string_index();
  }

BattleshipPlayerDataJSON::~BattleshipPlayerDataJSON(void)
  {
    if (flagHasCoordinates)
      {
        for (size_t num7 = 0; num7 < storeCoordinates.size(); ++num7)
          {
            storeCoordinates[num7]->remove_reference();
          }
      }
    if (flagHasSunkShip)
      {
        storeSunkShip->remove_reference();
      }
    if (flagHasShipLocations)
      {
        for (size_t num8 = 0; num8 < storeShipLocations.size(); ++num8)
          {
            storeShipLocations[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool BattleshipPlayerDataJSON::hasCoordinates(void) const
  {
    return flagHasCoordinates;
  }

size_t BattleshipPlayerDataJSON::countOfCoordinates(void) const
  {
    assert(flagHasCoordinates);
    return storeCoordinates.size();
  }

BattleshipCoordinateJSON * BattleshipPlayerDataJSON::elementOfCoordinates(size_t element_num)
  {
    assert(flagHasCoordinates);
    return storeCoordinates[element_num];
  }

const BattleshipCoordinateJSON * BattleshipPlayerDataJSON::elementOfCoordinates(size_t element_num) const
  {
    assert(flagHasCoordinates);
    return storeCoordinates[element_num];
  }

std::vector< BattleshipCoordinateJSON * > BattleshipPlayerDataJSON::getCoordinates(void)
  {
    assert(flagHasCoordinates);
    return storeCoordinates;
  }

const std::vector< BattleshipCoordinateJSON * > BattleshipPlayerDataJSON::getCoordinates(void) const
  {
    assert(flagHasCoordinates);
    return storeCoordinates;
  }

bool BattleshipPlayerDataJSON::hasSunkShip(void) const
  {
    return flagHasSunkShip;
  }

BattleshipShipTypeJSON * BattleshipPlayerDataJSON::getSunkShip(void)
  {
    assert(flagHasSunkShip);
    return storeSunkShip;
  }

const BattleshipShipTypeJSON * BattleshipPlayerDataJSON::getSunkShip(void) const
  {
    assert(flagHasSunkShip);
    return storeSunkShip;
  }

bool BattleshipPlayerDataJSON::hasShipLocations(void) const
  {
    return flagHasShipLocations;
  }

size_t BattleshipPlayerDataJSON::countOfShipLocations(void) const
  {
    assert(flagHasShipLocations);
    return storeShipLocations.size();
  }

BattleshipShipTypeJSON * BattleshipPlayerDataJSON::elementOfShipLocations(size_t element_num)
  {
    assert(flagHasShipLocations);
    return storeShipLocations[element_num];
  }

const BattleshipShipTypeJSON * BattleshipPlayerDataJSON::elementOfShipLocations(size_t element_num) const
  {
    assert(flagHasShipLocations);
    return storeShipLocations[element_num];
  }

std::vector< BattleshipShipTypeJSON * > BattleshipPlayerDataJSON::getShipLocations(void)
  {
    assert(flagHasShipLocations);
    return storeShipLocations;
  }

const std::vector< BattleshipShipTypeJSON * > BattleshipPlayerDataJSON::getShipLocations(void) const
  {
    assert(flagHasShipLocations);
    return storeShipLocations;
  }

bool BattleshipPlayerDataJSON::hasIsGameOver(void) const
  {
    return flagHasIsGameOver;
  }

bool BattleshipPlayerDataJSON::getIsGameOver(void)
  {
    assert(flagHasIsGameOver);
    return storeIsGameOver;
  }

const bool BattleshipPlayerDataJSON::getIsGameOver(void) const
  {
    assert(flagHasIsGameOver);
    return storeIsGameOver;
  }

BattleshipPlayerDataJSON *BattleshipPlayerDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipPlayerDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipPlayerDataJSON>, BattleshipPlayerDataJSON *, bool> generator("Type BattleshipPlayerData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
