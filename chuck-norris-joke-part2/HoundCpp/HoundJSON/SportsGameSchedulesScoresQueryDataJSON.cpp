/* file "SportsGameSchedulesScoresQueryDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGameSchedulesScoresQueryDataJSON.h"

#include "SportsGameSchedulesScoresQueryDataJSON.h"


SportsGameSchedulesScoresQueryDataJSON::TypeType::TypeType(void)
  {
  }

SportsGameSchedulesScoresQueryDataJSON::TypeType::TypeType(const TypeType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeType::TypeType(TypeTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeType::operator==(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeType::operator!=(const TypeType &other) const
  {
    return !(operator==(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeType::operator<(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeType::operator>(const TypeType &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeType::operator>=(const TypeType &other) const
  {
    return !(operator<(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeType::operator<=(const TypeType &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameSchedulesScoresQueryDataJSON::TypeTypeKnownValues SportsGameSchedulesScoresQueryDataJSON::stringToType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "roadcastNetwork") == 0)
                return Type_BroadcastNetwork;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ocation") == 0)
                return Type_Location;
            break;
        case 'S':
            if (strncmp(&(chars[1]), "c", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'h':
                        if (strcmp(&(chars[3]), "edule") == 0)
                            return Type_Schedule;
                        break;
                    case 'o':
                        if (strncmp(&(chars[3]), "re", 2) == 0)
                          {
                            switch ((unsigned char)(chars[5]))
                              {
                                case 0:
                                    return Type_Score;
                                case 'O':
                                    if (strcmp(&(chars[6]), "rSchedule") == 0)
                                        return Type_ScoreOrSchedule;
                                    break;
                                default:
                                    break;
                              }
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
    return Type__none;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::stringFromType(TypeTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Type_Score:
            return "Score";
        case Type_Schedule:
            return "Schedule";
        case Type_ScoreOrSchedule:
            return "ScoreOrSchedule";
        case Type_Location:
            return "Location";
        case Type_BroadcastNetwork:
            return "BroadcastNetwork";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::TypeHomeAway(void)
  {
  }

SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::TypeHomeAway(const TypeHomeAway &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::TypeHomeAway(TypeHomeAwayKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::operator==(const TypeHomeAway &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::operator!=(const TypeHomeAway &other) const
  {
    return !(operator==(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::operator<(const TypeHomeAway &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::operator>(const TypeHomeAway &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::operator>=(const TypeHomeAway &other) const
  {
    return !(operator<(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway::operator<=(const TypeHomeAway &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameSchedulesScoresQueryDataJSON::TypeHomeAwayKnownValues SportsGameSchedulesScoresQueryDataJSON::stringToHomeAway(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "way") == 0)
                return HomeAway_Away;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ome") == 0)
                return HomeAway_Home;
            break;
        default:
            break;
      }
    return HomeAway__none;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::stringFromHomeAway(TypeHomeAwayKnownValues the_enum)
  {
    switch (the_enum)
      {
        case HomeAway_Home:
            return "Home";
        case HomeAway_Away:
            return "Away";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::TypeQueryGameOutcome(void)
  {
  }

SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::TypeQueryGameOutcome(const TypeQueryGameOutcome &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::TypeQueryGameOutcome(TypeQueryGameOutcomeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::operator==(const TypeQueryGameOutcome &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::operator!=(const TypeQueryGameOutcome &other) const
  {
    return !(operator==(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::operator<(const TypeQueryGameOutcome &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::operator>(const TypeQueryGameOutcome &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::operator>=(const TypeQueryGameOutcome &other) const
  {
    return !(operator<(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome::operator<=(const TypeQueryGameOutcome &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcomeKnownValues SportsGameSchedulesScoresQueryDataJSON::stringToQueryGameOutcome(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "ost") == 0)
                return QueryGameOutcome_Lost;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ied") == 0)
                return QueryGameOutcome_Tied;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "on") == 0)
                return QueryGameOutcome_Won;
            break;
        default:
            break;
      }
    return QueryGameOutcome__none;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::stringFromQueryGameOutcome(TypeQueryGameOutcomeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case QueryGameOutcome_Won:
            return "Won";
        case QueryGameOutcome_Lost:
            return "Lost";
        case QueryGameOutcome_Tied:
            return "Tied";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameSchedulesScoresQueryDataJSON::TypeResultType::TypeResultType(void)
  {
  }

SportsGameSchedulesScoresQueryDataJSON::TypeResultType::TypeResultType(const TypeResultType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeResultType::TypeResultType(TypeResultTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeResultType::operator==(const TypeResultType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeResultType::operator!=(const TypeResultType &other) const
  {
    return !(operator==(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeResultType::operator<(const TypeResultType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeResultType::operator>(const TypeResultType &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeResultType::operator>=(const TypeResultType &other) const
  {
    return !(operator<(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeResultType::operator<=(const TypeResultType &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameSchedulesScoresQueryDataJSON::TypeResultTypeKnownValues SportsGameSchedulesScoresQueryDataJSON::stringToResultType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'G':
            if (strcmp(&(chars[1]), "eneric") == 0)
                return ResultType_Generic;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "layoffsComplete") == 0)
                return ResultType_PlayoffsComplete;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "eries") == 0)
                return ResultType_Series;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "eam") == 0)
                return ResultType_Team;
            break;
        default:
            break;
      }
    return ResultType__none;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::stringFromResultType(TypeResultTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ResultType_Team:
            return "Team";
        case ResultType_Generic:
            return "Generic";
        case ResultType_Series:
            return "Series";
        case ResultType_PlayoffsComplete:
            return "PlayoffsComplete";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameSchedulesScoresQueryDataJSON::TypeError::TypeError(void)
  {
  }

SportsGameSchedulesScoresQueryDataJSON::TypeError::TypeError(const TypeError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeError::TypeError(TypeErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeError::operator==(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeError::operator!=(const TypeError &other) const
  {
    return !(operator==(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeError::operator<(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeError::operator>(const TypeError &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeError::operator>=(const TypeError &other) const
  {
    return !(operator<(other));
  }

bool SportsGameSchedulesScoresQueryDataJSON::TypeError::operator<=(const TypeError &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameSchedulesScoresQueryDataJSON::TypeErrorKnownValues SportsGameSchedulesScoresQueryDataJSON::stringToError(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "agueNotSupported") == 0)
                        return Error_LeagueNotSupported;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "cationUnavailable") == 0)
                        return Error_LocationUnavailable;
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            if (strcmp(&(chars[1]), "oGamesFound") == 0)
                return Error_NoGamesFound;
            break;
        default:
            break;
      }
    return Error__none;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::stringFromError(TypeErrorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Error_NoGamesFound:
            return "NoGamesFound";
        case Error_LeagueNotSupported:
            return "LeagueNotSupported";
        case Error_LocationUnavailable:
            return "LocationUnavailable";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameSchedulesScoresQueryDataJSON::SportsGameSchedulesScoresQueryDataJSON(const SportsGameSchedulesScoresQueryDataJSON &)
  {
    assert(false);
  }

SportsGameSchedulesScoresQueryDataJSON &SportsGameSchedulesScoresQueryDataJSON::operator=(const SportsGameSchedulesScoresQueryDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of SportsGameSchedulesScoresQueryDataJSON is not a string.");
    TypeType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "roadcastNetwork") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_BroadcastNetwork;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ocation") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_Location;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "c", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'h':
                        if (strcmp(&(json_string->getData()[3]), "edule") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Type_Schedule;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'o':
                        if (strncmp(&(json_string->getData()[3]), "re", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[5]))
                              {
                                case 0:
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Type_Score;
                                        goto open_enum_is_done;
                                      }
                                case 'O':
                                    if (strcmp(&(json_string->getData()[6]), "rSchedule") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Type_ScoreOrSchedule;
                                            goto open_enum_is_done;
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

void SportsGameSchedulesScoresQueryDataJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of SportsGameSchedulesScoresQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Teams of SportsGameSchedulesScoresQueryDataJSON has too few elements.");
    std::vector< SportsTeamNewJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 1);
    initTeams();
    for (size_t num9 = 0; num9 < vector_Teams1.size(); ++num9)
        appendTeams(vector_Teams1[num9]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONLeagues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Leagues of SportsGameSchedulesScoresQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Leagues of SportsGameSchedulesScoresQueryDataJSON has too few elements.");
    std::vector< SportsLeagueCodeJSON * > vector_Leagues1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Leagues1[num1] = convert_classy;
      }
    assert(vector_Leagues1.size() >= 1);
    initLeagues();
    for (size_t num10 = 0; num10 < vector_Leagues1.size(); ++num10)
        appendLeagues(vector_Leagues1[num10]);
    for (size_t num1 = 0; num1 < vector_Leagues1.size(); ++num1)
      {
        vector_Leagues1[num1]->remove_reference();
      }
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONHomeAway(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HomeAway of SportsGameSchedulesScoresQueryDataJSON is not a string.");
    TypeHomeAway the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "way") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = HomeAway_Away;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "ome") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = HomeAway_Home;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setHomeAway(the_open_enum);
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONSeasonType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonTypeJSON *convert_classy = SportsSeasonTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeasonType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SpecialGameType of SportsGameSchedulesScoresQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SpecialGameType of SportsGameSchedulesScoresQueryDataJSON has too few elements.");
    std::vector< SportsPlayoffSpecialGameJSON * > vector_SpecialGameType1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SpecialGameType1[num1] = convert_classy;
      }
    assert(vector_SpecialGameType1.size() >= 1);
    initSpecialGameType();
    for (size_t num11 = 0; num11 < vector_SpecialGameType1.size(); ++num11)
        appendSpecialGameType(vector_SpecialGameType1[num11]);
    for (size_t num1 = 0; num1 < vector_SpecialGameType1.size(); ++num1)
      {
        vector_SpecialGameType1[num1]->remove_reference();
      }
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONSeriesGameNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SeriesGameNumber of SportsGameSchedulesScoresQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SeriesGameNumber of SportsGameSchedulesScoresQueryDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSeriesGameNumber(extracted_integer);
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONQueryGameOutcome(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryGameOutcome of SportsGameSchedulesScoresQueryDataJSON is not a string.");
    TypeQueryGameOutcome the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ost") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryGameOutcome_Lost;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ied") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryGameOutcome_Tied;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "on") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryGameOutcome_Won;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setQueryGameOutcome(the_open_enum);
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONQueryMentionedGame(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field QueryMentionedGame of SportsGameSchedulesScoresQueryDataJSON is not true for false.");
          }
      }
    setQueryMentionedGame(the_bool);
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONResultType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultType of SportsGameSchedulesScoresQueryDataJSON is not a string.");
    TypeResultType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "eneric") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultType_Generic;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "layoffsComplete") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultType_PlayoffsComplete;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "eries") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultType_Series;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "eam") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultType_Team;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setResultType(the_open_enum);
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONSeriesStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SeriesStatus of SportsGameSchedulesScoresQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SeriesStatus of SportsGameSchedulesScoresQueryDataJSON has too few elements.");
    std::vector< SportsSeriesStatusNewJSON * > vector_SeriesStatus1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsSeriesStatusNewJSON *convert_classy = SportsSeriesStatusNewJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SeriesStatus1[num1] = convert_classy;
      }
    assert(vector_SeriesStatus1.size() >= 1);
    initSeriesStatus();
    for (size_t num12 = 0; num12 < vector_SeriesStatus1.size(); ++num12)
        appendSeriesStatus(vector_SeriesStatus1[num12]);
    for (size_t num1 = 0; num1 < vector_SeriesStatus1.size(); ++num1)
      {
        vector_SeriesStatus1[num1]->remove_reference();
      }
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONDateTimeRangeLocationDropped(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DateTimeRangeLocationDropped of SportsGameSchedulesScoresQueryDataJSON is not true for false.");
          }
      }
    setDateTimeRangeLocationDropped(the_bool);
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONGamesIndicesBestMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GamesIndicesBestMatches of SportsGameSchedulesScoresQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field GamesIndicesBestMatches of SportsGameSchedulesScoresQueryDataJSON has too few elements.");
    std::vector< OInteger > vector_GamesIndicesBestMatches1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field GamesIndicesBestMatches of SportsGameSchedulesScoresQueryDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field GamesIndicesBestMatches of SportsGameSchedulesScoresQueryDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_GamesIndicesBestMatches1[num1] = extracted_integer;
      }
    assert(vector_GamesIndicesBestMatches1.size() >= 1);
    initGamesIndicesBestMatches();
    for (size_t num13 = 0; num13 < vector_GamesIndicesBestMatches1.size(); ++num13)
        appendGamesIndicesBestMatches(vector_GamesIndicesBestMatches1[num13]);
    for (size_t num1 = 0; num1 < vector_GamesIndicesBestMatches1.size(); ++num1)
      {
      }
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONGamesIndicesSecondaryMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GamesIndicesSecondaryMatches of SportsGameSchedulesScoresQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field GamesIndicesSecondaryMatches of SportsGameSchedulesScoresQueryDataJSON has too few elements.");
    std::vector< OInteger > vector_GamesIndicesSecondaryMatches1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field GamesIndicesSecondaryMatches of SportsGameSchedulesScoresQueryDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field GamesIndicesSecondaryMatches of SportsGameSchedulesScoresQueryDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_GamesIndicesSecondaryMatches1[num1] = extracted_integer;
      }
    assert(vector_GamesIndicesSecondaryMatches1.size() >= 1);
    initGamesIndicesSecondaryMatches();
    for (size_t num14 = 0; num14 < vector_GamesIndicesSecondaryMatches1.size(); ++num14)
        appendGamesIndicesSecondaryMatches(vector_GamesIndicesSecondaryMatches1[num14]);
    for (size_t num1 = 0; num1 < vector_GamesIndicesSecondaryMatches1.size(); ++num1)
      {
      }
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONGamesIndicesRecentGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GamesIndicesRecentGames of SportsGameSchedulesScoresQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field GamesIndicesRecentGames of SportsGameSchedulesScoresQueryDataJSON has too few elements.");
    std::vector< OInteger > vector_GamesIndicesRecentGames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field GamesIndicesRecentGames of SportsGameSchedulesScoresQueryDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field GamesIndicesRecentGames of SportsGameSchedulesScoresQueryDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_GamesIndicesRecentGames1[num1] = extracted_integer;
      }
    assert(vector_GamesIndicesRecentGames1.size() >= 1);
    initGamesIndicesRecentGames();
    for (size_t num15 = 0; num15 < vector_GamesIndicesRecentGames1.size(); ++num15)
        appendGamesIndicesRecentGames(vector_GamesIndicesRecentGames1[num15]);
    for (size_t num1 = 0; num1 < vector_GamesIndicesRecentGames1.size(); ++num1)
      {
      }
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONGamesIndicesUpcomingGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GamesIndicesUpcomingGames of SportsGameSchedulesScoresQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field GamesIndicesUpcomingGames of SportsGameSchedulesScoresQueryDataJSON has too few elements.");
    std::vector< OInteger > vector_GamesIndicesUpcomingGames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field GamesIndicesUpcomingGames of SportsGameSchedulesScoresQueryDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field GamesIndicesUpcomingGames of SportsGameSchedulesScoresQueryDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_GamesIndicesUpcomingGames1[num1] = extracted_integer;
      }
    assert(vector_GamesIndicesUpcomingGames1.size() >= 1);
    initGamesIndicesUpcomingGames();
    for (size_t num16 = 0; num16 < vector_GamesIndicesUpcomingGames1.size(); ++num16)
        appendGamesIndicesUpcomingGames(vector_GamesIndicesUpcomingGames1[num16]);
    for (size_t num1 = 0; num1 < vector_GamesIndicesUpcomingGames1.size(); ++num1)
      {
      }
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONInferredUserFavoriteTeamIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field InferredUserFavoriteTeamIndex of SportsGameSchedulesScoresQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field InferredUserFavoriteTeamIndex of SportsGameSchedulesScoresQueryDataJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setInferredUserFavoriteTeamIndex(extracted_integer);
  }

void SportsGameSchedulesScoresQueryDataJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Error of SportsGameSchedulesScoresQueryDataJSON is not a string.");
    TypeError the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "agueNotSupported") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Error_LeagueNotSupported;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "cationUnavailable") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Error_LocationUnavailable;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "oGamesFound") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Error_NoGamesFound;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setError(the_open_enum);
  }

SportsGameSchedulesScoresQueryDataJSON::SportsGameSchedulesScoresQueryDataJSON(void) :
        flagHasType(false),
        flagHasTeams(false),
        flagHasLeagues(false),
        flagHasDateTimeRange(false),
        flagHasLocation(false),
        flagHasHomeAway(false),
        flagHasSeasonType(false),
        flagHasSpecialGameType(false),
        flagHasSeriesGameNumber(false),
        flagHasQueryGameOutcome(false),
        flagHasQueryMentionedGame(false),
        flagHasResultType(false),
        flagHasSeriesStatus(false),
        flagHasDateTimeRangeLocationDropped(false),
        flagHasGamesIndicesBestMatches(false),
        flagHasGamesIndicesSecondaryMatches(false),
        flagHasGamesIndicesRecentGames(false),
        flagHasGamesIndicesUpcomingGames(false),
        flagHasInferredUserFavoriteTeamIndex(false),
        flagHasError(false)
  {
    extraIndex = create_string_index();
  }

SportsGameSchedulesScoresQueryDataJSON::~SportsGameSchedulesScoresQueryDataJSON(void)
  {
    if (flagHasTeams)
      {
        for (size_t num13 = 0; num13 < storeTeams.size(); ++num13)
          {
            storeTeams[num13]->remove_reference();
          }
      }
    if (flagHasLeagues)
      {
        for (size_t num14 = 0; num14 < storeLeagues.size(); ++num14)
          {
            storeLeagues[num14]->remove_reference();
          }
      }
    if (flagHasDateTimeRange)
      {
        storeDateTimeRange->remove_reference();
      }
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
      }
    if (flagHasSeasonType)
      {
        storeSeasonType->remove_reference();
      }
    if (flagHasSpecialGameType)
      {
        for (size_t num15 = 0; num15 < storeSpecialGameType.size(); ++num15)
          {
            storeSpecialGameType[num15]->remove_reference();
          }
      }
    if (flagHasSeriesStatus)
      {
        for (size_t num16 = 0; num16 < storeSeriesStatus.size(); ++num16)
          {
            storeSeriesStatus[num16]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeType SportsGameSchedulesScoresQueryDataJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsGameSchedulesScoresQueryDataJSON::TypeType SportsGameSchedulesScoresQueryDataJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::getTypeAsChars(void) const
  {
    TypeType result = getType();
    if (result.in_known_list)
        return stringFromType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameSchedulesScoresQueryDataJSON::getTypeAsString(void) const
  {
    return getTypeAsChars();
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsGameSchedulesScoresQueryDataJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamNewJSON * SportsGameSchedulesScoresQueryDataJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamNewJSON * SportsGameSchedulesScoresQueryDataJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamNewJSON * > SportsGameSchedulesScoresQueryDataJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamNewJSON * > SportsGameSchedulesScoresQueryDataJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasLeagues(void) const
  {
    return flagHasLeagues;
  }

size_t SportsGameSchedulesScoresQueryDataJSON::countOfLeagues(void) const
  {
    assert(flagHasLeagues);
    return storeLeagues.size();
  }

SportsLeagueCodeJSON * SportsGameSchedulesScoresQueryDataJSON::elementOfLeagues(size_t element_num)
  {
    assert(flagHasLeagues);
    return storeLeagues[element_num];
  }

const SportsLeagueCodeJSON * SportsGameSchedulesScoresQueryDataJSON::elementOfLeagues(size_t element_num) const
  {
    assert(flagHasLeagues);
    return storeLeagues[element_num];
  }

std::vector< SportsLeagueCodeJSON * > SportsGameSchedulesScoresQueryDataJSON::getLeagues(void)
  {
    assert(flagHasLeagues);
    return storeLeagues;
  }

const std::vector< SportsLeagueCodeJSON * > SportsGameSchedulesScoresQueryDataJSON::getLeagues(void) const
  {
    assert(flagHasLeagues);
    return storeLeagues;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasDateTimeRange(void) const
  {
    return flagHasDateTimeRange;
  }

DateTimeRangeSpecJSON * SportsGameSchedulesScoresQueryDataJSON::getDateTimeRange(void)
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

const DateTimeRangeSpecJSON * SportsGameSchedulesScoresQueryDataJSON::getDateTimeRange(void) const
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * SportsGameSchedulesScoresQueryDataJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * SportsGameSchedulesScoresQueryDataJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasHomeAway(void) const
  {
    return flagHasHomeAway;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway SportsGameSchedulesScoresQueryDataJSON::getHomeAway(void)
  {
    assert(flagHasHomeAway);
    return storeHomeAway;
  }

const SportsGameSchedulesScoresQueryDataJSON::TypeHomeAway SportsGameSchedulesScoresQueryDataJSON::getHomeAway(void) const
  {
    assert(flagHasHomeAway);
    return storeHomeAway;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::getHomeAwayAsChars(void) const
  {
    TypeHomeAway result = getHomeAway();
    if (result.in_known_list)
        return stringFromHomeAway(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameSchedulesScoresQueryDataJSON::getHomeAwayAsString(void) const
  {
    return getHomeAwayAsChars();
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasSeasonType(void) const
  {
    return flagHasSeasonType;
  }

SportsSeasonTypeJSON * SportsGameSchedulesScoresQueryDataJSON::getSeasonType(void)
  {
    assert(flagHasSeasonType);
    return storeSeasonType;
  }

const SportsSeasonTypeJSON * SportsGameSchedulesScoresQueryDataJSON::getSeasonType(void) const
  {
    assert(flagHasSeasonType);
    return storeSeasonType;
  }

SportsSeasonTypeJSON::TypeValue SportsGameSchedulesScoresQueryDataJSON::getSeasonTypeValue(void)
  {
    return getSeasonType()->getValue();
  }

const SportsSeasonTypeJSON::TypeValue SportsGameSchedulesScoresQueryDataJSON::getSeasonTypeValue(void) const
  {
    return getSeasonType()->getValue();
  }

const char *SportsGameSchedulesScoresQueryDataJSON::getSeasonTypeAsChars(void) const
  {
    return getSeasonType()->getValueAsChars();
  }

std::string SportsGameSchedulesScoresQueryDataJSON::getSeasonTypeAsString(void) const
  {
    return getSeasonType()->getValueAsString();
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasSpecialGameType(void) const
  {
    return flagHasSpecialGameType;
  }

size_t SportsGameSchedulesScoresQueryDataJSON::countOfSpecialGameType(void) const
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType.size();
  }

SportsPlayoffSpecialGameJSON * SportsGameSchedulesScoresQueryDataJSON::elementOfSpecialGameType(size_t element_num)
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType[element_num];
  }

const SportsPlayoffSpecialGameJSON * SportsGameSchedulesScoresQueryDataJSON::elementOfSpecialGameType(size_t element_num) const
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType[element_num];
  }

std::vector< SportsPlayoffSpecialGameJSON * > SportsGameSchedulesScoresQueryDataJSON::getSpecialGameType(void)
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

const std::vector< SportsPlayoffSpecialGameJSON * > SportsGameSchedulesScoresQueryDataJSON::getSpecialGameType(void) const
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasSeriesGameNumber(void) const
  {
    return flagHasSeriesGameNumber;
  }

OInteger SportsGameSchedulesScoresQueryDataJSON::getSeriesGameNumber(void)
  {
    assert(flagHasSeriesGameNumber);
    return storeSeriesGameNumber;
  }

const OInteger SportsGameSchedulesScoresQueryDataJSON::getSeriesGameNumber(void) const
  {
    assert(flagHasSeriesGameNumber);
    return storeSeriesGameNumber;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasQueryGameOutcome(void) const
  {
    return flagHasQueryGameOutcome;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome SportsGameSchedulesScoresQueryDataJSON::getQueryGameOutcome(void)
  {
    assert(flagHasQueryGameOutcome);
    return storeQueryGameOutcome;
  }

const SportsGameSchedulesScoresQueryDataJSON::TypeQueryGameOutcome SportsGameSchedulesScoresQueryDataJSON::getQueryGameOutcome(void) const
  {
    assert(flagHasQueryGameOutcome);
    return storeQueryGameOutcome;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::getQueryGameOutcomeAsChars(void) const
  {
    TypeQueryGameOutcome result = getQueryGameOutcome();
    if (result.in_known_list)
        return stringFromQueryGameOutcome(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameSchedulesScoresQueryDataJSON::getQueryGameOutcomeAsString(void) const
  {
    return getQueryGameOutcomeAsChars();
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasQueryMentionedGame(void) const
  {
    return flagHasQueryMentionedGame;
  }

bool SportsGameSchedulesScoresQueryDataJSON::getQueryMentionedGame(void)
  {
    assert(flagHasQueryMentionedGame);
    return storeQueryMentionedGame;
  }

const bool SportsGameSchedulesScoresQueryDataJSON::getQueryMentionedGame(void) const
  {
    assert(flagHasQueryMentionedGame);
    return storeQueryMentionedGame;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasResultType(void) const
  {
    return flagHasResultType;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeResultType SportsGameSchedulesScoresQueryDataJSON::getResultType(void)
  {
    assert(flagHasResultType);
    return storeResultType;
  }

const SportsGameSchedulesScoresQueryDataJSON::TypeResultType SportsGameSchedulesScoresQueryDataJSON::getResultType(void) const
  {
    assert(flagHasResultType);
    return storeResultType;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::getResultTypeAsChars(void) const
  {
    TypeResultType result = getResultType();
    if (result.in_known_list)
        return stringFromResultType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameSchedulesScoresQueryDataJSON::getResultTypeAsString(void) const
  {
    return getResultTypeAsChars();
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasSeriesStatus(void) const
  {
    return flagHasSeriesStatus;
  }

size_t SportsGameSchedulesScoresQueryDataJSON::countOfSeriesStatus(void) const
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus.size();
  }

SportsSeriesStatusNewJSON * SportsGameSchedulesScoresQueryDataJSON::elementOfSeriesStatus(size_t element_num)
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus[element_num];
  }

const SportsSeriesStatusNewJSON * SportsGameSchedulesScoresQueryDataJSON::elementOfSeriesStatus(size_t element_num) const
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus[element_num];
  }

std::vector< SportsSeriesStatusNewJSON * > SportsGameSchedulesScoresQueryDataJSON::getSeriesStatus(void)
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus;
  }

const std::vector< SportsSeriesStatusNewJSON * > SportsGameSchedulesScoresQueryDataJSON::getSeriesStatus(void) const
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasDateTimeRangeLocationDropped(void) const
  {
    return flagHasDateTimeRangeLocationDropped;
  }

bool SportsGameSchedulesScoresQueryDataJSON::getDateTimeRangeLocationDropped(void)
  {
    assert(flagHasDateTimeRangeLocationDropped);
    return storeDateTimeRangeLocationDropped;
  }

const bool SportsGameSchedulesScoresQueryDataJSON::getDateTimeRangeLocationDropped(void) const
  {
    assert(flagHasDateTimeRangeLocationDropped);
    return storeDateTimeRangeLocationDropped;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasGamesIndicesBestMatches(void) const
  {
    return flagHasGamesIndicesBestMatches;
  }

size_t SportsGameSchedulesScoresQueryDataJSON::countOfGamesIndicesBestMatches(void) const
  {
    assert(flagHasGamesIndicesBestMatches);
    return storeGamesIndicesBestMatches.size();
  }

OInteger SportsGameSchedulesScoresQueryDataJSON::elementOfGamesIndicesBestMatches(size_t element_num)
  {
    assert(flagHasGamesIndicesBestMatches);
    return storeGamesIndicesBestMatches[element_num];
  }

const OInteger SportsGameSchedulesScoresQueryDataJSON::elementOfGamesIndicesBestMatches(size_t element_num) const
  {
    assert(flagHasGamesIndicesBestMatches);
    return storeGamesIndicesBestMatches[element_num];
  }

std::vector< OInteger > SportsGameSchedulesScoresQueryDataJSON::getGamesIndicesBestMatches(void)
  {
    assert(flagHasGamesIndicesBestMatches);
    return storeGamesIndicesBestMatches;
  }

const std::vector< OInteger > SportsGameSchedulesScoresQueryDataJSON::getGamesIndicesBestMatches(void) const
  {
    assert(flagHasGamesIndicesBestMatches);
    return storeGamesIndicesBestMatches;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasGamesIndicesSecondaryMatches(void) const
  {
    return flagHasGamesIndicesSecondaryMatches;
  }

size_t SportsGameSchedulesScoresQueryDataJSON::countOfGamesIndicesSecondaryMatches(void) const
  {
    assert(flagHasGamesIndicesSecondaryMatches);
    return storeGamesIndicesSecondaryMatches.size();
  }

OInteger SportsGameSchedulesScoresQueryDataJSON::elementOfGamesIndicesSecondaryMatches(size_t element_num)
  {
    assert(flagHasGamesIndicesSecondaryMatches);
    return storeGamesIndicesSecondaryMatches[element_num];
  }

const OInteger SportsGameSchedulesScoresQueryDataJSON::elementOfGamesIndicesSecondaryMatches(size_t element_num) const
  {
    assert(flagHasGamesIndicesSecondaryMatches);
    return storeGamesIndicesSecondaryMatches[element_num];
  }

std::vector< OInteger > SportsGameSchedulesScoresQueryDataJSON::getGamesIndicesSecondaryMatches(void)
  {
    assert(flagHasGamesIndicesSecondaryMatches);
    return storeGamesIndicesSecondaryMatches;
  }

const std::vector< OInteger > SportsGameSchedulesScoresQueryDataJSON::getGamesIndicesSecondaryMatches(void) const
  {
    assert(flagHasGamesIndicesSecondaryMatches);
    return storeGamesIndicesSecondaryMatches;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasGamesIndicesRecentGames(void) const
  {
    return flagHasGamesIndicesRecentGames;
  }

size_t SportsGameSchedulesScoresQueryDataJSON::countOfGamesIndicesRecentGames(void) const
  {
    assert(flagHasGamesIndicesRecentGames);
    return storeGamesIndicesRecentGames.size();
  }

OInteger SportsGameSchedulesScoresQueryDataJSON::elementOfGamesIndicesRecentGames(size_t element_num)
  {
    assert(flagHasGamesIndicesRecentGames);
    return storeGamesIndicesRecentGames[element_num];
  }

const OInteger SportsGameSchedulesScoresQueryDataJSON::elementOfGamesIndicesRecentGames(size_t element_num) const
  {
    assert(flagHasGamesIndicesRecentGames);
    return storeGamesIndicesRecentGames[element_num];
  }

std::vector< OInteger > SportsGameSchedulesScoresQueryDataJSON::getGamesIndicesRecentGames(void)
  {
    assert(flagHasGamesIndicesRecentGames);
    return storeGamesIndicesRecentGames;
  }

const std::vector< OInteger > SportsGameSchedulesScoresQueryDataJSON::getGamesIndicesRecentGames(void) const
  {
    assert(flagHasGamesIndicesRecentGames);
    return storeGamesIndicesRecentGames;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasGamesIndicesUpcomingGames(void) const
  {
    return flagHasGamesIndicesUpcomingGames;
  }

size_t SportsGameSchedulesScoresQueryDataJSON::countOfGamesIndicesUpcomingGames(void) const
  {
    assert(flagHasGamesIndicesUpcomingGames);
    return storeGamesIndicesUpcomingGames.size();
  }

OInteger SportsGameSchedulesScoresQueryDataJSON::elementOfGamesIndicesUpcomingGames(size_t element_num)
  {
    assert(flagHasGamesIndicesUpcomingGames);
    return storeGamesIndicesUpcomingGames[element_num];
  }

const OInteger SportsGameSchedulesScoresQueryDataJSON::elementOfGamesIndicesUpcomingGames(size_t element_num) const
  {
    assert(flagHasGamesIndicesUpcomingGames);
    return storeGamesIndicesUpcomingGames[element_num];
  }

std::vector< OInteger > SportsGameSchedulesScoresQueryDataJSON::getGamesIndicesUpcomingGames(void)
  {
    assert(flagHasGamesIndicesUpcomingGames);
    return storeGamesIndicesUpcomingGames;
  }

const std::vector< OInteger > SportsGameSchedulesScoresQueryDataJSON::getGamesIndicesUpcomingGames(void) const
  {
    assert(flagHasGamesIndicesUpcomingGames);
    return storeGamesIndicesUpcomingGames;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasInferredUserFavoriteTeamIndex(void) const
  {
    return flagHasInferredUserFavoriteTeamIndex;
  }

uint8_t SportsGameSchedulesScoresQueryDataJSON::getInferredUserFavoriteTeamIndex(void)
  {
    assert(flagHasInferredUserFavoriteTeamIndex);
    return storeInferredUserFavoriteTeamIndex;
  }

const uint8_t SportsGameSchedulesScoresQueryDataJSON::getInferredUserFavoriteTeamIndex(void) const
  {
    assert(flagHasInferredUserFavoriteTeamIndex);
    return storeInferredUserFavoriteTeamIndex;
  }

bool SportsGameSchedulesScoresQueryDataJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsGameSchedulesScoresQueryDataJSON::TypeError SportsGameSchedulesScoresQueryDataJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsGameSchedulesScoresQueryDataJSON::TypeError SportsGameSchedulesScoresQueryDataJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

const char *SportsGameSchedulesScoresQueryDataJSON::getErrorAsChars(void) const
  {
    TypeError result = getError();
    if (result.in_known_list)
        return stringFromError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameSchedulesScoresQueryDataJSON::getErrorAsString(void) const
  {
    return getErrorAsChars();
  }

char SportsGameSchedulesScoresQueryDataJSON::Generator::lowerBoundSeriesGameNumber[] = "1";
char SportsGameSchedulesScoresQueryDataJSON::Generator::lowerBoundGamesIndicesBestMatches[] = "0";
char SportsGameSchedulesScoresQueryDataJSON::Generator::lowerBoundGamesIndicesSecondaryMatches[] = "0";
char SportsGameSchedulesScoresQueryDataJSON::Generator::lowerBoundGamesIndicesRecentGames[] = "0";
char SportsGameSchedulesScoresQueryDataJSON::Generator::lowerBoundGamesIndicesUpcomingGames[] = "0";
SportsGameSchedulesScoresQueryDataJSON *SportsGameSchedulesScoresQueryDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGameSchedulesScoresQueryDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresQueryDataJSON>, SportsGameSchedulesScoresQueryDataJSON *, bool> generator("Type SportsGameSchedulesScoresQueryData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
