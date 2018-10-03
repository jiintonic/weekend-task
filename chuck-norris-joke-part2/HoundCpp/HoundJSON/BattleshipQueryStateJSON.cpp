/* file "BattleshipQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipQueryStateJSON.h"

#include "BattleshipQueryStateJSON.h"


BattleshipQueryStateJSON::TypeBattleshipCommandKind BattleshipQueryStateJSON::stringToBattleshipCommandKind(const char *chars)
  {
    if (strncmp(chars, "Battleship", 10) == 0)
      {
        switch ((unsigned char)(chars[10]))
          {
            case 'D':
                if (strcmp(&(chars[11]), "ictateCoordinatesCommand") == 0)
                    return BattleshipCommandKind_BattleshipDictateCoordinatesCommand;
                break;
            case 'I':
                if (strcmp(&(chars[11]), "nvalidCoordinatesCommand") == 0)
                    return BattleshipCommandKind_BattleshipInvalidCoordinatesCommand;
                break;
            case 'N':
                if (strcmp(&(chars[11]), "otUnderstoodCommand") == 0)
                    return BattleshipCommandKind_BattleshipNotUnderstoodCommand;
                break;
            case 'P':
                if (strcmp(&(chars[11]), "layCommand") == 0)
                    return BattleshipCommandKind_BattleshipPlayCommand;
                break;
            default:
                break;
          }
      }
    throw("The value for field `BattleshipCommandKind' is not one of the legal values.");
  }

const char *BattleshipQueryStateJSON::stringFromBattleshipCommandKind(TypeBattleshipCommandKind the_enum)
  {
    switch (the_enum)
      {
        case BattleshipCommandKind_BattleshipPlayCommand:
            return "BattleshipPlayCommand";
        case BattleshipCommandKind_BattleshipInvalidCoordinatesCommand:
            return "BattleshipInvalidCoordinatesCommand";
        case BattleshipCommandKind_BattleshipNotUnderstoodCommand:
            return "BattleshipNotUnderstoodCommand";
        case BattleshipCommandKind_BattleshipDictateCoordinatesCommand:
            return "BattleshipDictateCoordinatesCommand";
        default:
            assert(false);
            return NULL;
      }
  }

BattleshipQueryStateJSON::BattleshipQueryStateJSON(const BattleshipQueryStateJSON &)
  {
    assert(false);
  }

BattleshipQueryStateJSON &BattleshipQueryStateJSON::operator=(const BattleshipQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BattleshipQueryStateJSON::fromJSONUserCoordinates(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field UserCoordinates of BattleshipQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< BattleshipCoordinateJSON * > vector_UserCoordinates1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        BattleshipCoordinateJSON *convert_classy = BattleshipCoordinateJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_UserCoordinates1[num1] = convert_classy;
      }
    initUserCoordinates();
    for (size_t num3 = 0; num3 < vector_UserCoordinates1.size(); ++num3)
        appendUserCoordinates(vector_UserCoordinates1[num3]);
    for (size_t num1 = 0; num1 < vector_UserCoordinates1.size(); ++num1)
      {
        vector_UserCoordinates1[num1]->remove_reference();
      }
  }

void BattleshipQueryStateJSON::fromJSONComputerCoordinates(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ComputerCoordinates of BattleshipQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< BattleshipCoordinateJSON * > vector_ComputerCoordinates1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        BattleshipCoordinateJSON *convert_classy = BattleshipCoordinateJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ComputerCoordinates1[num1] = convert_classy;
      }
    initComputerCoordinates();
    for (size_t num4 = 0; num4 < vector_ComputerCoordinates1.size(); ++num4)
        appendComputerCoordinates(vector_ComputerCoordinates1[num4]);
    for (size_t num1 = 0; num1 < vector_ComputerCoordinates1.size(); ++num1)
      {
        vector_ComputerCoordinates1[num1]->remove_reference();
      }
  }

void BattleshipQueryStateJSON::fromJSONStartDatetime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDatetime(convert_classy);
    convert_classy->remove_reference();
  }

void BattleshipQueryStateJSON::fromJSONBattleshipCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BattleshipCommandKind of BattleshipQueryStateJSON is not a string.");
    TypeBattleshipCommandKind the_enum;
    if (strncmp(json_string->getData(), "Battleship", 10) == 0)
      {
        switch ((unsigned char)(json_string->getData()[10]))
          {
            case 'D':
                if (strcmp(&(json_string->getData()[11]), "ictateCoordinatesCommand") == 0)
                      {
                        the_enum = BattleshipCommandKind_BattleshipDictateCoordinatesCommand;
                        goto enum_is_done;
                      }
                break;
            case 'I':
                if (strcmp(&(json_string->getData()[11]), "nvalidCoordinatesCommand") == 0)
                      {
                        the_enum = BattleshipCommandKind_BattleshipInvalidCoordinatesCommand;
                        goto enum_is_done;
                      }
                break;
            case 'N':
                if (strcmp(&(json_string->getData()[11]), "otUnderstoodCommand") == 0)
                      {
                        the_enum = BattleshipCommandKind_BattleshipNotUnderstoodCommand;
                        goto enum_is_done;
                      }
                break;
            case 'P':
                if (strcmp(&(json_string->getData()[11]), "layCommand") == 0)
                      {
                        the_enum = BattleshipCommandKind_BattleshipPlayCommand;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field BattleshipCommandKind of BattleshipQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setBattleshipCommandKind(the_enum);
  }

BattleshipQueryStateJSON::BattleshipQueryStateJSON(void) :
        flagHasUserCoordinates(false),
        flagHasComputerCoordinates(false),
        flagHasStartDatetime(false),
        flagHasBattleshipCommandKind(false)
  {
    extraIndex = create_string_index();
  }

BattleshipQueryStateJSON::~BattleshipQueryStateJSON(void)
  {
    if (flagHasUserCoordinates)
      {
        for (size_t num7 = 0; num7 < storeUserCoordinates.size(); ++num7)
          {
            storeUserCoordinates[num7]->remove_reference();
          }
      }
    if (flagHasComputerCoordinates)
      {
        for (size_t num8 = 0; num8 < storeComputerCoordinates.size(); ++num8)
          {
            storeComputerCoordinates[num8]->remove_reference();
          }
      }
    if (flagHasStartDatetime)
      {
        storeStartDatetime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool BattleshipQueryStateJSON::hasUserCoordinates(void) const
  {
    return flagHasUserCoordinates;
  }

size_t BattleshipQueryStateJSON::countOfUserCoordinates(void) const
  {
    assert(flagHasUserCoordinates);
    return storeUserCoordinates.size();
  }

BattleshipCoordinateJSON * BattleshipQueryStateJSON::elementOfUserCoordinates(size_t element_num)
  {
    assert(flagHasUserCoordinates);
    return storeUserCoordinates[element_num];
  }

const BattleshipCoordinateJSON * BattleshipQueryStateJSON::elementOfUserCoordinates(size_t element_num) const
  {
    assert(flagHasUserCoordinates);
    return storeUserCoordinates[element_num];
  }

std::vector< BattleshipCoordinateJSON * > BattleshipQueryStateJSON::getUserCoordinates(void)
  {
    assert(flagHasUserCoordinates);
    return storeUserCoordinates;
  }

const std::vector< BattleshipCoordinateJSON * > BattleshipQueryStateJSON::getUserCoordinates(void) const
  {
    assert(flagHasUserCoordinates);
    return storeUserCoordinates;
  }

bool BattleshipQueryStateJSON::hasComputerCoordinates(void) const
  {
    return flagHasComputerCoordinates;
  }

size_t BattleshipQueryStateJSON::countOfComputerCoordinates(void) const
  {
    assert(flagHasComputerCoordinates);
    return storeComputerCoordinates.size();
  }

BattleshipCoordinateJSON * BattleshipQueryStateJSON::elementOfComputerCoordinates(size_t element_num)
  {
    assert(flagHasComputerCoordinates);
    return storeComputerCoordinates[element_num];
  }

const BattleshipCoordinateJSON * BattleshipQueryStateJSON::elementOfComputerCoordinates(size_t element_num) const
  {
    assert(flagHasComputerCoordinates);
    return storeComputerCoordinates[element_num];
  }

std::vector< BattleshipCoordinateJSON * > BattleshipQueryStateJSON::getComputerCoordinates(void)
  {
    assert(flagHasComputerCoordinates);
    return storeComputerCoordinates;
  }

const std::vector< BattleshipCoordinateJSON * > BattleshipQueryStateJSON::getComputerCoordinates(void) const
  {
    assert(flagHasComputerCoordinates);
    return storeComputerCoordinates;
  }

bool BattleshipQueryStateJSON::hasStartDatetime(void) const
  {
    return flagHasStartDatetime;
  }

DateAndOrTimeJSON * BattleshipQueryStateJSON::getStartDatetime(void)
  {
    assert(flagHasStartDatetime);
    return storeStartDatetime;
  }

const DateAndOrTimeJSON * BattleshipQueryStateJSON::getStartDatetime(void) const
  {
    assert(flagHasStartDatetime);
    return storeStartDatetime;
  }

bool BattleshipQueryStateJSON::hasBattleshipCommandKind(void) const
  {
    return flagHasBattleshipCommandKind;
  }

BattleshipQueryStateJSON::TypeBattleshipCommandKind BattleshipQueryStateJSON::getBattleshipCommandKind(void)
  {
    assert(flagHasBattleshipCommandKind);
    return storeBattleshipCommandKind;
  }

const BattleshipQueryStateJSON::TypeBattleshipCommandKind BattleshipQueryStateJSON::getBattleshipCommandKind(void) const
  {
    assert(flagHasBattleshipCommandKind);
    return storeBattleshipCommandKind;
  }

const char *BattleshipQueryStateJSON::getBattleshipCommandKindAsChars(void) const
  {
    return stringFromBattleshipCommandKind(getBattleshipCommandKind());
  }

std::string BattleshipQueryStateJSON::getBattleshipCommandKindAsString(void) const
  {
    return stringFromBattleshipCommandKind(getBattleshipCommandKind());
  }

BattleshipQueryStateJSON *BattleshipQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipQueryStateJSON>, BattleshipQueryStateJSON *, bool> generator("Type BattleshipQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
