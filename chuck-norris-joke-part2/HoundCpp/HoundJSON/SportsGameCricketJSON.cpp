/* file "SportsGameCricketJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGameCricketJSON.h"

#include "SportsGameCricketJSON.h"


SportsGameCricketJSON::TypeCricketGameFormat::TypeCricketGameFormat(void)
  {
  }

SportsGameCricketJSON::TypeCricketGameFormat::TypeCricketGameFormat(const TypeCricketGameFormat &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameCricketJSON::TypeCricketGameFormat::TypeCricketGameFormat(TypeCricketGameFormatKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameCricketJSON::TypeCricketGameFormat::operator==(const TypeCricketGameFormat &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameCricketJSON::TypeCricketGameFormat::operator!=(const TypeCricketGameFormat &other) const
  {
    return !(operator==(other));
  }

bool SportsGameCricketJSON::TypeCricketGameFormat::operator<(const TypeCricketGameFormat &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameCricketJSON::TypeCricketGameFormat::operator>(const TypeCricketGameFormat &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameCricketJSON::TypeCricketGameFormat::operator>=(const TypeCricketGameFormat &other) const
  {
    return !(operator<(other));
  }

bool SportsGameCricketJSON::TypeCricketGameFormat::operator<=(const TypeCricketGameFormat &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameCricketJSON::TypeCricketGameFormatKnownValues SportsGameCricketJSON::stringToCricketGameFormat(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "irstClass") == 0)
                return CricketGameFormat_FirstClass;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "istA") == 0)
                return CricketGameFormat_ListA;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "DI") == 0)
                return CricketGameFormat_ODI;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case '2':
                    if (strncmp(&(chars[2]), "0", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 0:
                                return CricketGameFormat_T20;
                            case 'I':
                                if (chars[4] == 0)
                                    return CricketGameFormat_T20I;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "st") == 0)
                        return CricketGameFormat_Test;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return CricketGameFormat__none;
  }

const char *SportsGameCricketJSON::stringFromCricketGameFormat(TypeCricketGameFormatKnownValues the_enum)
  {
    switch (the_enum)
      {
        case CricketGameFormat_ODI:
            return "ODI";
        case CricketGameFormat_T20:
            return "T20";
        case CricketGameFormat_T20I:
            return "T20I";
        case CricketGameFormat_Test:
            return "Test";
        case CricketGameFormat_ListA:
            return "ListA";
        case CricketGameFormat_FirstClass:
            return "FirstClass";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameCricketJSON::TypeInningsJSON::TypeInningsJSON(const TypeInningsJSON &)
  {
    assert(false);
  }

SportsGameCricketJSON::TypeInningsJSON &SportsGameCricketJSON::TypeInningsJSON::operator=(const TypeInningsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsGameCricketJSON::TypeInningsJSON::fromJSONTeamIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TeamIndex of TypeInningsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TeamIndex of TypeInningsJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setTeamIndex(extracted_integer);
  }

void SportsGameCricketJSON::TypeInningsJSON::fromJSONRuns(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Runs of TypeInningsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Runs of TypeInningsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRuns(extracted_integer);
  }

void SportsGameCricketJSON::TypeInningsJSON::fromJSONWicketsLost(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field WicketsLost of TypeInningsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field WicketsLost of TypeInningsJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setWicketsLost(extracted_integer);
  }

void SportsGameCricketJSON::TypeInningsJSON::fromJSONOvers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Overs of TypeInningsJSON is not a number.");
          }
      }
    setOversText(the_rational_text);
  }

void SportsGameCricketJSON::TypeInningsJSON::fromJSONAllottedOvers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field AllottedOvers of TypeInningsJSON is not a number.");
          }
      }
    setAllottedOversText(the_rational_text);
  }

void SportsGameCricketJSON::TypeInningsJSON::fromJSONDeclared(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Declared of TypeInningsJSON is not true for false.");
          }
      }
    setDeclared(the_bool);
  }

void SportsGameCricketJSON::TypeInningsJSON::fromJSONFollowedOn(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field FollowedOn of TypeInningsJSON is not true for false.");
          }
      }
    setFollowedOn(the_bool);
  }

void SportsGameCricketJSON::TypeInningsJSON::fromJSONTarget(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Target of TypeInningsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Target of TypeInningsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTarget(extracted_integer);
  }

SportsGameCricketJSON::TypeInningsJSON::TypeInningsJSON(void) :
        flagHasTeamIndex(false),
        flagHasRuns(false),
        flagHasWicketsLost(false),
        flagHasOvers(false),
        flagHasAllottedOvers(false),
        flagHasDeclared(false),
        flagHasFollowedOn(false),
        flagHasTarget(false)
  {
    extraIndex = create_string_index();
  }

SportsGameCricketJSON::TypeInningsJSON::~TypeInningsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsGameCricketJSON::TypeInningsJSON::hasTeamIndex(void) const
  {
    return flagHasTeamIndex;
  }

uint8_t SportsGameCricketJSON::TypeInningsJSON::getTeamIndex(void)
  {
    assert(flagHasTeamIndex);
    return storeTeamIndex;
  }

const uint8_t SportsGameCricketJSON::TypeInningsJSON::getTeamIndex(void) const
  {
    assert(flagHasTeamIndex);
    return storeTeamIndex;
  }

bool SportsGameCricketJSON::TypeInningsJSON::hasRuns(void) const
  {
    return flagHasRuns;
  }

OInteger SportsGameCricketJSON::TypeInningsJSON::getRuns(void)
  {
    assert(flagHasRuns);
    return storeRuns;
  }

const OInteger SportsGameCricketJSON::TypeInningsJSON::getRuns(void) const
  {
    assert(flagHasRuns);
    return storeRuns;
  }

bool SportsGameCricketJSON::TypeInningsJSON::hasWicketsLost(void) const
  {
    return flagHasWicketsLost;
  }

uint8_t SportsGameCricketJSON::TypeInningsJSON::getWicketsLost(void)
  {
    assert(flagHasWicketsLost);
    return storeWicketsLost;
  }

const uint8_t SportsGameCricketJSON::TypeInningsJSON::getWicketsLost(void) const
  {
    assert(flagHasWicketsLost);
    return storeWicketsLost;
  }

bool SportsGameCricketJSON::TypeInningsJSON::hasOvers(void) const
  {
    return flagHasOvers;
  }

double SportsGameCricketJSON::TypeInningsJSON::getOvers(void)
  {
    assert(flagHasOvers);
    if (textStoreOvers != "")
      {
        return atof(textStoreOvers.c_str());
      }
    return storeOvers;
  }

const double SportsGameCricketJSON::TypeInningsJSON::getOvers(void) const
  {
    assert(flagHasOvers);
    if (textStoreOvers != "")
      {
        return atof(textStoreOvers.c_str());
      }
    return storeOvers;
  }

std::string SportsGameCricketJSON::TypeInningsJSON::getOversAsText(void) const
  {
    assert(flagHasOvers);
    if (textStoreOvers == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeOvers);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreOvers);
      }
  }

bool SportsGameCricketJSON::TypeInningsJSON::hasAllottedOvers(void) const
  {
    return flagHasAllottedOvers;
  }

double SportsGameCricketJSON::TypeInningsJSON::getAllottedOvers(void)
  {
    assert(flagHasAllottedOvers);
    if (textStoreAllottedOvers != "")
      {
        return atof(textStoreAllottedOvers.c_str());
      }
    return storeAllottedOvers;
  }

const double SportsGameCricketJSON::TypeInningsJSON::getAllottedOvers(void) const
  {
    assert(flagHasAllottedOvers);
    if (textStoreAllottedOvers != "")
      {
        return atof(textStoreAllottedOvers.c_str());
      }
    return storeAllottedOvers;
  }

std::string SportsGameCricketJSON::TypeInningsJSON::getAllottedOversAsText(void) const
  {
    assert(flagHasAllottedOvers);
    if (textStoreAllottedOvers == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeAllottedOvers);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreAllottedOvers);
      }
  }

bool SportsGameCricketJSON::TypeInningsJSON::hasDeclared(void) const
  {
    return flagHasDeclared;
  }

bool SportsGameCricketJSON::TypeInningsJSON::getDeclared(void)
  {
    assert(flagHasDeclared);
    return storeDeclared;
  }

const bool SportsGameCricketJSON::TypeInningsJSON::getDeclared(void) const
  {
    assert(flagHasDeclared);
    return storeDeclared;
  }

bool SportsGameCricketJSON::TypeInningsJSON::hasFollowedOn(void) const
  {
    return flagHasFollowedOn;
  }

bool SportsGameCricketJSON::TypeInningsJSON::getFollowedOn(void)
  {
    assert(flagHasFollowedOn);
    return storeFollowedOn;
  }

const bool SportsGameCricketJSON::TypeInningsJSON::getFollowedOn(void) const
  {
    assert(flagHasFollowedOn);
    return storeFollowedOn;
  }

bool SportsGameCricketJSON::TypeInningsJSON::hasTarget(void) const
  {
    return flagHasTarget;
  }

OInteger SportsGameCricketJSON::TypeInningsJSON::getTarget(void)
  {
    assert(flagHasTarget);
    return storeTarget;
  }

const OInteger SportsGameCricketJSON::TypeInningsJSON::getTarget(void) const
  {
    assert(flagHasTarget);
    return storeTarget;
  }

SportsGameCricketJSON::SportsGameCricketJSON(const SportsGameCricketJSON &)
  {
    assert(false);
  }

SportsGameCricketJSON &SportsGameCricketJSON::operator=(const SportsGameCricketJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsGameCricketJSON::extraCricketGameFormatToJSON(void) const
  {
    JSONStringValue *generated_string_CricketGameFormat;
    if (!(storeCricketGameFormat.in_known_list))
      {
    generated_string_CricketGameFormat = new JSONStringValue(storeCricketGameFormat.string_value.c_str());
      }
    else
      {
    switch (storeCricketGameFormat.list_value)
      {
        case CricketGameFormat_ODI:
            generated_string_CricketGameFormat = new JSONStringValue("ODI");
            break;
        case CricketGameFormat_T20:
            generated_string_CricketGameFormat = new JSONStringValue("T20");
            break;
        case CricketGameFormat_T20I:
            generated_string_CricketGameFormat = new JSONStringValue("T20I");
            break;
        case CricketGameFormat_Test:
            generated_string_CricketGameFormat = new JSONStringValue("Test");
            break;
        case CricketGameFormat_ListA:
            generated_string_CricketGameFormat = new JSONStringValue("ListA");
            break;
        case CricketGameFormat_FirstClass:
            generated_string_CricketGameFormat = new JSONStringValue("FirstClass");
            break;
        default:
            assert(false);
            generated_string_CricketGameFormat = NULL;
      }
      }
    return generated_string_CricketGameFormat;
  }

JSONValue *SportsGameCricketJSON::extraInningsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Innings = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeInnings.size(); ++num1)
      {
        JSONValueHandler handler_Innings;
        storeInnings[num1]->write_as_json(&handler_Innings);
        handler_Innings.result->add_reference();
        generated_array_1_Innings->appendComponent(handler_Innings.result);
        handler_Innings.result->remove_reference();
      }
    return generated_array_1_Innings;
  }

JSONValue *SportsGameCricketJSON::extraWinningTeamIndexToJSON(void) const
  {
    JSONIntegerValue *generated_integer_WinningTeamIndex = new JSONIntegerValue(storeWinningTeamIndex);
    return generated_integer_WinningTeamIndex;
  }

JSONValue *SportsGameCricketJSON::extraWinningTeamRunDifferenceToJSON(void) const
  {
    JSONIntegerValue *generated_integer_WinningTeamRunDifference = new JSONIntegerValue(storeWinningTeamRunDifference.get_o_integer());
    return generated_integer_WinningTeamRunDifference;
  }

JSONValue *SportsGameCricketJSON::extraWinningTeamWicketDifferenceToJSON(void) const
  {
    JSONIntegerValue *generated_integer_WinningTeamWicketDifference = new JSONIntegerValue(storeWinningTeamWicketDifference);
    return generated_integer_WinningTeamWicketDifference;
  }

JSONValue *SportsGameCricketJSON::extraDrawToJSON(void) const
  {
    JSONValue *generated_boolean_Draw = (storeDraw ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_Draw;
  }

JSONValue *SportsGameCricketJSON::extraTieToJSON(void) const
  {
    JSONValue *generated_boolean_Tie = (storeTie ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_Tie;
  }

void SportsGameCricketJSON::fromJSONCricketGameFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CricketGameFormat of SportsGameCricketJSON is not a string.");
    TypeCricketGameFormat the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "irstClass") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = CricketGameFormat_FirstClass;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "istA") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = CricketGameFormat_ListA;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "DI") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = CricketGameFormat_ODI;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case '2':
                    if (strncmp(&(json_string->getData()[2]), "0", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 0:
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = CricketGameFormat_T20;
                                    goto open_enum_is_done;
                                  }
                            case 'I':
                                if (json_string->getData()[4] == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = CricketGameFormat_T20I;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "st") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = CricketGameFormat_Test;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setCricketGameFormat(the_open_enum);
  }

void SportsGameCricketJSON::fromJSONInnings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Innings of SportsGameCricketJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Innings of SportsGameCricketJSON has too few elements.");
    std::vector< TypeInningsJSON * > vector_Innings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeInningsJSON *convert_classy = TypeInningsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Innings1[num1] = convert_classy;
      }
    assert(vector_Innings1.size() >= 1);
    initInnings();
    for (size_t num2 = 0; num2 < vector_Innings1.size(); ++num2)
        appendInnings(vector_Innings1[num2]);
    for (size_t num1 = 0; num1 < vector_Innings1.size(); ++num1)
      {
        vector_Innings1[num1]->remove_reference();
      }
  }

void SportsGameCricketJSON::fromJSONWinningTeamIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field WinningTeamIndex of SportsGameCricketJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field WinningTeamIndex of SportsGameCricketJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setWinningTeamIndex(extracted_integer);
  }

void SportsGameCricketJSON::fromJSONWinningTeamRunDifference(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field WinningTeamRunDifference of SportsGameCricketJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field WinningTeamRunDifference of SportsGameCricketJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWinningTeamRunDifference(extracted_integer);
  }

void SportsGameCricketJSON::fromJSONWinningTeamWicketDifference(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field WinningTeamWicketDifference of SportsGameCricketJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field WinningTeamWicketDifference of SportsGameCricketJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setWinningTeamWicketDifference(extracted_integer);
  }

void SportsGameCricketJSON::fromJSONDraw(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Draw of SportsGameCricketJSON is not true for false.");
          }
      }
    setDraw(the_bool);
  }

void SportsGameCricketJSON::fromJSONTie(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Tie of SportsGameCricketJSON is not true for false.");
          }
      }
    setTie(the_bool);
  }

SportsGameCricketJSON::SportsGameCricketJSON(void) :
        flagHasCricketGameFormat(false),
        flagHasInnings(false),
        flagHasWinningTeamIndex(false),
        flagHasWinningTeamRunDifference(false),
        flagHasWinningTeamWicketDifference(false),
        flagHasDraw(false),
        flagHasTie(false)
  {
    extraIndex = create_string_index();
  }

SportsGameCricketJSON::~SportsGameCricketJSON(void)
  {
    if (flagHasInnings)
      {
        for (size_t num4 = 0; num4 < storeInnings.size(); ++num4)
          {
            storeInnings[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsGameCricketJSON::getSportsGameKind(void) const
  {
    return "Cricket";
  }

bool SportsGameCricketJSON::hasCricketGameFormat(void) const
  {
    return flagHasCricketGameFormat;
  }

SportsGameCricketJSON::TypeCricketGameFormat SportsGameCricketJSON::getCricketGameFormat(void)
  {
    assert(flagHasCricketGameFormat);
    return storeCricketGameFormat;
  }

const SportsGameCricketJSON::TypeCricketGameFormat SportsGameCricketJSON::getCricketGameFormat(void) const
  {
    assert(flagHasCricketGameFormat);
    return storeCricketGameFormat;
  }

const char *SportsGameCricketJSON::getCricketGameFormatAsChars(void) const
  {
    TypeCricketGameFormat result = getCricketGameFormat();
    if (result.in_known_list)
        return stringFromCricketGameFormat(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameCricketJSON::getCricketGameFormatAsString(void) const
  {
    return getCricketGameFormatAsChars();
  }

bool SportsGameCricketJSON::hasInnings(void) const
  {
    return flagHasInnings;
  }

size_t SportsGameCricketJSON::countOfInnings(void) const
  {
    assert(flagHasInnings);
    return storeInnings.size();
  }

SportsGameCricketJSON::TypeInningsJSON * SportsGameCricketJSON::elementOfInnings(size_t element_num)
  {
    assert(flagHasInnings);
    return storeInnings[element_num];
  }

const SportsGameCricketJSON::TypeInningsJSON * SportsGameCricketJSON::elementOfInnings(size_t element_num) const
  {
    assert(flagHasInnings);
    return storeInnings[element_num];
  }

std::vector< SportsGameCricketJSON::TypeInningsJSON * > SportsGameCricketJSON::getInnings(void)
  {
    assert(flagHasInnings);
    return storeInnings;
  }

const std::vector< SportsGameCricketJSON::TypeInningsJSON * > SportsGameCricketJSON::getInnings(void) const
  {
    assert(flagHasInnings);
    return storeInnings;
  }

bool SportsGameCricketJSON::hasWinningTeamIndex(void) const
  {
    return flagHasWinningTeamIndex;
  }

uint8_t SportsGameCricketJSON::getWinningTeamIndex(void)
  {
    assert(flagHasWinningTeamIndex);
    return storeWinningTeamIndex;
  }

const uint8_t SportsGameCricketJSON::getWinningTeamIndex(void) const
  {
    assert(flagHasWinningTeamIndex);
    return storeWinningTeamIndex;
  }

bool SportsGameCricketJSON::hasWinningTeamRunDifference(void) const
  {
    return flagHasWinningTeamRunDifference;
  }

OInteger SportsGameCricketJSON::getWinningTeamRunDifference(void)
  {
    assert(flagHasWinningTeamRunDifference);
    return storeWinningTeamRunDifference;
  }

const OInteger SportsGameCricketJSON::getWinningTeamRunDifference(void) const
  {
    assert(flagHasWinningTeamRunDifference);
    return storeWinningTeamRunDifference;
  }

bool SportsGameCricketJSON::hasWinningTeamWicketDifference(void) const
  {
    return flagHasWinningTeamWicketDifference;
  }

uint8_t SportsGameCricketJSON::getWinningTeamWicketDifference(void)
  {
    assert(flagHasWinningTeamWicketDifference);
    return storeWinningTeamWicketDifference;
  }

const uint8_t SportsGameCricketJSON::getWinningTeamWicketDifference(void) const
  {
    assert(flagHasWinningTeamWicketDifference);
    return storeWinningTeamWicketDifference;
  }

bool SportsGameCricketJSON::hasDraw(void) const
  {
    return flagHasDraw;
  }

bool SportsGameCricketJSON::getDraw(void)
  {
    assert(flagHasDraw);
    return storeDraw;
  }

const bool SportsGameCricketJSON::getDraw(void) const
  {
    assert(flagHasDraw);
    return storeDraw;
  }

bool SportsGameCricketJSON::hasTie(void) const
  {
    return flagHasTie;
  }

bool SportsGameCricketJSON::getTie(void)
  {
    assert(flagHasTie);
    return storeTie;
  }

const bool SportsGameCricketJSON::getTie(void) const
  {
    assert(flagHasTie);
    return storeTie;
  }

char SportsGameCricketJSON::TypeInningsJSON::Generator::lowerBoundRuns[] = "0";
char SportsGameCricketJSON::TypeInningsJSON::Generator::lowerBoundTarget[] = "0";
SportsGameCricketJSON::TypeInningsJSON *SportsGameCricketJSON::TypeInningsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeInningsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeInningsJSON>, TypeInningsJSON *, bool> generator("Type TypeInnings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char SportsGameCricketJSON::Generator::lowerBoundWinningTeamRunDifference[] = "1";
SportsGameCricketJSON *SportsGameCricketJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGameCricketJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGameCricketJSON>, SportsGameCricketJSON *, bool> generator("Type SportsGameCricket", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
