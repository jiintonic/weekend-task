/* file "SportsLeagueLeadersQueryDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueLeadersQueryDataJSON.h"

#include "SportsLeagueLeadersQueryDataJSON.h"


SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::TypeTeamsOrPlayers(void)
  {
  }

SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::TypeTeamsOrPlayers(const TypeTeamsOrPlayers &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::TypeTeamsOrPlayers(TypeTeamsOrPlayersKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::operator==(const TypeTeamsOrPlayers &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::operator!=(const TypeTeamsOrPlayers &other) const
  {
    return !(operator==(other));
  }

bool SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::operator<(const TypeTeamsOrPlayers &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::operator>(const TypeTeamsOrPlayers &other) const
  {
    return other.operator<(*this);
  }

bool SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::operator>=(const TypeTeamsOrPlayers &other) const
  {
    return !(operator<(other));
  }

bool SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers::operator<=(const TypeTeamsOrPlayers &other) const
  {
    return !(other.operator<(*this));
  }

SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayersKnownValues SportsLeagueLeadersQueryDataJSON::stringToTeamsOrPlayers(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strcmp(&(chars[1]), "layers") == 0)
                return TeamsOrPlayers_Players;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "eams") == 0)
                return TeamsOrPlayers_Teams;
            break;
        default:
            break;
      }
    return TeamsOrPlayers__none;
  }

const char *SportsLeagueLeadersQueryDataJSON::stringFromTeamsOrPlayers(TypeTeamsOrPlayersKnownValues the_enum)
  {
    switch (the_enum)
      {
        case TeamsOrPlayers_Teams:
            return "Teams";
        case TeamsOrPlayers_Players:
            return "Players";
        default:
            assert(false);
            return NULL;
      }
  }

SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::TypeLeagueLeadersIndicesJSON(const TypeLeagueLeadersIndicesJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON &SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::operator=(const TypeLeagueLeadersIndicesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::fromJSONLeagueLeadersIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LeagueLeadersIndex of TypeLeagueLeadersIndicesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LeagueLeadersIndex of TypeLeagueLeadersIndicesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLeagueLeadersIndex(extracted_integer);
  }

void SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::fromJSONTeamOrPlayerIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TeamOrPlayerIndices of TypeLeagueLeadersIndicesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field TeamOrPlayerIndices of TypeLeagueLeadersIndicesJSON has too few elements.");
    std::vector< OInteger > vector_TeamOrPlayerIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field TeamOrPlayerIndices of TypeLeagueLeadersIndicesJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field TeamOrPlayerIndices of TypeLeagueLeadersIndicesJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_TeamOrPlayerIndices1[num1] = extracted_integer;
      }
    assert(vector_TeamOrPlayerIndices1.size() >= 1);
    initTeamOrPlayerIndices();
    for (size_t num4 = 0; num4 < vector_TeamOrPlayerIndices1.size(); ++num4)
        appendTeamOrPlayerIndices(vector_TeamOrPlayerIndices1[num4]);
    for (size_t num1 = 0; num1 < vector_TeamOrPlayerIndices1.size(); ++num1)
      {
      }
  }

SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::TypeLeagueLeadersIndicesJSON(void) :
        flagHasLeagueLeadersIndex(false),
        flagHasTeamOrPlayerIndices(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::~TypeLeagueLeadersIndicesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::hasLeagueLeadersIndex(void) const
  {
    return flagHasLeagueLeadersIndex;
  }

OInteger SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::getLeagueLeadersIndex(void)
  {
    assert(flagHasLeagueLeadersIndex);
    return storeLeagueLeadersIndex;
  }

const OInteger SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::getLeagueLeadersIndex(void) const
  {
    assert(flagHasLeagueLeadersIndex);
    return storeLeagueLeadersIndex;
  }

bool SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::hasTeamOrPlayerIndices(void) const
  {
    return flagHasTeamOrPlayerIndices;
  }

size_t SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::countOfTeamOrPlayerIndices(void) const
  {
    assert(flagHasTeamOrPlayerIndices);
    return storeTeamOrPlayerIndices.size();
  }

OInteger SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::elementOfTeamOrPlayerIndices(size_t element_num)
  {
    assert(flagHasTeamOrPlayerIndices);
    return storeTeamOrPlayerIndices[element_num];
  }

const OInteger SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::elementOfTeamOrPlayerIndices(size_t element_num) const
  {
    assert(flagHasTeamOrPlayerIndices);
    return storeTeamOrPlayerIndices[element_num];
  }

std::vector< OInteger > SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::getTeamOrPlayerIndices(void)
  {
    assert(flagHasTeamOrPlayerIndices);
    return storeTeamOrPlayerIndices;
  }

const std::vector< OInteger > SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::getTeamOrPlayerIndices(void) const
  {
    assert(flagHasTeamOrPlayerIndices);
    return storeTeamOrPlayerIndices;
  }

SportsLeagueLeadersQueryDataJSON::TypeError::TypeError(void)
  {
  }

SportsLeagueLeadersQueryDataJSON::TypeError::TypeError(const TypeError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsLeagueLeadersQueryDataJSON::TypeError::TypeError(TypeErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsLeagueLeadersQueryDataJSON::TypeError::operator==(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsLeagueLeadersQueryDataJSON::TypeError::operator!=(const TypeError &other) const
  {
    return !(operator==(other));
  }

bool SportsLeagueLeadersQueryDataJSON::TypeError::operator<(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsLeagueLeadersQueryDataJSON::TypeError::operator>(const TypeError &other) const
  {
    return other.operator<(*this);
  }

bool SportsLeagueLeadersQueryDataJSON::TypeError::operator>=(const TypeError &other) const
  {
    return !(operator<(other));
  }

bool SportsLeagueLeadersQueryDataJSON::TypeError::operator<=(const TypeError &other) const
  {
    return !(other.operator<(*this));
  }

SportsLeagueLeadersQueryDataJSON::TypeErrorKnownValues SportsLeagueLeadersQueryDataJSON::stringToError(const char *chars)
  {
    if (strcmp(chars, "DataUnavailable") == 0)
        return Error_DataUnavailable;
    return Error__none;
  }

const char *SportsLeagueLeadersQueryDataJSON::stringFromError(TypeErrorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Error_DataUnavailable:
            return "DataUnavailable";
        default:
            assert(false);
            return NULL;
      }
  }

SportsLeagueLeadersQueryDataJSON::SportsLeagueLeadersQueryDataJSON(const SportsLeagueLeadersQueryDataJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersQueryDataJSON &SportsLeagueLeadersQueryDataJSON::operator=(const SportsLeagueLeadersQueryDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersQueryDataJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersQueryDataJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersQueryDataJSON::fromJSONTeamsOrPlayers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamsOrPlayers of SportsLeagueLeadersQueryDataJSON is not a string.");
    TypeTeamsOrPlayers the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "layers") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TeamsOrPlayers_Players;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "eams") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TeamsOrPlayers_Teams;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setTeamsOrPlayers(the_open_enum);
  }

void SportsLeagueLeadersQueryDataJSON::fromJSONStatistics(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Statistics of SportsLeagueLeadersQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Statistics of SportsLeagueLeadersQueryDataJSON has too few elements.");
    std::vector< SportsStatsTypeJSON * > vector_Statistics1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsStatsTypeJSON *convert_classy = SportsStatsTypeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Statistics1[num1] = convert_classy;
      }
    assert(vector_Statistics1.size() >= 1);
    initStatistics();
    for (size_t num5 = 0; num5 < vector_Statistics1.size(); ++num5)
        appendStatistics(vector_Statistics1[num5]);
    for (size_t num1 = 0; num1 < vector_Statistics1.size(); ++num1)
      {
        vector_Statistics1[num1]->remove_reference();
      }
  }

void SportsLeagueLeadersQueryDataJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsLeagueLeadersQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsLeagueLeadersQueryDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsLeagueLeadersQueryDataJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersQueryDataJSON::fromJSONLeagueLeadersIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field LeagueLeadersIndices of SportsLeagueLeadersQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field LeagueLeadersIndices of SportsLeagueLeadersQueryDataJSON has too few elements.");
    std::vector< TypeLeagueLeadersIndicesJSON * > vector_LeagueLeadersIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeLeagueLeadersIndicesJSON *convert_classy = TypeLeagueLeadersIndicesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_LeagueLeadersIndices1[num1] = convert_classy;
      }
    assert(vector_LeagueLeadersIndices1.size() >= 1);
    initLeagueLeadersIndices();
    for (size_t num6 = 0; num6 < vector_LeagueLeadersIndices1.size(); ++num6)
        appendLeagueLeadersIndices(vector_LeagueLeadersIndices1[num6]);
    for (size_t num1 = 0; num1 < vector_LeagueLeadersIndices1.size(); ++num1)
      {
        vector_LeagueLeadersIndices1[num1]->remove_reference();
      }
  }

void SportsLeagueLeadersQueryDataJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Error of SportsLeagueLeadersQueryDataJSON is not a string.");
    TypeError the_open_enum;
    if (strcmp(json_string->getData(), "DataUnavailable") == 0)
          {
            the_open_enum.in_known_list = true;
            the_open_enum.list_value = Error_DataUnavailable;
            goto open_enum_is_done;
          }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setError(the_open_enum);
  }

SportsLeagueLeadersQueryDataJSON::SportsLeagueLeadersQueryDataJSON(void) :
        flagHasLeague(false),
        flagHasDivision(false),
        flagHasTeamsOrPlayers(false),
        flagHasStatistics(false),
        flagHasRank(false),
        flagHasSeason(false),
        flagHasLeagueLeadersIndices(false),
        flagHasError(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersQueryDataJSON::~SportsLeagueLeadersQueryDataJSON(void)
  {
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    if (flagHasDivision)
      {
        storeDivision->remove_reference();
      }
    if (flagHasStatistics)
      {
        for (size_t num7 = 0; num7 < storeStatistics.size(); ++num7)
          {
            storeStatistics[num7]->remove_reference();
          }
      }
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasLeagueLeadersIndices)
      {
        for (size_t num8 = 0; num8 < storeLeagueLeadersIndices.size(); ++num8)
          {
            storeLeagueLeadersIndices[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersQueryDataJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsLeagueLeadersQueryDataJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsLeagueLeadersQueryDataJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsLeagueLeadersQueryDataJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsLeagueLeadersQueryDataJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsLeagueLeadersQueryDataJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsLeagueLeadersQueryDataJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsLeagueLeadersQueryDataJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsLeagueLeadersQueryDataJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsLeagueLeadersQueryDataJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsLeagueLeadersQueryDataJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsLeagueLeadersQueryDataJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsLeagueLeadersQueryDataJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsLeagueLeadersQueryDataJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsLeagueLeadersQueryDataJSON::hasTeamsOrPlayers(void) const
  {
    return flagHasTeamsOrPlayers;
  }

SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers SportsLeagueLeadersQueryDataJSON::getTeamsOrPlayers(void)
  {
    assert(flagHasTeamsOrPlayers);
    return storeTeamsOrPlayers;
  }

const SportsLeagueLeadersQueryDataJSON::TypeTeamsOrPlayers SportsLeagueLeadersQueryDataJSON::getTeamsOrPlayers(void) const
  {
    assert(flagHasTeamsOrPlayers);
    return storeTeamsOrPlayers;
  }

const char *SportsLeagueLeadersQueryDataJSON::getTeamsOrPlayersAsChars(void) const
  {
    TypeTeamsOrPlayers result = getTeamsOrPlayers();
    if (result.in_known_list)
        return stringFromTeamsOrPlayers(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsLeagueLeadersQueryDataJSON::getTeamsOrPlayersAsString(void) const
  {
    return getTeamsOrPlayersAsChars();
  }

bool SportsLeagueLeadersQueryDataJSON::hasStatistics(void) const
  {
    return flagHasStatistics;
  }

size_t SportsLeagueLeadersQueryDataJSON::countOfStatistics(void) const
  {
    assert(flagHasStatistics);
    return storeStatistics.size();
  }

SportsStatsTypeJSON * SportsLeagueLeadersQueryDataJSON::elementOfStatistics(size_t element_num)
  {
    assert(flagHasStatistics);
    return storeStatistics[element_num];
  }

const SportsStatsTypeJSON * SportsLeagueLeadersQueryDataJSON::elementOfStatistics(size_t element_num) const
  {
    assert(flagHasStatistics);
    return storeStatistics[element_num];
  }

std::vector< SportsStatsTypeJSON * > SportsLeagueLeadersQueryDataJSON::getStatistics(void)
  {
    assert(flagHasStatistics);
    return storeStatistics;
  }

const std::vector< SportsStatsTypeJSON * > SportsLeagueLeadersQueryDataJSON::getStatistics(void) const
  {
    assert(flagHasStatistics);
    return storeStatistics;
  }

bool SportsLeagueLeadersQueryDataJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsLeagueLeadersQueryDataJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsLeagueLeadersQueryDataJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsLeagueLeadersQueryDataJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsSeasonResolvedJSON * SportsLeagueLeadersQueryDataJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsSeasonResolvedJSON * SportsLeagueLeadersQueryDataJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsLeagueLeadersQueryDataJSON::hasLeagueLeadersIndices(void) const
  {
    return flagHasLeagueLeadersIndices;
  }

size_t SportsLeagueLeadersQueryDataJSON::countOfLeagueLeadersIndices(void) const
  {
    assert(flagHasLeagueLeadersIndices);
    return storeLeagueLeadersIndices.size();
  }

SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON * SportsLeagueLeadersQueryDataJSON::elementOfLeagueLeadersIndices(size_t element_num)
  {
    assert(flagHasLeagueLeadersIndices);
    return storeLeagueLeadersIndices[element_num];
  }

const SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON * SportsLeagueLeadersQueryDataJSON::elementOfLeagueLeadersIndices(size_t element_num) const
  {
    assert(flagHasLeagueLeadersIndices);
    return storeLeagueLeadersIndices[element_num];
  }

std::vector< SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON * > SportsLeagueLeadersQueryDataJSON::getLeagueLeadersIndices(void)
  {
    assert(flagHasLeagueLeadersIndices);
    return storeLeagueLeadersIndices;
  }

const std::vector< SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON * > SportsLeagueLeadersQueryDataJSON::getLeagueLeadersIndices(void) const
  {
    assert(flagHasLeagueLeadersIndices);
    return storeLeagueLeadersIndices;
  }

bool SportsLeagueLeadersQueryDataJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsLeagueLeadersQueryDataJSON::TypeError SportsLeagueLeadersQueryDataJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsLeagueLeadersQueryDataJSON::TypeError SportsLeagueLeadersQueryDataJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

const char *SportsLeagueLeadersQueryDataJSON::getErrorAsChars(void) const
  {
    TypeError result = getError();
    if (result.in_known_list)
        return stringFromError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsLeagueLeadersQueryDataJSON::getErrorAsString(void) const
  {
    return getErrorAsChars();
  }

char SportsLeagueLeadersQueryDataJSON::Generator::lowerBoundRank[] = "1";
char SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::Generator::lowerBoundLeagueLeadersIndex[] = "0";
char SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::Generator::lowerBoundTeamOrPlayerIndices[] = "0";
SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON *SportsLeagueLeadersQueryDataJSON::TypeLeagueLeadersIndicesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeLeagueLeadersIndicesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeLeagueLeadersIndicesJSON>, TypeLeagueLeadersIndicesJSON *, bool> generator("Type TypeLeagueLeadersIndices", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsLeagueLeadersQueryDataJSON *SportsLeagueLeadersQueryDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueLeadersQueryDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersQueryDataJSON>, SportsLeagueLeadersQueryDataJSON *, bool> generator("Type SportsLeagueLeadersQueryData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
