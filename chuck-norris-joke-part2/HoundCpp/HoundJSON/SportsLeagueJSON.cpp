/* file "SportsLeagueJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueJSON.h"

#include "SportsLeagueJSON.h"


SportsLeagueJSON::TypeLeagueCode::TypeLeagueCode(void)
  {
  }

SportsLeagueJSON::TypeLeagueCode::TypeLeagueCode(const TypeLeagueCode &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsLeagueJSON::TypeLeagueCode::TypeLeagueCode(TypeLeagueCodeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsLeagueJSON::TypeLeagueCode::operator==(const TypeLeagueCode &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsLeagueJSON::TypeLeagueCode::operator!=(const TypeLeagueCode &other) const
  {
    return !(operator==(other));
  }

bool SportsLeagueJSON::TypeLeagueCode::operator<(const TypeLeagueCode &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsLeagueJSON::TypeLeagueCode::operator>(const TypeLeagueCode &other) const
  {
    return other.operator<(*this);
  }

bool SportsLeagueJSON::TypeLeagueCode::operator>=(const TypeLeagueCode &other) const
  {
    return !(operator<(other));
  }

bool SportsLeagueJSON::TypeLeagueCode::operator<=(const TypeLeagueCode &other) const
  {
    return !(other.operator<(*this));
  }

SportsLeagueJSON::TypeLeagueCodeKnownValues SportsLeagueJSON::stringToLeagueCode(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'F':
                    if (strcmp(&(chars[2]), "L") == 0)
                        return LeagueCode_CFL;
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "icketI", 6) == 0)
                      {
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'C':
                                if (strcmp(&(chars[9]), "C") == 0)
                                    return LeagueCode_CricketICC;
                                break;
                            case 'P':
                                if (strcmp(&(chars[9]), "L") == 0)
                                    return LeagueCode_CricketIPL;
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
        case 'M':
            if (strncmp(&(chars[1]), "L", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'B':
                        if (chars[3] == 0)
                            return LeagueCode_MLB;
                        break;
                    case 'S':
                        if (chars[3] == 0)
                            return LeagueCode_MLS;
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
                        return LeagueCode_NBA;
                    break;
                case 'C':
                    if (strncmp(&(chars[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'F':
                                if (strcmp(&(chars[5]), "B") == 0)
                                    return LeagueCode_NCAAFB;
                                break;
                            case 'M':
                                if (strcmp(&(chars[5]), "B") == 0)
                                    return LeagueCode_NCAAMB;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(chars[2]), "L") == 0)
                        return LeagueCode_NFL;
                    break;
                case 'H':
                    if (strcmp(&(chars[2]), "L") == 0)
                        return LeagueCode_NHL;
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
                    case 'B':
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'r':
                                if (strcmp(&(chars[8]), "asileiroSerieA") == 0)
                                    return LeagueCode_SoccerBrasileiroSerieA;
                                break;
                            case 'u':
                                if (strcmp(&(chars[8]), "ndesliga") == 0)
                                    return LeagueCode_SoccerBundesliga;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'E':
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'r':
                                if (strcmp(&(chars[8]), "edivisie") == 0)
                                    return LeagueCode_SoccerEredivisie;
                                break;
                            case 'u':
                                if (strcmp(&(chars[8]), "ropaLeague") == 0)
                                    return LeagueCode_SoccerEuropaLeague;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'F':
                        if (strcmp(&(chars[7]), "irstDivisionA") == 0)
                            return LeagueCode_SoccerFirstDivisionA;
                        break;
                    case 'I':
                        if (strcmp(&(chars[7]), "nternational") == 0)
                            return LeagueCode_SoccerInternational;
                        break;
                    case 'L':
                        if (strcmp(&(chars[7]), "igue1") == 0)
                            return LeagueCode_SoccerLigue1;
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
                                                return LeagueCode_SoccerPremierLeague;
                                            case 'R':
                                                if (strcmp(&(chars[20]), "US") == 0)
                                                    return LeagueCode_SoccerPremierLeagueRUS;
                                                break;
                                            case 'U':
                                                if (strcmp(&(chars[20]), "KR") == 0)
                                                    return LeagueCode_SoccerPremierLeagueUKR;
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
                                                    return LeagueCode_SoccerPrimeiraLiga;
                                                break;
                                            case 'r':
                                                if (strncmp(&(chars[12]), "aDivision", 9) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[21]))
                                                      {
                                                        case 0:
                                                            return LeagueCode_SoccerPrimeraDivision;
                                                        case 'A':
                                                            if (strcmp(&(chars[22]), "RG") == 0)
                                                                return LeagueCode_SoccerPrimeraDivisionARG;
                                                            break;
                                                        case 'M':
                                                            if (strcmp(&(chars[22]), "EX") == 0)
                                                                return LeagueCode_SoccerPrimeraDivisionMEX;
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
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'e':
                                if (strcmp(&(chars[8]), "rieA") == 0)
                                    return LeagueCode_SoccerSerieA;
                                break;
                            case 'u':
                                if (strncmp(&(chars[8]), "perL", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[12]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[13]), "ague") == 0)
                                                return LeagueCode_SoccerSuperLeague;
                                            break;
                                        case 'i':
                                            if (strcmp(&(chars[13]), "g") == 0)
                                                return LeagueCode_SoccerSuperLig;
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
                                        return LeagueCode_SoccerUEFAChampionsLeague;
                                    break;
                                case 'S':
                                    if (strcmp(&(chars[11]), "uperCup") == 0)
                                        return LeagueCode_SoccerUEFASuperCup;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Y':
                        if (strcmp(&(chars[7]), "outhLeague") == 0)
                            return LeagueCode_SoccerYouthLeague;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return LeagueCode__none;
  }

const char *SportsLeagueJSON::stringFromLeagueCode(TypeLeagueCodeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case LeagueCode_MLB:
            return "MLB";
        case LeagueCode_NBA:
            return "NBA";
        case LeagueCode_NFL:
            return "NFL";
        case LeagueCode_NHL:
            return "NHL";
        case LeagueCode_NCAAMB:
            return "NCAAMB";
        case LeagueCode_NCAAFB:
            return "NCAAFB";
        case LeagueCode_MLS:
            return "MLS";
        case LeagueCode_CFL:
            return "CFL";
        case LeagueCode_SoccerUEFAChampionsLeague:
            return "SoccerUEFAChampionsLeague";
        case LeagueCode_SoccerPrimeraDivision:
            return "SoccerPrimeraDivision";
        case LeagueCode_SoccerPremierLeague:
            return "SoccerPremierLeague";
        case LeagueCode_SoccerSerieA:
            return "SoccerSerieA";
        case LeagueCode_SoccerLigue1:
            return "SoccerLigue1";
        case LeagueCode_SoccerBundesliga:
            return "SoccerBundesliga";
        case LeagueCode_SoccerEredivisie:
            return "SoccerEredivisie";
        case LeagueCode_SoccerFirstDivisionA:
            return "SoccerFirstDivisionA";
        case LeagueCode_SoccerSuperLig:
            return "SoccerSuperLig";
        case LeagueCode_SoccerSuperLeague:
            return "SoccerSuperLeague";
        case LeagueCode_SoccerPremierLeagueRUS:
            return "SoccerPremierLeagueRUS";
        case LeagueCode_SoccerPremierLeagueUKR:
            return "SoccerPremierLeagueUKR";
        case LeagueCode_SoccerPrimeiraLiga:
            return "SoccerPrimeiraLiga";
        case LeagueCode_SoccerUEFASuperCup:
            return "SoccerUEFASuperCup";
        case LeagueCode_SoccerEuropaLeague:
            return "SoccerEuropaLeague";
        case LeagueCode_SoccerYouthLeague:
            return "SoccerYouthLeague";
        case LeagueCode_CricketICC:
            return "CricketICC";
        case LeagueCode_CricketIPL:
            return "CricketIPL";
        case LeagueCode_SoccerPrimeraDivisionARG:
            return "SoccerPrimeraDivisionARG";
        case LeagueCode_SoccerPrimeraDivisionMEX:
            return "SoccerPrimeraDivisionMEX";
        case LeagueCode_SoccerBrasileiroSerieA:
            return "SoccerBrasileiroSerieA";
        case LeagueCode_SoccerInternational:
            return "SoccerInternational";
        default:
            assert(false);
            return NULL;
      }
  }

SportsLeagueJSON::SportsLeagueJSON(const SportsLeagueJSON &)
  {
    assert(false);
  }

SportsLeagueJSON &SportsLeagueJSON::operator=(const SportsLeagueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueJSON::fromJSONLeagueCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LeagueCode of SportsLeagueJSON is not a string.");
    TypeLeagueCode the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'F':
                    if (strcmp(&(json_string->getData()[2]), "L") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = LeagueCode_CFL;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "icketI", 6) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 'C':
                                if (strcmp(&(json_string->getData()[9]), "C") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_CricketICC;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'P':
                                if (strcmp(&(json_string->getData()[9]), "L") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_CricketIPL;
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
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "L", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'B':
                        if (json_string->getData()[3] == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LeagueCode_MLB;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'S':
                        if (json_string->getData()[3] == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LeagueCode_MLS;
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
                            the_open_enum.list_value = LeagueCode_NBA;
                            goto open_enum_is_done;
                          }
                    break;
                case 'C':
                    if (strncmp(&(json_string->getData()[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[5]), "B") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_NCAAFB;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[5]), "B") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_NCAAMB;
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
                            the_open_enum.list_value = LeagueCode_NFL;
                            goto open_enum_is_done;
                          }
                    break;
                case 'H':
                    if (strcmp(&(json_string->getData()[2]), "L") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = LeagueCode_NHL;
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
                    case 'B':
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'r':
                                if (strcmp(&(json_string->getData()[8]), "asileiroSerieA") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_SoccerBrasileiroSerieA;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'u':
                                if (strcmp(&(json_string->getData()[8]), "ndesliga") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_SoccerBundesliga;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'E':
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'r':
                                if (strcmp(&(json_string->getData()[8]), "edivisie") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_SoccerEredivisie;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'u':
                                if (strcmp(&(json_string->getData()[8]), "ropaLeague") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_SoccerEuropaLeague;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'F':
                        if (strcmp(&(json_string->getData()[7]), "irstDivisionA") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LeagueCode_SoccerFirstDivisionA;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[7]), "nternational") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LeagueCode_SoccerInternational;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[7]), "igue1") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = LeagueCode_SoccerLigue1;
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
                                                    the_open_enum.list_value = LeagueCode_SoccerPremierLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            case 'R':
                                                if (strcmp(&(json_string->getData()[20]), "US") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = LeagueCode_SoccerPremierLeagueRUS;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'U':
                                                if (strcmp(&(json_string->getData()[20]), "KR") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = LeagueCode_SoccerPremierLeagueUKR;
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
                                                        the_open_enum.list_value = LeagueCode_SoccerPrimeiraLiga;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'r':
                                                if (strncmp(&(json_string->getData()[12]), "aDivision", 9) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[21]))
                                                      {
                                                        case 0:
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = LeagueCode_SoccerPrimeraDivision;
                                                                goto open_enum_is_done;
                                                              }
                                                        case 'A':
                                                            if (strcmp(&(json_string->getData()[22]), "RG") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = LeagueCode_SoccerPrimeraDivisionARG;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'M':
                                                            if (strcmp(&(json_string->getData()[22]), "EX") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = LeagueCode_SoccerPrimeraDivisionMEX;
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
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[8]), "rieA") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = LeagueCode_SoccerSerieA;
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
                                                    the_open_enum.list_value = LeagueCode_SoccerSuperLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            if (strcmp(&(json_string->getData()[13]), "g") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = LeagueCode_SoccerSuperLig;
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
                                            the_open_enum.list_value = LeagueCode_SoccerUEFAChampionsLeague;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    if (strcmp(&(json_string->getData()[11]), "uperCup") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = LeagueCode_SoccerUEFASuperCup;
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
                                the_open_enum.list_value = LeagueCode_SoccerYouthLeague;
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
    setLeagueCode(the_open_enum);
  }

SportsLeagueJSON::SportsLeagueJSON(void) :
        flagHasLeagueCode(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueJSON::~SportsLeagueJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueJSON::hasLeagueCode(void) const
  {
    return flagHasLeagueCode;
  }

SportsLeagueJSON::TypeLeagueCode SportsLeagueJSON::getLeagueCode(void)
  {
    assert(flagHasLeagueCode);
    return storeLeagueCode;
  }

const SportsLeagueJSON::TypeLeagueCode SportsLeagueJSON::getLeagueCode(void) const
  {
    assert(flagHasLeagueCode);
    return storeLeagueCode;
  }

const char *SportsLeagueJSON::getLeagueCodeAsChars(void) const
  {
    TypeLeagueCode result = getLeagueCode();
    if (result.in_known_list)
        return stringFromLeagueCode(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsLeagueJSON::getLeagueCodeAsString(void) const
  {
    return getLeagueCodeAsChars();
  }

SportsLeagueJSON *SportsLeagueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueJSON>, SportsLeagueJSON *, bool> generator("Type SportsLeague", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
