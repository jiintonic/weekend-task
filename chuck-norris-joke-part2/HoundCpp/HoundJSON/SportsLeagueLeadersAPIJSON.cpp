/* file "SportsLeagueLeadersAPIJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueLeadersAPIJSON.h"

#include "SportsLeagueLeadersAPIJSON.h"


SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::TypeQualifier(void)
  {
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::TypeQualifier(const TypeQualifier &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::TypeQualifier(TypeQualifierKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::operator==(const TypeQualifier &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::operator!=(const TypeQualifier &other) const
  {
    return !(operator==(other));
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::operator<(const TypeQualifier &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::operator>(const TypeQualifier &other) const
  {
    return other.operator<(*this);
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::operator>=(const TypeQualifier &other) const
  {
    return !(operator<(other));
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier::operator<=(const TypeQualifier &other) const
  {
    return !(other.operator<(*this));
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifierKnownValues SportsLeagueLeadersAPIJSON::TypeValueJSON::stringToQualifier(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'G':
            if (strcmp(&(chars[1]), "oaltending") == 0)
                return Qualifier_Goaltending;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "ffense") == 0)
                return Qualifier_Offense;
            break;
        default:
            break;
      }
    return Qualifier__none;
  }

const char *SportsLeagueLeadersAPIJSON::TypeValueJSON::stringFromQualifier(TypeQualifierKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Qualifier_Goaltending:
            return "Goaltending";
        case Qualifier_Offense:
            return "Offense";
        default:
            assert(false);
            return NULL;
      }
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::TypeTeamsJSON(const TypeTeamsJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON &SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::operator=(const TypeTeamsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::fromJSONTeamName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamName of TypeTeamsJSON is not a string.");
    setTeamName(std::string(json_string->getData()));
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::fromJSONAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Alias of TypeTeamsJSON is not a string.");
    setAlias(std::string(json_string->getData()));
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of TypeTeamsJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of TypeTeamsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of TypeTeamsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of TypeTeamsJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::TypeTeamsJSON(void) :
        flagHasTeamName(false),
        flagHasAlias(false),
        flagHasID(false),
        flagHasRank(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::~TypeTeamsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::hasTeamName(void) const
  {
    return flagHasTeamName;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getTeamName(void)
  {
    assert(flagHasTeamName);
    return storeTeamName;
  }

const std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getTeamName(void) const
  {
    assert(flagHasTeamName);
    return storeTeamName;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::hasAlias(void) const
  {
    return flagHasAlias;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getAlias(void)
  {
    assert(flagHasAlias);
    return storeAlias;
  }

const std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getAlias(void) const
  {
    assert(flagHasAlias);
    return storeAlias;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::getValueAsText(void) const
  {
    assert(flagHasValue);
    if (textStoreValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValue);
      }
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::TypePlayersJSON(const TypePlayersJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON &SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::operator=(const TypePlayersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of TypePlayersJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::fromJSONLastName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastName of TypePlayersJSON is not a string.");
    setLastName(std::string(json_string->getData()));
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::fromJSONFullName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FullName of TypePlayersJSON is not a string.");
    setFullName(std::string(json_string->getData()));
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of TypePlayersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of TypePlayersJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of TypePlayersJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::TypePlayersJSON(void) :
        flagHasID(false),
        flagHasLastName(false),
        flagHasFullName(false),
        flagHasRank(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::~TypePlayersJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::hasLastName(void) const
  {
    return flagHasLastName;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getLastName(void)
  {
    assert(flagHasLastName);
    return storeLastName;
  }

const std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getLastName(void) const
  {
    assert(flagHasLastName);
    return storeLastName;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::hasFullName(void) const
  {
    return flagHasFullName;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getFullName(void)
  {
    assert(flagHasFullName);
    return storeFullName;
  }

const std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getFullName(void) const
  {
    assert(flagHasFullName);
    return storeFullName;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::getValueAsText(void) const
  {
    assert(flagHasValue);
    if (textStoreValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValue);
      }
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeStatsJSON(const TypeStatsJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON &SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::operator=(const TypeStatsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::fromJSONStatType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStatsTypeJSON *convert_classy = SportsStatsTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStatType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of TypeStatsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeTeamsJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeTeamsJSON *convert_classy = TypeTeamsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    initTeams();
    for (size_t num5 = 0; num5 < vector_Teams1.size(); ++num5)
        appendTeams(vector_Teams1[num5]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::fromJSONPlayers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Players of TypeStatsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypePlayersJSON * > vector_Players1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePlayersJSON *convert_classy = TypePlayersJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Players1[num1] = convert_classy;
      }
    initPlayers();
    for (size_t num6 = 0; num6 < vector_Players1.size(); ++num6)
        appendPlayers(vector_Players1[num6]);
    for (size_t num1 = 0; num1 < vector_Players1.size(); ++num1)
      {
        vector_Players1[num1]->remove_reference();
      }
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeStatsJSON(void) :
        flagHasStatType(false),
        flagHasTeams(false),
        flagHasPlayers(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::~TypeStatsJSON(void)
  {
    if (flagHasStatType)
      {
        storeStatType->remove_reference();
      }
    if (flagHasTeams)
      {
        for (size_t num13 = 0; num13 < storeTeams.size(); ++num13)
          {
            storeTeams[num13]->remove_reference();
          }
      }
    if (flagHasPlayers)
      {
        for (size_t num14 = 0; num14 < storePlayers.size(); ++num14)
          {
            storePlayers[num14]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::hasStatType(void) const
  {
    return flagHasStatType;
  }

SportsStatsTypeJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getStatType(void)
  {
    assert(flagHasStatType);
    return storeStatType;
  }

const SportsStatsTypeJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getStatType(void) const
  {
    assert(flagHasStatType);
    return storeStatType;
  }

SportsStatsTypeJSON::TypeValue SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getStatTypeValue(void)
  {
    return getStatType()->getValue();
  }

const SportsStatsTypeJSON::TypeValue SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getStatTypeValue(void) const
  {
    return getStatType()->getValue();
  }

const char *SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getStatTypeAsChars(void) const
  {
    return getStatType()->getValueAsChars();
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getStatTypeAsString(void) const
  {
    return getStatType()->getValueAsString();
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON * > SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON * > SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::hasPlayers(void) const
  {
    return flagHasPlayers;
  }

size_t SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::countOfPlayers(void) const
  {
    assert(flagHasPlayers);
    return storePlayers.size();
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::elementOfPlayers(size_t element_num)
  {
    assert(flagHasPlayers);
    return storePlayers[element_num];
  }

const SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::elementOfPlayers(size_t element_num) const
  {
    assert(flagHasPlayers);
    return storePlayers[element_num];
  }

std::vector< SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON * > SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getPlayers(void)
  {
    assert(flagHasPlayers);
    return storePlayers;
  }

const std::vector< SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON * > SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::getPlayers(void) const
  {
    assert(flagHasPlayers);
    return storePlayers;
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeValueJSON(const TypeValueJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON &SportsLeagueLeadersAPIJSON::TypeValueJSON::operator=(const TypeValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of TypeValueJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of TypeValueJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field League of TypeValueJSON is not a string.");
    setLeague(std::string(json_string->getData()));
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::fromJSONLeagueDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeagueDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::fromJSONQualifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Qualifier of TypeValueJSON is not a string.");
    TypeQualifier the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "oaltending") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Qualifier_Goaltending;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "ffense") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Qualifier_Offense;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setQualifier(the_open_enum);
  }

void SportsLeagueLeadersAPIJSON::TypeValueJSON::fromJSONStats(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Stats of TypeValueJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeStatsJSON * > vector_Stats1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeStatsJSON *convert_classy = TypeStatsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Stats1[num1] = convert_classy;
      }
    initStats();
    for (size_t num7 = 0; num7 < vector_Stats1.size(); ++num7)
        appendStats(vector_Stats1[num7]);
    for (size_t num1 = 0; num1 < vector_Stats1.size(); ++num1)
      {
        vector_Stats1[num1]->remove_reference();
      }
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeValueJSON(void) :
        flagHasYear(false),
        flagHasLeague(false),
        flagHasLeagueDivision(false),
        flagHasQualifier(false),
        flagHasStats(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::~TypeValueJSON(void)
  {
    if (flagHasLeagueDivision)
      {
        storeLeagueDivision->remove_reference();
      }
    if (flagHasStats)
      {
        for (size_t num19 = 0; num19 < storeStats.size(); ++num19)
          {
            storeStats[num19]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsLeagueLeadersAPIJSON::TypeValueJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsLeagueLeadersAPIJSON::TypeValueJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::hasLeagueDivision(void) const
  {
    return flagHasLeagueDivision;
  }

SportsLeagueDivisionJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::getLeagueDivision(void)
  {
    assert(flagHasLeagueDivision);
    return storeLeagueDivision;
  }

const SportsLeagueDivisionJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::getLeagueDivision(void) const
  {
    assert(flagHasLeagueDivision);
    return storeLeagueDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsLeagueLeadersAPIJSON::TypeValueJSON::getLeagueDivisionValue(void)
  {
    return getLeagueDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsLeagueLeadersAPIJSON::TypeValueJSON::getLeagueDivisionValue(void) const
  {
    return getLeagueDivision()->getValue();
  }

const char *SportsLeagueLeadersAPIJSON::TypeValueJSON::getLeagueDivisionAsChars(void) const
  {
    return getLeagueDivision()->getValueAsChars();
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::getLeagueDivisionAsString(void) const
  {
    return getLeagueDivision()->getValueAsString();
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::hasQualifier(void) const
  {
    return flagHasQualifier;
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier SportsLeagueLeadersAPIJSON::TypeValueJSON::getQualifier(void)
  {
    assert(flagHasQualifier);
    return storeQualifier;
  }

const SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeQualifier SportsLeagueLeadersAPIJSON::TypeValueJSON::getQualifier(void) const
  {
    assert(flagHasQualifier);
    return storeQualifier;
  }

const char *SportsLeagueLeadersAPIJSON::TypeValueJSON::getQualifierAsChars(void) const
  {
    TypeQualifier result = getQualifier();
    if (result.in_known_list)
        return stringFromQualifier(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsLeagueLeadersAPIJSON::TypeValueJSON::getQualifierAsString(void) const
  {
    return getQualifierAsChars();
  }

bool SportsLeagueLeadersAPIJSON::TypeValueJSON::hasStats(void) const
  {
    return flagHasStats;
  }

size_t SportsLeagueLeadersAPIJSON::TypeValueJSON::countOfStats(void) const
  {
    assert(flagHasStats);
    return storeStats.size();
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::elementOfStats(size_t element_num)
  {
    assert(flagHasStats);
    return storeStats[element_num];
  }

const SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON * SportsLeagueLeadersAPIJSON::TypeValueJSON::elementOfStats(size_t element_num) const
  {
    assert(flagHasStats);
    return storeStats[element_num];
  }

std::vector< SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON * > SportsLeagueLeadersAPIJSON::TypeValueJSON::getStats(void)
  {
    assert(flagHasStats);
    return storeStats;
  }

const std::vector< SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON * > SportsLeagueLeadersAPIJSON::TypeValueJSON::getStats(void) const
  {
    assert(flagHasStats);
    return storeStats;
  }

SportsLeagueLeadersAPIJSON::SportsLeagueLeadersAPIJSON(const SportsLeagueLeadersAPIJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersAPIJSON &SportsLeagueLeadersAPIJSON::operator=(const SportsLeagueLeadersAPIJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersAPIJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of SportsLeagueLeadersAPIJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeValueJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeValueJSON *convert_classy = TypeValueJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Value1[num1] = convert_classy;
      }
    initValue();
    for (size_t num8 = 0; num8 < vector_Value1.size(); ++num8)
        appendValue(vector_Value1[num8]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        vector_Value1[num1]->remove_reference();
      }
  }

SportsLeagueLeadersAPIJSON::SportsLeagueLeadersAPIJSON(void) :
        flagHasValue(false)
  {
  }

SportsLeagueLeadersAPIJSON::~SportsLeagueLeadersAPIJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num22 = 0; num22 < storeValue.size(); ++num22)
          {
            storeValue[num22]->remove_reference();
          }
      }
  }

bool SportsLeagueLeadersAPIJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t SportsLeagueLeadersAPIJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

SportsLeagueLeadersAPIJSON::TypeValueJSON * SportsLeagueLeadersAPIJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const SportsLeagueLeadersAPIJSON::TypeValueJSON * SportsLeagueLeadersAPIJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< SportsLeagueLeadersAPIJSON::TypeValueJSON * > SportsLeagueLeadersAPIJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< SportsLeagueLeadersAPIJSON::TypeValueJSON * > SportsLeagueLeadersAPIJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

char SportsLeagueLeadersAPIJSON::TypeValueJSON::Generator::lowerBoundYear[] = "0";
char SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::Generator::lowerBoundRank[] = "1";
SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON *SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypeTeamsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeTeamsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool> generator("Type TypeTeams", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::Generator::lowerBoundRank[] = "1";
SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON *SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::TypePlayersJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePlayersJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePlayersJSON>, TypePlayersJSON *, bool> generator("Type TypePlayers", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON *SportsLeagueLeadersAPIJSON::TypeValueJSON::TypeStatsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeStatsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeStatsJSON>, TypeStatsJSON *, bool> generator("Type TypeStats", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsLeagueLeadersAPIJSON::TypeValueJSON *SportsLeagueLeadersAPIJSON::TypeValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeValueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsLeagueLeadersAPIJSON *SportsLeagueLeadersAPIJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueLeadersAPIJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersAPIJSON>, SportsLeagueLeadersAPIJSON *, bool> generator("Type SportsLeagueLeadersAPI", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
