/* file "SportsPlayoffSpecialGameJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffSpecialGameJSON.h"

#include "SportsPlayoffSpecialGameJSON.h"


SportsPlayoffSpecialGameJSON::TypeValue::TypeValue(void)
  {
  }

SportsPlayoffSpecialGameJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayoffSpecialGameJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayoffSpecialGameJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayoffSpecialGameJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayoffSpecialGameJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayoffSpecialGameJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayoffSpecialGameJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayoffSpecialGameJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayoffSpecialGameJSON::TypeValueKnownValues SportsPlayoffSpecialGameJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strncmp(&(chars[1]), "FL", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'F':
                        if (strncmp(&(chars[4]), "inals", 5) == 0)
                          {
                            switch ((unsigned char)(chars[9]))
                              {
                                case 'E':
                                    if (strcmp(&(chars[10]), "ast") == 0)
                                        return Value_CFLFinalsEast;
                                    break;
                                case 'W':
                                    if (strcmp(&(chars[10]), "est") == 0)
                                        return Value_CFLFinalsWest;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'G':
                        if (strcmp(&(chars[4]), "reyCup") == 0)
                            return Value_CFLGreyCup;
                        break;
                    case 'S':
                        if (strncmp(&(chars[4]), "emiFinals", 9) == 0)
                          {
                            switch ((unsigned char)(chars[13]))
                              {
                                case 'E':
                                    if (strcmp(&(chars[14]), "ast") == 0)
                                        return Value_CFLSemiFinalsEast;
                                    break;
                                case 'W':
                                    if (strcmp(&(chars[14]), "est") == 0)
                                        return Value_CFLSemiFinalsWest;
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
        case 'E':
            if (strncmp(&(chars[1]), "uropaLeague", 11) == 0)
              {
                switch ((unsigned char)(chars[12]))
                  {
                    case 'F':
                        if (strcmp(&(chars[13]), "inal") == 0)
                            return Value_EuropaLeagueFinal;
                        break;
                    case 'Q':
                        if (strcmp(&(chars[13]), "uarterFinals") == 0)
                            return Value_EuropaLeagueQuarterFinals;
                        break;
                    case 'R':
                        if (strncmp(&(chars[13]), "oundOf", 6) == 0)
                          {
                            switch ((unsigned char)(chars[19]))
                              {
                                case '1':
                                    if (strcmp(&(chars[20]), "6") == 0)
                                        return Value_EuropaLeagueRoundOf16;
                                    break;
                                case '3':
                                    if (strcmp(&(chars[20]), "2") == 0)
                                        return Value_EuropaLeagueRoundOf32;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strcmp(&(chars[13]), "emiFinals") == 0)
                            return Value_EuropaLeagueSemiFinals;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strncmp(&(chars[1]), "L", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'B':
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'A':
                                if (strcmp(&(chars[4]), "llStarGame") == 0)
                                    return Value_MLBAllStarGame;
                                break;
                            case 'C':
                                if (strncmp(&(chars[4]), "hampionship", 11) == 0)
                                  {
                                    switch ((unsigned char)(chars[15]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[16]), "mericanLeague") == 0)
                                                return Value_MLBChampionshipAmericanLeague;
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[16]), "ationalLeague") == 0)
                                                return Value_MLBChampionshipNationalLeague;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'D':
                                if (strncmp(&(chars[4]), "ivisional", 9) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[14]), "mericanLeague") == 0)
                                                return Value_MLBDivisionalAmericanLeague;
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[14]), "ationalLeague") == 0)
                                                return Value_MLBDivisionalNationalLeague;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'i':
                                        if (strncmp(&(chars[5]), "ldcard", 6) == 0)
                                          {
                                            switch ((unsigned char)(chars[11]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(chars[12]), "mericanLeague") == 0)
                                                        return Value_MLBWildcardAmericanLeague;
                                                    break;
                                                case 'N':
                                                    if (strcmp(&(chars[12]), "ationalLeague") == 0)
                                                        return Value_MLBWildcardNationalLeague;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[5]), "rldSeries") == 0)
                                            return Value_MLBWorldSeries;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        if (strncmp(&(chars[3]), "C", 1) == 0)
                          {
                            switch ((unsigned char)(chars[4]))
                              {
                                case 'o':
                                    if (strncmp(&(chars[5]), "nference", 8) == 0)
                                      {
                                        switch ((unsigned char)(chars[13]))
                                          {
                                            case 'F':
                                                if (strncmp(&(chars[14]), "inals", 5) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[19]))
                                                      {
                                                        case 'E':
                                                            if (strcmp(&(chars[20]), "astern") == 0)
                                                                return Value_MLSConferenceFinalsEastern;
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(chars[20]), "estern") == 0)
                                                                return Value_MLSConferenceFinalsWestern;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'Q':
                                                if (strncmp(&(chars[14]), "uarterFinals", 12) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[26]))
                                                      {
                                                        case 'E':
                                                            if (strcmp(&(chars[27]), "astern") == 0)
                                                                return Value_MLSConferenceQuarterFinalsEastern;
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(chars[27]), "estern") == 0)
                                                                return Value_MLSConferenceQuarterFinalsWestern;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'S':
                                                if (strncmp(&(chars[14]), "emiFinals", 9) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[23]))
                                                      {
                                                        case 'E':
                                                            if (strcmp(&(chars[24]), "astern") == 0)
                                                                return Value_MLSConferenceSemiFinalsEastern;
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(chars[24]), "estern") == 0)
                                                                return Value_MLSConferenceSemiFinalsWestern;
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
                                case 'u':
                                    if (strcmp(&(chars[5]), "p") == 0)
                                        return Value_MLSCup;
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
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'B':
                    if (strncmp(&(chars[2]), "A", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'A':
                                if (strcmp(&(chars[4]), "llStarGame") == 0)
                                    return Value_NBAAllStarGame;
                                break;
                            case 'C':
                                if (strncmp(&(chars[4]), "onference", 9) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'F':
                                            if (strncmp(&(chars[14]), "inals", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[19]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[20]), "astern") == 0)
                                                            return Value_NBAConferenceFinalsEastern;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[20]), "estern") == 0)
                                                            return Value_NBAConferenceFinalsWestern;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'Q':
                                            if (strncmp(&(chars[14]), "uarterFinals", 12) == 0)
                                              {
                                                switch ((unsigned char)(chars[26]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[27]), "astern") == 0)
                                                            return Value_NBAConferenceQuarterFinalsEastern;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[27]), "estern") == 0)
                                                            return Value_NBAConferenceQuarterFinalsWestern;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            if (strncmp(&(chars[14]), "emiFinals", 9) == 0)
                                              {
                                                switch ((unsigned char)(chars[23]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[24]), "astern") == 0)
                                                            return Value_NBAConferenceSemiFinalsEastern;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[24]), "estern") == 0)
                                                            return Value_NBAConferenceSemiFinalsWestern;
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
                            case 'F':
                                if (strcmp(&(chars[4]), "inals") == 0)
                                    return Value_NBAFinals;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strncmp(&(chars[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'F':
                                if (strncmp(&(chars[5]), "B", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'A':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'C':
                                                    if (strcmp(&(chars[8]), "CChampionship") == 0)
                                                        return Value_NCAAFBACCChampionship;
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(chars[8]), "amoBowl") == 0)
                                                        return Value_NCAAFBAlamoBowl;
                                                    break;
                                                case 'r':
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'i':
                                                            if (strcmp(&(chars[9]), "zonaBowl") == 0)
                                                                return Value_NCAAFBArizonaBowl;
                                                            break;
                                                        case 'm':
                                                            if (strcmp(&(chars[9]), "edForcesBowl") == 0)
                                                                return Value_NCAAFBArmedForcesBowl;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'B':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[8]), "hamasBowl") == 0)
                                                        return Value_NCAAFBBahamasBowl;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[8]), "lkBowl") == 0)
                                                        return Value_NCAAFBBelkBowl;
                                                    break;
                                                case 'i':
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'g':
                                                            if (strcmp(&(chars[9]), "TenChampionship") == 0)
                                                                return Value_NCAAFBBigTenChampionship;
                                                            break;
                                                        case 'r':
                                                            if (strcmp(&(chars[9]), "minghamBowl") == 0)
                                                                return Value_NCAAFBBirminghamBowl;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[8]), "caRatonBowl") == 0)
                                                        return Value_NCAAFBBocaRatonBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'C':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[8]), "PNationalChampionship") == 0)
                                                        return Value_NCAAFBCFPNationalChampionship;
                                                    break;
                                                case 'a':
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'c':
                                                            if (strcmp(&(chars[9]), "tusBowl") == 0)
                                                                return Value_NCAAFBCactusBowl;
                                                            break;
                                                        case 'm':
                                                            if (strcmp(&(chars[9]), "elliaBowl") == 0)
                                                                return Value_NCAAFBCamelliaBowl;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(chars[8]), "trusBowl") == 0)
                                                        return Value_NCAAFBCitrusBowl;
                                                    break;
                                                case 'o':
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'n':
                                                            if (strcmp(&(chars[9]), "ferenceUSAChampionship") == 0)
                                                                return Value_NCAAFBConferenceUSAChampionship;
                                                            break;
                                                        case 't':
                                                            if (strcmp(&(chars[9]), "tonBowlClassic") == 0)
                                                                return Value_NCAAFBCottonBowlClassic;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[8]), "reBowl") == 0)
                                                        return Value_NCAAFBCureBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'F':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[8]), "mousIdahoPotatoBowl") == 0)
                                                        return Value_NCAAFBFamousIdahoPotatoBowl;
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(chars[8]), "estaBowl") == 0)
                                                        return Value_NCAAFBFiestaBowl;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[8]), "sterFarmsBowl") == 0)
                                                        return Value_NCAAFBFosterFarmsBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'G':
                                            if (strcmp(&(chars[7]), "oDaddyBowl") == 0)
                                                return Value_NCAAFBGoDaddyBowl;
                                            break;
                                        case 'H':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[8]), "waiiBowl") == 0)
                                                        return Value_NCAAFBHawaiiBowl;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[8]), "artOfDallasBowl") == 0)
                                                        return Value_NCAAFBHeartOfDallasBowl;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[8]), "lidayBowl") == 0)
                                                        return Value_NCAAFBHolidayBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[7]), "ndependenceBowl") == 0)
                                                return Value_NCAAFBIndependenceBowl;
                                            break;
                                        case 'L':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[8]), "sVegasBowl") == 0)
                                                        return Value_NCAAFBLasVegasBowl;
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(chars[8]), "bertyBowl") == 0)
                                                        return Value_NCAAFBLibertyBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'M':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(chars[8]), "CChampionship") == 0)
                                                        return Value_NCAAFBMACChampionship;
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(chars[8]), "CChampionship") == 0)
                                                        return Value_NCAAFBMWCChampionship;
                                                    break;
                                                case 'i':
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(chars[9]), "miBeachBowl") == 0)
                                                                return Value_NCAAFBMiamiBeachBowl;
                                                            break;
                                                        case 'l':
                                                            if (strcmp(&(chars[9]), "itaryBowl") == 0)
                                                                return Value_NCAAFBMilitaryBowl;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[8]), "sicCityBowl") == 0)
                                                        return Value_NCAAFBMusicCityBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'N':
                                            if (strncmp(&(chars[7]), "ew", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[9]))
                                                  {
                                                    case 'M':
                                                        if (strcmp(&(chars[10]), "exicoBowl") == 0)
                                                            return Value_NCAAFBNewMexicoBowl;
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(chars[10]), "rleansBowl") == 0)
                                                            return Value_NCAAFBNewOrleansBowl;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'O':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'r':
                                                    if (strcmp(&(chars[8]), "angeBowl") == 0)
                                                        return Value_NCAAFBOrangeBowl;
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[8]), "tbackBowl") == 0)
                                                        return Value_NCAAFBOutbackBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'P':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(chars[8]), "C12Championship") == 0)
                                                        return Value_NCAAFBPAC12Championship;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[8]), "achBowl") == 0)
                                                        return Value_NCAAFBPeachBowl;
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(chars[8]), "nstripeBowl") == 0)
                                                        return Value_NCAAFBPinstripeBowl;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[8]), "insettiaBowl") == 0)
                                                        return Value_NCAAFBPoinsettiaBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'Q':
                                            if (strcmp(&(chars[7]), "uickLaneBowl") == 0)
                                                return Value_NCAAFBQuickLaneBowl;
                                            break;
                                        case 'R':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'o':
                                                    if (strcmp(&(chars[8]), "seBowl") == 0)
                                                        return Value_NCAAFBRoseBowl;
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[8]), "ssellAthleticBowl") == 0)
                                                        return Value_NCAAFBRussellAthleticBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'E':
                                                    if (strcmp(&(chars[8]), "CChampionship") == 0)
                                                        return Value_NCAAFBSECChampionship;
                                                    break;
                                                case 't':
                                                    if (strcmp(&(chars[8]), "PetersburgBowl") == 0)
                                                        return Value_NCAAFBStPetersburgBowl;
                                                    break;
                                                case 'u':
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'g':
                                                            if (strcmp(&(chars[9]), "arBowl") == 0)
                                                                return Value_NCAAFBSugarBowl;
                                                            break;
                                                        case 'n':
                                                            if (strcmp(&(chars[9]), "Bowl") == 0)
                                                                return Value_NCAAFBSunBowl;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[8]), "xSlayerBowl") == 0)
                                                        return Value_NCAAFBTaxSlayerBowl;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[8]), "xasBowl") == 0)
                                                        return Value_NCAAFBTexasBowl;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strncmp(&(chars[5]), "B", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'C':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'B':
                                                    if (strncmp(&(chars[8]), "I", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[9]))
                                                          {
                                                            case 0:
                                                                return Value_NCAAMBCBI;
                                                            case 'C':
                                                                if (strcmp(&(chars[10]), "hampionship") == 0)
                                                                    return Value_NCAAMBCBIChampionship;
                                                                break;
                                                            case 'F':
                                                                if (strcmp(&(chars[10]), "irstRound") == 0)
                                                                    return Value_NCAAMBCBIFirstRound;
                                                                break;
                                                            case 'Q':
                                                                if (strcmp(&(chars[10]), "uarterfinals") == 0)
                                                                    return Value_NCAAMBCBIQuarterfinals;
                                                                break;
                                                            case 'S':
                                                                if (strcmp(&(chars[10]), "emifinals") == 0)
                                                                    return Value_NCAAMBCBISemifinals;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'I':
                                                    if (strncmp(&(chars[8]), "T", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[9]))
                                                          {
                                                            case 0:
                                                                return Value_NCAAMBCIT;
                                                            case 'C':
                                                                if (strcmp(&(chars[10]), "hampionship") == 0)
                                                                    return Value_NCAAMBCITChampionship;
                                                                break;
                                                            case 'F':
                                                                if (strcmp(&(chars[10]), "irstRound") == 0)
                                                                    return Value_NCAAMBCITFirstRound;
                                                                break;
                                                            case 'Q':
                                                                if (strcmp(&(chars[10]), "uarterfinals") == 0)
                                                                    return Value_NCAAMBCITQuarterfinals;
                                                                break;
                                                            case 'S':
                                                                if (strncmp(&(chars[10]), "e", 1) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[11]))
                                                                      {
                                                                        case 'c':
                                                                            if (strcmp(&(chars[12]), "ondRound") == 0)
                                                                                return Value_NCAAMBCITSecondRound;
                                                                            break;
                                                                        case 'm':
                                                                            if (strcmp(&(chars[12]), "ifinals") == 0)
                                                                                return Value_NCAAMBCITSemifinals;
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
                                            break;
                                        case 'E':
                                            if (strncmp(&(chars[7]), "astRegional", 11) == 0)
                                              {
                                                switch ((unsigned char)(chars[18]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[19]), "lite8") == 0)
                                                            return Value_NCAAMBEastRegionalElite8;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[19]), "irstRound") == 0)
                                                            return Value_NCAAMBEastRegionalFirstRound;
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(chars[19]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(chars[20]), "condRound") == 0)
                                                                    return Value_NCAAMBEastRegionalSecondRound;
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(chars[20]), "eet16") == 0)
                                                                    return Value_NCAAMBEastRegionalSweet16;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[19]), "hirdRound") == 0)
                                                            return Value_NCAAMBEastRegionalThirdRound;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'F':
                                            if (strncmp(&(chars[7]), "i", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[8]))
                                                  {
                                                    case 'n':
                                                        if (strncmp(&(chars[9]), "alFour", 6) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[15]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(chars[16]), "inals") == 0)
                                                                        return Value_NCAAMBFinalFourFinals;
                                                                    break;
                                                                case 'S':
                                                                    if (strcmp(&(chars[16]), "emiFinals") == 0)
                                                                        return Value_NCAAMBFinalFourSemiFinals;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(chars[9]), "stFour") == 0)
                                                            return Value_NCAAMBFirstFour;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strncmp(&(chars[7]), "idwestRegional", 14) == 0)
                                              {
                                                switch ((unsigned char)(chars[21]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[22]), "lite8") == 0)
                                                            return Value_NCAAMBMidwestRegionalElite8;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[22]), "irstRound") == 0)
                                                            return Value_NCAAMBMidwestRegionalFirstRound;
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(chars[22]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(chars[23]), "condRound") == 0)
                                                                    return Value_NCAAMBMidwestRegionalSecondRound;
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(chars[23]), "eet16") == 0)
                                                                    return Value_NCAAMBMidwestRegionalSweet16;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[22]), "hirdRound") == 0)
                                                            return Value_NCAAMBMidwestRegionalThirdRound;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'N':
                                            if (strncmp(&(chars[7]), "IT", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[9]))
                                                  {
                                                    case 0:
                                                        return Value_NCAAMBNIT;
                                                    case 'C':
                                                        if (strcmp(&(chars[10]), "hampionship") == 0)
                                                            return Value_NCAAMBNITChampionship;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[10]), "irstRound") == 0)
                                                            return Value_NCAAMBNITFirstRound;
                                                        break;
                                                    case 'Q':
                                                        if (strcmp(&(chars[10]), "uarterfinals") == 0)
                                                            return Value_NCAAMBNITQuarterfinals;
                                                        break;
                                                    case 'S':
                                                        if (strncmp(&(chars[10]), "e", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[11]))
                                                              {
                                                                case 'c':
                                                                    if (strcmp(&(chars[12]), "ondRound") == 0)
                                                                        return Value_NCAAMBNITSecondRound;
                                                                    break;
                                                                case 'm':
                                                                    if (strcmp(&(chars[12]), "ifinals") == 0)
                                                                        return Value_NCAAMBNITSemifinals;
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
                                            if (strncmp(&(chars[7]), "outhRegional", 12) == 0)
                                              {
                                                switch ((unsigned char)(chars[19]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[20]), "lite8") == 0)
                                                            return Value_NCAAMBSouthRegionalElite8;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[20]), "irstRound") == 0)
                                                            return Value_NCAAMBSouthRegionalFirstRound;
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(chars[20]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(chars[21]), "condRound") == 0)
                                                                    return Value_NCAAMBSouthRegionalSecondRound;
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(chars[21]), "eet16") == 0)
                                                                    return Value_NCAAMBSouthRegionalSweet16;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[20]), "hirdRound") == 0)
                                                            return Value_NCAAMBSouthRegionalThirdRound;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[7]), "ournament") == 0)
                                                return Value_NCAAMBTournament;
                                            break;
                                        case 'W':
                                            if (strncmp(&(chars[7]), "estRegional", 11) == 0)
                                              {
                                                switch ((unsigned char)(chars[18]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[19]), "lite8") == 0)
                                                            return Value_NCAAMBWestRegionalElite8;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[19]), "irstRound") == 0)
                                                            return Value_NCAAMBWestRegionalFirstRound;
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(chars[19]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(chars[20]), "condRound") == 0)
                                                                    return Value_NCAAMBWestRegionalSecondRound;
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(chars[20]), "eet16") == 0)
                                                                    return Value_NCAAMBWestRegionalSweet16;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[19]), "hirdRound") == 0)
                                                            return Value_NCAAMBWestRegionalThirdRound;
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
                case 'F':
                    if (strncmp(&(chars[2]), "L", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'C':
                                if (strncmp(&(chars[4]), "onference", 9) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[14]), "FC") == 0)
                                                return Value_NFLConferenceAFC;
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[14]), "FC") == 0)
                                                return Value_NFLConferenceNFC;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'D':
                                if (strncmp(&(chars[4]), "ivisional", 9) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[14]), "FC") == 0)
                                                return Value_NFLDivisionalAFC;
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[14]), "FC") == 0)
                                                return Value_NFLDivisionalNFC;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'S':
                                if (strcmp(&(chars[4]), "uperBowl") == 0)
                                    return Value_NFLSuperBowl;
                                break;
                            case 'W':
                                if (strncmp(&(chars[4]), "ildcard", 7) == 0)
                                  {
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[12]), "FC") == 0)
                                                return Value_NFLWildcardAFC;
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[12]), "FC") == 0)
                                                return Value_NFLWildcardNFC;
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
                case 'H':
                    if (strncmp(&(chars[2]), "L", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'A':
                                if (strncmp(&(chars[4]), "llStarGame", 10) == 0)
                                  {
                                    switch ((unsigned char)(chars[14]))
                                      {
                                        case 0:
                                            return Value_NHLAllStarGame;
                                        case 'A':
                                            if (strcmp(&(chars[15]), "tlanticMetropolitan") == 0)
                                                return Value_NHLAllStarGameAtlanticMetropolitan;
                                            break;
                                        case 'F':
                                            if (strcmp(&(chars[15]), "inals") == 0)
                                                return Value_NHLAllStarGameFinals;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[15]), "acificCentral") == 0)
                                                return Value_NHLAllStarGamePacificCentral;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'C':
                                if (strncmp(&(chars[4]), "onference", 9) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'F':
                                            if (strncmp(&(chars[14]), "inals", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[19]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[20]), "astern") == 0)
                                                            return Value_NHLConferenceFinalsEastern;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[20]), "estern") == 0)
                                                            return Value_NHLConferenceFinalsWestern;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'Q':
                                            if (strncmp(&(chars[14]), "uarterFinals", 12) == 0)
                                              {
                                                switch ((unsigned char)(chars[26]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[27]), "astern") == 0)
                                                            return Value_NHLConferenceQuarterFinalsEastern;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[27]), "estern") == 0)
                                                            return Value_NHLConferenceQuarterFinalsWestern;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            if (strncmp(&(chars[14]), "emiFinals", 9) == 0)
                                              {
                                                switch ((unsigned char)(chars[23]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[24]), "astern") == 0)
                                                            return Value_NHLConferenceSemiFinalsEastern;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[24]), "estern") == 0)
                                                            return Value_NHLConferenceSemiFinalsWestern;
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
                                if (strcmp(&(chars[4]), "tanleyCup") == 0)
                                    return Value_NHLStanleyCup;
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
            if (strncmp(&(chars[1]), "EFA", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'C':
                        if (strncmp(&(chars[5]), "hampionsLeague", 14) == 0)
                          {
                            switch ((unsigned char)(chars[19]))
                              {
                                case 'F':
                                    if (strcmp(&(chars[20]), "inal") == 0)
                                        return Value_UEFAChampionsLeagueFinal;
                                    break;
                                case 'Q':
                                    if (strcmp(&(chars[20]), "uarterFinals") == 0)
                                        return Value_UEFAChampionsLeagueQuarterFinals;
                                    break;
                                case 'R':
                                    if (strcmp(&(chars[20]), "oundOf16") == 0)
                                        return Value_UEFAChampionsLeagueRoundOf16;
                                    break;
                                case 'S':
                                    if (strcmp(&(chars[20]), "emiFinals") == 0)
                                        return Value_UEFAChampionsLeagueSemiFinals;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strcmp(&(chars[5]), "uperCup") == 0)
                            return Value_UEFASuperCup;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsPlayoffSpecialGameJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_NFLWildcardAFC:
            return "NFLWildcardAFC";
        case Value_NFLWildcardNFC:
            return "NFLWildcardNFC";
        case Value_NFLDivisionalAFC:
            return "NFLDivisionalAFC";
        case Value_NFLDivisionalNFC:
            return "NFLDivisionalNFC";
        case Value_NFLConferenceAFC:
            return "NFLConferenceAFC";
        case Value_NFLConferenceNFC:
            return "NFLConferenceNFC";
        case Value_NFLSuperBowl:
            return "NFLSuperBowl";
        case Value_NHLConferenceQuarterFinalsEastern:
            return "NHLConferenceQuarterFinalsEastern";
        case Value_NHLConferenceQuarterFinalsWestern:
            return "NHLConferenceQuarterFinalsWestern";
        case Value_NHLConferenceSemiFinalsEastern:
            return "NHLConferenceSemiFinalsEastern";
        case Value_NHLConferenceSemiFinalsWestern:
            return "NHLConferenceSemiFinalsWestern";
        case Value_NHLConferenceFinalsEastern:
            return "NHLConferenceFinalsEastern";
        case Value_NHLConferenceFinalsWestern:
            return "NHLConferenceFinalsWestern";
        case Value_NHLStanleyCup:
            return "NHLStanleyCup";
        case Value_NHLAllStarGame:
            return "NHLAllStarGame";
        case Value_NHLAllStarGameFinals:
            return "NHLAllStarGameFinals";
        case Value_NHLAllStarGameAtlanticMetropolitan:
            return "NHLAllStarGameAtlanticMetropolitan";
        case Value_NHLAllStarGamePacificCentral:
            return "NHLAllStarGamePacificCentral";
        case Value_MLBWildcardAmericanLeague:
            return "MLBWildcardAmericanLeague";
        case Value_MLBWildcardNationalLeague:
            return "MLBWildcardNationalLeague";
        case Value_MLBDivisionalAmericanLeague:
            return "MLBDivisionalAmericanLeague";
        case Value_MLBDivisionalNationalLeague:
            return "MLBDivisionalNationalLeague";
        case Value_MLBChampionshipAmericanLeague:
            return "MLBChampionshipAmericanLeague";
        case Value_MLBChampionshipNationalLeague:
            return "MLBChampionshipNationalLeague";
        case Value_MLBWorldSeries:
            return "MLBWorldSeries";
        case Value_MLBAllStarGame:
            return "MLBAllStarGame";
        case Value_NBAConferenceQuarterFinalsEastern:
            return "NBAConferenceQuarterFinalsEastern";
        case Value_NBAConferenceQuarterFinalsWestern:
            return "NBAConferenceQuarterFinalsWestern";
        case Value_NBAConferenceSemiFinalsEastern:
            return "NBAConferenceSemiFinalsEastern";
        case Value_NBAConferenceSemiFinalsWestern:
            return "NBAConferenceSemiFinalsWestern";
        case Value_NBAConferenceFinalsEastern:
            return "NBAConferenceFinalsEastern";
        case Value_NBAConferenceFinalsWestern:
            return "NBAConferenceFinalsWestern";
        case Value_NBAFinals:
            return "NBAFinals";
        case Value_NBAAllStarGame:
            return "NBAAllStarGame";
        case Value_MLSConferenceQuarterFinalsEastern:
            return "MLSConferenceQuarterFinalsEastern";
        case Value_MLSConferenceQuarterFinalsWestern:
            return "MLSConferenceQuarterFinalsWestern";
        case Value_MLSConferenceSemiFinalsEastern:
            return "MLSConferenceSemiFinalsEastern";
        case Value_MLSConferenceSemiFinalsWestern:
            return "MLSConferenceSemiFinalsWestern";
        case Value_MLSConferenceFinalsEastern:
            return "MLSConferenceFinalsEastern";
        case Value_MLSConferenceFinalsWestern:
            return "MLSConferenceFinalsWestern";
        case Value_MLSCup:
            return "MLSCup";
        case Value_NCAAFBRoseBowl:
            return "NCAAFBRoseBowl";
        case Value_NCAAFBOrangeBowl:
            return "NCAAFBOrangeBowl";
        case Value_NCAAFBSugarBowl:
            return "NCAAFBSugarBowl";
        case Value_NCAAFBCottonBowlClassic:
            return "NCAAFBCottonBowlClassic";
        case Value_NCAAFBPeachBowl:
            return "NCAAFBPeachBowl";
        case Value_NCAAFBFiestaBowl:
            return "NCAAFBFiestaBowl";
        case Value_NCAAFBSunBowl:
            return "NCAAFBSunBowl";
        case Value_NCAAFBTaxSlayerBowl:
            return "NCAAFBTaxSlayerBowl";
        case Value_NCAAFBCitrusBowl:
            return "NCAAFBCitrusBowl";
        case Value_NCAAFBLibertyBowl:
            return "NCAAFBLibertyBowl";
        case Value_NCAAFBIndependenceBowl:
            return "NCAAFBIndependenceBowl";
        case Value_NCAAFBHolidayBowl:
            return "NCAAFBHolidayBowl";
        case Value_NCAAFBOutbackBowl:
            return "NCAAFBOutbackBowl";
        case Value_NCAAFBCactusBowl:
            return "NCAAFBCactusBowl";
        case Value_NCAAFBRussellAthleticBowl:
            return "NCAAFBRussellAthleticBowl";
        case Value_NCAAFBLasVegasBowl:
            return "NCAAFBLasVegasBowl";
        case Value_NCAAFBAlamoBowl:
            return "NCAAFBAlamoBowl";
        case Value_NCAAFBFamousIdahoPotatoBowl:
            return "NCAAFBFamousIdahoPotatoBowl";
        case Value_NCAAFBMusicCityBowl:
            return "NCAAFBMusicCityBowl";
        case Value_NCAAFBGoDaddyBowl:
            return "NCAAFBGoDaddyBowl";
        case Value_NCAAFBNewOrleansBowl:
            return "NCAAFBNewOrleansBowl";
        case Value_NCAAFBFosterFarmsBowl:
            return "NCAAFBFosterFarmsBowl";
        case Value_NCAAFBHawaiiBowl:
            return "NCAAFBHawaiiBowl";
        case Value_NCAAFBBelkBowl:
            return "NCAAFBBelkBowl";
        case Value_NCAAFBArmedForcesBowl:
            return "NCAAFBArmedForcesBowl";
        case Value_NCAAFBPoinsettiaBowl:
            return "NCAAFBPoinsettiaBowl";
        case Value_NCAAFBTexasBowl:
            return "NCAAFBTexasBowl";
        case Value_NCAAFBBirminghamBowl:
            return "NCAAFBBirminghamBowl";
        case Value_NCAAFBNewMexicoBowl:
            return "NCAAFBNewMexicoBowl";
        case Value_NCAAFBMilitaryBowl:
            return "NCAAFBMilitaryBowl";
        case Value_NCAAFBStPetersburgBowl:
            return "NCAAFBStPetersburgBowl";
        case Value_NCAAFBPinstripeBowl:
            return "NCAAFBPinstripeBowl";
        case Value_NCAAFBHeartOfDallasBowl:
            return "NCAAFBHeartOfDallasBowl";
        case Value_NCAAFBBahamasBowl:
            return "NCAAFBBahamasBowl";
        case Value_NCAAFBBocaRatonBowl:
            return "NCAAFBBocaRatonBowl";
        case Value_NCAAFBCamelliaBowl:
            return "NCAAFBCamelliaBowl";
        case Value_NCAAFBMiamiBeachBowl:
            return "NCAAFBMiamiBeachBowl";
        case Value_NCAAFBQuickLaneBowl:
            return "NCAAFBQuickLaneBowl";
        case Value_NCAAFBCureBowl:
            return "NCAAFBCureBowl";
        case Value_NCAAFBArizonaBowl:
            return "NCAAFBArizonaBowl";
        case Value_NCAAFBPAC12Championship:
            return "NCAAFBPAC12Championship";
        case Value_NCAAFBConferenceUSAChampionship:
            return "NCAAFBConferenceUSAChampionship";
        case Value_NCAAFBBigTenChampionship:
            return "NCAAFBBigTenChampionship";
        case Value_NCAAFBCFPNationalChampionship:
            return "NCAAFBCFPNationalChampionship";
        case Value_NCAAFBSECChampionship:
            return "NCAAFBSECChampionship";
        case Value_NCAAFBMACChampionship:
            return "NCAAFBMACChampionship";
        case Value_NCAAFBACCChampionship:
            return "NCAAFBACCChampionship";
        case Value_NCAAFBMWCChampionship:
            return "NCAAFBMWCChampionship";
        case Value_NCAAMBFirstFour:
            return "NCAAMBFirstFour";
        case Value_NCAAMBMidwestRegionalFirstRound:
            return "NCAAMBMidwestRegionalFirstRound";
        case Value_NCAAMBSouthRegionalFirstRound:
            return "NCAAMBSouthRegionalFirstRound";
        case Value_NCAAMBWestRegionalFirstRound:
            return "NCAAMBWestRegionalFirstRound";
        case Value_NCAAMBEastRegionalFirstRound:
            return "NCAAMBEastRegionalFirstRound";
        case Value_NCAAMBMidwestRegionalSecondRound:
            return "NCAAMBMidwestRegionalSecondRound";
        case Value_NCAAMBSouthRegionalSecondRound:
            return "NCAAMBSouthRegionalSecondRound";
        case Value_NCAAMBWestRegionalSecondRound:
            return "NCAAMBWestRegionalSecondRound";
        case Value_NCAAMBEastRegionalSecondRound:
            return "NCAAMBEastRegionalSecondRound";
        case Value_NCAAMBMidwestRegionalThirdRound:
            return "NCAAMBMidwestRegionalThirdRound";
        case Value_NCAAMBSouthRegionalThirdRound:
            return "NCAAMBSouthRegionalThirdRound";
        case Value_NCAAMBWestRegionalThirdRound:
            return "NCAAMBWestRegionalThirdRound";
        case Value_NCAAMBEastRegionalThirdRound:
            return "NCAAMBEastRegionalThirdRound";
        case Value_NCAAMBMidwestRegionalSweet16:
            return "NCAAMBMidwestRegionalSweet16";
        case Value_NCAAMBSouthRegionalSweet16:
            return "NCAAMBSouthRegionalSweet16";
        case Value_NCAAMBWestRegionalSweet16:
            return "NCAAMBWestRegionalSweet16";
        case Value_NCAAMBEastRegionalSweet16:
            return "NCAAMBEastRegionalSweet16";
        case Value_NCAAMBMidwestRegionalElite8:
            return "NCAAMBMidwestRegionalElite8";
        case Value_NCAAMBSouthRegionalElite8:
            return "NCAAMBSouthRegionalElite8";
        case Value_NCAAMBWestRegionalElite8:
            return "NCAAMBWestRegionalElite8";
        case Value_NCAAMBEastRegionalElite8:
            return "NCAAMBEastRegionalElite8";
        case Value_NCAAMBFinalFourSemiFinals:
            return "NCAAMBFinalFourSemiFinals";
        case Value_NCAAMBFinalFourFinals:
            return "NCAAMBFinalFourFinals";
        case Value_NCAAMBTournament:
            return "NCAAMBTournament";
        case Value_NCAAMBCITFirstRound:
            return "NCAAMBCITFirstRound";
        case Value_NCAAMBCITSecondRound:
            return "NCAAMBCITSecondRound";
        case Value_NCAAMBCITQuarterfinals:
            return "NCAAMBCITQuarterfinals";
        case Value_NCAAMBCITSemifinals:
            return "NCAAMBCITSemifinals";
        case Value_NCAAMBCITChampionship:
            return "NCAAMBCITChampionship";
        case Value_NCAAMBCIT:
            return "NCAAMBCIT";
        case Value_NCAAMBCBIFirstRound:
            return "NCAAMBCBIFirstRound";
        case Value_NCAAMBCBIQuarterfinals:
            return "NCAAMBCBIQuarterfinals";
        case Value_NCAAMBCBISemifinals:
            return "NCAAMBCBISemifinals";
        case Value_NCAAMBCBIChampionship:
            return "NCAAMBCBIChampionship";
        case Value_NCAAMBCBI:
            return "NCAAMBCBI";
        case Value_NCAAMBNITFirstRound:
            return "NCAAMBNITFirstRound";
        case Value_NCAAMBNITSecondRound:
            return "NCAAMBNITSecondRound";
        case Value_NCAAMBNITQuarterfinals:
            return "NCAAMBNITQuarterfinals";
        case Value_NCAAMBNITSemifinals:
            return "NCAAMBNITSemifinals";
        case Value_NCAAMBNITChampionship:
            return "NCAAMBNITChampionship";
        case Value_NCAAMBNIT:
            return "NCAAMBNIT";
        case Value_CFLSemiFinalsEast:
            return "CFLSemiFinalsEast";
        case Value_CFLSemiFinalsWest:
            return "CFLSemiFinalsWest";
        case Value_CFLFinalsEast:
            return "CFLFinalsEast";
        case Value_CFLFinalsWest:
            return "CFLFinalsWest";
        case Value_CFLGreyCup:
            return "CFLGreyCup";
        case Value_UEFAChampionsLeagueRoundOf16:
            return "UEFAChampionsLeagueRoundOf16";
        case Value_UEFAChampionsLeagueQuarterFinals:
            return "UEFAChampionsLeagueQuarterFinals";
        case Value_UEFAChampionsLeagueSemiFinals:
            return "UEFAChampionsLeagueSemiFinals";
        case Value_UEFAChampionsLeagueFinal:
            return "UEFAChampionsLeagueFinal";
        case Value_EuropaLeagueRoundOf32:
            return "EuropaLeagueRoundOf32";
        case Value_EuropaLeagueRoundOf16:
            return "EuropaLeagueRoundOf16";
        case Value_EuropaLeagueQuarterFinals:
            return "EuropaLeagueQuarterFinals";
        case Value_EuropaLeagueSemiFinals:
            return "EuropaLeagueSemiFinals";
        case Value_EuropaLeagueFinal:
            return "EuropaLeagueFinal";
        case Value_UEFASuperCup:
            return "UEFASuperCup";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayoffSpecialGameJSON::SportsPlayoffSpecialGameJSON(const SportsPlayoffSpecialGameJSON &)
  {
    assert(false);
  }

SportsPlayoffSpecialGameJSON &SportsPlayoffSpecialGameJSON::operator=(const SportsPlayoffSpecialGameJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffSpecialGameJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsPlayoffSpecialGameJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strncmp(&(json_string->getData()[1]), "FL", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'F':
                        if (strncmp(&(json_string->getData()[4]), "inals", 5) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[9]))
                              {
                                case 'E':
                                    if (strcmp(&(json_string->getData()[10]), "ast") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_CFLFinalsEast;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'W':
                                    if (strcmp(&(json_string->getData()[10]), "est") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_CFLFinalsWest;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'G':
                        if (strcmp(&(json_string->getData()[4]), "reyCup") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_CFLGreyCup;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'S':
                        if (strncmp(&(json_string->getData()[4]), "emiFinals", 9) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[13]))
                              {
                                case 'E':
                                    if (strcmp(&(json_string->getData()[14]), "ast") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_CFLSemiFinalsEast;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'W':
                                    if (strcmp(&(json_string->getData()[14]), "est") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_CFLSemiFinalsWest;
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
        case 'E':
            if (strncmp(&(json_string->getData()[1]), "uropaLeague", 11) == 0)
              {
                switch ((unsigned char)(json_string->getData()[12]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[13]), "inal") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_EuropaLeagueFinal;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'Q':
                        if (strcmp(&(json_string->getData()[13]), "uarterFinals") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_EuropaLeagueQuarterFinals;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strncmp(&(json_string->getData()[13]), "oundOf", 6) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[19]))
                              {
                                case '1':
                                    if (strcmp(&(json_string->getData()[20]), "6") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_EuropaLeagueRoundOf16;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case '3':
                                    if (strcmp(&(json_string->getData()[20]), "2") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_EuropaLeagueRoundOf32;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strcmp(&(json_string->getData()[13]), "emiFinals") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_EuropaLeagueSemiFinals;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "L", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'B':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'A':
                                if (strcmp(&(json_string->getData()[4]), "llStarGame") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLBAllStarGame;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'C':
                                if (strncmp(&(json_string->getData()[4]), "hampionship", 11) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[15]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[16]), "mericanLeague") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBChampionshipAmericanLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[16]), "ationalLeague") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBChampionshipNationalLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'D':
                                if (strncmp(&(json_string->getData()[4]), "ivisional", 9) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[14]), "mericanLeague") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBDivisionalAmericanLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[14]), "ationalLeague") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBDivisionalNationalLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[5]), "ldcard", 6) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[11]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(json_string->getData()[12]), "mericanLeague") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_MLBWildcardAmericanLeague;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'N':
                                                    if (strcmp(&(json_string->getData()[12]), "ationalLeague") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_MLBWildcardNationalLeague;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[5]), "rldSeries") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_MLBWorldSeries;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        if (strncmp(&(json_string->getData()[3]), "C", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[4]))
                              {
                                case 'o':
                                    if (strncmp(&(json_string->getData()[5]), "nference", 8) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[13]))
                                          {
                                            case 'F':
                                                if (strncmp(&(json_string->getData()[14]), "inals", 5) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[19]))
                                                      {
                                                        case 'E':
                                                            if (strcmp(&(json_string->getData()[20]), "astern") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_MLSConferenceFinalsEastern;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(json_string->getData()[20]), "estern") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_MLSConferenceFinalsWestern;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'Q':
                                                if (strncmp(&(json_string->getData()[14]), "uarterFinals", 12) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[26]))
                                                      {
                                                        case 'E':
                                                            if (strcmp(&(json_string->getData()[27]), "astern") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_MLSConferenceQuarterFinalsEastern;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(json_string->getData()[27]), "estern") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_MLSConferenceQuarterFinalsWestern;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'S':
                                                if (strncmp(&(json_string->getData()[14]), "emiFinals", 9) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[23]))
                                                      {
                                                        case 'E':
                                                            if (strcmp(&(json_string->getData()[24]), "astern") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_MLSConferenceSemiFinalsEastern;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(json_string->getData()[24]), "estern") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_MLSConferenceSemiFinalsWestern;
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
                                case 'u':
                                    if (strcmp(&(json_string->getData()[5]), "p") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_MLSCup;
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
        case 'N':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'B':
                    if (strncmp(&(json_string->getData()[2]), "A", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'A':
                                if (strcmp(&(json_string->getData()[4]), "llStarGame") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NBAAllStarGame;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'C':
                                if (strncmp(&(json_string->getData()[4]), "onference", 9) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'F':
                                            if (strncmp(&(json_string->getData()[14]), "inals", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[19]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[20]), "astern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NBAConferenceFinalsEastern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[20]), "estern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NBAConferenceFinalsWestern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'Q':
                                            if (strncmp(&(json_string->getData()[14]), "uarterFinals", 12) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[26]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[27]), "astern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NBAConferenceQuarterFinalsEastern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[27]), "estern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NBAConferenceQuarterFinalsWestern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            if (strncmp(&(json_string->getData()[14]), "emiFinals", 9) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[23]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[24]), "astern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NBAConferenceSemiFinalsEastern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[24]), "estern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NBAConferenceSemiFinalsWestern;
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
                            case 'F':
                                if (strcmp(&(json_string->getData()[4]), "inals") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NBAFinals;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strncmp(&(json_string->getData()[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'F':
                                if (strncmp(&(json_string->getData()[5]), "B", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'A':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'C':
                                                    if (strcmp(&(json_string->getData()[8]), "CChampionship") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBACCChampionship;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[8]), "amoBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBAlamoBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'i':
                                                            if (strcmp(&(json_string->getData()[9]), "zonaBowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBArizonaBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[9]), "edForcesBowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBArmedForcesBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'B':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[8]), "hamasBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBBahamasBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[8]), "lkBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBBelkBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'g':
                                                            if (strcmp(&(json_string->getData()[9]), "TenChampionship") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBBigTenChampionship;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'r':
                                                            if (strcmp(&(json_string->getData()[9]), "minghamBowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBBirminghamBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[8]), "caRatonBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBBocaRatonBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'C':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[8]), "PNationalChampionship") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBCFPNationalChampionship;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'a':
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'c':
                                                            if (strcmp(&(json_string->getData()[9]), "tusBowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBCactusBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[9]), "elliaBowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBCamelliaBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[8]), "trusBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBCitrusBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'n':
                                                            if (strcmp(&(json_string->getData()[9]), "ferenceUSAChampionship") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBConferenceUSAChampionship;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 't':
                                                            if (strcmp(&(json_string->getData()[9]), "tonBowlClassic") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBCottonBowlClassic;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[8]), "reBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBCureBowl;
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
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[8]), "mousIdahoPotatoBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBFamousIdahoPotatoBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[8]), "estaBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBFiestaBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[8]), "sterFarmsBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBFosterFarmsBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'G':
                                            if (strcmp(&(json_string->getData()[7]), "oDaddyBowl") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBGoDaddyBowl;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'H':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[8]), "waiiBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBHawaiiBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[8]), "artOfDallasBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBHeartOfDallasBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[8]), "lidayBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBHolidayBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[7]), "ndependenceBowl") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBIndependenceBowl;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[8]), "sVegasBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBLasVegasBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[8]), "bertyBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBLibertyBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'M':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(json_string->getData()[8]), "CChampionship") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBMACChampionship;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(json_string->getData()[8]), "CChampionship") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBMWCChampionship;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(json_string->getData()[9]), "miBeachBowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBMiamiBeachBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'l':
                                                            if (strcmp(&(json_string->getData()[9]), "itaryBowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBMilitaryBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[8]), "sicCityBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBMusicCityBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'N':
                                            if (strncmp(&(json_string->getData()[7]), "ew", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[9]))
                                                  {
                                                    case 'M':
                                                        if (strcmp(&(json_string->getData()[10]), "exicoBowl") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBNewMexicoBowl;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(json_string->getData()[10]), "rleansBowl") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBNewOrleansBowl;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'O':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[8]), "angeBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBOrangeBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[8]), "tbackBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBOutbackBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'P':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(json_string->getData()[8]), "C12Championship") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBPAC12Championship;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[8]), "achBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBPeachBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[8]), "nstripeBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBPinstripeBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[8]), "insettiaBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBPoinsettiaBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'Q':
                                            if (strcmp(&(json_string->getData()[7]), "uickLaneBowl") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBQuickLaneBowl;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'R':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[8]), "seBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBRoseBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[8]), "ssellAthleticBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBRussellAthleticBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'E':
                                                    if (strcmp(&(json_string->getData()[8]), "CChampionship") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBSECChampionship;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 't':
                                                    if (strcmp(&(json_string->getData()[8]), "PetersburgBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBStPetersburgBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'g':
                                                            if (strcmp(&(json_string->getData()[9]), "arBowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBSugarBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'n':
                                                            if (strcmp(&(json_string->getData()[9]), "Bowl") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAFBSunBowl;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[8]), "xSlayerBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBTaxSlayerBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[8]), "xasBowl") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBTexasBowl;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strncmp(&(json_string->getData()[5]), "B", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'C':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'B':
                                                    if (strncmp(&(json_string->getData()[8]), "I", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[9]))
                                                          {
                                                            case 0:
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAMBCBI;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            case 'C':
                                                                if (strcmp(&(json_string->getData()[10]), "hampionship") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBCBIChampionship;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'F':
                                                                if (strcmp(&(json_string->getData()[10]), "irstRound") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBCBIFirstRound;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'Q':
                                                                if (strcmp(&(json_string->getData()[10]), "uarterfinals") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBCBIQuarterfinals;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'S':
                                                                if (strcmp(&(json_string->getData()[10]), "emifinals") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBCBISemifinals;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'I':
                                                    if (strncmp(&(json_string->getData()[8]), "T", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[9]))
                                                          {
                                                            case 0:
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAMBCIT;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            case 'C':
                                                                if (strcmp(&(json_string->getData()[10]), "hampionship") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBCITChampionship;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'F':
                                                                if (strcmp(&(json_string->getData()[10]), "irstRound") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBCITFirstRound;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'Q':
                                                                if (strcmp(&(json_string->getData()[10]), "uarterfinals") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBCITQuarterfinals;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'S':
                                                                if (strncmp(&(json_string->getData()[10]), "e", 1) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[11]))
                                                                      {
                                                                        case 'c':
                                                                            if (strcmp(&(json_string->getData()[12]), "ondRound") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAMBCITSecondRound;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'm':
                                                                            if (strcmp(&(json_string->getData()[12]), "ifinals") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAMBCITSemifinals;
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
                                            break;
                                        case 'E':
                                            if (strncmp(&(json_string->getData()[7]), "astRegional", 11) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[18]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[19]), "lite8") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBEastRegionalElite8;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[19]), "irstRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBEastRegionalFirstRound;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(json_string->getData()[19]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(json_string->getData()[20]), "condRound") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBEastRegionalSecondRound;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(json_string->getData()[20]), "eet16") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBEastRegionalSweet16;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[19]), "hirdRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBEastRegionalThirdRound;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'F':
                                            if (strncmp(&(json_string->getData()[7]), "i", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[8]))
                                                  {
                                                    case 'n':
                                                        if (strncmp(&(json_string->getData()[9]), "alFour", 6) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[15]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[16]), "inals") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAMBFinalFourFinals;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'S':
                                                                    if (strcmp(&(json_string->getData()[16]), "emiFinals") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAMBFinalFourSemiFinals;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(json_string->getData()[9]), "stFour") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBFirstFour;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strncmp(&(json_string->getData()[7]), "idwestRegional", 14) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[21]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[22]), "lite8") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBMidwestRegionalElite8;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[22]), "irstRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBMidwestRegionalFirstRound;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(json_string->getData()[22]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(json_string->getData()[23]), "condRound") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBMidwestRegionalSecondRound;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(json_string->getData()[23]), "eet16") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBMidwestRegionalSweet16;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[22]), "hirdRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBMidwestRegionalThirdRound;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'N':
                                            if (strncmp(&(json_string->getData()[7]), "IT", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[9]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAMBNIT;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'C':
                                                        if (strcmp(&(json_string->getData()[10]), "hampionship") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBNITChampionship;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[10]), "irstRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBNITFirstRound;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'Q':
                                                        if (strcmp(&(json_string->getData()[10]), "uarterfinals") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBNITQuarterfinals;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strncmp(&(json_string->getData()[10]), "e", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[11]))
                                                              {
                                                                case 'c':
                                                                    if (strcmp(&(json_string->getData()[12]), "ondRound") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAMBNITSecondRound;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'm':
                                                                    if (strcmp(&(json_string->getData()[12]), "ifinals") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAMBNITSemifinals;
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
                                            if (strncmp(&(json_string->getData()[7]), "outhRegional", 12) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[19]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[20]), "lite8") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBSouthRegionalElite8;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[20]), "irstRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBSouthRegionalFirstRound;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(json_string->getData()[20]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(json_string->getData()[21]), "condRound") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBSouthRegionalSecondRound;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(json_string->getData()[21]), "eet16") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBSouthRegionalSweet16;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[20]), "hirdRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBSouthRegionalThirdRound;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[7]), "ournament") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAMBTournament;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strncmp(&(json_string->getData()[7]), "estRegional", 11) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[18]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[19]), "lite8") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBWestRegionalElite8;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[19]), "irstRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBWestRegionalFirstRound;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(json_string->getData()[19]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(json_string->getData()[20]), "condRound") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBWestRegionalSecondRound;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(json_string->getData()[20]), "eet16") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBWestRegionalSweet16;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[19]), "hirdRound") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBWestRegionalThirdRound;
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
                case 'F':
                    if (strncmp(&(json_string->getData()[2]), "L", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'C':
                                if (strncmp(&(json_string->getData()[4]), "onference", 9) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[14]), "FC") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLConferenceAFC;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[14]), "FC") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLConferenceNFC;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'D':
                                if (strncmp(&(json_string->getData()[4]), "ivisional", 9) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[14]), "FC") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLDivisionalAFC;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[14]), "FC") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLDivisionalNFC;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'S':
                                if (strcmp(&(json_string->getData()[4]), "uperBowl") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLSuperBowl;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[4]), "ildcard", 7) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[12]), "FC") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLWildcardAFC;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[12]), "FC") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLWildcardNFC;
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
                case 'H':
                    if (strncmp(&(json_string->getData()[2]), "L", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'A':
                                if (strncmp(&(json_string->getData()[4]), "llStarGame", 10) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[14]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NHLAllStarGame;
                                                goto open_enum_is_done;
                                              }
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[15]), "tlanticMetropolitan") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NHLAllStarGameAtlanticMetropolitan;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[15]), "inals") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NHLAllStarGameFinals;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[15]), "acificCentral") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NHLAllStarGamePacificCentral;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'C':
                                if (strncmp(&(json_string->getData()[4]), "onference", 9) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'F':
                                            if (strncmp(&(json_string->getData()[14]), "inals", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[19]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[20]), "astern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NHLConferenceFinalsEastern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[20]), "estern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NHLConferenceFinalsWestern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'Q':
                                            if (strncmp(&(json_string->getData()[14]), "uarterFinals", 12) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[26]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[27]), "astern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NHLConferenceQuarterFinalsEastern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[27]), "estern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NHLConferenceQuarterFinalsWestern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            if (strncmp(&(json_string->getData()[14]), "emiFinals", 9) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[23]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[24]), "astern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NHLConferenceSemiFinalsEastern;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[24]), "estern") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NHLConferenceSemiFinalsWestern;
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
                                if (strcmp(&(json_string->getData()[4]), "tanleyCup") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NHLStanleyCup;
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
            if (strncmp(&(json_string->getData()[1]), "EFA", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'C':
                        if (strncmp(&(json_string->getData()[5]), "hampionsLeague", 14) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[19]))
                              {
                                case 'F':
                                    if (strcmp(&(json_string->getData()[20]), "inal") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_UEFAChampionsLeagueFinal;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'Q':
                                    if (strcmp(&(json_string->getData()[20]), "uarterFinals") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_UEFAChampionsLeagueQuarterFinals;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'R':
                                    if (strcmp(&(json_string->getData()[20]), "oundOf16") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_UEFAChampionsLeagueRoundOf16;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    if (strcmp(&(json_string->getData()[20]), "emiFinals") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_UEFAChampionsLeagueSemiFinals;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strcmp(&(json_string->getData()[5]), "uperCup") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_UEFASuperCup;
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
    setValue(the_open_enum);
  }

SportsPlayoffSpecialGameJSON::SportsPlayoffSpecialGameJSON(void) :
        flagHasValue(false)
  {
  }

SportsPlayoffSpecialGameJSON::SportsPlayoffSpecialGameJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsPlayoffSpecialGameJSON::SportsPlayoffSpecialGameJSON(const char *init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value);
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

SportsPlayoffSpecialGameJSON::SportsPlayoffSpecialGameJSON(std::string init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value.c_str());
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

SportsPlayoffSpecialGameJSON::SportsPlayoffSpecialGameJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsPlayoffSpecialGameJSON::~SportsPlayoffSpecialGameJSON(void)
  {
  }

bool SportsPlayoffSpecialGameJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsPlayoffSpecialGameJSON::TypeValue SportsPlayoffSpecialGameJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsPlayoffSpecialGameJSON::TypeValue SportsPlayoffSpecialGameJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsPlayoffSpecialGameJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayoffSpecialGameJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsPlayoffSpecialGameJSON *SportsPlayoffSpecialGameJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffSpecialGameJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool> generator("Type SportsPlayoffSpecialGame", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
