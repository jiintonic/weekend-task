/* file "SportsGameSchedulesScoresAPIGameJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGameSchedulesScoresAPIGameJSON.h"

#include "SportsGameSchedulesScoresAPIGameJSON.h"


SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::TypeGameStatus(void)
  {
  }

SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::TypeGameStatus(const TypeGameStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::TypeGameStatus(TypeGameStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::operator==(const TypeGameStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::operator!=(const TypeGameStatus &other) const
  {
    return !(operator==(other));
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::operator<(const TypeGameStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::operator>(const TypeGameStatus &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::operator>=(const TypeGameStatus &other) const
  {
    return !(operator<(other));
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus::operator<=(const TypeGameStatus &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameSchedulesScoresAPIGameJSON::TypeGameStatusKnownValues SportsGameSchedulesScoresAPIGameJSON::stringToGameStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "nceled") == 0)
                        return GameStatus_Canceled;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "mplete") == 0)
                        return GameStatus_Complete;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(chars[1]), "elayed", 6) == 0)
              {
                switch ((unsigned char)(chars[7]))
                  {
                    case 0:
                        return GameStatus_Delayed;
                    case 'F':
                        if (strcmp(&(chars[8]), "acility") == 0)
                            return GameStatus_DelayedFacility;
                        break;
                    case 'W':
                        if (strcmp(&(chars[8]), "eather") == 0)
                            return GameStatus_DelayedWeather;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nProgress") == 0)
                return GameStatus_InProgress;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "ther") == 0)
                return GameStatus_Other;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "ostponed") == 0)
                return GameStatus_Postponed;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strncmp(&(chars[2]), "heduled", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 0:
                                return GameStatus_Scheduled;
                            case 'F':
                                if (strcmp(&(chars[10]), "lex") == 0)
                                    return GameStatus_ScheduledFlex;
                                break;
                            case 'T':
                                if (strcmp(&(chars[10]), "imeTBD") == 0)
                                    return GameStatus_ScheduledTimeTBD;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "spended") == 0)
                        return GameStatus_Suspended;
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strncmp(&(chars[1]), "n", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'k':
                        if (strcmp(&(chars[3]), "nown") == 0)
                            return GameStatus_Unknown;
                        break;
                    case 'n':
                        if (strcmp(&(chars[3]), "ecessary") == 0)
                            return GameStatus_Unnecessary;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return GameStatus__none;
  }

const char *SportsGameSchedulesScoresAPIGameJSON::stringFromGameStatus(TypeGameStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case GameStatus_Unknown:
            return "Unknown";
        case GameStatus_Scheduled:
            return "Scheduled";
        case GameStatus_InProgress:
            return "InProgress";
        case GameStatus_Complete:
            return "Complete";
        case GameStatus_Other:
            return "Other";
        case GameStatus_Delayed:
            return "Delayed";
        case GameStatus_DelayedWeather:
            return "DelayedWeather";
        case GameStatus_DelayedFacility:
            return "DelayedFacility";
        case GameStatus_Postponed:
            return "Postponed";
        case GameStatus_Suspended:
            return "Suspended";
        case GameStatus_Canceled:
            return "Canceled";
        case GameStatus_Unnecessary:
            return "Unnecessary";
        case GameStatus_ScheduledFlex:
            return "ScheduledFlex";
        case GameStatus_ScheduledTimeTBD:
            return "ScheduledTimeTBD";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::TypeSportsResultType(void)
  {
  }

SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::TypeSportsResultType(const TypeSportsResultType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::TypeSportsResultType(TypeSportsResultTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::operator==(const TypeSportsResultType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::operator!=(const TypeSportsResultType &other) const
  {
    return !(operator==(other));
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::operator<(const TypeSportsResultType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::operator>(const TypeSportsResultType &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::operator>=(const TypeSportsResultType &other) const
  {
    return !(operator<(other));
  }

bool SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType::operator<=(const TypeSportsResultType &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultTypeKnownValues SportsGameSchedulesScoresAPIGameJSON::stringToSportsResultType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strcmp(&(chars[1]), "rimary") == 0)
                return SportsResultType_Primary;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "econdary") == 0)
                return SportsResultType_Secondary;
            break;
        default:
            break;
      }
    return SportsResultType__none;
  }

const char *SportsGameSchedulesScoresAPIGameJSON::stringFromSportsResultType(TypeSportsResultTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case SportsResultType_Primary:
            return "Primary";
        case SportsResultType_Secondary:
            return "Secondary";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameSchedulesScoresAPIGameJSON::SportsGameSchedulesScoresAPIGameJSON(const SportsGameSchedulesScoresAPIGameJSON &)
  {
    assert(false);
  }

SportsGameSchedulesScoresAPIGameJSON &SportsGameSchedulesScoresAPIGameJSON::operator=(const SportsGameSchedulesScoresAPIGameJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of SportsGameSchedulesScoresAPIGameJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Teams of SportsGameSchedulesScoresAPIGameJSON has too few elements.");
    std::vector< SportsTeamJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamJSON *convert_classy = SportsTeamJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 2);
    initTeams();
    for (size_t num2 = 0; num2 < vector_Teams1.size(); ++num2)
        appendTeams(vector_Teams1[num2]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONGameStartTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGameStartTime(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONGameStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameStatus of SportsGameSchedulesScoresAPIGameJSON is not a string.");
    TypeGameStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "nceled") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = GameStatus_Canceled;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "mplete") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = GameStatus_Complete;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "elayed", 6) == 0)
              {
                switch ((unsigned char)(json_string->getData()[7]))
                  {
                    case 0:
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = GameStatus_Delayed;
                            goto open_enum_is_done;
                          }
                    case 'F':
                        if (strcmp(&(json_string->getData()[8]), "acility") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = GameStatus_DelayedFacility;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[8]), "eather") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = GameStatus_DelayedWeather;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nProgress") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = GameStatus_InProgress;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "ther") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = GameStatus_Other;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "ostponed") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = GameStatus_Postponed;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strncmp(&(json_string->getData()[2]), "heduled", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 0:
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = GameStatus_Scheduled;
                                    goto open_enum_is_done;
                                  }
                            case 'F':
                                if (strcmp(&(json_string->getData()[10]), "lex") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = GameStatus_ScheduledFlex;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[10]), "imeTBD") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = GameStatus_ScheduledTimeTBD;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "spended") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = GameStatus_Suspended;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strncmp(&(json_string->getData()[1]), "n", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'k':
                        if (strcmp(&(json_string->getData()[3]), "nown") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = GameStatus_Unknown;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'n':
                        if (strcmp(&(json_string->getData()[3]), "ecessary") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = GameStatus_Unnecessary;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setGameStatus(the_open_enum);
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONQuarterInningPeriod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field QuarterInningPeriod of SportsGameSchedulesScoresAPIGameJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field QuarterInningPeriod of SportsGameSchedulesScoresAPIGameJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setQuarterInningPeriod(extracted_integer);
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONQuarterInningPeriodClock(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QuarterInningPeriodClock of SportsGameSchedulesScoresAPIGameJSON is not a string.");
    setQuarterInningPeriodClock(std::string(json_string->getData()));
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONVenue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsVenueJSON *convert_classy = SportsVenueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVenue(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONBroadcastNetwork(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BroadcastNetwork of SportsGameSchedulesScoresAPIGameJSON is not a string.");
    setBroadcastNetwork(std::string(json_string->getData()));
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONSportsResultType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SportsResultType of SportsGameSchedulesScoresAPIGameJSON is not a string.");
    TypeSportsResultType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "rimary") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SportsResultType_Primary;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "econdary") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SportsResultType_Secondary;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setSportsResultType(the_open_enum);
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONPlayoffs(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Playoffs of SportsGameSchedulesScoresAPIGameJSON is not true for false.");
          }
      }
    setPlayoffs(the_bool);
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONPlayoffGame(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PlayoffGame of SportsGameSchedulesScoresAPIGameJSON is not a string.");
    setPlayoffGame(std::string(json_string->getData()));
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONPlayoffType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlayoffType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONTournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTournamentJSON *convert_classy = SportsTournamentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTournament(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONPreSeason(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PreSeason of SportsGameSchedulesScoresAPIGameJSON is not true for false.");
          }
      }
    setPreSeason(the_bool);
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONGameID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameID of SportsGameSchedulesScoresAPIGameJSON is not a string.");
    setGameID(std::string(json_string->getData()));
  }

void SportsGameSchedulesScoresAPIGameJSON::fromJSONSportImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSportImageJSON *convert_classy = SportsSportImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportImage(convert_classy);
    convert_classy->remove_reference();
  }

SportsGameSchedulesScoresAPIGameJSON::SportsGameSchedulesScoresAPIGameJSON(void) :
        flagHasTeams(false),
        flagHasGameStartTime(false),
        flagHasGameStatus(false),
        flagHasQuarterInningPeriod(false),
        flagHasQuarterInningPeriodClock(false),
        flagHasVenue(false),
        flagHasBroadcastNetwork(false),
        flagHasSportsResultType(false),
        flagHasPlayoffs(false),
        flagHasPlayoffGame(false),
        flagHasPlayoffType(false),
        flagHasTournament(false),
        flagHasPreSeason(false),
        flagHasGameID(false),
        flagHasSportImage(false)
  {
    extraIndex = create_string_index();
  }

SportsGameSchedulesScoresAPIGameJSON::~SportsGameSchedulesScoresAPIGameJSON(void)
  {
    if (flagHasTeams)
      {
        for (size_t num4 = 0; num4 < storeTeams.size(); ++num4)
          {
            storeTeams[num4]->remove_reference();
          }
      }
    if (flagHasGameStartTime)
      {
        storeGameStartTime->remove_reference();
      }
    if (flagHasVenue)
      {
        storeVenue->remove_reference();
      }
    if (flagHasPlayoffType)
      {
        storePlayoffType->remove_reference();
      }
    if (flagHasTournament)
      {
        storeTournament->remove_reference();
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

bool SportsGameSchedulesScoresAPIGameJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsGameSchedulesScoresAPIGameJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamJSON * SportsGameSchedulesScoresAPIGameJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamJSON * SportsGameSchedulesScoresAPIGameJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamJSON * > SportsGameSchedulesScoresAPIGameJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamJSON * > SportsGameSchedulesScoresAPIGameJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasGameStartTime(void) const
  {
    return flagHasGameStartTime;
  }

DateAndOrTimeJSON * SportsGameSchedulesScoresAPIGameJSON::getGameStartTime(void)
  {
    assert(flagHasGameStartTime);
    return storeGameStartTime;
  }

const DateAndOrTimeJSON * SportsGameSchedulesScoresAPIGameJSON::getGameStartTime(void) const
  {
    assert(flagHasGameStartTime);
    return storeGameStartTime;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasGameStatus(void) const
  {
    return flagHasGameStatus;
  }

SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus SportsGameSchedulesScoresAPIGameJSON::getGameStatus(void)
  {
    assert(flagHasGameStatus);
    return storeGameStatus;
  }

const SportsGameSchedulesScoresAPIGameJSON::TypeGameStatus SportsGameSchedulesScoresAPIGameJSON::getGameStatus(void) const
  {
    assert(flagHasGameStatus);
    return storeGameStatus;
  }

const char *SportsGameSchedulesScoresAPIGameJSON::getGameStatusAsChars(void) const
  {
    TypeGameStatus result = getGameStatus();
    if (result.in_known_list)
        return stringFromGameStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameSchedulesScoresAPIGameJSON::getGameStatusAsString(void) const
  {
    return getGameStatusAsChars();
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasQuarterInningPeriod(void) const
  {
    return flagHasQuarterInningPeriod;
  }

OInteger SportsGameSchedulesScoresAPIGameJSON::getQuarterInningPeriod(void)
  {
    assert(flagHasQuarterInningPeriod);
    return storeQuarterInningPeriod;
  }

const OInteger SportsGameSchedulesScoresAPIGameJSON::getQuarterInningPeriod(void) const
  {
    assert(flagHasQuarterInningPeriod);
    return storeQuarterInningPeriod;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasQuarterInningPeriodClock(void) const
  {
    return flagHasQuarterInningPeriodClock;
  }

std::string SportsGameSchedulesScoresAPIGameJSON::getQuarterInningPeriodClock(void)
  {
    assert(flagHasQuarterInningPeriodClock);
    return storeQuarterInningPeriodClock;
  }

const std::string SportsGameSchedulesScoresAPIGameJSON::getQuarterInningPeriodClock(void) const
  {
    assert(flagHasQuarterInningPeriodClock);
    return storeQuarterInningPeriodClock;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasVenue(void) const
  {
    return flagHasVenue;
  }

SportsVenueJSON * SportsGameSchedulesScoresAPIGameJSON::getVenue(void)
  {
    assert(flagHasVenue);
    return storeVenue;
  }

const SportsVenueJSON * SportsGameSchedulesScoresAPIGameJSON::getVenue(void) const
  {
    assert(flagHasVenue);
    return storeVenue;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasBroadcastNetwork(void) const
  {
    return flagHasBroadcastNetwork;
  }

std::string SportsGameSchedulesScoresAPIGameJSON::getBroadcastNetwork(void)
  {
    assert(flagHasBroadcastNetwork);
    return storeBroadcastNetwork;
  }

const std::string SportsGameSchedulesScoresAPIGameJSON::getBroadcastNetwork(void) const
  {
    assert(flagHasBroadcastNetwork);
    return storeBroadcastNetwork;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasSportsResultType(void) const
  {
    return flagHasSportsResultType;
  }

SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType SportsGameSchedulesScoresAPIGameJSON::getSportsResultType(void)
  {
    assert(flagHasSportsResultType);
    return storeSportsResultType;
  }

const SportsGameSchedulesScoresAPIGameJSON::TypeSportsResultType SportsGameSchedulesScoresAPIGameJSON::getSportsResultType(void) const
  {
    assert(flagHasSportsResultType);
    return storeSportsResultType;
  }

const char *SportsGameSchedulesScoresAPIGameJSON::getSportsResultTypeAsChars(void) const
  {
    TypeSportsResultType result = getSportsResultType();
    if (result.in_known_list)
        return stringFromSportsResultType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameSchedulesScoresAPIGameJSON::getSportsResultTypeAsString(void) const
  {
    return getSportsResultTypeAsChars();
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasPlayoffs(void) const
  {
    return flagHasPlayoffs;
  }

bool SportsGameSchedulesScoresAPIGameJSON::getPlayoffs(void)
  {
    assert(flagHasPlayoffs);
    return storePlayoffs;
  }

const bool SportsGameSchedulesScoresAPIGameJSON::getPlayoffs(void) const
  {
    assert(flagHasPlayoffs);
    return storePlayoffs;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasPlayoffGame(void) const
  {
    return flagHasPlayoffGame;
  }

std::string SportsGameSchedulesScoresAPIGameJSON::getPlayoffGame(void)
  {
    assert(flagHasPlayoffGame);
    return storePlayoffGame;
  }

const std::string SportsGameSchedulesScoresAPIGameJSON::getPlayoffGame(void) const
  {
    assert(flagHasPlayoffGame);
    return storePlayoffGame;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasPlayoffType(void) const
  {
    return flagHasPlayoffType;
  }

SportsPlayoffSpecialGameJSON * SportsGameSchedulesScoresAPIGameJSON::getPlayoffType(void)
  {
    assert(flagHasPlayoffType);
    return storePlayoffType;
  }

const SportsPlayoffSpecialGameJSON * SportsGameSchedulesScoresAPIGameJSON::getPlayoffType(void) const
  {
    assert(flagHasPlayoffType);
    return storePlayoffType;
  }

SportsPlayoffSpecialGameJSON::TypeValue SportsGameSchedulesScoresAPIGameJSON::getPlayoffTypeValue(void)
  {
    return getPlayoffType()->getValue();
  }

const SportsPlayoffSpecialGameJSON::TypeValue SportsGameSchedulesScoresAPIGameJSON::getPlayoffTypeValue(void) const
  {
    return getPlayoffType()->getValue();
  }

const char *SportsGameSchedulesScoresAPIGameJSON::getPlayoffTypeAsChars(void) const
  {
    return getPlayoffType()->getValueAsChars();
  }

std::string SportsGameSchedulesScoresAPIGameJSON::getPlayoffTypeAsString(void) const
  {
    return getPlayoffType()->getValueAsString();
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasTournament(void) const
  {
    return flagHasTournament;
  }

SportsTournamentJSON * SportsGameSchedulesScoresAPIGameJSON::getTournament(void)
  {
    assert(flagHasTournament);
    return storeTournament;
  }

const SportsTournamentJSON * SportsGameSchedulesScoresAPIGameJSON::getTournament(void) const
  {
    assert(flagHasTournament);
    return storeTournament;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasPreSeason(void) const
  {
    return flagHasPreSeason;
  }

bool SportsGameSchedulesScoresAPIGameJSON::getPreSeason(void)
  {
    assert(flagHasPreSeason);
    return storePreSeason;
  }

const bool SportsGameSchedulesScoresAPIGameJSON::getPreSeason(void) const
  {
    assert(flagHasPreSeason);
    return storePreSeason;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasGameID(void) const
  {
    return flagHasGameID;
  }

std::string SportsGameSchedulesScoresAPIGameJSON::getGameID(void)
  {
    assert(flagHasGameID);
    return storeGameID;
  }

const std::string SportsGameSchedulesScoresAPIGameJSON::getGameID(void) const
  {
    assert(flagHasGameID);
    return storeGameID;
  }

bool SportsGameSchedulesScoresAPIGameJSON::hasSportImage(void) const
  {
    return flagHasSportImage;
  }

SportsSportImageJSON * SportsGameSchedulesScoresAPIGameJSON::getSportImage(void)
  {
    assert(flagHasSportImage);
    return storeSportImage;
  }

const SportsSportImageJSON * SportsGameSchedulesScoresAPIGameJSON::getSportImage(void) const
  {
    assert(flagHasSportImage);
    return storeSportImage;
  }

char SportsGameSchedulesScoresAPIGameJSON::Generator::lowerBoundQuarterInningPeriod[] = "0";
SportsGameSchedulesScoresAPIGameJSON *SportsGameSchedulesScoresAPIGameJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGameSchedulesScoresAPIGameJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresAPIGameJSON>, SportsGameSchedulesScoresAPIGameJSON *, bool> generator("Type SportsGameSchedulesScoresAPIGame", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
