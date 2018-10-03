/* file "BattleshipCoordinateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipCoordinateJSON.h"

#include "BattleshipCoordinateJSON.h"


BattleshipCoordinateJSON::TypeYCoordinate BattleshipCoordinateJSON::stringToYCoordinate(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (chars[1] == 0)
                return YCoordinate_A;
            break;
        case 'B':
            if (chars[1] == 0)
                return YCoordinate_B;
            break;
        case 'C':
            if (chars[1] == 0)
                return YCoordinate_C;
            break;
        case 'D':
            if (chars[1] == 0)
                return YCoordinate_D;
            break;
        case 'E':
            if (chars[1] == 0)
                return YCoordinate_E;
            break;
        case 'F':
            if (chars[1] == 0)
                return YCoordinate_F;
            break;
        case 'G':
            if (chars[1] == 0)
                return YCoordinate_G;
            break;
        case 'H':
            if (chars[1] == 0)
                return YCoordinate_H;
            break;
        case 'I':
            if (chars[1] == 0)
                return YCoordinate_I;
            break;
        case 'J':
            if (chars[1] == 0)
                return YCoordinate_J;
            break;
        case 'K':
            if (chars[1] == 0)
                return YCoordinate_K;
            break;
        case 'L':
            if (chars[1] == 0)
                return YCoordinate_L;
            break;
        case 'M':
            if (chars[1] == 0)
                return YCoordinate_M;
            break;
        case 'O':
            if (chars[1] == 0)
                return YCoordinate_O;
            break;
        case 'P':
            if (chars[1] == 0)
                return YCoordinate_P;
            break;
        case 'Q':
            if (chars[1] == 0)
                return YCoordinate_Q;
            break;
        case 'R':
            if (chars[1] == 0)
                return YCoordinate_R;
            break;
        case 'S':
            if (chars[1] == 0)
                return YCoordinate_S;
            break;
        case 'T':
            if (chars[1] == 0)
                return YCoordinate_T;
            break;
        case 'U':
            if (chars[1] == 0)
                return YCoordinate_U;
            break;
        case 'V':
            if (chars[1] == 0)
                return YCoordinate_V;
            break;
        case 'W':
            if (chars[1] == 0)
                return YCoordinate_W;
            break;
        case 'X':
            if (chars[1] == 0)
                return YCoordinate_X;
            break;
        case 'Y':
            if (chars[1] == 0)
                return YCoordinate_Y;
            break;
        case 'Z':
            if (chars[1] == 0)
                return YCoordinate_Z;
            break;
        default:
            break;
      }
    throw("The value for field `YCoordinate' is not one of the legal values.");
  }

const char *BattleshipCoordinateJSON::stringFromYCoordinate(TypeYCoordinate the_enum)
  {
    switch (the_enum)
      {
        case YCoordinate_A:
            return "A";
        case YCoordinate_B:
            return "B";
        case YCoordinate_C:
            return "C";
        case YCoordinate_D:
            return "D";
        case YCoordinate_E:
            return "E";
        case YCoordinate_F:
            return "F";
        case YCoordinate_G:
            return "G";
        case YCoordinate_H:
            return "H";
        case YCoordinate_I:
            return "I";
        case YCoordinate_J:
            return "J";
        case YCoordinate_K:
            return "K";
        case YCoordinate_L:
            return "L";
        case YCoordinate_M:
            return "M";
        case YCoordinate_O:
            return "O";
        case YCoordinate_P:
            return "P";
        case YCoordinate_Q:
            return "Q";
        case YCoordinate_R:
            return "R";
        case YCoordinate_S:
            return "S";
        case YCoordinate_T:
            return "T";
        case YCoordinate_U:
            return "U";
        case YCoordinate_V:
            return "V";
        case YCoordinate_W:
            return "W";
        case YCoordinate_X:
            return "X";
        case YCoordinate_Y:
            return "Y";
        case YCoordinate_Z:
            return "Z";
        default:
            assert(false);
            return NULL;
      }
  }

BattleshipCoordinateJSON::TypeResult BattleshipCoordinateJSON::stringToResult(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "it") == 0)
                return Result_Hit;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nvalidCoordinate") == 0)
                return Result_InvalidCoordinate;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "iss") == 0)
                return Result_Miss;
            break;
        case 'N':
            if (strncmp(&(chars[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'n':
                        if (strcmp(&(chars[3]), "e") == 0)
                            return Result_None;
                        break;
                    case 't':
                        if (strcmp(&(chars[3]), "Understood") == 0)
                            return Result_NotUnderstood;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field `Result' is not one of the legal values.");
  }

const char *BattleshipCoordinateJSON::stringFromResult(TypeResult the_enum)
  {
    switch (the_enum)
      {
        case Result_Hit:
            return "Hit";
        case Result_Miss:
            return "Miss";
        case Result_InvalidCoordinate:
            return "InvalidCoordinate";
        case Result_NotUnderstood:
            return "NotUnderstood";
        case Result_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

BattleshipCoordinateJSON::BattleshipCoordinateJSON(const BattleshipCoordinateJSON &)
  {
    assert(false);
  }

BattleshipCoordinateJSON &BattleshipCoordinateJSON::operator=(const BattleshipCoordinateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BattleshipCoordinateJSON::fromJSONYCoordinate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field YCoordinate of BattleshipCoordinateJSON is not a string.");
    TypeYCoordinate the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_A;
                    goto enum_is_done;
                  }
            break;
        case 'B':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_B;
                    goto enum_is_done;
                  }
            break;
        case 'C':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_C;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_D;
                    goto enum_is_done;
                  }
            break;
        case 'E':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_E;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_F;
                    goto enum_is_done;
                  }
            break;
        case 'G':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_G;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_H;
                    goto enum_is_done;
                  }
            break;
        case 'I':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_I;
                    goto enum_is_done;
                  }
            break;
        case 'J':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_J;
                    goto enum_is_done;
                  }
            break;
        case 'K':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_K;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_L;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_M;
                    goto enum_is_done;
                  }
            break;
        case 'O':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_O;
                    goto enum_is_done;
                  }
            break;
        case 'P':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_P;
                    goto enum_is_done;
                  }
            break;
        case 'Q':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_Q;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_R;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_S;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_T;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_U;
                    goto enum_is_done;
                  }
            break;
        case 'V':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_V;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_W;
                    goto enum_is_done;
                  }
            break;
        case 'X':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_X;
                    goto enum_is_done;
                  }
            break;
        case 'Y':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_Y;
                    goto enum_is_done;
                  }
            break;
        case 'Z':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = YCoordinate_Z;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field YCoordinate of BattleshipCoordinateJSON is not one of the legal strings.");
  enum_is_done:;
    setYCoordinate(the_enum);
  }

void BattleshipCoordinateJSON::fromJSONXCoordinate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field XCoordinate of BattleshipCoordinateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field XCoordinate of BattleshipCoordinateJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setXCoordinate(extracted_integer);
  }

void BattleshipCoordinateJSON::fromJSONResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Result of BattleshipCoordinateJSON is not a string.");
    TypeResult the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "it") == 0)
                  {
                    the_enum = Result_Hit;
                    goto enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nvalidCoordinate") == 0)
                  {
                    the_enum = Result_InvalidCoordinate;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "iss") == 0)
                  {
                    the_enum = Result_Miss;
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
                                the_enum = Result_None;
                                goto enum_is_done;
                              }
                        break;
                    case 't':
                        if (strcmp(&(json_string->getData()[3]), "Understood") == 0)
                              {
                                the_enum = Result_NotUnderstood;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field Result of BattleshipCoordinateJSON is not one of the legal strings.");
  enum_is_done:;
    setResult(the_enum);
  }

BattleshipCoordinateJSON::BattleshipCoordinateJSON(void) :
        flagHasYCoordinate(false),
        flagHasXCoordinate(false),
        flagHasResult(false)
  {
    extraIndex = create_string_index();
  }

BattleshipCoordinateJSON::~BattleshipCoordinateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool BattleshipCoordinateJSON::hasYCoordinate(void) const
  {
    return flagHasYCoordinate;
  }

BattleshipCoordinateJSON::TypeYCoordinate BattleshipCoordinateJSON::getYCoordinate(void)
  {
    assert(flagHasYCoordinate);
    return storeYCoordinate;
  }

const BattleshipCoordinateJSON::TypeYCoordinate BattleshipCoordinateJSON::getYCoordinate(void) const
  {
    assert(flagHasYCoordinate);
    return storeYCoordinate;
  }

const char *BattleshipCoordinateJSON::getYCoordinateAsChars(void) const
  {
    return stringFromYCoordinate(getYCoordinate());
  }

std::string BattleshipCoordinateJSON::getYCoordinateAsString(void) const
  {
    return stringFromYCoordinate(getYCoordinate());
  }

bool BattleshipCoordinateJSON::hasXCoordinate(void) const
  {
    return flagHasXCoordinate;
  }

uint8_t BattleshipCoordinateJSON::getXCoordinate(void)
  {
    assert(flagHasXCoordinate);
    return storeXCoordinate;
  }

const uint8_t BattleshipCoordinateJSON::getXCoordinate(void) const
  {
    assert(flagHasXCoordinate);
    return storeXCoordinate;
  }

bool BattleshipCoordinateJSON::hasResult(void) const
  {
    return flagHasResult;
  }

BattleshipCoordinateJSON::TypeResult BattleshipCoordinateJSON::getResult(void)
  {
    assert(flagHasResult);
    return storeResult;
  }

const BattleshipCoordinateJSON::TypeResult BattleshipCoordinateJSON::getResult(void) const
  {
    assert(flagHasResult);
    return storeResult;
  }

const char *BattleshipCoordinateJSON::getResultAsChars(void) const
  {
    return stringFromResult(getResult());
  }

std::string BattleshipCoordinateJSON::getResultAsString(void) const
  {
    return stringFromResult(getResult());
  }

BattleshipCoordinateJSON *BattleshipCoordinateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipCoordinateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipCoordinateJSON>, BattleshipCoordinateJSON *, bool> generator("Type BattleshipCoordinate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
