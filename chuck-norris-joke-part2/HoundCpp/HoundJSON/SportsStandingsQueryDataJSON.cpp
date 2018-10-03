/* file "SportsStandingsQueryDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsQueryDataJSON.h"

#include "SportsStandingsQueryDataJSON.h"


SportsStandingsQueryDataJSON::TypeGrouping::TypeGrouping(void)
  {
  }

SportsStandingsQueryDataJSON::TypeGrouping::TypeGrouping(const TypeGrouping &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStandingsQueryDataJSON::TypeGrouping::TypeGrouping(TypeGroupingKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStandingsQueryDataJSON::TypeGrouping::operator==(const TypeGrouping &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStandingsQueryDataJSON::TypeGrouping::operator!=(const TypeGrouping &other) const
  {
    return !(operator==(other));
  }

bool SportsStandingsQueryDataJSON::TypeGrouping::operator<(const TypeGrouping &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStandingsQueryDataJSON::TypeGrouping::operator>(const TypeGrouping &other) const
  {
    return other.operator<(*this);
  }

bool SportsStandingsQueryDataJSON::TypeGrouping::operator>=(const TypeGrouping &other) const
  {
    return !(operator<(other));
  }

bool SportsStandingsQueryDataJSON::TypeGrouping::operator<=(const TypeGrouping &other) const
  {
    return !(other.operator<(*this));
  }

SportsStandingsQueryDataJSON::TypeGroupingKnownValues SportsStandingsQueryDataJSON::stringToGrouping(const char *chars)
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

const char *SportsStandingsQueryDataJSON::stringFromGrouping(TypeGroupingKnownValues the_enum)
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

SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::TypeDivisionTeamIndicesJSON(const TypeDivisionTeamIndicesJSON &)
  {
    assert(false);
  }

SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON &SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::operator=(const TypeDivisionTeamIndicesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::fromJSONDivisionIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DivisionIndex of TypeDivisionTeamIndicesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DivisionIndex of TypeDivisionTeamIndicesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDivisionIndex(extracted_integer);
  }

void SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::fromJSONTeamIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TeamIndex of TypeDivisionTeamIndicesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TeamIndex of TypeDivisionTeamIndicesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTeamIndex(extracted_integer);
  }

SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::TypeDivisionTeamIndicesJSON(void) :
        flagHasDivisionIndex(false),
        flagHasTeamIndex(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::~TypeDivisionTeamIndicesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::hasDivisionIndex(void) const
  {
    return flagHasDivisionIndex;
  }

OInteger SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::getDivisionIndex(void)
  {
    assert(flagHasDivisionIndex);
    return storeDivisionIndex;
  }

const OInteger SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::getDivisionIndex(void) const
  {
    assert(flagHasDivisionIndex);
    return storeDivisionIndex;
  }

bool SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::hasTeamIndex(void) const
  {
    return flagHasTeamIndex;
  }

OInteger SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::getTeamIndex(void)
  {
    assert(flagHasTeamIndex);
    return storeTeamIndex;
  }

const OInteger SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::getTeamIndex(void) const
  {
    assert(flagHasTeamIndex);
    return storeTeamIndex;
  }

SportsStandingsQueryDataJSON::TypeError::TypeError(void)
  {
  }

SportsStandingsQueryDataJSON::TypeError::TypeError(const TypeError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStandingsQueryDataJSON::TypeError::TypeError(TypeErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStandingsQueryDataJSON::TypeError::operator==(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStandingsQueryDataJSON::TypeError::operator!=(const TypeError &other) const
  {
    return !(operator==(other));
  }

bool SportsStandingsQueryDataJSON::TypeError::operator<(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStandingsQueryDataJSON::TypeError::operator>(const TypeError &other) const
  {
    return other.operator<(*this);
  }

bool SportsStandingsQueryDataJSON::TypeError::operator>=(const TypeError &other) const
  {
    return !(operator<(other));
  }

bool SportsStandingsQueryDataJSON::TypeError::operator<=(const TypeError &other) const
  {
    return !(other.operator<(*this));
  }

SportsStandingsQueryDataJSON::TypeErrorKnownValues SportsStandingsQueryDataJSON::stringToError(const char *chars)
  {
    if (strcmp(chars, "DataUnavailable") == 0)
        return Error_DataUnavailable;
    return Error__none;
  }

const char *SportsStandingsQueryDataJSON::stringFromError(TypeErrorKnownValues the_enum)
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

SportsStandingsQueryDataJSON::SportsStandingsQueryDataJSON(const SportsStandingsQueryDataJSON &)
  {
    assert(false);
  }

SportsStandingsQueryDataJSON &SportsStandingsQueryDataJSON::operator=(const SportsStandingsQueryDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsQueryDataJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStandingsQueryTypeJSON *convert_classy = SportsStandingsQueryTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryDataJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryDataJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryDataJSON::fromJSONTeam(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeam(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryDataJSON::fromJSONTeamOther(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeamOther(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryDataJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsStandingsQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsStandingsQueryDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsStandingsQueryDataJSON::fromJSONGrouping(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Grouping of SportsStandingsQueryDataJSON is not a string.");
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

void SportsStandingsQueryDataJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryDataJSON::fromJSONStandingsIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StandingsIndex of SportsStandingsQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StandingsIndex of SportsStandingsQueryDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStandingsIndex(extracted_integer);
  }

void SportsStandingsQueryDataJSON::fromJSONTournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTournamentJSON *convert_classy = SportsTournamentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTournament(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryDataJSON::fromJSONDivisionTeamIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DivisionTeamIndices of SportsStandingsQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field DivisionTeamIndices of SportsStandingsQueryDataJSON has too few elements.");
    std::vector< TypeDivisionTeamIndicesJSON * > vector_DivisionTeamIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeDivisionTeamIndicesJSON *convert_classy = TypeDivisionTeamIndicesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DivisionTeamIndices1[num1] = convert_classy;
      }
    assert(vector_DivisionTeamIndices1.size() >= 1);
    initDivisionTeamIndices();
    for (size_t num2 = 0; num2 < vector_DivisionTeamIndices1.size(); ++num2)
        appendDivisionTeamIndices(vector_DivisionTeamIndices1[num2]);
    for (size_t num1 = 0; num1 < vector_DivisionTeamIndices1.size(); ++num1)
      {
        vector_DivisionTeamIndices1[num1]->remove_reference();
      }
  }

void SportsStandingsQueryDataJSON::fromJSONGamesBehindOtherTeam(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field GamesBehindOtherTeam of SportsStandingsQueryDataJSON is not a number.");
          }
      }
    setGamesBehindOtherTeamText(the_rational_text);
  }

void SportsStandingsQueryDataJSON::fromJSONGamesLeftInSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GamesLeftInSeason of SportsStandingsQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GamesLeftInSeason of SportsStandingsQueryDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGamesLeftInSeason(extracted_integer);
  }

void SportsStandingsQueryDataJSON::fromJSONGamesLeftInSeasonLeagueMin(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GamesLeftInSeasonLeagueMin of SportsStandingsQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GamesLeftInSeasonLeagueMin of SportsStandingsQueryDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGamesLeftInSeasonLeagueMin(extracted_integer);
  }

void SportsStandingsQueryDataJSON::fromJSONGamesLeftInSeasonLeagueMax(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GamesLeftInSeasonLeagueMax of SportsStandingsQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GamesLeftInSeasonLeagueMax of SportsStandingsQueryDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGamesLeftInSeasonLeagueMax(extracted_integer);
  }

void SportsStandingsQueryDataJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Error of SportsStandingsQueryDataJSON is not a string.");
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

SportsStandingsQueryDataJSON::SportsStandingsQueryDataJSON(void) :
        flagHasType(false),
        flagHasLeague(false),
        flagHasDivision(false),
        flagHasTeam(false),
        flagHasTeamOther(false),
        flagHasRank(false),
        flagHasGrouping(false),
        flagHasSeason(false),
        flagHasStandingsIndex(false),
        flagHasTournament(false),
        flagHasDivisionTeamIndices(false),
        flagHasGamesBehindOtherTeam(false),
        flagHasGamesLeftInSeason(false),
        flagHasGamesLeftInSeasonLeagueMin(false),
        flagHasGamesLeftInSeasonLeagueMax(false),
        flagHasError(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsQueryDataJSON::~SportsStandingsQueryDataJSON(void)
  {
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    if (flagHasDivision)
      {
        storeDivision->remove_reference();
      }
    if (flagHasTeam)
      {
        storeTeam->remove_reference();
      }
    if (flagHasTeamOther)
      {
        storeTeamOther->remove_reference();
      }
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasTournament)
      {
        storeTournament->remove_reference();
      }
    if (flagHasDivisionTeamIndices)
      {
        for (size_t num4 = 0; num4 < storeDivisionTeamIndices.size(); ++num4)
          {
            storeDivisionTeamIndices[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsQueryDataJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsStandingsQueryTypeJSON * SportsStandingsQueryDataJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsStandingsQueryTypeJSON * SportsStandingsQueryDataJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

SportsStandingsQueryTypeJSON::TypeValue SportsStandingsQueryDataJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const SportsStandingsQueryTypeJSON::TypeValue SportsStandingsQueryDataJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *SportsStandingsQueryDataJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string SportsStandingsQueryDataJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

bool SportsStandingsQueryDataJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsStandingsQueryDataJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsStandingsQueryDataJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsStandingsQueryDataJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsStandingsQueryDataJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsStandingsQueryDataJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsStandingsQueryDataJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsStandingsQueryDataJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsStandingsQueryDataJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsStandingsQueryDataJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsStandingsQueryDataJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsStandingsQueryDataJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsStandingsQueryDataJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsStandingsQueryDataJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsStandingsQueryDataJSON::hasTeam(void) const
  {
    return flagHasTeam;
  }

SportsTeamNewJSON * SportsStandingsQueryDataJSON::getTeam(void)
  {
    assert(flagHasTeam);
    return storeTeam;
  }

const SportsTeamNewJSON * SportsStandingsQueryDataJSON::getTeam(void) const
  {
    assert(flagHasTeam);
    return storeTeam;
  }

bool SportsStandingsQueryDataJSON::hasTeamOther(void) const
  {
    return flagHasTeamOther;
  }

SportsTeamNewJSON * SportsStandingsQueryDataJSON::getTeamOther(void)
  {
    assert(flagHasTeamOther);
    return storeTeamOther;
  }

const SportsTeamNewJSON * SportsStandingsQueryDataJSON::getTeamOther(void) const
  {
    assert(flagHasTeamOther);
    return storeTeamOther;
  }

bool SportsStandingsQueryDataJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsStandingsQueryDataJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsStandingsQueryDataJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsStandingsQueryDataJSON::hasGrouping(void) const
  {
    return flagHasGrouping;
  }

SportsStandingsQueryDataJSON::TypeGrouping SportsStandingsQueryDataJSON::getGrouping(void)
  {
    assert(flagHasGrouping);
    return storeGrouping;
  }

const SportsStandingsQueryDataJSON::TypeGrouping SportsStandingsQueryDataJSON::getGrouping(void) const
  {
    assert(flagHasGrouping);
    return storeGrouping;
  }

const char *SportsStandingsQueryDataJSON::getGroupingAsChars(void) const
  {
    TypeGrouping result = getGrouping();
    if (result.in_known_list)
        return stringFromGrouping(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStandingsQueryDataJSON::getGroupingAsString(void) const
  {
    return getGroupingAsChars();
  }

bool SportsStandingsQueryDataJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsSeasonResolvedJSON * SportsStandingsQueryDataJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsSeasonResolvedJSON * SportsStandingsQueryDataJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsStandingsQueryDataJSON::hasStandingsIndex(void) const
  {
    return flagHasStandingsIndex;
  }

OInteger SportsStandingsQueryDataJSON::getStandingsIndex(void)
  {
    assert(flagHasStandingsIndex);
    return storeStandingsIndex;
  }

const OInteger SportsStandingsQueryDataJSON::getStandingsIndex(void) const
  {
    assert(flagHasStandingsIndex);
    return storeStandingsIndex;
  }

bool SportsStandingsQueryDataJSON::hasTournament(void) const
  {
    return flagHasTournament;
  }

SportsTournamentJSON * SportsStandingsQueryDataJSON::getTournament(void)
  {
    assert(flagHasTournament);
    return storeTournament;
  }

const SportsTournamentJSON * SportsStandingsQueryDataJSON::getTournament(void) const
  {
    assert(flagHasTournament);
    return storeTournament;
  }

bool SportsStandingsQueryDataJSON::hasDivisionTeamIndices(void) const
  {
    return flagHasDivisionTeamIndices;
  }

size_t SportsStandingsQueryDataJSON::countOfDivisionTeamIndices(void) const
  {
    assert(flagHasDivisionTeamIndices);
    return storeDivisionTeamIndices.size();
  }

SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON * SportsStandingsQueryDataJSON::elementOfDivisionTeamIndices(size_t element_num)
  {
    assert(flagHasDivisionTeamIndices);
    return storeDivisionTeamIndices[element_num];
  }

const SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON * SportsStandingsQueryDataJSON::elementOfDivisionTeamIndices(size_t element_num) const
  {
    assert(flagHasDivisionTeamIndices);
    return storeDivisionTeamIndices[element_num];
  }

std::vector< SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON * > SportsStandingsQueryDataJSON::getDivisionTeamIndices(void)
  {
    assert(flagHasDivisionTeamIndices);
    return storeDivisionTeamIndices;
  }

const std::vector< SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON * > SportsStandingsQueryDataJSON::getDivisionTeamIndices(void) const
  {
    assert(flagHasDivisionTeamIndices);
    return storeDivisionTeamIndices;
  }

bool SportsStandingsQueryDataJSON::hasGamesBehindOtherTeam(void) const
  {
    return flagHasGamesBehindOtherTeam;
  }

double SportsStandingsQueryDataJSON::getGamesBehindOtherTeam(void)
  {
    assert(flagHasGamesBehindOtherTeam);
    if (textStoreGamesBehindOtherTeam != "")
      {
        return atof(textStoreGamesBehindOtherTeam.c_str());
      }
    return storeGamesBehindOtherTeam;
  }

const double SportsStandingsQueryDataJSON::getGamesBehindOtherTeam(void) const
  {
    assert(flagHasGamesBehindOtherTeam);
    if (textStoreGamesBehindOtherTeam != "")
      {
        return atof(textStoreGamesBehindOtherTeam.c_str());
      }
    return storeGamesBehindOtherTeam;
  }

std::string SportsStandingsQueryDataJSON::getGamesBehindOtherTeamAsText(void) const
  {
    assert(flagHasGamesBehindOtherTeam);
    if (textStoreGamesBehindOtherTeam == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeGamesBehindOtherTeam);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreGamesBehindOtherTeam);
      }
  }

bool SportsStandingsQueryDataJSON::hasGamesLeftInSeason(void) const
  {
    return flagHasGamesLeftInSeason;
  }

OInteger SportsStandingsQueryDataJSON::getGamesLeftInSeason(void)
  {
    assert(flagHasGamesLeftInSeason);
    return storeGamesLeftInSeason;
  }

const OInteger SportsStandingsQueryDataJSON::getGamesLeftInSeason(void) const
  {
    assert(flagHasGamesLeftInSeason);
    return storeGamesLeftInSeason;
  }

bool SportsStandingsQueryDataJSON::hasGamesLeftInSeasonLeagueMin(void) const
  {
    return flagHasGamesLeftInSeasonLeagueMin;
  }

OInteger SportsStandingsQueryDataJSON::getGamesLeftInSeasonLeagueMin(void)
  {
    assert(flagHasGamesLeftInSeasonLeagueMin);
    return storeGamesLeftInSeasonLeagueMin;
  }

const OInteger SportsStandingsQueryDataJSON::getGamesLeftInSeasonLeagueMin(void) const
  {
    assert(flagHasGamesLeftInSeasonLeagueMin);
    return storeGamesLeftInSeasonLeagueMin;
  }

bool SportsStandingsQueryDataJSON::hasGamesLeftInSeasonLeagueMax(void) const
  {
    return flagHasGamesLeftInSeasonLeagueMax;
  }

OInteger SportsStandingsQueryDataJSON::getGamesLeftInSeasonLeagueMax(void)
  {
    assert(flagHasGamesLeftInSeasonLeagueMax);
    return storeGamesLeftInSeasonLeagueMax;
  }

const OInteger SportsStandingsQueryDataJSON::getGamesLeftInSeasonLeagueMax(void) const
  {
    assert(flagHasGamesLeftInSeasonLeagueMax);
    return storeGamesLeftInSeasonLeagueMax;
  }

bool SportsStandingsQueryDataJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsStandingsQueryDataJSON::TypeError SportsStandingsQueryDataJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsStandingsQueryDataJSON::TypeError SportsStandingsQueryDataJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

const char *SportsStandingsQueryDataJSON::getErrorAsChars(void) const
  {
    TypeError result = getError();
    if (result.in_known_list)
        return stringFromError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStandingsQueryDataJSON::getErrorAsString(void) const
  {
    return getErrorAsChars();
  }

char SportsStandingsQueryDataJSON::Generator::lowerBoundRank[] = "1";
char SportsStandingsQueryDataJSON::Generator::lowerBoundStandingsIndex[] = "0";
char SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::Generator::lowerBoundDivisionIndex[] = "0";
char SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::Generator::lowerBoundTeamIndex[] = "0";
SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON *SportsStandingsQueryDataJSON::TypeDivisionTeamIndicesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDivisionTeamIndicesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDivisionTeamIndicesJSON>, TypeDivisionTeamIndicesJSON *, bool> generator("Type TypeDivisionTeamIndices", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char SportsStandingsQueryDataJSON::Generator::lowerBoundGamesLeftInSeason[] = "0";
char SportsStandingsQueryDataJSON::Generator::lowerBoundGamesLeftInSeasonLeagueMin[] = "0";
char SportsStandingsQueryDataJSON::Generator::lowerBoundGamesLeftInSeasonLeagueMax[] = "0";
SportsStandingsQueryDataJSON *SportsStandingsQueryDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsQueryDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsQueryDataJSON>, SportsStandingsQueryDataJSON *, bool> generator("Type SportsStandingsQueryData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
