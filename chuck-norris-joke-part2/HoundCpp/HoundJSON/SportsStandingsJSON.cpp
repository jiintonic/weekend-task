/* file "SportsStandingsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsJSON.h"

#include "SportsStandingsJSON.h"


SportsStandingsJSON::TypeGrouping::TypeGrouping(void)
  {
  }

SportsStandingsJSON::TypeGrouping::TypeGrouping(const TypeGrouping &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStandingsJSON::TypeGrouping::TypeGrouping(TypeGroupingKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStandingsJSON::TypeGrouping::operator==(const TypeGrouping &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStandingsJSON::TypeGrouping::operator!=(const TypeGrouping &other) const
  {
    return !(operator==(other));
  }

bool SportsStandingsJSON::TypeGrouping::operator<(const TypeGrouping &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStandingsJSON::TypeGrouping::operator>(const TypeGrouping &other) const
  {
    return other.operator<(*this);
  }

bool SportsStandingsJSON::TypeGrouping::operator>=(const TypeGrouping &other) const
  {
    return !(operator<(other));
  }

bool SportsStandingsJSON::TypeGrouping::operator<=(const TypeGrouping &other) const
  {
    return !(other.operator<(*this));
  }

SportsStandingsJSON::TypeGroupingKnownValues SportsStandingsJSON::stringToGrouping(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "onference") == 0)
                return Grouping_Conference;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "ivisional") == 0)
                return Grouping_Divisional;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eague") == 0)
                return Grouping_League;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ildCard") == 0)
                return Grouping_WildCard;
            break;
        default:
            break;
      }
    return Grouping__none;
  }

const char *SportsStandingsJSON::stringFromGrouping(TypeGroupingKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Grouping_Divisional:
            return "Divisional";
        case Grouping_Conference:
            return "Conference";
        case Grouping_League:
            return "League";
        case Grouping_WildCard:
            return "WildCard";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamsJSON(const TypeTeamsJSON &)
  {
    assert(false);
  }

SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON &SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::operator=(const TypeTeamsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::fromJSONTeam(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeam(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::fromJSONStandingsData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStandingsDataJSON *convert_classy = SportsStandingsDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStandingsData(convert_classy);
    convert_classy->remove_reference();
  }

SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamsJSON(void) :
        flagHasTeam(false),
        flagHasStandingsData(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::~TypeTeamsJSON(void)
  {
    if (flagHasTeam)
      {
        storeTeam->remove_reference();
      }
    if (flagHasStandingsData)
      {
        storeStandingsData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::hasTeam(void) const
  {
    return flagHasTeam;
  }

SportsTeamNewJSON * SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::getTeam(void)
  {
    assert(flagHasTeam);
    return storeTeam;
  }

const SportsTeamNewJSON * SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::getTeam(void) const
  {
    assert(flagHasTeam);
    return storeTeam;
  }

bool SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::hasStandingsData(void) const
  {
    return flagHasStandingsData;
  }

SportsStandingsDataJSON * SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::getStandingsData(void)
  {
    assert(flagHasStandingsData);
    return storeStandingsData;
  }

const SportsStandingsDataJSON * SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::getStandingsData(void) const
  {
    assert(flagHasStandingsData);
    return storeStandingsData;
  }

SportsStandingsJSON::TypeDivisionsJSON::TypeDivisionsJSON(const TypeDivisionsJSON &)
  {
    assert(false);
  }

SportsStandingsJSON::TypeDivisionsJSON &SportsStandingsJSON::TypeDivisionsJSON::operator=(const TypeDivisionsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsJSON::TypeDivisionsJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsJSON::TypeDivisionsJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsJSON::TypeDivisionsJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of TypeDivisionsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeTeamsJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeTeamsJSON *convert_classy = TypeTeamsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    initTeams();
    for (size_t num3 = 0; num3 < vector_Teams1.size(); ++num3)
        appendTeams(vector_Teams1[num3]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsStandingsJSON::TypeDivisionsJSON::fromJSONReferencedInQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ReferencedInQuery of TypeDivisionsJSON is not true for false.");
          }
      }
    setReferencedInQuery(the_bool);
  }

void SportsStandingsJSON::TypeDivisionsJSON::fromJSONHasDivisionGamePlayed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HasDivisionGamePlayed of TypeDivisionsJSON is not true for false.");
          }
      }
    setHasDivisionGamePlayed(the_bool);
  }

SportsStandingsJSON::TypeDivisionsJSON::TypeDivisionsJSON(void) :
        flagHasLeague(false),
        flagHasDivision(false),
        flagHasTeams(false),
        flagHasReferencedInQuery(false),
        flagHasHasDivisionGamePlayed(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsJSON::TypeDivisionsJSON::~TypeDivisionsJSON(void)
  {
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    if (flagHasDivision)
      {
        storeDivision->remove_reference();
      }
    if (flagHasTeams)
      {
        for (size_t num7 = 0; num7 < storeTeams.size(); ++num7)
          {
            storeTeams[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsJSON::TypeDivisionsJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsStandingsJSON::TypeDivisionsJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsStandingsJSON::TypeDivisionsJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsStandingsJSON::TypeDivisionsJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsStandingsJSON::TypeDivisionsJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsStandingsJSON::TypeDivisionsJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsStandingsJSON::TypeDivisionsJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsStandingsJSON::TypeDivisionsJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsStandingsJSON::TypeDivisionsJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsStandingsJSON::TypeDivisionsJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsStandingsJSON::TypeDivisionsJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsStandingsJSON::TypeDivisionsJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsStandingsJSON::TypeDivisionsJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsStandingsJSON::TypeDivisionsJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsStandingsJSON::TypeDivisionsJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsStandingsJSON::TypeDivisionsJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON * SportsStandingsJSON::TypeDivisionsJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON * SportsStandingsJSON::TypeDivisionsJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON * > SportsStandingsJSON::TypeDivisionsJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON * > SportsStandingsJSON::TypeDivisionsJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsStandingsJSON::TypeDivisionsJSON::hasReferencedInQuery(void) const
  {
    return flagHasReferencedInQuery;
  }

bool SportsStandingsJSON::TypeDivisionsJSON::getReferencedInQuery(void)
  {
    assert(flagHasReferencedInQuery);
    return storeReferencedInQuery;
  }

const bool SportsStandingsJSON::TypeDivisionsJSON::getReferencedInQuery(void) const
  {
    assert(flagHasReferencedInQuery);
    return storeReferencedInQuery;
  }

bool SportsStandingsJSON::TypeDivisionsJSON::hasHasDivisionGamePlayed(void) const
  {
    return flagHasHasDivisionGamePlayed;
  }

bool SportsStandingsJSON::TypeDivisionsJSON::getHasDivisionGamePlayed(void)
  {
    assert(flagHasHasDivisionGamePlayed);
    return storeHasDivisionGamePlayed;
  }

const bool SportsStandingsJSON::TypeDivisionsJSON::getHasDivisionGamePlayed(void) const
  {
    assert(flagHasHasDivisionGamePlayed);
    return storeHasDivisionGamePlayed;
  }

SportsStandingsJSON::SportsStandingsJSON(const SportsStandingsJSON &)
  {
    assert(false);
  }

SportsStandingsJSON &SportsStandingsJSON::operator=(const SportsStandingsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsJSON::fromJSONTournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTournamentJSON *convert_classy = SportsTournamentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTournament(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsJSON::fromJSONGrouping(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Grouping of SportsStandingsJSON is not a string.");
    TypeGrouping the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "onference") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Grouping_Conference;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ivisional") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Grouping_Divisional;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "eague") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Grouping_League;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "ildCard") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Grouping_WildCard;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setGrouping(the_open_enum);
  }

void SportsStandingsJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsJSON::fromJSONHasLeagueGamePlayed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HasLeagueGamePlayed of SportsStandingsJSON is not true for false.");
          }
      }
    setHasLeagueGamePlayed(the_bool);
  }

void SportsStandingsJSON::fromJSONDivisions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Divisions of SportsStandingsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeDivisionsJSON * > vector_Divisions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeDivisionsJSON *convert_classy = TypeDivisionsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Divisions1[num1] = convert_classy;
      }
    initDivisions();
    for (size_t num4 = 0; num4 < vector_Divisions1.size(); ++num4)
        appendDivisions(vector_Divisions1[num4]);
    for (size_t num1 = 0; num1 < vector_Divisions1.size(); ++num1)
      {
        vector_Divisions1[num1]->remove_reference();
      }
  }

void SportsStandingsJSON::fromJSONSportImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSportImageJSON *convert_classy = SportsSportImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportImage(convert_classy);
    convert_classy->remove_reference();
  }

SportsStandingsJSON::SportsStandingsJSON(void) :
        flagHasLeague(false),
        flagHasDivision(false),
        flagHasTournament(false),
        flagHasGrouping(false),
        flagHasSeason(false),
        flagHasHasLeagueGamePlayed(false),
        flagHasDivisions(false),
        flagHasSportImage(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsJSON::~SportsStandingsJSON(void)
  {
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    if (flagHasDivision)
      {
        storeDivision->remove_reference();
      }
    if (flagHasTournament)
      {
        storeTournament->remove_reference();
      }
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasDivisions)
      {
        for (size_t num10 = 0; num10 < storeDivisions.size(); ++num10)
          {
            storeDivisions[num10]->remove_reference();
          }
      }
    if (flagHasSportImage)
      {
        storeSportImage->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsStandingsJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsStandingsJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsStandingsJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsStandingsJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsStandingsJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsStandingsJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsStandingsJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsStandingsJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsStandingsJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsStandingsJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsStandingsJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsStandingsJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsStandingsJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsStandingsJSON::hasTournament(void) const
  {
    return flagHasTournament;
  }

SportsTournamentJSON * SportsStandingsJSON::getTournament(void)
  {
    assert(flagHasTournament);
    return storeTournament;
  }

const SportsTournamentJSON * SportsStandingsJSON::getTournament(void) const
  {
    assert(flagHasTournament);
    return storeTournament;
  }

bool SportsStandingsJSON::hasGrouping(void) const
  {
    return flagHasGrouping;
  }

SportsStandingsJSON::TypeGrouping SportsStandingsJSON::getGrouping(void)
  {
    assert(flagHasGrouping);
    return storeGrouping;
  }

const SportsStandingsJSON::TypeGrouping SportsStandingsJSON::getGrouping(void) const
  {
    assert(flagHasGrouping);
    return storeGrouping;
  }

const char *SportsStandingsJSON::getGroupingAsChars(void) const
  {
    TypeGrouping result = getGrouping();
    if (result.in_known_list)
        return stringFromGrouping(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStandingsJSON::getGroupingAsString(void) const
  {
    return getGroupingAsChars();
  }

bool SportsStandingsJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsSeasonResolvedJSON * SportsStandingsJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsSeasonResolvedJSON * SportsStandingsJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsStandingsJSON::hasHasLeagueGamePlayed(void) const
  {
    return flagHasHasLeagueGamePlayed;
  }

bool SportsStandingsJSON::getHasLeagueGamePlayed(void)
  {
    assert(flagHasHasLeagueGamePlayed);
    return storeHasLeagueGamePlayed;
  }

const bool SportsStandingsJSON::getHasLeagueGamePlayed(void) const
  {
    assert(flagHasHasLeagueGamePlayed);
    return storeHasLeagueGamePlayed;
  }

bool SportsStandingsJSON::hasDivisions(void) const
  {
    return flagHasDivisions;
  }

size_t SportsStandingsJSON::countOfDivisions(void) const
  {
    assert(flagHasDivisions);
    return storeDivisions.size();
  }

SportsStandingsJSON::TypeDivisionsJSON * SportsStandingsJSON::elementOfDivisions(size_t element_num)
  {
    assert(flagHasDivisions);
    return storeDivisions[element_num];
  }

const SportsStandingsJSON::TypeDivisionsJSON * SportsStandingsJSON::elementOfDivisions(size_t element_num) const
  {
    assert(flagHasDivisions);
    return storeDivisions[element_num];
  }

std::vector< SportsStandingsJSON::TypeDivisionsJSON * > SportsStandingsJSON::getDivisions(void)
  {
    assert(flagHasDivisions);
    return storeDivisions;
  }

const std::vector< SportsStandingsJSON::TypeDivisionsJSON * > SportsStandingsJSON::getDivisions(void) const
  {
    assert(flagHasDivisions);
    return storeDivisions;
  }

bool SportsStandingsJSON::hasSportImage(void) const
  {
    return flagHasSportImage;
  }

SportsSportImageJSON * SportsStandingsJSON::getSportImage(void)
  {
    assert(flagHasSportImage);
    return storeSportImage;
  }

const SportsSportImageJSON * SportsStandingsJSON::getSportImage(void) const
  {
    assert(flagHasSportImage);
    return storeSportImage;
  }

SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON *SportsStandingsJSON::TypeDivisionsJSON::TypeTeamsJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SportsStandingsJSON::TypeDivisionsJSON *SportsStandingsJSON::TypeDivisionsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDivisionsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDivisionsJSON>, TypeDivisionsJSON *, bool> generator("Type TypeDivisions", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsStandingsJSON *SportsStandingsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsJSON>, SportsStandingsJSON *, bool> generator("Type SportsStandings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
