/* file "SportsPlayersQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayersQueryStateJSON.h"

#include "SportsPlayersQueryStateJSON.h"


SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::TypeQueryIntent(void)
  {
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::TypeQueryIntent(const TypeQueryIntent &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::TypeQueryIntent(TypeQueryIntentKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::operator==(const TypeQueryIntent &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::operator!=(const TypeQueryIntent &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::operator<(const TypeQueryIntent &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::operator>(const TypeQueryIntent &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::operator>=(const TypeQueryIntent &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent::operator<=(const TypeQueryIntent &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntentKnownValues SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::stringToQueryIntent(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strcmp(&(chars[1]), "layerInfo") == 0)
                return QueryIntent_PlayerInfo;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return QueryIntent_Unknown;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ho") == 0)
                return QueryIntent_Who;
            break;
        default:
            break;
      }
    return QueryIntent__none;
  }

const char *SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::stringFromQueryIntent(TypeQueryIntentKnownValues the_enum)
  {
    switch (the_enum)
      {
        case QueryIntent_Unknown:
            return "Unknown";
        case QueryIntent_PlayerInfo:
            return "PlayerInfo";
        case QueryIntent_Who:
            return "Who";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::TypePlayersJSON(const TypePlayersJSON &)
  {
    assert(false);
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON &SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::operator=(const TypePlayersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of TypePlayersJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::TypePlayersJSON(void) :
        flagHasID(false),
        flagHasLeague(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::~TypePlayersJSON(void)
  {
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::TypeQueryError(void)
  {
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::TypeQueryError(const TypeQueryError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::TypeQueryError(TypeQueryErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::operator==(const TypeQueryError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::operator!=(const TypeQueryError &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::operator<(const TypeQueryError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::operator>(const TypeQueryError &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::operator>=(const TypeQueryError &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError::operator<=(const TypeQueryError &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryErrorKnownValues SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::stringToQueryError(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return QueryError_None;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ooManyPlayers") == 0)
                return QueryError_TooManyPlayers;
            break;
        default:
            break;
      }
    return QueryError__none;
  }

const char *SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::stringFromQueryError(TypeQueryErrorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case QueryError_None:
            return "None";
        case QueryError_TooManyPlayers:
            return "TooManyPlayers";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayerRequestsJSON(const TypePlayerRequestsJSON &)
  {
    assert(false);
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON &SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::operator=(const TypePlayerRequestsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::fromJSONQueryIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryIntent of TypePlayerRequestsJSON is not a string.");
    TypeQueryIntent the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "layerInfo") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryIntent_PlayerInfo;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryIntent_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "ho") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryIntent_Who;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setQueryIntent(the_open_enum);
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of TypePlayerRequestsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Teams of TypePlayerRequestsJSON has too few elements.");
    std::vector< SportsTeamNewJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 1);
    initTeams();
    for (size_t num6 = 0; num6 < vector_Teams1.size(); ++num6)
        appendTeams(vector_Teams1[num6]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::fromJSONPlayers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Players of TypePlayerRequestsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Players of TypePlayerRequestsJSON has too few elements.");
    std::vector< TypePlayersJSON * > vector_Players1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePlayersJSON *convert_classy = TypePlayersJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Players1[num1] = convert_classy;
      }
    assert(vector_Players1.size() >= 1);
    initPlayers();
    for (size_t num7 = 0; num7 < vector_Players1.size(); ++num7)
        appendPlayers(vector_Players1[num7]);
    for (size_t num1 = 0; num1 < vector_Players1.size(); ++num1)
      {
        vector_Players1[num1]->remove_reference();
      }
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::fromJSONPlayerDetails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlayerDetails of TypePlayerRequestsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PlayerDetails of TypePlayerRequestsJSON has too few elements.");
    std::vector< SportsPlayerDetailJSON * > vector_PlayerDetails1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayerDetailJSON *convert_classy = SportsPlayerDetailJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PlayerDetails1[num1] = convert_classy;
      }
    assert(vector_PlayerDetails1.size() >= 1);
    initPlayerDetails();
    for (size_t num8 = 0; num8 < vector_PlayerDetails1.size(); ++num8)
        appendPlayerDetails(vector_PlayerDetails1[num8]);
    for (size_t num1 = 0; num1 < vector_PlayerDetails1.size(); ++num1)
      {
        vector_PlayerDetails1[num1]->remove_reference();
      }
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::fromJSONPlayerPositions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlayerPositions of TypePlayerRequestsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PlayerPositions of TypePlayerRequestsJSON has too few elements.");
    std::vector< SportsPlayerPositionJSON * > vector_PlayerPositions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayerPositionJSON *convert_classy = SportsPlayerPositionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PlayerPositions1[num1] = convert_classy;
      }
    assert(vector_PlayerPositions1.size() >= 1);
    initPlayerPositions();
    for (size_t num9 = 0; num9 < vector_PlayerPositions1.size(); ++num9)
        appendPlayerPositions(vector_PlayerPositions1[num9]);
    for (size_t num1 = 0; num1 < vector_PlayerPositions1.size(); ++num1)
      {
        vector_PlayerPositions1[num1]->remove_reference();
      }
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::fromJSONJerseyNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field JerseyNumber of TypePlayerRequestsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field JerseyNumber of TypePlayerRequestsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setJerseyNumber(extracted_integer);
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::fromJSONQueryGroupNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field QueryGroupNumber of TypePlayerRequestsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field QueryGroupNumber of TypePlayerRequestsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setQueryGroupNumber(extracted_integer);
  }

void SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::fromJSONQueryError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryError of TypePlayerRequestsJSON is not a string.");
    TypeQueryError the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryError_None;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ooManyPlayers") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryError_TooManyPlayers;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setQueryError(the_open_enum);
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayerRequestsJSON(void) :
        flagHasQueryIntent(false),
        flagHasTeams(false),
        flagHasPlayers(false),
        flagHasPlayerDetails(false),
        flagHasPlayerPositions(false),
        flagHasJerseyNumber(false),
        flagHasQueryGroupNumber(false),
        flagHasQueryError(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::~TypePlayerRequestsJSON(void)
  {
    if (flagHasTeams)
      {
        for (size_t num16 = 0; num16 < storeTeams.size(); ++num16)
          {
            storeTeams[num16]->remove_reference();
          }
      }
    if (flagHasPlayers)
      {
        for (size_t num17 = 0; num17 < storePlayers.size(); ++num17)
          {
            storePlayers[num17]->remove_reference();
          }
      }
    if (flagHasPlayerDetails)
      {
        for (size_t num18 = 0; num18 < storePlayerDetails.size(); ++num18)
          {
            storePlayerDetails[num18]->remove_reference();
          }
      }
    if (flagHasPlayerPositions)
      {
        for (size_t num19 = 0; num19 < storePlayerPositions.size(); ++num19)
          {
            storePlayerPositions[num19]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::hasQueryIntent(void) const
  {
    return flagHasQueryIntent;
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryIntent(void)
  {
    assert(flagHasQueryIntent);
    return storeQueryIntent;
  }

const SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryIntent SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryIntent(void) const
  {
    assert(flagHasQueryIntent);
    return storeQueryIntent;
  }

const char *SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryIntentAsChars(void) const
  {
    TypeQueryIntent result = getQueryIntent();
    if (result.in_known_list)
        return stringFromQueryIntent(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryIntentAsString(void) const
  {
    return getQueryIntentAsChars();
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamNewJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamNewJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamNewJSON * > SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamNewJSON * > SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::hasPlayers(void) const
  {
    return flagHasPlayers;
  }

size_t SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::countOfPlayers(void) const
  {
    assert(flagHasPlayers);
    return storePlayers.size();
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::elementOfPlayers(size_t element_num)
  {
    assert(flagHasPlayers);
    return storePlayers[element_num];
  }

const SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::elementOfPlayers(size_t element_num) const
  {
    assert(flagHasPlayers);
    return storePlayers[element_num];
  }

std::vector< SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON * > SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getPlayers(void)
  {
    assert(flagHasPlayers);
    return storePlayers;
  }

const std::vector< SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON * > SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getPlayers(void) const
  {
    assert(flagHasPlayers);
    return storePlayers;
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::hasPlayerDetails(void) const
  {
    return flagHasPlayerDetails;
  }

size_t SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::countOfPlayerDetails(void) const
  {
    assert(flagHasPlayerDetails);
    return storePlayerDetails.size();
  }

SportsPlayerDetailJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::elementOfPlayerDetails(size_t element_num)
  {
    assert(flagHasPlayerDetails);
    return storePlayerDetails[element_num];
  }

const SportsPlayerDetailJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::elementOfPlayerDetails(size_t element_num) const
  {
    assert(flagHasPlayerDetails);
    return storePlayerDetails[element_num];
  }

std::vector< SportsPlayerDetailJSON * > SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getPlayerDetails(void)
  {
    assert(flagHasPlayerDetails);
    return storePlayerDetails;
  }

const std::vector< SportsPlayerDetailJSON * > SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getPlayerDetails(void) const
  {
    assert(flagHasPlayerDetails);
    return storePlayerDetails;
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::hasPlayerPositions(void) const
  {
    return flagHasPlayerPositions;
  }

size_t SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::countOfPlayerPositions(void) const
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions.size();
  }

SportsPlayerPositionJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::elementOfPlayerPositions(size_t element_num)
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions[element_num];
  }

const SportsPlayerPositionJSON * SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::elementOfPlayerPositions(size_t element_num) const
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions[element_num];
  }

std::vector< SportsPlayerPositionJSON * > SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getPlayerPositions(void)
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions;
  }

const std::vector< SportsPlayerPositionJSON * > SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getPlayerPositions(void) const
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions;
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::hasJerseyNumber(void) const
  {
    return flagHasJerseyNumber;
  }

OInteger SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getJerseyNumber(void)
  {
    assert(flagHasJerseyNumber);
    return storeJerseyNumber;
  }

const OInteger SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getJerseyNumber(void) const
  {
    assert(flagHasJerseyNumber);
    return storeJerseyNumber;
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::hasQueryGroupNumber(void) const
  {
    return flagHasQueryGroupNumber;
  }

OInteger SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryGroupNumber(void)
  {
    assert(flagHasQueryGroupNumber);
    return storeQueryGroupNumber;
  }

const OInteger SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryGroupNumber(void) const
  {
    assert(flagHasQueryGroupNumber);
    return storeQueryGroupNumber;
  }

bool SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::hasQueryError(void) const
  {
    return flagHasQueryError;
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryError(void)
  {
    assert(flagHasQueryError);
    return storeQueryError;
  }

const SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypeQueryError SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryError(void) const
  {
    assert(flagHasQueryError);
    return storeQueryError;
  }

const char *SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryErrorAsChars(void) const
  {
    TypeQueryError result = getQueryError();
    if (result.in_known_list)
        return stringFromQueryError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::getQueryErrorAsString(void) const
  {
    return getQueryErrorAsChars();
  }

SportsPlayersQueryStateJSON::SportsPlayersQueryStateJSON(const SportsPlayersQueryStateJSON &)
  {
    assert(false);
  }

SportsPlayersQueryStateJSON &SportsPlayersQueryStateJSON::operator=(const SportsPlayersQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayersQueryStateJSON::fromJSONPlayerRequests(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlayerRequests of SportsPlayersQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PlayerRequests of SportsPlayersQueryStateJSON has too few elements.");
    std::vector< TypePlayerRequestsJSON * > vector_PlayerRequests1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePlayerRequestsJSON *convert_classy = TypePlayerRequestsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PlayerRequests1[num1] = convert_classy;
      }
    assert(vector_PlayerRequests1.size() >= 1);
    initPlayerRequests();
    for (size_t num10 = 0; num10 < vector_PlayerRequests1.size(); ++num10)
        appendPlayerRequests(vector_PlayerRequests1[num10]);
    for (size_t num1 = 0; num1 < vector_PlayerRequests1.size(); ++num1)
      {
        vector_PlayerRequests1[num1]->remove_reference();
      }
  }

SportsPlayersQueryStateJSON::SportsPlayersQueryStateJSON(void) :
        flagHasPlayerRequests(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayersQueryStateJSON::~SportsPlayersQueryStateJSON(void)
  {
    if (flagHasPlayerRequests)
      {
        for (size_t num28 = 0; num28 < storePlayerRequests.size(); ++num28)
          {
            storePlayerRequests[num28]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayersQueryStateJSON::hasPlayerRequests(void) const
  {
    return flagHasPlayerRequests;
  }

size_t SportsPlayersQueryStateJSON::countOfPlayerRequests(void) const
  {
    assert(flagHasPlayerRequests);
    return storePlayerRequests.size();
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON * SportsPlayersQueryStateJSON::elementOfPlayerRequests(size_t element_num)
  {
    assert(flagHasPlayerRequests);
    return storePlayerRequests[element_num];
  }

const SportsPlayersQueryStateJSON::TypePlayerRequestsJSON * SportsPlayersQueryStateJSON::elementOfPlayerRequests(size_t element_num) const
  {
    assert(flagHasPlayerRequests);
    return storePlayerRequests[element_num];
  }

std::vector< SportsPlayersQueryStateJSON::TypePlayerRequestsJSON * > SportsPlayersQueryStateJSON::getPlayerRequests(void)
  {
    assert(flagHasPlayerRequests);
    return storePlayerRequests;
  }

const std::vector< SportsPlayersQueryStateJSON::TypePlayerRequestsJSON * > SportsPlayersQueryStateJSON::getPlayerRequests(void) const
  {
    assert(flagHasPlayerRequests);
    return storePlayerRequests;
  }

SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON *SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::TypePlayersJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
char SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::Generator::lowerBoundJerseyNumber[] = "0";
char SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::Generator::lowerBoundQueryGroupNumber[] = "0";
SportsPlayersQueryStateJSON::TypePlayerRequestsJSON *SportsPlayersQueryStateJSON::TypePlayerRequestsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePlayerRequestsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePlayerRequestsJSON>, TypePlayerRequestsJSON *, bool> generator("Type TypePlayerRequests", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsPlayersQueryStateJSON *SportsPlayersQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayersQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayersQueryStateJSON>, SportsPlayersQueryStateJSON *, bool> generator("Type SportsPlayersQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
