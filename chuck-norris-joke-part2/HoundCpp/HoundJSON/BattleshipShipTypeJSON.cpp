/* file "BattleshipShipTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipShipTypeJSON.h"

#include "BattleshipShipTypeJSON.h"


BattleshipShipTypeJSON::TypeShipName BattleshipShipTypeJSON::stringToShipName(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "attleship") == 0)
                return ShipName_Battleship;
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "rrier") == 0)
                        return ShipName_Carrier;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "uiser") == 0)
                        return ShipName_Cruiser;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "estroyer") == 0)
                return ShipName_Destroyer;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ubmarine") == 0)
                return ShipName_Submarine;
            break;
        default:
            break;
      }
    throw("The value for field `ShipName' is not one of the legal values.");
  }

const char *BattleshipShipTypeJSON::stringFromShipName(TypeShipName the_enum)
  {
    switch (the_enum)
      {
        case ShipName_Carrier:
            return "Carrier";
        case ShipName_Battleship:
            return "Battleship";
        case ShipName_Submarine:
            return "Submarine";
        case ShipName_Cruiser:
            return "Cruiser";
        case ShipName_Destroyer:
            return "Destroyer";
        default:
            assert(false);
            return NULL;
      }
  }

BattleshipShipTypeJSON::TypeDirection BattleshipShipTypeJSON::stringToDirection(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "ast") == 0)
                return Direction_East;
            break;
        case 'N':
            if (strncmp(&(chars[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'n':
                        if (strcmp(&(chars[3]), "e") == 0)
                            return Direction_None;
                        break;
                    case 'r':
                        if (strcmp(&(chars[3]), "th") == 0)
                            return Direction_North;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "outh") == 0)
                return Direction_South;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "est") == 0)
                return Direction_West;
            break;
        default:
            break;
      }
    throw("The value for field `Direction' is not one of the legal values.");
  }

const char *BattleshipShipTypeJSON::stringFromDirection(TypeDirection the_enum)
  {
    switch (the_enum)
      {
        case Direction_North:
            return "North";
        case Direction_East:
            return "East";
        case Direction_South:
            return "South";
        case Direction_West:
            return "West";
        case Direction_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

BattleshipShipTypeJSON::BattleshipShipTypeJSON(const BattleshipShipTypeJSON &)
  {
    assert(false);
  }

BattleshipShipTypeJSON &BattleshipShipTypeJSON::operator=(const BattleshipShipTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BattleshipShipTypeJSON::fromJSONShipName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ShipName of BattleshipShipTypeJSON is not a string.");
    TypeShipName the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "attleship") == 0)
                  {
                    the_enum = ShipName_Battleship;
                    goto enum_is_done;
                  }
            break;
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "rrier") == 0)
                          {
                            the_enum = ShipName_Carrier;
                            goto enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "uiser") == 0)
                          {
                            the_enum = ShipName_Cruiser;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "estroyer") == 0)
                  {
                    the_enum = ShipName_Destroyer;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ubmarine") == 0)
                  {
                    the_enum = ShipName_Submarine;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field ShipName of BattleshipShipTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setShipName(the_enum);
  }

void BattleshipShipTypeJSON::fromJSONDirection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Direction of BattleshipShipTypeJSON is not a string.");
    TypeDirection the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "ast") == 0)
                  {
                    the_enum = Direction_East;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'n':
                        if (strcmp(&(json_string->getData()[3]), "e") == 0)
                              {
                                the_enum = Direction_None;
                                goto enum_is_done;
                              }
                        break;
                    case 'r':
                        if (strcmp(&(json_string->getData()[3]), "th") == 0)
                              {
                                the_enum = Direction_North;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "outh") == 0)
                  {
                    the_enum = Direction_South;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "est") == 0)
                  {
                    the_enum = Direction_West;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Direction of BattleshipShipTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setDirection(the_enum);
  }

void BattleshipShipTypeJSON::fromJSONLength(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Length of BattleshipShipTypeJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Length of BattleshipShipTypeJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLength(extracted_integer);
  }

void BattleshipShipTypeJSON::fromJSONShipCoordinate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BattleshipCoordinateJSON *convert_classy = BattleshipCoordinateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setShipCoordinate(convert_classy);
    convert_classy->remove_reference();
  }

BattleshipShipTypeJSON::BattleshipShipTypeJSON(void) :
        flagHasShipName(false),
        flagHasDirection(false),
        flagHasLength(false),
        flagHasShipCoordinate(false)
  {
    extraIndex = create_string_index();
  }

BattleshipShipTypeJSON::~BattleshipShipTypeJSON(void)
  {
    if (flagHasShipCoordinate)
      {
        storeShipCoordinate->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool BattleshipShipTypeJSON::hasShipName(void) const
  {
    return flagHasShipName;
  }

BattleshipShipTypeJSON::TypeShipName BattleshipShipTypeJSON::getShipName(void)
  {
    assert(flagHasShipName);
    return storeShipName;
  }

const BattleshipShipTypeJSON::TypeShipName BattleshipShipTypeJSON::getShipName(void) const
  {
    assert(flagHasShipName);
    return storeShipName;
  }

const char *BattleshipShipTypeJSON::getShipNameAsChars(void) const
  {
    return stringFromShipName(getShipName());
  }

std::string BattleshipShipTypeJSON::getShipNameAsString(void) const
  {
    return stringFromShipName(getShipName());
  }

bool BattleshipShipTypeJSON::hasDirection(void) const
  {
    return flagHasDirection;
  }

BattleshipShipTypeJSON::TypeDirection BattleshipShipTypeJSON::getDirection(void)
  {
    assert(flagHasDirection);
    return storeDirection;
  }

const BattleshipShipTypeJSON::TypeDirection BattleshipShipTypeJSON::getDirection(void) const
  {
    assert(flagHasDirection);
    return storeDirection;
  }

const char *BattleshipShipTypeJSON::getDirectionAsChars(void) const
  {
    return stringFromDirection(getDirection());
  }

std::string BattleshipShipTypeJSON::getDirectionAsString(void) const
  {
    return stringFromDirection(getDirection());
  }

bool BattleshipShipTypeJSON::hasLength(void) const
  {
    return flagHasLength;
  }

OInteger BattleshipShipTypeJSON::getLength(void)
  {
    assert(flagHasLength);
    return storeLength;
  }

const OInteger BattleshipShipTypeJSON::getLength(void) const
  {
    assert(flagHasLength);
    return storeLength;
  }

bool BattleshipShipTypeJSON::hasShipCoordinate(void) const
  {
    return flagHasShipCoordinate;
  }

BattleshipCoordinateJSON * BattleshipShipTypeJSON::getShipCoordinate(void)
  {
    assert(flagHasShipCoordinate);
    return storeShipCoordinate;
  }

const BattleshipCoordinateJSON * BattleshipShipTypeJSON::getShipCoordinate(void) const
  {
    assert(flagHasShipCoordinate);
    return storeShipCoordinate;
  }

char BattleshipShipTypeJSON::Generator::lowerBoundLength[] = "0";
BattleshipShipTypeJSON *BattleshipShipTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipShipTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipShipTypeJSON>, BattleshipShipTypeJSON *, bool> generator("Type BattleshipShipType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
