/* file "SportsResultScoreCricketJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsResultScoreCricketJSON.h"

#include "SportsResultScoreCricketJSON.h"


SportsResultScoreCricketJSON::TypeSportsGameKind SportsResultScoreCricketJSON::stringToSportsGameKind(const char *chars)
  {
    if (strcmp(chars, "Cricket") == 0)
        return SportsGameKind_Cricket;
    throw("The value for field `SportsGameKind' is not one of the legal values.");
  }

const char *SportsResultScoreCricketJSON::stringFromSportsGameKind(TypeSportsGameKind the_enum)
  {
    switch (the_enum)
      {
        case SportsGameKind_Cricket:
            return "Cricket";
        default:
            assert(false);
            return NULL;
      }
  }

SportsResultScoreCricketJSON::TypeMatchFormat::TypeMatchFormat(void)
  {
  }

SportsResultScoreCricketJSON::TypeMatchFormat::TypeMatchFormat(const TypeMatchFormat &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsResultScoreCricketJSON::TypeMatchFormat::TypeMatchFormat(TypeMatchFormatKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsResultScoreCricketJSON::TypeMatchFormat::operator==(const TypeMatchFormat &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsResultScoreCricketJSON::TypeMatchFormat::operator!=(const TypeMatchFormat &other) const
  {
    return !(operator==(other));
  }

bool SportsResultScoreCricketJSON::TypeMatchFormat::operator<(const TypeMatchFormat &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsResultScoreCricketJSON::TypeMatchFormat::operator>(const TypeMatchFormat &other) const
  {
    return other.operator<(*this);
  }

bool SportsResultScoreCricketJSON::TypeMatchFormat::operator>=(const TypeMatchFormat &other) const
  {
    return !(operator<(other));
  }

bool SportsResultScoreCricketJSON::TypeMatchFormat::operator<=(const TypeMatchFormat &other) const
  {
    return !(other.operator<(*this));
  }

SportsResultScoreCricketJSON::TypeMatchFormatKnownValues SportsResultScoreCricketJSON::stringToMatchFormat(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "irstClass") == 0)
                return MatchFormat_FirstClass;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "istA") == 0)
                return MatchFormat_ListA;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "DI") == 0)
                return MatchFormat_ODI;
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
                                return MatchFormat_T20;
                            case 'I':
                                if (chars[4] == 0)
                                    return MatchFormat_T20I;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "st") == 0)
                        return MatchFormat_Test;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return MatchFormat__none;
  }

const char *SportsResultScoreCricketJSON::stringFromMatchFormat(TypeMatchFormatKnownValues the_enum)
  {
    switch (the_enum)
      {
        case MatchFormat_ODI:
            return "ODI";
        case MatchFormat_T20:
            return "T20";
        case MatchFormat_T20I:
            return "T20I";
        case MatchFormat_Test:
            return "Test";
        case MatchFormat_ListA:
            return "ListA";
        case MatchFormat_FirstClass:
            return "FirstClass";
        default:
            assert(false);
            return NULL;
      }
  }

SportsResultScoreCricketJSON::TypeInningsJSON::TypeInningsJSON(const TypeInningsJSON &)
  {
    assert(false);
  }

SportsResultScoreCricketJSON::TypeInningsJSON &SportsResultScoreCricketJSON::TypeInningsJSON::operator=(const TypeInningsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsResultScoreCricketJSON::TypeInningsJSON::fromJSONTeamIndex(JSONValue *json_value, bool ignore_extras)
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

void SportsResultScoreCricketJSON::TypeInningsJSON::fromJSONRuns(JSONValue *json_value, bool ignore_extras)
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

void SportsResultScoreCricketJSON::TypeInningsJSON::fromJSONWicketsLost(JSONValue *json_value, bool ignore_extras)
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

void SportsResultScoreCricketJSON::TypeInningsJSON::fromJSONOvers(JSONValue *json_value, bool ignore_extras)
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

void SportsResultScoreCricketJSON::TypeInningsJSON::fromJSONAllottedOvers(JSONValue *json_value, bool ignore_extras)
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

void SportsResultScoreCricketJSON::TypeInningsJSON::fromJSONDeclared(JSONValue *json_value, bool ignore_extras)
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

void SportsResultScoreCricketJSON::TypeInningsJSON::fromJSONFollowedOn(JSONValue *json_value, bool ignore_extras)
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

void SportsResultScoreCricketJSON::TypeInningsJSON::fromJSONTarget(JSONValue *json_value, bool ignore_extras)
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

SportsResultScoreCricketJSON::TypeInningsJSON::TypeInningsJSON(void) :
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

SportsResultScoreCricketJSON::TypeInningsJSON::~TypeInningsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsResultScoreCricketJSON::TypeInningsJSON::hasTeamIndex(void) const
  {
    return flagHasTeamIndex;
  }

uint8_t SportsResultScoreCricketJSON::TypeInningsJSON::getTeamIndex(void)
  {
    assert(flagHasTeamIndex);
    return storeTeamIndex;
  }

const uint8_t SportsResultScoreCricketJSON::TypeInningsJSON::getTeamIndex(void) const
  {
    assert(flagHasTeamIndex);
    return storeTeamIndex;
  }

bool SportsResultScoreCricketJSON::TypeInningsJSON::hasRuns(void) const
  {
    return flagHasRuns;
  }

OInteger SportsResultScoreCricketJSON::TypeInningsJSON::getRuns(void)
  {
    assert(flagHasRuns);
    return storeRuns;
  }

const OInteger SportsResultScoreCricketJSON::TypeInningsJSON::getRuns(void) const
  {
    assert(flagHasRuns);
    return storeRuns;
  }

bool SportsResultScoreCricketJSON::TypeInningsJSON::hasWicketsLost(void) const
  {
    return flagHasWicketsLost;
  }

uint8_t SportsResultScoreCricketJSON::TypeInningsJSON::getWicketsLost(void)
  {
    assert(flagHasWicketsLost);
    return storeWicketsLost;
  }

const uint8_t SportsResultScoreCricketJSON::TypeInningsJSON::getWicketsLost(void) const
  {
    assert(flagHasWicketsLost);
    return storeWicketsLost;
  }

bool SportsResultScoreCricketJSON::TypeInningsJSON::hasOvers(void) const
  {
    return flagHasOvers;
  }

double SportsResultScoreCricketJSON::TypeInningsJSON::getOvers(void)
  {
    assert(flagHasOvers);
    if (textStoreOvers != "")
      {
        return atof(textStoreOvers.c_str());
      }
    return storeOvers;
  }

const double SportsResultScoreCricketJSON::TypeInningsJSON::getOvers(void) const
  {
    assert(flagHasOvers);
    if (textStoreOvers != "")
      {
        return atof(textStoreOvers.c_str());
      }
    return storeOvers;
  }

std::string SportsResultScoreCricketJSON::TypeInningsJSON::getOversAsText(void) const
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

bool SportsResultScoreCricketJSON::TypeInningsJSON::hasAllottedOvers(void) const
  {
    return flagHasAllottedOvers;
  }

double SportsResultScoreCricketJSON::TypeInningsJSON::getAllottedOvers(void)
  {
    assert(flagHasAllottedOvers);
    if (textStoreAllottedOvers != "")
      {
        return atof(textStoreAllottedOvers.c_str());
      }
    return storeAllottedOvers;
  }

const double SportsResultScoreCricketJSON::TypeInningsJSON::getAllottedOvers(void) const
  {
    assert(flagHasAllottedOvers);
    if (textStoreAllottedOvers != "")
      {
        return atof(textStoreAllottedOvers.c_str());
      }
    return storeAllottedOvers;
  }

std::string SportsResultScoreCricketJSON::TypeInningsJSON::getAllottedOversAsText(void) const
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

bool SportsResultScoreCricketJSON::TypeInningsJSON::hasDeclared(void) const
  {
    return flagHasDeclared;
  }

bool SportsResultScoreCricketJSON::TypeInningsJSON::getDeclared(void)
  {
    assert(flagHasDeclared);
    return storeDeclared;
  }

const bool SportsResultScoreCricketJSON::TypeInningsJSON::getDeclared(void) const
  {
    assert(flagHasDeclared);
    return storeDeclared;
  }

bool SportsResultScoreCricketJSON::TypeInningsJSON::hasFollowedOn(void) const
  {
    return flagHasFollowedOn;
  }

bool SportsResultScoreCricketJSON::TypeInningsJSON::getFollowedOn(void)
  {
    assert(flagHasFollowedOn);
    return storeFollowedOn;
  }

const bool SportsResultScoreCricketJSON::TypeInningsJSON::getFollowedOn(void) const
  {
    assert(flagHasFollowedOn);
    return storeFollowedOn;
  }

bool SportsResultScoreCricketJSON::TypeInningsJSON::hasTarget(void) const
  {
    return flagHasTarget;
  }

OInteger SportsResultScoreCricketJSON::TypeInningsJSON::getTarget(void)
  {
    assert(flagHasTarget);
    return storeTarget;
  }

const OInteger SportsResultScoreCricketJSON::TypeInningsJSON::getTarget(void) const
  {
    assert(flagHasTarget);
    return storeTarget;
  }

SportsResultScoreCricketJSON::SportsResultScoreCricketJSON(const SportsResultScoreCricketJSON &)
  {
    assert(false);
  }

SportsResultScoreCricketJSON &SportsResultScoreCricketJSON::operator=(const SportsResultScoreCricketJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsResultScoreCricketJSON::extraSportsGameKindToJSON(void) const
  {
    JSONStringValue *generated_string_SportsGameKind;
    generated_string_SportsGameKind = new JSONStringValue("Cricket");
    return generated_string_SportsGameKind;
  }

JSONValue *SportsResultScoreCricketJSON::extraMatchFormatToJSON(void) const
  {
    JSONStringValue *generated_string_MatchFormat;
    if (!(storeMatchFormat.in_known_list))
      {
    generated_string_MatchFormat = new JSONStringValue(storeMatchFormat.string_value.c_str());
      }
    else
      {
    switch (storeMatchFormat.list_value)
      {
        case MatchFormat_ODI:
            generated_string_MatchFormat = new JSONStringValue("ODI");
            break;
        case MatchFormat_T20:
            generated_string_MatchFormat = new JSONStringValue("T20");
            break;
        case MatchFormat_T20I:
            generated_string_MatchFormat = new JSONStringValue("T20I");
            break;
        case MatchFormat_Test:
            generated_string_MatchFormat = new JSONStringValue("Test");
            break;
        case MatchFormat_ListA:
            generated_string_MatchFormat = new JSONStringValue("ListA");
            break;
        case MatchFormat_FirstClass:
            generated_string_MatchFormat = new JSONStringValue("FirstClass");
            break;
        default:
            assert(false);
            generated_string_MatchFormat = NULL;
      }
      }
    return generated_string_MatchFormat;
  }

JSONValue *SportsResultScoreCricketJSON::extraInningsToJSON(void) const
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

JSONValue *SportsResultScoreCricketJSON::extraWinningTeamIndexToJSON(void) const
  {
    JSONIntegerValue *generated_integer_WinningTeamIndex = new JSONIntegerValue(storeWinningTeamIndex);
    return generated_integer_WinningTeamIndex;
  }

JSONValue *SportsResultScoreCricketJSON::extraWinningTeamRunDifferenceToJSON(void) const
  {
    JSONIntegerValue *generated_integer_WinningTeamRunDifference = new JSONIntegerValue(storeWinningTeamRunDifference.get_o_integer());
    return generated_integer_WinningTeamRunDifference;
  }

JSONValue *SportsResultScoreCricketJSON::extraWinningTeamWicketDifferenceToJSON(void) const
  {
    JSONIntegerValue *generated_integer_WinningTeamWicketDifference = new JSONIntegerValue(storeWinningTeamWicketDifference);
    return generated_integer_WinningTeamWicketDifference;
  }

JSONValue *SportsResultScoreCricketJSON::extraDrawToJSON(void) const
  {
    JSONValue *generated_boolean_Draw = (storeDraw ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_Draw;
  }

JSONValue *SportsResultScoreCricketJSON::extraTieToJSON(void) const
  {
    JSONValue *generated_boolean_Tie = (storeTie ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_Tie;
  }

void SportsResultScoreCricketJSON::fromJSONSportsGameKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SportsGameKind of SportsResultScoreCricketJSON is not a string.");
    if (!(strcmp(json_string->getData(), "Cricket") == 0))
        throw("The value for field SportsGameKind of SportsResultScoreCricketJSON is not `Cricket'.");
    setSportsGameKind();
  }

void SportsResultScoreCricketJSON::fromJSONMatchFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MatchFormat of SportsResultScoreCricketJSON is not a string.");
    TypeMatchFormat the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "irstClass") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MatchFormat_FirstClass;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "istA") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MatchFormat_ListA;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "DI") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MatchFormat_ODI;
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
                                    the_open_enum.list_value = MatchFormat_T20;
                                    goto open_enum_is_done;
                                  }
                            case 'I':
                                if (json_string->getData()[4] == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = MatchFormat_T20I;
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
                            the_open_enum.list_value = MatchFormat_Test;
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
    setMatchFormat(the_open_enum);
  }

void SportsResultScoreCricketJSON::fromJSONInnings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Innings of SportsResultScoreCricketJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Innings of SportsResultScoreCricketJSON has too few elements.");
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

void SportsResultScoreCricketJSON::fromJSONWinningTeamIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field WinningTeamIndex of SportsResultScoreCricketJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field WinningTeamIndex of SportsResultScoreCricketJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setWinningTeamIndex(extracted_integer);
  }

void SportsResultScoreCricketJSON::fromJSONWinningTeamRunDifference(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field WinningTeamRunDifference of SportsResultScoreCricketJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field WinningTeamRunDifference of SportsResultScoreCricketJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWinningTeamRunDifference(extracted_integer);
  }

void SportsResultScoreCricketJSON::fromJSONWinningTeamWicketDifference(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field WinningTeamWicketDifference of SportsResultScoreCricketJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field WinningTeamWicketDifference of SportsResultScoreCricketJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setWinningTeamWicketDifference(extracted_integer);
  }

void SportsResultScoreCricketJSON::fromJSONDraw(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Draw of SportsResultScoreCricketJSON is not true for false.");
          }
      }
    setDraw(the_bool);
  }

void SportsResultScoreCricketJSON::fromJSONTie(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Tie of SportsResultScoreCricketJSON is not true for false.");
          }
      }
    setTie(the_bool);
  }

SportsResultScoreCricketJSON::SportsResultScoreCricketJSON(void) :
        flagHasSportsGameKind(false),
        flagHasMatchFormat(false),
        flagHasInnings(false),
        flagHasWinningTeamIndex(false),
        flagHasWinningTeamRunDifference(false),
        flagHasWinningTeamWicketDifference(false),
        flagHasDraw(false),
        flagHasTie(false)
  {
    extraIndex = create_string_index();
  }

SportsResultScoreCricketJSON::~SportsResultScoreCricketJSON(void)
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

const char *SportsResultScoreCricketJSON::getSportsResultScoreKind(void) const
  {
    return "Cricket";
  }

bool SportsResultScoreCricketJSON::hasSportsGameKind(void) const
  {
    return flagHasSportsGameKind;
  }

SportsResultScoreCricketJSON::TypeSportsGameKind SportsResultScoreCricketJSON::getSportsGameKind(void)
  {
    assert(flagHasSportsGameKind);
    return SportsGameKind_Cricket;
  }

const SportsResultScoreCricketJSON::TypeSportsGameKind SportsResultScoreCricketJSON::getSportsGameKind(void) const
  {
    assert(flagHasSportsGameKind);
    return SportsGameKind_Cricket;
  }

const char *SportsResultScoreCricketJSON::getSportsGameKindAsChars(void) const
  {
    return stringFromSportsGameKind(getSportsGameKind());
  }

std::string SportsResultScoreCricketJSON::getSportsGameKindAsString(void) const
  {
    return stringFromSportsGameKind(getSportsGameKind());
  }

bool SportsResultScoreCricketJSON::hasMatchFormat(void) const
  {
    return flagHasMatchFormat;
  }

SportsResultScoreCricketJSON::TypeMatchFormat SportsResultScoreCricketJSON::getMatchFormat(void)
  {
    assert(flagHasMatchFormat);
    return storeMatchFormat;
  }

const SportsResultScoreCricketJSON::TypeMatchFormat SportsResultScoreCricketJSON::getMatchFormat(void) const
  {
    assert(flagHasMatchFormat);
    return storeMatchFormat;
  }

const char *SportsResultScoreCricketJSON::getMatchFormatAsChars(void) const
  {
    TypeMatchFormat result = getMatchFormat();
    if (result.in_known_list)
        return stringFromMatchFormat(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsResultScoreCricketJSON::getMatchFormatAsString(void) const
  {
    return getMatchFormatAsChars();
  }

bool SportsResultScoreCricketJSON::hasInnings(void) const
  {
    return flagHasInnings;
  }

size_t SportsResultScoreCricketJSON::countOfInnings(void) const
  {
    assert(flagHasInnings);
    return storeInnings.size();
  }

SportsResultScoreCricketJSON::TypeInningsJSON * SportsResultScoreCricketJSON::elementOfInnings(size_t element_num)
  {
    assert(flagHasInnings);
    return storeInnings[element_num];
  }

const SportsResultScoreCricketJSON::TypeInningsJSON * SportsResultScoreCricketJSON::elementOfInnings(size_t element_num) const
  {
    assert(flagHasInnings);
    return storeInnings[element_num];
  }

std::vector< SportsResultScoreCricketJSON::TypeInningsJSON * > SportsResultScoreCricketJSON::getInnings(void)
  {
    assert(flagHasInnings);
    return storeInnings;
  }

const std::vector< SportsResultScoreCricketJSON::TypeInningsJSON * > SportsResultScoreCricketJSON::getInnings(void) const
  {
    assert(flagHasInnings);
    return storeInnings;
  }

bool SportsResultScoreCricketJSON::hasWinningTeamIndex(void) const
  {
    return flagHasWinningTeamIndex;
  }

uint8_t SportsResultScoreCricketJSON::getWinningTeamIndex(void)
  {
    assert(flagHasWinningTeamIndex);
    return storeWinningTeamIndex;
  }

const uint8_t SportsResultScoreCricketJSON::getWinningTeamIndex(void) const
  {
    assert(flagHasWinningTeamIndex);
    return storeWinningTeamIndex;
  }

bool SportsResultScoreCricketJSON::hasWinningTeamRunDifference(void) const
  {
    return flagHasWinningTeamRunDifference;
  }

OInteger SportsResultScoreCricketJSON::getWinningTeamRunDifference(void)
  {
    assert(flagHasWinningTeamRunDifference);
    return storeWinningTeamRunDifference;
  }

const OInteger SportsResultScoreCricketJSON::getWinningTeamRunDifference(void) const
  {
    assert(flagHasWinningTeamRunDifference);
    return storeWinningTeamRunDifference;
  }

bool SportsResultScoreCricketJSON::hasWinningTeamWicketDifference(void) const
  {
    return flagHasWinningTeamWicketDifference;
  }

uint8_t SportsResultScoreCricketJSON::getWinningTeamWicketDifference(void)
  {
    assert(flagHasWinningTeamWicketDifference);
    return storeWinningTeamWicketDifference;
  }

const uint8_t SportsResultScoreCricketJSON::getWinningTeamWicketDifference(void) const
  {
    assert(flagHasWinningTeamWicketDifference);
    return storeWinningTeamWicketDifference;
  }

bool SportsResultScoreCricketJSON::hasDraw(void) const
  {
    return flagHasDraw;
  }

bool SportsResultScoreCricketJSON::getDraw(void)
  {
    assert(flagHasDraw);
    return storeDraw;
  }

const bool SportsResultScoreCricketJSON::getDraw(void) const
  {
    assert(flagHasDraw);
    return storeDraw;
  }

bool SportsResultScoreCricketJSON::hasTie(void) const
  {
    return flagHasTie;
  }

bool SportsResultScoreCricketJSON::getTie(void)
  {
    assert(flagHasTie);
    return storeTie;
  }

const bool SportsResultScoreCricketJSON::getTie(void) const
  {
    assert(flagHasTie);
    return storeTie;
  }

char SportsResultScoreCricketJSON::TypeInningsJSON::Generator::lowerBoundRuns[] = "0";
char SportsResultScoreCricketJSON::TypeInningsJSON::Generator::lowerBoundTarget[] = "0";
SportsResultScoreCricketJSON::TypeInningsJSON *SportsResultScoreCricketJSON::TypeInningsJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
char SportsResultScoreCricketJSON::Generator::lowerBoundWinningTeamRunDifference[] = "1";
SportsResultScoreCricketJSON *SportsResultScoreCricketJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsResultScoreCricketJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsResultScoreCricketJSON>, SportsResultScoreCricketJSON *, bool> generator("Type SportsResultScoreCricket", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
