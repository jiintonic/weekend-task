/* file "SportsInputDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsInputDataJSON.h"

#include "SportsInputDataJSON.h"


SportsInputDataJSON::TypeQueryType::TypeQueryType(void)
  {
  }

SportsInputDataJSON::TypeQueryType::TypeQueryType(const TypeQueryType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsInputDataJSON::TypeQueryType::TypeQueryType(TypeQueryTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsInputDataJSON::TypeQueryType::operator==(const TypeQueryType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsInputDataJSON::TypeQueryType::operator!=(const TypeQueryType &other) const
  {
    return !(operator==(other));
  }

bool SportsInputDataJSON::TypeQueryType::operator<(const TypeQueryType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsInputDataJSON::TypeQueryType::operator>(const TypeQueryType &other) const
  {
    return other.operator<(*this);
  }

bool SportsInputDataJSON::TypeQueryType::operator>=(const TypeQueryType &other) const
  {
    return !(operator<(other));
  }

bool SportsInputDataJSON::TypeQueryType::operator<=(const TypeQueryType &other) const
  {
    return !(other.operator<(*this));
  }

SportsInputDataJSON::TypeQueryTypeKnownValues SportsInputDataJSON::stringToQueryType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "roadcastNetwork") == 0)
                return QueryType_BroadcastNetwork;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ocation") == 0)
                return QueryType_Location;
            break;
        case 'S':
            if (strncmp(&(chars[1]), "c", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'h':
                        if (strcmp(&(chars[3]), "edule") == 0)
                            return QueryType_Schedule;
                        break;
                    case 'o':
                        if (strncmp(&(chars[3]), "re", 2) == 0)
                          {
                            switch ((unsigned char)(chars[5]))
                              {
                                case 0:
                                    return QueryType_Score;
                                case 'O':
                                    if (strcmp(&(chars[6]), "rSchedule") == 0)
                                        return QueryType_ScoreOrSchedule;
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
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return QueryType_Unknown;
            break;
        default:
            break;
      }
    return QueryType__none;
  }

const char *SportsInputDataJSON::stringFromQueryType(TypeQueryTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case QueryType_Unknown:
            return "Unknown";
        case QueryType_Score:
            return "Score";
        case QueryType_Schedule:
            return "Schedule";
        case QueryType_Location:
            return "Location";
        case QueryType_ScoreOrSchedule:
            return "ScoreOrSchedule";
        case QueryType_BroadcastNetwork:
            return "BroadcastNetwork";
        default:
            assert(false);
            return NULL;
      }
  }

SportsInputDataJSON::TypeSportsGroup::TypeSportsGroup(void)
  {
  }

SportsInputDataJSON::TypeSportsGroup::TypeSportsGroup(const TypeSportsGroup &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsInputDataJSON::TypeSportsGroup::TypeSportsGroup(TypeSportsGroupKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsInputDataJSON::TypeSportsGroup::operator==(const TypeSportsGroup &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsInputDataJSON::TypeSportsGroup::operator!=(const TypeSportsGroup &other) const
  {
    return !(operator==(other));
  }

bool SportsInputDataJSON::TypeSportsGroup::operator<(const TypeSportsGroup &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsInputDataJSON::TypeSportsGroup::operator>(const TypeSportsGroup &other) const
  {
    return other.operator<(*this);
  }

bool SportsInputDataJSON::TypeSportsGroup::operator>=(const TypeSportsGroup &other) const
  {
    return !(operator<(other));
  }

bool SportsInputDataJSON::TypeSportsGroup::operator<=(const TypeSportsGroup &other) const
  {
    return !(other.operator<(*this));
  }

SportsInputDataJSON::TypeSportsGroupKnownValues SportsInputDataJSON::stringToSportsGroup(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "asketball") == 0)
                return SportsGroup_Basketball;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "FL") == 0)
                return SportsGroup_CFL;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "ootball") == 0)
                return SportsGroup_Football;
            break;
        case 'M':
            if (strncmp(&(chars[1]), "L", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'B':
                        if (chars[3] == 0)
                            return SportsGroup_MLB;
                        break;
                    case 'S':
                        if (chars[3] == 0)
                            return SportsGroup_MLS;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'B':
                    if (strcmp(&(chars[2]), "A") == 0)
                        return SportsGroup_NBA;
                    break;
                case 'C':
                    if (strncmp(&(chars[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 0:
                                return SportsGroup_NCAA;
                            case 'F':
                                if (strcmp(&(chars[5]), "B") == 0)
                                    return SportsGroup_NCAAFB;
                                break;
                            case 'M':
                                if (strcmp(&(chars[5]), "B") == 0)
                                    return SportsGroup_NCAAMB;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(chars[2]), "L") == 0)
                        return SportsGroup_NFL;
                    break;
                case 'H':
                    if (strcmp(&(chars[2]), "L") == 0)
                        return SportsGroup_NHL;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strncmp(&(chars[1]), "occer", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 0:
                        return SportsGroup_Soccer;
                    case 'B':
                        if (strcmp(&(chars[7]), "undesliga") == 0)
                            return SportsGroup_SoccerBundesliga;
                        break;
                    case 'E':
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'r':
                                if (strcmp(&(chars[8]), "edivisie") == 0)
                                    return SportsGroup_SoccerEredivisie;
                                break;
                            case 'u':
                                if (strcmp(&(chars[8]), "ropaLeague") == 0)
                                    return SportsGroup_SoccerEuropaLeague;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'F':
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'i':
                                if (strcmp(&(chars[8]), "rstDivisionA") == 0)
                                    return SportsGroup_SoccerFirstDivisionA;
                                break;
                            case 'o':
                                if (strcmp(&(chars[8]), "otball") == 0)
                                    return SportsGroup_SoccerFootball;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'L':
                        if (strcmp(&(chars[7]), "igue1") == 0)
                            return SportsGroup_SoccerLigue1;
                        break;
                    case 'P':
                        if (strncmp(&(chars[7]), "r", 1) == 0)
                          {
                            switch ((unsigned char)(chars[8]))
                              {
                                case 'e':
                                    if (strncmp(&(chars[9]), "mierLeague", 10) == 0)
                                      {
                                        switch ((unsigned char)(chars[19]))
                                          {
                                            case 0:
                                                return SportsGroup_SoccerPremierLeague;
                                            case 'R':
                                                if (strcmp(&(chars[20]), "US") == 0)
                                                    return SportsGroup_SoccerPremierLeagueRUS;
                                                break;
                                            case 'U':
                                                if (strcmp(&(chars[20]), "KR") == 0)
                                                    return SportsGroup_SoccerPremierLeagueUKR;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'i':
                                    if (strncmp(&(chars[9]), "me", 2) == 0)
                                      {
                                        switch ((unsigned char)(chars[11]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[12]), "raLiga") == 0)
                                                    return SportsGroup_SoccerPrimeiraLiga;
                                                break;
                                            case 'r':
                                                if (strcmp(&(chars[12]), "aDivision") == 0)
                                                    return SportsGroup_SoccerPrimeraDivision;
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
                    case 'S':
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'e':
                                if (strcmp(&(chars[8]), "rieA") == 0)
                                    return SportsGroup_SoccerSerieA;
                                break;
                            case 'u':
                                if (strncmp(&(chars[8]), "perL", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[12]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[13]), "ague") == 0)
                                                return SportsGroup_SoccerSuperLeague;
                                            break;
                                        case 'i':
                                            if (strcmp(&(chars[13]), "g") == 0)
                                                return SportsGroup_SoccerSuperLig;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'U':
                        if (strncmp(&(chars[7]), "EFA", 3) == 0)
                          {
                            switch ((unsigned char)(chars[10]))
                              {
                                case 'C':
                                    if (strcmp(&(chars[11]), "hampionsLeague") == 0)
                                        return SportsGroup_SoccerUEFAChampionsLeague;
                                    break;
                                case 'S':
                                    if (strcmp(&(chars[11]), "uperCup") == 0)
                                        return SportsGroup_SoccerUEFASuperCup;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Y':
                        if (strcmp(&(chars[7]), "outhLeague") == 0)
                            return SportsGroup_SoccerYouthLeague;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return SportsGroup__none;
  }

const char *SportsInputDataJSON::stringFromSportsGroup(TypeSportsGroupKnownValues the_enum)
  {
    switch (the_enum)
      {
        case SportsGroup_MLB:
            return "MLB";
        case SportsGroup_NBA:
            return "NBA";
        case SportsGroup_NFL:
            return "NFL";
        case SportsGroup_NHL:
            return "NHL";
        case SportsGroup_NCAAMB:
            return "NCAAMB";
        case SportsGroup_NCAAFB:
            return "NCAAFB";
        case SportsGroup_Basketball:
            return "Basketball";
        case SportsGroup_Football:
            return "Football";
        case SportsGroup_NCAA:
            return "NCAA";
        case SportsGroup_Soccer:
            return "Soccer";
        case SportsGroup_SoccerFootball:
            return "SoccerFootball";
        case SportsGroup_MLS:
            return "MLS";
        case SportsGroup_CFL:
            return "CFL";
        case SportsGroup_SoccerUEFAChampionsLeague:
            return "SoccerUEFAChampionsLeague";
        case SportsGroup_SoccerPrimeraDivision:
            return "SoccerPrimeraDivision";
        case SportsGroup_SoccerPremierLeague:
            return "SoccerPremierLeague";
        case SportsGroup_SoccerSerieA:
            return "SoccerSerieA";
        case SportsGroup_SoccerLigue1:
            return "SoccerLigue1";
        case SportsGroup_SoccerBundesliga:
            return "SoccerBundesliga";
        case SportsGroup_SoccerEredivisie:
            return "SoccerEredivisie";
        case SportsGroup_SoccerFirstDivisionA:
            return "SoccerFirstDivisionA";
        case SportsGroup_SoccerSuperLig:
            return "SoccerSuperLig";
        case SportsGroup_SoccerSuperLeague:
            return "SoccerSuperLeague";
        case SportsGroup_SoccerPremierLeagueRUS:
            return "SoccerPremierLeagueRUS";
        case SportsGroup_SoccerPremierLeagueUKR:
            return "SoccerPremierLeagueUKR";
        case SportsGroup_SoccerPrimeiraLiga:
            return "SoccerPrimeiraLiga";
        case SportsGroup_SoccerUEFASuperCup:
            return "SoccerUEFASuperCup";
        case SportsGroup_SoccerEuropaLeague:
            return "SoccerEuropaLeague";
        case SportsGroup_SoccerYouthLeague:
            return "SoccerYouthLeague";
        default:
            assert(false);
            return NULL;
      }
  }

SportsInputDataJSON::TypeHA SportsInputDataJSON::stringToHA(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "way") == 0)
                return HA_Away;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ome") == 0)
                return HA_Home;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return HA_Unknown;
            break;
        default:
            break;
      }
    throw("The value for field `HA' is not one of the legal values.");
  }

const char *SportsInputDataJSON::stringFromHA(TypeHA the_enum)
  {
    switch (the_enum)
      {
        case HA_Unknown:
            return "Unknown";
        case HA_Home:
            return "Home";
        case HA_Away:
            return "Away";
        default:
            assert(false);
            return NULL;
      }
  }

SportsInputDataJSON::TypeWinOrLose SportsInputDataJSON::stringToWinOrLose(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "ose") == 0)
                return WinOrLose_Lose;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ie") == 0)
                return WinOrLose_Tie;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return WinOrLose_Unknown;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "in") == 0)
                return WinOrLose_Win;
            break;
        default:
            break;
      }
    throw("The value for field `WinOrLose' is not one of the legal values.");
  }

const char *SportsInputDataJSON::stringFromWinOrLose(TypeWinOrLose the_enum)
  {
    switch (the_enum)
      {
        case WinOrLose_Win:
            return "Win";
        case WinOrLose_Lose:
            return "Lose";
        case WinOrLose_Tie:
            return "Tie";
        case WinOrLose_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

SportsInputDataJSON::SportsInputDataJSON(const SportsInputDataJSON &)
  {
    assert(false);
  }

SportsInputDataJSON &SportsInputDataJSON::operator=(const SportsInputDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsInputDataJSON::fromJSONQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryType of SportsInputDataJSON is not a string.");
    TypeQueryType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "roadcastNetwork") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryType_BroadcastNetwork;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ocation") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryType_Location;
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
                                the_open_enum.list_value = QueryType_Schedule;
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
                                        the_open_enum.list_value = QueryType_Score;
                                        goto open_enum_is_done;
                                      }
                                case 'O':
                                    if (strcmp(&(json_string->getData()[6]), "rSchedule") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = QueryType_ScoreOrSchedule;
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
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryType_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setQueryType(the_open_enum);
  }

void SportsInputDataJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of SportsInputDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Teams of SportsInputDataJSON has too few elements.");
    std::vector< SportsTeamJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamJSON *convert_classy = SportsTeamJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 1);
    initTeams();
    for (size_t num4 = 0; num4 < vector_Teams1.size(); ++num4)
        appendTeams(vector_Teams1[num4]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsInputDataJSON::fromJSONSportsGroup(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SportsGroup of SportsInputDataJSON is not a string.");
    TypeSportsGroup the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "asketball") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SportsGroup_Basketball;
                    goto open_enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "FL") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SportsGroup_CFL;
                    goto open_enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "ootball") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SportsGroup_Football;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "L", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'B':
                        if (json_string->getData()[3] == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = SportsGroup_MLB;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'S':
                        if (json_string->getData()[3] == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = SportsGroup_MLS;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'B':
                    if (strcmp(&(json_string->getData()[2]), "A") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SportsGroup_NBA;
                            goto open_enum_is_done;
                          }
                    break;
                case 'C':
                    if (strncmp(&(json_string->getData()[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 0:
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = SportsGroup_NCAA;
                                    goto open_enum_is_done;
                                  }
                            case 'F':
                                if (strcmp(&(json_string->getData()[5]), "B") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = SportsGroup_NCAAFB;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[5]), "B") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = SportsGroup_NCAAMB;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(json_string->getData()[2]), "L") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SportsGroup_NFL;
                            goto open_enum_is_done;
                          }
                    break;
                case 'H':
                    if (strcmp(&(json_string->getData()[2]), "L") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SportsGroup_NHL;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "occer", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 0:
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SportsGroup_Soccer;
                            goto open_enum_is_done;
                          }
                    case 'B':
                        if (strcmp(&(json_string->getData()[7]), "undesliga") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = SportsGroup_SoccerBundesliga;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'E':
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'r':
                                if (strcmp(&(json_string->getData()[8]), "edivisie") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = SportsGroup_SoccerEredivisie;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'u':
                                if (strcmp(&(json_string->getData()[8]), "ropaLeague") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = SportsGroup_SoccerEuropaLeague;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'F':
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'i':
                                if (strcmp(&(json_string->getData()[8]), "rstDivisionA") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = SportsGroup_SoccerFirstDivisionA;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[8]), "otball") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = SportsGroup_SoccerFootball;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[7]), "igue1") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = SportsGroup_SoccerLigue1;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strncmp(&(json_string->getData()[7]), "r", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[8]))
                              {
                                case 'e':
                                    if (strncmp(&(json_string->getData()[9]), "mierLeague", 10) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[19]))
                                          {
                                            case 0:
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = SportsGroup_SoccerPremierLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            case 'R':
                                                if (strcmp(&(json_string->getData()[20]), "US") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = SportsGroup_SoccerPremierLeagueRUS;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'U':
                                                if (strcmp(&(json_string->getData()[20]), "KR") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = SportsGroup_SoccerPremierLeagueUKR;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'i':
                                    if (strncmp(&(json_string->getData()[9]), "me", 2) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[11]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[12]), "raLiga") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = SportsGroup_SoccerPrimeiraLiga;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'r':
                                                if (strcmp(&(json_string->getData()[12]), "aDivision") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = SportsGroup_SoccerPrimeraDivision;
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
                    case 'S':
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[8]), "rieA") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = SportsGroup_SoccerSerieA;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'u':
                                if (strncmp(&(json_string->getData()[8]), "perL", 4) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[12]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[13]), "ague") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = SportsGroup_SoccerSuperLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            if (strcmp(&(json_string->getData()[13]), "g") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = SportsGroup_SoccerSuperLig;
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
                        break;
                    case 'U':
                        if (strncmp(&(json_string->getData()[7]), "EFA", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[10]))
                              {
                                case 'C':
                                    if (strcmp(&(json_string->getData()[11]), "hampionsLeague") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = SportsGroup_SoccerUEFAChampionsLeague;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    if (strcmp(&(json_string->getData()[11]), "uperCup") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = SportsGroup_SoccerUEFASuperCup;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Y':
                        if (strcmp(&(json_string->getData()[7]), "outhLeague") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = SportsGroup_SoccerYouthLeague;
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
    setSportsGroup(the_open_enum);
  }

void SportsInputDataJSON::fromJSONStartDateAndOrTimeSpecInput(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndOrTimeSpecInput(convert_classy);
    convert_classy->remove_reference();
  }

void SportsInputDataJSON::fromJSONEndDateAndOrTimeSpecInput(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndOrTimeSpecInput(convert_classy);
    convert_classy->remove_reference();
  }

void SportsInputDataJSON::fromJSONSearchLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSearchLocation(convert_classy);
    convert_classy->remove_reference();
  }

void SportsInputDataJSON::fromJSONHA(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HA of SportsInputDataJSON is not a string.");
    TypeHA the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "way") == 0)
                  {
                    the_enum = HA_Away;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "ome") == 0)
                  {
                    the_enum = HA_Home;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = HA_Unknown;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field HA of SportsInputDataJSON is not one of the legal strings.");
  enum_is_done:;
    setHA(the_enum);
  }

void SportsInputDataJSON::fromJSONIsPlayoffsSpecialGame(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsPlayoffsSpecialGame of SportsInputDataJSON is not true for false.");
          }
      }
    setIsPlayoffsSpecialGame(the_bool);
  }

void SportsInputDataJSON::fromJSONPlayoffSpecialGame(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlayoffSpecialGame of SportsInputDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PlayoffSpecialGame of SportsInputDataJSON has too few elements.");
    std::vector< SportsPlayoffSpecialGameContainerJSON * > vector_PlayoffSpecialGame1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayoffSpecialGameContainerJSON *convert_classy = SportsPlayoffSpecialGameContainerJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PlayoffSpecialGame1[num1] = convert_classy;
      }
    assert(vector_PlayoffSpecialGame1.size() >= 1);
    initPlayoffSpecialGame();
    for (size_t num5 = 0; num5 < vector_PlayoffSpecialGame1.size(); ++num5)
        appendPlayoffSpecialGame(vector_PlayoffSpecialGame1[num5]);
    for (size_t num1 = 0; num1 < vector_PlayoffSpecialGame1.size(); ++num1)
      {
        vector_PlayoffSpecialGame1[num1]->remove_reference();
      }
  }

void SportsInputDataJSON::fromJSONPlayoffGameNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PlayoffGameNumber of SportsInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PlayoffGameNumber of SportsInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPlayoffGameNumber(extracted_integer);
  }

void SportsInputDataJSON::fromJSONTournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Tournament of SportsInputDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Tournament of SportsInputDataJSON has too few elements.");
    std::vector< SportsTournamentJSON * > vector_Tournament1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTournamentJSON *convert_classy = SportsTournamentJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Tournament1[num1] = convert_classy;
      }
    assert(vector_Tournament1.size() >= 1);
    initTournament();
    for (size_t num6 = 0; num6 < vector_Tournament1.size(); ++num6)
        appendTournament(vector_Tournament1[num6]);
    for (size_t num1 = 0; num1 < vector_Tournament1.size(); ++num1)
      {
        vector_Tournament1[num1]->remove_reference();
      }
  }

void SportsInputDataJSON::fromJSONWinOrLose(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WinOrLose of SportsInputDataJSON is not a string.");
    TypeWinOrLose the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ose") == 0)
                  {
                    the_enum = WinOrLose_Lose;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ie") == 0)
                  {
                    the_enum = WinOrLose_Tie;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = WinOrLose_Unknown;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "in") == 0)
                  {
                    the_enum = WinOrLose_Win;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field WinOrLose of SportsInputDataJSON is not one of the legal strings.");
  enum_is_done:;
    setWinOrLose(the_enum);
  }

void SportsInputDataJSON::fromJSONMentionedGame(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MentionedGame of SportsInputDataJSON is not true for false.");
          }
      }
    setMentionedGame(the_bool);
  }

SportsInputDataJSON::SportsInputDataJSON(void) :
        flagHasQueryType(false),
        flagHasTeams(false),
        flagHasSportsGroup(false),
        flagHasStartDateAndOrTimeSpecInput(false),
        flagHasEndDateAndOrTimeSpecInput(false),
        flagHasSearchLocation(false),
        flagHasHA(false),
        flagHasIsPlayoffsSpecialGame(false),
        flagHasPlayoffSpecialGame(false),
        flagHasPlayoffGameNumber(false),
        flagHasTournament(false),
        flagHasWinOrLose(false),
        flagHasMentionedGame(false)
  {
    extraIndex = create_string_index();
  }

SportsInputDataJSON::~SportsInputDataJSON(void)
  {
    if (flagHasTeams)
      {
        for (size_t num10 = 0; num10 < storeTeams.size(); ++num10)
          {
            storeTeams[num10]->remove_reference();
          }
      }
    if (flagHasStartDateAndOrTimeSpecInput)
      {
        storeStartDateAndOrTimeSpecInput->remove_reference();
      }
    if (flagHasEndDateAndOrTimeSpecInput)
      {
        storeEndDateAndOrTimeSpecInput->remove_reference();
      }
    if (flagHasSearchLocation)
      {
        storeSearchLocation->remove_reference();
      }
    if (flagHasPlayoffSpecialGame)
      {
        for (size_t num11 = 0; num11 < storePlayoffSpecialGame.size(); ++num11)
          {
            storePlayoffSpecialGame[num11]->remove_reference();
          }
      }
    if (flagHasTournament)
      {
        for (size_t num12 = 0; num12 < storeTournament.size(); ++num12)
          {
            storeTournament[num12]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsInputDataJSON::hasQueryType(void) const
  {
    return flagHasQueryType;
  }

SportsInputDataJSON::TypeQueryType SportsInputDataJSON::getQueryType(void)
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const SportsInputDataJSON::TypeQueryType SportsInputDataJSON::getQueryType(void) const
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const char *SportsInputDataJSON::getQueryTypeAsChars(void) const
  {
    TypeQueryType result = getQueryType();
    if (result.in_known_list)
        return stringFromQueryType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsInputDataJSON::getQueryTypeAsString(void) const
  {
    return getQueryTypeAsChars();
  }

bool SportsInputDataJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsInputDataJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamJSON * SportsInputDataJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamJSON * SportsInputDataJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamJSON * > SportsInputDataJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamJSON * > SportsInputDataJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsInputDataJSON::hasSportsGroup(void) const
  {
    return flagHasSportsGroup;
  }

SportsInputDataJSON::TypeSportsGroup SportsInputDataJSON::getSportsGroup(void)
  {
    assert(flagHasSportsGroup);
    return storeSportsGroup;
  }

const SportsInputDataJSON::TypeSportsGroup SportsInputDataJSON::getSportsGroup(void) const
  {
    assert(flagHasSportsGroup);
    return storeSportsGroup;
  }

const char *SportsInputDataJSON::getSportsGroupAsChars(void) const
  {
    TypeSportsGroup result = getSportsGroup();
    if (result.in_known_list)
        return stringFromSportsGroup(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsInputDataJSON::getSportsGroupAsString(void) const
  {
    return getSportsGroupAsChars();
  }

bool SportsInputDataJSON::hasStartDateAndOrTimeSpecInput(void) const
  {
    return flagHasStartDateAndOrTimeSpecInput;
  }

DateAndOrTimeSpecJSON * SportsInputDataJSON::getStartDateAndOrTimeSpecInput(void)
  {
    assert(flagHasStartDateAndOrTimeSpecInput);
    return storeStartDateAndOrTimeSpecInput;
  }

const DateAndOrTimeSpecJSON * SportsInputDataJSON::getStartDateAndOrTimeSpecInput(void) const
  {
    assert(flagHasStartDateAndOrTimeSpecInput);
    return storeStartDateAndOrTimeSpecInput;
  }

bool SportsInputDataJSON::hasEndDateAndOrTimeSpecInput(void) const
  {
    return flagHasEndDateAndOrTimeSpecInput;
  }

DateAndOrTimeSpecJSON * SportsInputDataJSON::getEndDateAndOrTimeSpecInput(void)
  {
    assert(flagHasEndDateAndOrTimeSpecInput);
    return storeEndDateAndOrTimeSpecInput;
  }

const DateAndOrTimeSpecJSON * SportsInputDataJSON::getEndDateAndOrTimeSpecInput(void) const
  {
    assert(flagHasEndDateAndOrTimeSpecInput);
    return storeEndDateAndOrTimeSpecInput;
  }

bool SportsInputDataJSON::hasSearchLocation(void) const
  {
    return flagHasSearchLocation;
  }

MapLocationJSON * SportsInputDataJSON::getSearchLocation(void)
  {
    assert(flagHasSearchLocation);
    return storeSearchLocation;
  }

const MapLocationJSON * SportsInputDataJSON::getSearchLocation(void) const
  {
    assert(flagHasSearchLocation);
    return storeSearchLocation;
  }

bool SportsInputDataJSON::hasHA(void) const
  {
    return flagHasHA;
  }

SportsInputDataJSON::TypeHA SportsInputDataJSON::getHA(void)
  {
    assert(flagHasHA);
    return storeHA;
  }

const SportsInputDataJSON::TypeHA SportsInputDataJSON::getHA(void) const
  {
    assert(flagHasHA);
    return storeHA;
  }

const char *SportsInputDataJSON::getHAAsChars(void) const
  {
    return stringFromHA(getHA());
  }

std::string SportsInputDataJSON::getHAAsString(void) const
  {
    return stringFromHA(getHA());
  }

bool SportsInputDataJSON::hasIsPlayoffsSpecialGame(void) const
  {
    return flagHasIsPlayoffsSpecialGame;
  }

bool SportsInputDataJSON::getIsPlayoffsSpecialGame(void)
  {
    assert(flagHasIsPlayoffsSpecialGame);
    return storeIsPlayoffsSpecialGame;
  }

const bool SportsInputDataJSON::getIsPlayoffsSpecialGame(void) const
  {
    assert(flagHasIsPlayoffsSpecialGame);
    return storeIsPlayoffsSpecialGame;
  }

bool SportsInputDataJSON::hasPlayoffSpecialGame(void) const
  {
    return flagHasPlayoffSpecialGame;
  }

size_t SportsInputDataJSON::countOfPlayoffSpecialGame(void) const
  {
    assert(flagHasPlayoffSpecialGame);
    return storePlayoffSpecialGame.size();
  }

SportsPlayoffSpecialGameContainerJSON * SportsInputDataJSON::elementOfPlayoffSpecialGame(size_t element_num)
  {
    assert(flagHasPlayoffSpecialGame);
    return storePlayoffSpecialGame[element_num];
  }

const SportsPlayoffSpecialGameContainerJSON * SportsInputDataJSON::elementOfPlayoffSpecialGame(size_t element_num) const
  {
    assert(flagHasPlayoffSpecialGame);
    return storePlayoffSpecialGame[element_num];
  }

std::vector< SportsPlayoffSpecialGameContainerJSON * > SportsInputDataJSON::getPlayoffSpecialGame(void)
  {
    assert(flagHasPlayoffSpecialGame);
    return storePlayoffSpecialGame;
  }

const std::vector< SportsPlayoffSpecialGameContainerJSON * > SportsInputDataJSON::getPlayoffSpecialGame(void) const
  {
    assert(flagHasPlayoffSpecialGame);
    return storePlayoffSpecialGame;
  }

bool SportsInputDataJSON::hasPlayoffGameNumber(void) const
  {
    return flagHasPlayoffGameNumber;
  }

OInteger SportsInputDataJSON::getPlayoffGameNumber(void)
  {
    assert(flagHasPlayoffGameNumber);
    return storePlayoffGameNumber;
  }

const OInteger SportsInputDataJSON::getPlayoffGameNumber(void) const
  {
    assert(flagHasPlayoffGameNumber);
    return storePlayoffGameNumber;
  }

bool SportsInputDataJSON::hasTournament(void) const
  {
    return flagHasTournament;
  }

size_t SportsInputDataJSON::countOfTournament(void) const
  {
    assert(flagHasTournament);
    return storeTournament.size();
  }

SportsTournamentJSON * SportsInputDataJSON::elementOfTournament(size_t element_num)
  {
    assert(flagHasTournament);
    return storeTournament[element_num];
  }

const SportsTournamentJSON * SportsInputDataJSON::elementOfTournament(size_t element_num) const
  {
    assert(flagHasTournament);
    return storeTournament[element_num];
  }

std::vector< SportsTournamentJSON * > SportsInputDataJSON::getTournament(void)
  {
    assert(flagHasTournament);
    return storeTournament;
  }

const std::vector< SportsTournamentJSON * > SportsInputDataJSON::getTournament(void) const
  {
    assert(flagHasTournament);
    return storeTournament;
  }

bool SportsInputDataJSON::hasWinOrLose(void) const
  {
    return flagHasWinOrLose;
  }

SportsInputDataJSON::TypeWinOrLose SportsInputDataJSON::getWinOrLose(void)
  {
    assert(flagHasWinOrLose);
    return storeWinOrLose;
  }

const SportsInputDataJSON::TypeWinOrLose SportsInputDataJSON::getWinOrLose(void) const
  {
    assert(flagHasWinOrLose);
    return storeWinOrLose;
  }

const char *SportsInputDataJSON::getWinOrLoseAsChars(void) const
  {
    return stringFromWinOrLose(getWinOrLose());
  }

std::string SportsInputDataJSON::getWinOrLoseAsString(void) const
  {
    return stringFromWinOrLose(getWinOrLose());
  }

bool SportsInputDataJSON::hasMentionedGame(void) const
  {
    return flagHasMentionedGame;
  }

bool SportsInputDataJSON::getMentionedGame(void)
  {
    assert(flagHasMentionedGame);
    return storeMentionedGame;
  }

const bool SportsInputDataJSON::getMentionedGame(void) const
  {
    assert(flagHasMentionedGame);
    return storeMentionedGame;
  }

char SportsInputDataJSON::Generator::lowerBoundPlayoffGameNumber[] = "1";
SportsInputDataJSON *SportsInputDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsInputDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsInputDataJSON>, SportsInputDataJSON *, bool> generator("Type SportsInputData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
