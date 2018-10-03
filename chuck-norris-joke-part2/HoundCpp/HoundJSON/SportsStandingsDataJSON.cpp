/* file "SportsStandingsDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsDataJSON.h"

#include "SportsStandingsDataJSON.h"


SportsStandingsDataJSON::TypeConferenceRecordJSON::TypeConferenceRecordJSON(const TypeConferenceRecordJSON &)
  {
    assert(false);
  }

SportsStandingsDataJSON::TypeConferenceRecordJSON &SportsStandingsDataJSON::TypeConferenceRecordJSON::operator=(const TypeConferenceRecordJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsDataJSON::TypeConferenceRecordJSON::fromJSONWins(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Wins of TypeConferenceRecordJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Wins of TypeConferenceRecordJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWins(extracted_integer);
  }

void SportsStandingsDataJSON::TypeConferenceRecordJSON::fromJSONLosses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Losses of TypeConferenceRecordJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Losses of TypeConferenceRecordJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLosses(extracted_integer);
  }

void SportsStandingsDataJSON::TypeConferenceRecordJSON::fromJSONWinningPercentage(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WinningPercentage of TypeConferenceRecordJSON is not a number.");
          }
      }
    setWinningPercentageText(the_rational_text);
  }

SportsStandingsDataJSON::TypeConferenceRecordJSON::TypeConferenceRecordJSON(void) :
        flagHasWins(false),
        flagHasLosses(false),
        flagHasWinningPercentage(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsDataJSON::TypeConferenceRecordJSON::~TypeConferenceRecordJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsDataJSON::TypeConferenceRecordJSON::hasWins(void) const
  {
    return flagHasWins;
  }

OInteger SportsStandingsDataJSON::TypeConferenceRecordJSON::getWins(void)
  {
    assert(flagHasWins);
    return storeWins;
  }

const OInteger SportsStandingsDataJSON::TypeConferenceRecordJSON::getWins(void) const
  {
    assert(flagHasWins);
    return storeWins;
  }

bool SportsStandingsDataJSON::TypeConferenceRecordJSON::hasLosses(void) const
  {
    return flagHasLosses;
  }

OInteger SportsStandingsDataJSON::TypeConferenceRecordJSON::getLosses(void)
  {
    assert(flagHasLosses);
    return storeLosses;
  }

const OInteger SportsStandingsDataJSON::TypeConferenceRecordJSON::getLosses(void) const
  {
    assert(flagHasLosses);
    return storeLosses;
  }

bool SportsStandingsDataJSON::TypeConferenceRecordJSON::hasWinningPercentage(void) const
  {
    return flagHasWinningPercentage;
  }

double SportsStandingsDataJSON::TypeConferenceRecordJSON::getWinningPercentage(void)
  {
    assert(flagHasWinningPercentage);
    if (textStoreWinningPercentage != "")
      {
        return atof(textStoreWinningPercentage.c_str());
      }
    return storeWinningPercentage;
  }

const double SportsStandingsDataJSON::TypeConferenceRecordJSON::getWinningPercentage(void) const
  {
    assert(flagHasWinningPercentage);
    if (textStoreWinningPercentage != "")
      {
        return atof(textStoreWinningPercentage.c_str());
      }
    return storeWinningPercentage;
  }

std::string SportsStandingsDataJSON::TypeConferenceRecordJSON::getWinningPercentageAsText(void) const
  {
    assert(flagHasWinningPercentage);
    if (textStoreWinningPercentage == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeWinningPercentage);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreWinningPercentage);
      }
  }

SportsStandingsDataJSON::TypeStreakJSON::TypeType::TypeType(void)
  {
  }

SportsStandingsDataJSON::TypeStreakJSON::TypeType::TypeType(const TypeType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStandingsDataJSON::TypeStreakJSON::TypeType::TypeType(TypeTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStandingsDataJSON::TypeStreakJSON::TypeType::operator==(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStandingsDataJSON::TypeStreakJSON::TypeType::operator!=(const TypeType &other) const
  {
    return !(operator==(other));
  }

bool SportsStandingsDataJSON::TypeStreakJSON::TypeType::operator<(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStandingsDataJSON::TypeStreakJSON::TypeType::operator>(const TypeType &other) const
  {
    return other.operator<(*this);
  }

bool SportsStandingsDataJSON::TypeStreakJSON::TypeType::operator>=(const TypeType &other) const
  {
    return !(operator<(other));
  }

bool SportsStandingsDataJSON::TypeStreakJSON::TypeType::operator<=(const TypeType &other) const
  {
    return !(other.operator<(*this));
  }

SportsStandingsDataJSON::TypeStreakJSON::TypeTypeKnownValues SportsStandingsDataJSON::TypeStreakJSON::stringToType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "osses") == 0)
                return Type_Losses;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "vertimeLosses") == 0)
                return Type_OvertimeLosses;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ies") == 0)
                return Type_Ties;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ins") == 0)
                return Type_Wins;
            break;
        default:
            break;
      }
    return Type__none;
  }

const char *SportsStandingsDataJSON::TypeStreakJSON::stringFromType(TypeTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Type_Wins:
            return "Wins";
        case Type_Losses:
            return "Losses";
        case Type_OvertimeLosses:
            return "OvertimeLosses";
        case Type_Ties:
            return "Ties";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStandingsDataJSON::TypeStreakJSON::TypeStreakJSON(const TypeStreakJSON &)
  {
    assert(false);
  }

SportsStandingsDataJSON::TypeStreakJSON &SportsStandingsDataJSON::TypeStreakJSON::operator=(const TypeStreakJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsDataJSON::TypeStreakJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of TypeStreakJSON is not a string.");
    TypeType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "osses") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_Losses;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "vertimeLosses") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_OvertimeLosses;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ies") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_Ties;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "ins") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_Wins;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setType(the_open_enum);
  }

void SportsStandingsDataJSON::TypeStreakJSON::fromJSONLength(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Length of TypeStreakJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Length of TypeStreakJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLength(extracted_integer);
  }

SportsStandingsDataJSON::TypeStreakJSON::TypeStreakJSON(void) :
        flagHasType(false),
        flagHasLength(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsDataJSON::TypeStreakJSON::~TypeStreakJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsDataJSON::TypeStreakJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsStandingsDataJSON::TypeStreakJSON::TypeType SportsStandingsDataJSON::TypeStreakJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsStandingsDataJSON::TypeStreakJSON::TypeType SportsStandingsDataJSON::TypeStreakJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

const char *SportsStandingsDataJSON::TypeStreakJSON::getTypeAsChars(void) const
  {
    TypeType result = getType();
    if (result.in_known_list)
        return stringFromType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStandingsDataJSON::TypeStreakJSON::getTypeAsString(void) const
  {
    return getTypeAsChars();
  }

bool SportsStandingsDataJSON::TypeStreakJSON::hasLength(void) const
  {
    return flagHasLength;
  }

OInteger SportsStandingsDataJSON::TypeStreakJSON::getLength(void)
  {
    assert(flagHasLength);
    return storeLength;
  }

const OInteger SportsStandingsDataJSON::TypeStreakJSON::getLength(void) const
  {
    assert(flagHasLength);
    return storeLength;
  }

SportsStandingsDataJSON::TypeLastTenJSON::TypeLastTenJSON(const TypeLastTenJSON &)
  {
    assert(false);
  }

SportsStandingsDataJSON::TypeLastTenJSON &SportsStandingsDataJSON::TypeLastTenJSON::operator=(const TypeLastTenJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsDataJSON::TypeLastTenJSON::fromJSONWins(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Wins of TypeLastTenJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Wins of TypeLastTenJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWins(extracted_integer);
  }

void SportsStandingsDataJSON::TypeLastTenJSON::fromJSONLosses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Losses of TypeLastTenJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Losses of TypeLastTenJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLosses(extracted_integer);
  }

void SportsStandingsDataJSON::TypeLastTenJSON::fromJSONOvertimeLosses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OvertimeLosses of TypeLastTenJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OvertimeLosses of TypeLastTenJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOvertimeLosses(extracted_integer);
  }

void SportsStandingsDataJSON::TypeLastTenJSON::fromJSONTies(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Ties of TypeLastTenJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Ties of TypeLastTenJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTies(extracted_integer);
  }

SportsStandingsDataJSON::TypeLastTenJSON::TypeLastTenJSON(void) :
        flagHasWins(false),
        flagHasLosses(false),
        flagHasOvertimeLosses(false),
        flagHasTies(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsDataJSON::TypeLastTenJSON::~TypeLastTenJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsDataJSON::TypeLastTenJSON::hasWins(void) const
  {
    return flagHasWins;
  }

OInteger SportsStandingsDataJSON::TypeLastTenJSON::getWins(void)
  {
    assert(flagHasWins);
    return storeWins;
  }

const OInteger SportsStandingsDataJSON::TypeLastTenJSON::getWins(void) const
  {
    assert(flagHasWins);
    return storeWins;
  }

bool SportsStandingsDataJSON::TypeLastTenJSON::hasLosses(void) const
  {
    return flagHasLosses;
  }

OInteger SportsStandingsDataJSON::TypeLastTenJSON::getLosses(void)
  {
    assert(flagHasLosses);
    return storeLosses;
  }

const OInteger SportsStandingsDataJSON::TypeLastTenJSON::getLosses(void) const
  {
    assert(flagHasLosses);
    return storeLosses;
  }

bool SportsStandingsDataJSON::TypeLastTenJSON::hasOvertimeLosses(void) const
  {
    return flagHasOvertimeLosses;
  }

OInteger SportsStandingsDataJSON::TypeLastTenJSON::getOvertimeLosses(void)
  {
    assert(flagHasOvertimeLosses);
    return storeOvertimeLosses;
  }

const OInteger SportsStandingsDataJSON::TypeLastTenJSON::getOvertimeLosses(void) const
  {
    assert(flagHasOvertimeLosses);
    return storeOvertimeLosses;
  }

bool SportsStandingsDataJSON::TypeLastTenJSON::hasTies(void) const
  {
    return flagHasTies;
  }

OInteger SportsStandingsDataJSON::TypeLastTenJSON::getTies(void)
  {
    assert(flagHasTies);
    return storeTies;
  }

const OInteger SportsStandingsDataJSON::TypeLastTenJSON::getTies(void) const
  {
    assert(flagHasTies);
    return storeTies;
  }

SportsStandingsDataJSON::SportsStandingsDataJSON(const SportsStandingsDataJSON &)
  {
    assert(false);
  }

SportsStandingsDataJSON &SportsStandingsDataJSON::operator=(const SportsStandingsDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsDataJSON::fromJSONWins(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Wins of SportsStandingsDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Wins of SportsStandingsDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWins(extracted_integer);
  }

void SportsStandingsDataJSON::fromJSONLosses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Losses of SportsStandingsDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Losses of SportsStandingsDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLosses(extracted_integer);
  }

void SportsStandingsDataJSON::fromJSONOvertimeLosses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OvertimeLosses of SportsStandingsDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OvertimeLosses of SportsStandingsDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOvertimeLosses(extracted_integer);
  }

void SportsStandingsDataJSON::fromJSONTies(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Ties of SportsStandingsDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Ties of SportsStandingsDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTies(extracted_integer);
  }

void SportsStandingsDataJSON::fromJSONPoints(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Points of SportsStandingsDataJSON is not a number.");
          }
      }
    setPointsText(the_rational_text);
  }

void SportsStandingsDataJSON::fromJSONWinningPercentage(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WinningPercentage of SportsStandingsDataJSON is not a number.");
          }
      }
    setWinningPercentageText(the_rational_text);
  }

void SportsStandingsDataJSON::fromJSONConferenceRecord(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeConferenceRecordJSON *convert_classy = TypeConferenceRecordJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConferenceRecord(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsDataJSON::fromJSONStreak(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeStreakJSON *convert_classy = TypeStreakJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStreak(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsDataJSON::fromJSONLastTen(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeLastTenJSON *convert_classy = TypeLastTenJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastTen(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsDataJSON::fromJSONGamesBehind(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field GamesBehind of SportsStandingsDataJSON is not a number.");
          }
      }
    setGamesBehindText(the_rational_text);
  }

void SportsStandingsDataJSON::fromJSONGamesBehindWildCard(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field GamesBehindWildCard of SportsStandingsDataJSON is not a number.");
          }
      }
    setGamesBehindWildCardText(the_rational_text);
  }

void SportsStandingsDataJSON::fromJSONGamesAheadWildCard(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field GamesAheadWildCard of SportsStandingsDataJSON is not a number.");
          }
      }
    setGamesAheadWildCardText(the_rational_text);
  }

void SportsStandingsDataJSON::fromJSONEliminationNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EliminationNumber of SportsStandingsDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EliminationNumber of SportsStandingsDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setEliminationNumber(extracted_integer);
  }

void SportsStandingsDataJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsStandingsDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsStandingsDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsStandingsDataJSON::fromJSONRankTied(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RankTied of SportsStandingsDataJSON is not true for false.");
          }
      }
    setRankTied(the_bool);
  }

void SportsStandingsDataJSON::fromJSONDivisionLeader(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DivisionLeader of SportsStandingsDataJSON is not true for false.");
          }
      }
    setDivisionLeader(the_bool);
  }

void SportsStandingsDataJSON::fromJSONDivisionLeaderTied(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DivisionLeaderTied of SportsStandingsDataJSON is not true for false.");
          }
      }
    setDivisionLeaderTied(the_bool);
  }

SportsStandingsDataJSON::SportsStandingsDataJSON(void) :
        flagHasWins(false),
        flagHasLosses(false),
        flagHasOvertimeLosses(false),
        flagHasTies(false),
        flagHasPoints(false),
        flagHasWinningPercentage(false),
        flagHasConferenceRecord(false),
        flagHasStreak(false),
        flagHasLastTen(false),
        flagHasGamesBehind(false),
        flagHasGamesBehindWildCard(false),
        flagHasGamesAheadWildCard(false),
        flagHasEliminationNumber(false),
        flagHasRank(false),
        flagHasRankTied(false),
        flagHasDivisionLeader(false),
        flagHasDivisionLeaderTied(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsDataJSON::~SportsStandingsDataJSON(void)
  {
    if (flagHasConferenceRecord)
      {
        storeConferenceRecord->remove_reference();
      }
    if (flagHasStreak)
      {
        storeStreak->remove_reference();
      }
    if (flagHasLastTen)
      {
        storeLastTen->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsDataJSON::hasWins(void) const
  {
    return flagHasWins;
  }

OInteger SportsStandingsDataJSON::getWins(void)
  {
    assert(flagHasWins);
    return storeWins;
  }

const OInteger SportsStandingsDataJSON::getWins(void) const
  {
    assert(flagHasWins);
    return storeWins;
  }

bool SportsStandingsDataJSON::hasLosses(void) const
  {
    return flagHasLosses;
  }

OInteger SportsStandingsDataJSON::getLosses(void)
  {
    assert(flagHasLosses);
    return storeLosses;
  }

const OInteger SportsStandingsDataJSON::getLosses(void) const
  {
    assert(flagHasLosses);
    return storeLosses;
  }

bool SportsStandingsDataJSON::hasOvertimeLosses(void) const
  {
    return flagHasOvertimeLosses;
  }

OInteger SportsStandingsDataJSON::getOvertimeLosses(void)
  {
    assert(flagHasOvertimeLosses);
    return storeOvertimeLosses;
  }

const OInteger SportsStandingsDataJSON::getOvertimeLosses(void) const
  {
    assert(flagHasOvertimeLosses);
    return storeOvertimeLosses;
  }

bool SportsStandingsDataJSON::hasTies(void) const
  {
    return flagHasTies;
  }

OInteger SportsStandingsDataJSON::getTies(void)
  {
    assert(flagHasTies);
    return storeTies;
  }

const OInteger SportsStandingsDataJSON::getTies(void) const
  {
    assert(flagHasTies);
    return storeTies;
  }

bool SportsStandingsDataJSON::hasPoints(void) const
  {
    return flagHasPoints;
  }

double SportsStandingsDataJSON::getPoints(void)
  {
    assert(flagHasPoints);
    if (textStorePoints != "")
      {
        return atof(textStorePoints.c_str());
      }
    return storePoints;
  }

const double SportsStandingsDataJSON::getPoints(void) const
  {
    assert(flagHasPoints);
    if (textStorePoints != "")
      {
        return atof(textStorePoints.c_str());
      }
    return storePoints;
  }

std::string SportsStandingsDataJSON::getPointsAsText(void) const
  {
    assert(flagHasPoints);
    if (textStorePoints == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storePoints);
        return &(buffer[0]);
      }
    else
      {
        return (textStorePoints);
      }
  }

bool SportsStandingsDataJSON::hasWinningPercentage(void) const
  {
    return flagHasWinningPercentage;
  }

double SportsStandingsDataJSON::getWinningPercentage(void)
  {
    assert(flagHasWinningPercentage);
    if (textStoreWinningPercentage != "")
      {
        return atof(textStoreWinningPercentage.c_str());
      }
    return storeWinningPercentage;
  }

const double SportsStandingsDataJSON::getWinningPercentage(void) const
  {
    assert(flagHasWinningPercentage);
    if (textStoreWinningPercentage != "")
      {
        return atof(textStoreWinningPercentage.c_str());
      }
    return storeWinningPercentage;
  }

std::string SportsStandingsDataJSON::getWinningPercentageAsText(void) const
  {
    assert(flagHasWinningPercentage);
    if (textStoreWinningPercentage == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeWinningPercentage);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreWinningPercentage);
      }
  }

bool SportsStandingsDataJSON::hasConferenceRecord(void) const
  {
    return flagHasConferenceRecord;
  }

SportsStandingsDataJSON::TypeConferenceRecordJSON * SportsStandingsDataJSON::getConferenceRecord(void)
  {
    assert(flagHasConferenceRecord);
    return storeConferenceRecord;
  }

const SportsStandingsDataJSON::TypeConferenceRecordJSON * SportsStandingsDataJSON::getConferenceRecord(void) const
  {
    assert(flagHasConferenceRecord);
    return storeConferenceRecord;
  }

bool SportsStandingsDataJSON::hasStreak(void) const
  {
    return flagHasStreak;
  }

SportsStandingsDataJSON::TypeStreakJSON * SportsStandingsDataJSON::getStreak(void)
  {
    assert(flagHasStreak);
    return storeStreak;
  }

const SportsStandingsDataJSON::TypeStreakJSON * SportsStandingsDataJSON::getStreak(void) const
  {
    assert(flagHasStreak);
    return storeStreak;
  }

bool SportsStandingsDataJSON::hasLastTen(void) const
  {
    return flagHasLastTen;
  }

SportsStandingsDataJSON::TypeLastTenJSON * SportsStandingsDataJSON::getLastTen(void)
  {
    assert(flagHasLastTen);
    return storeLastTen;
  }

const SportsStandingsDataJSON::TypeLastTenJSON * SportsStandingsDataJSON::getLastTen(void) const
  {
    assert(flagHasLastTen);
    return storeLastTen;
  }

bool SportsStandingsDataJSON::hasGamesBehind(void) const
  {
    return flagHasGamesBehind;
  }

double SportsStandingsDataJSON::getGamesBehind(void)
  {
    assert(flagHasGamesBehind);
    if (textStoreGamesBehind != "")
      {
        return atof(textStoreGamesBehind.c_str());
      }
    return storeGamesBehind;
  }

const double SportsStandingsDataJSON::getGamesBehind(void) const
  {
    assert(flagHasGamesBehind);
    if (textStoreGamesBehind != "")
      {
        return atof(textStoreGamesBehind.c_str());
      }
    return storeGamesBehind;
  }

std::string SportsStandingsDataJSON::getGamesBehindAsText(void) const
  {
    assert(flagHasGamesBehind);
    if (textStoreGamesBehind == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeGamesBehind);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreGamesBehind);
      }
  }

bool SportsStandingsDataJSON::hasGamesBehindWildCard(void) const
  {
    return flagHasGamesBehindWildCard;
  }

double SportsStandingsDataJSON::getGamesBehindWildCard(void)
  {
    assert(flagHasGamesBehindWildCard);
    if (textStoreGamesBehindWildCard != "")
      {
        return atof(textStoreGamesBehindWildCard.c_str());
      }
    return storeGamesBehindWildCard;
  }

const double SportsStandingsDataJSON::getGamesBehindWildCard(void) const
  {
    assert(flagHasGamesBehindWildCard);
    if (textStoreGamesBehindWildCard != "")
      {
        return atof(textStoreGamesBehindWildCard.c_str());
      }
    return storeGamesBehindWildCard;
  }

std::string SportsStandingsDataJSON::getGamesBehindWildCardAsText(void) const
  {
    assert(flagHasGamesBehindWildCard);
    if (textStoreGamesBehindWildCard == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeGamesBehindWildCard);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreGamesBehindWildCard);
      }
  }

bool SportsStandingsDataJSON::hasGamesAheadWildCard(void) const
  {
    return flagHasGamesAheadWildCard;
  }

double SportsStandingsDataJSON::getGamesAheadWildCard(void)
  {
    assert(flagHasGamesAheadWildCard);
    if (textStoreGamesAheadWildCard != "")
      {
        return atof(textStoreGamesAheadWildCard.c_str());
      }
    return storeGamesAheadWildCard;
  }

const double SportsStandingsDataJSON::getGamesAheadWildCard(void) const
  {
    assert(flagHasGamesAheadWildCard);
    if (textStoreGamesAheadWildCard != "")
      {
        return atof(textStoreGamesAheadWildCard.c_str());
      }
    return storeGamesAheadWildCard;
  }

std::string SportsStandingsDataJSON::getGamesAheadWildCardAsText(void) const
  {
    assert(flagHasGamesAheadWildCard);
    if (textStoreGamesAheadWildCard == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeGamesAheadWildCard);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreGamesAheadWildCard);
      }
  }

bool SportsStandingsDataJSON::hasEliminationNumber(void) const
  {
    return flagHasEliminationNumber;
  }

OInteger SportsStandingsDataJSON::getEliminationNumber(void)
  {
    assert(flagHasEliminationNumber);
    return storeEliminationNumber;
  }

const OInteger SportsStandingsDataJSON::getEliminationNumber(void) const
  {
    assert(flagHasEliminationNumber);
    return storeEliminationNumber;
  }

bool SportsStandingsDataJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsStandingsDataJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsStandingsDataJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsStandingsDataJSON::hasRankTied(void) const
  {
    return flagHasRankTied;
  }

bool SportsStandingsDataJSON::getRankTied(void)
  {
    assert(flagHasRankTied);
    return storeRankTied;
  }

const bool SportsStandingsDataJSON::getRankTied(void) const
  {
    assert(flagHasRankTied);
    return storeRankTied;
  }

bool SportsStandingsDataJSON::hasDivisionLeader(void) const
  {
    return flagHasDivisionLeader;
  }

bool SportsStandingsDataJSON::getDivisionLeader(void)
  {
    assert(flagHasDivisionLeader);
    return storeDivisionLeader;
  }

const bool SportsStandingsDataJSON::getDivisionLeader(void) const
  {
    assert(flagHasDivisionLeader);
    return storeDivisionLeader;
  }

bool SportsStandingsDataJSON::hasDivisionLeaderTied(void) const
  {
    return flagHasDivisionLeaderTied;
  }

bool SportsStandingsDataJSON::getDivisionLeaderTied(void)
  {
    assert(flagHasDivisionLeaderTied);
    return storeDivisionLeaderTied;
  }

const bool SportsStandingsDataJSON::getDivisionLeaderTied(void) const
  {
    assert(flagHasDivisionLeaderTied);
    return storeDivisionLeaderTied;
  }

char SportsStandingsDataJSON::Generator::lowerBoundWins[] = "0";
char SportsStandingsDataJSON::Generator::lowerBoundLosses[] = "0";
char SportsStandingsDataJSON::Generator::lowerBoundOvertimeLosses[] = "0";
char SportsStandingsDataJSON::Generator::lowerBoundTies[] = "0";
char SportsStandingsDataJSON::TypeConferenceRecordJSON::Generator::lowerBoundWins[] = "0";
char SportsStandingsDataJSON::TypeConferenceRecordJSON::Generator::lowerBoundLosses[] = "0";
SportsStandingsDataJSON::TypeConferenceRecordJSON *SportsStandingsDataJSON::TypeConferenceRecordJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeConferenceRecordJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeConferenceRecordJSON>, TypeConferenceRecordJSON *, bool> generator("Type TypeConferenceRecord", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char SportsStandingsDataJSON::TypeStreakJSON::Generator::lowerBoundLength[] = "0";
SportsStandingsDataJSON::TypeStreakJSON *SportsStandingsDataJSON::TypeStreakJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeStreakJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeStreakJSON>, TypeStreakJSON *, bool> generator("Type TypeStreak", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char SportsStandingsDataJSON::TypeLastTenJSON::Generator::lowerBoundWins[] = "0";
char SportsStandingsDataJSON::TypeLastTenJSON::Generator::lowerBoundLosses[] = "0";
char SportsStandingsDataJSON::TypeLastTenJSON::Generator::lowerBoundOvertimeLosses[] = "0";
char SportsStandingsDataJSON::TypeLastTenJSON::Generator::lowerBoundTies[] = "0";
SportsStandingsDataJSON::TypeLastTenJSON *SportsStandingsDataJSON::TypeLastTenJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeLastTenJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeLastTenJSON>, TypeLastTenJSON *, bool> generator("Type TypeLastTen", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char SportsStandingsDataJSON::Generator::lowerBoundRank[] = "1";
SportsStandingsDataJSON *SportsStandingsDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsDataJSON>, SportsStandingsDataJSON *, bool> generator("Type SportsStandingsData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
