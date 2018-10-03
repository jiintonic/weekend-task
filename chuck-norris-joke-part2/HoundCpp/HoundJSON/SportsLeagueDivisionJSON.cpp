/* file "SportsLeagueDivisionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueDivisionJSON.h"

#include "SportsLeagueDivisionJSON.h"


SportsLeagueDivisionJSON::TypeValue::TypeValue(void)
  {
  }

SportsLeagueDivisionJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsLeagueDivisionJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsLeagueDivisionJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsLeagueDivisionJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsLeagueDivisionJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsLeagueDivisionJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsLeagueDivisionJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsLeagueDivisionJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsLeagueDivisionJSON::TypeValueKnownValues SportsLeagueDivisionJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strncmp(&(chars[1]), "FL", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'E':
                        if (strcmp(&(chars[4]), "ast") == 0)
                            return Value_CFLEast;
                        break;
                    case 'W':
                        if (strcmp(&(chars[4]), "est") == 0)
                            return Value_CFLWest;
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
                                if (strncmp(&(chars[4]), "mericanLeague", 13) == 0)
                                  {
                                    switch ((unsigned char)(chars[17]))
                                      {
                                        case 0:
                                            return Value_MLBAmericanLeague;
                                        case 'C':
                                            if (strcmp(&(chars[18]), "entral") == 0)
                                                return Value_MLBAmericanLeagueCentral;
                                            break;
                                        case 'E':
                                            if (strcmp(&(chars[18]), "ast") == 0)
                                                return Value_MLBAmericanLeagueEast;
                                            break;
                                        case 'W':
                                            if (strcmp(&(chars[18]), "est") == 0)
                                                return Value_MLBAmericanLeagueWest;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'N':
                                if (strncmp(&(chars[4]), "ationalLeague", 13) == 0)
                                  {
                                    switch ((unsigned char)(chars[17]))
                                      {
                                        case 0:
                                            return Value_MLBNationalLeague;
                                        case 'C':
                                            if (strcmp(&(chars[18]), "entral") == 0)
                                                return Value_MLBNationalLeagueCentral;
                                            break;
                                        case 'E':
                                            if (strcmp(&(chars[18]), "ast") == 0)
                                                return Value_MLBNationalLeagueEast;
                                            break;
                                        case 'W':
                                            if (strcmp(&(chars[18]), "est") == 0)
                                                return Value_MLBNationalLeagueWest;
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
                    case 'S':
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'E':
                                if (strcmp(&(chars[4]), "astern") == 0)
                                    return Value_MLSEastern;
                                break;
                            case 'W':
                                if (strcmp(&(chars[4]), "estern") == 0)
                                    return Value_MLSWestern;
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
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'B':
                    if (strncmp(&(chars[2]), "A", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'E':
                                if (strncmp(&(chars[4]), "astern", 6) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 0:
                                            return Value_NBAEastern;
                                        case 'A':
                                            if (strcmp(&(chars[11]), "tlantic") == 0)
                                                return Value_NBAEasternAtlantic;
                                            break;
                                        case 'C':
                                            if (strcmp(&(chars[11]), "entral") == 0)
                                                return Value_NBAEasternCentral;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[11]), "outheast") == 0)
                                                return Value_NBAEasternSoutheast;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[4]), "estern", 6) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 0:
                                            return Value_NBAWestern;
                                        case 'N':
                                            if (strcmp(&(chars[11]), "orthwest") == 0)
                                                return Value_NBAWesternNorthwest;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[11]), "acific") == 0)
                                                return Value_NBAWesternPacific;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[11]), "outhwest") == 0)
                                                return Value_NBAWesternSouthwest;
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
                case 'C':
                    if (strncmp(&(chars[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'F':
                                if (strncmp(&(chars[5]), "BF", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[7]))
                                      {
                                        case 'B':
                                            if (strncmp(&(chars[8]), "S", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[9]))
                                                  {
                                                    case 0:
                                                        return Value_NCAAFBFBS;
                                                    case 'A':
                                                        switch ((unsigned char)(chars[10]))
                                                          {
                                                            case 'm':
                                                                if (strncmp(&(chars[11]), "ericanAthleticConference", 24) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[35]))
                                                                      {
                                                                        case 0:
                                                                            return Value_NCAAFBFBSAmericanAthleticConference;
                                                                        case 'E':
                                                                            if (strcmp(&(chars[36]), "ast") == 0)
                                                                                return Value_NCAAFBFBSAmericanAthleticConferenceEast;
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(chars[36]), "est") == 0)
                                                                                return Value_NCAAFBFBSAmericanAthleticConferenceWest;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 't':
                                                                if (strncmp(&(chars[11]), "lanticCoast", 11) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[22]))
                                                                      {
                                                                        case 0:
                                                                            return Value_NCAAFBFBSAtlanticCoast;
                                                                        case 'A':
                                                                            if (strcmp(&(chars[23]), "tlantic") == 0)
                                                                                return Value_NCAAFBFBSAtlanticCoastAtlantic;
                                                                            break;
                                                                        case 'C':
                                                                            if (strcmp(&(chars[23]), "oastal") == 0)
                                                                                return Value_NCAAFBFBSAtlanticCoastCoastal;
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
                                                    case 'B':
                                                        if (strncmp(&(chars[10]), "ig1", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[13]))
                                                              {
                                                                case '0':
                                                                    switch ((unsigned char)(chars[14]))
                                                                      {
                                                                        case 0:
                                                                            return Value_NCAAFBFBSBig10;
                                                                        case 'E':
                                                                            if (strcmp(&(chars[15]), "ast") == 0)
                                                                                return Value_NCAAFBFBSBig10East;
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(chars[15]), "est") == 0)
                                                                                return Value_NCAAFBFBSBig10West;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                    break;
                                                                case '2':
                                                                    if (chars[14] == 0)
                                                                        return Value_NCAAFBFBSBig12;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'C':
                                                        if (strncmp(&(chars[10]), "onferenceUSA", 12) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[22]))
                                                              {
                                                                case 0:
                                                                    return Value_NCAAFBFBSConferenceUSA;
                                                                case 'E':
                                                                    if (strcmp(&(chars[23]), "ast") == 0)
                                                                        return Value_NCAAFBFBSConferenceUSAEast;
                                                                    break;
                                                                case 'W':
                                                                    if (strcmp(&(chars[23]), "est") == 0)
                                                                        return Value_NCAAFBFBSConferenceUSAWest;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(chars[10]), "ndependents") == 0)
                                                            return Value_NCAAFBFBSIndependents;
                                                        break;
                                                    case 'M':
                                                        switch ((unsigned char)(chars[10]))
                                                          {
                                                            case 'i':
                                                                if (strncmp(&(chars[11]), "dAmerican", 9) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[20]))
                                                                      {
                                                                        case 0:
                                                                            return Value_NCAAFBFBSMidAmerican;
                                                                        case 'E':
                                                                            if (strcmp(&(chars[21]), "ast") == 0)
                                                                                return Value_NCAAFBFBSMidAmericanEast;
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(chars[21]), "est") == 0)
                                                                                return Value_NCAAFBFBSMidAmericanWest;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 'o':
                                                                if (strncmp(&(chars[11]), "untainWest", 10) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[21]))
                                                                      {
                                                                        case 0:
                                                                            return Value_NCAAFBFBSMountainWest;
                                                                        case 'M':
                                                                            if (strcmp(&(chars[22]), "ountain") == 0)
                                                                                return Value_NCAAFBFBSMountainWestMountain;
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(chars[22]), "est") == 0)
                                                                                return Value_NCAAFBFBSMountainWestWest;
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
                                                    case 'P':
                                                        if (strncmp(&(chars[10]), "ac12", 4) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[14]))
                                                              {
                                                                case 0:
                                                                    return Value_NCAAFBFBSPac12;
                                                                case 'N':
                                                                    if (strcmp(&(chars[15]), "orth") == 0)
                                                                        return Value_NCAAFBFBSPac12North;
                                                                    break;
                                                                case 'S':
                                                                    if (strcmp(&(chars[15]), "outh") == 0)
                                                                        return Value_NCAAFBFBSPac12South;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(chars[10]))
                                                          {
                                                            case 'o':
                                                                if (strncmp(&(chars[11]), "utheastern", 10) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[21]))
                                                                      {
                                                                        case 0:
                                                                            return Value_NCAAFBFBSSoutheastern;
                                                                        case 'E':
                                                                            if (strcmp(&(chars[22]), "ast") == 0)
                                                                                return Value_NCAAFBFBSSoutheasternEast;
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(chars[22]), "est") == 0)
                                                                                return Value_NCAAFBFBSSoutheasternWest;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 'u':
                                                                if (strcmp(&(chars[11]), "nBelt") == 0)
                                                                    return Value_NCAAFBFBSSunBelt;
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
                                        case 'C':
                                            if (strncmp(&(chars[8]), "S", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[9]))
                                                  {
                                                    case 0:
                                                        return Value_NCAAFBFCS;
                                                    case 'B':
                                                        if (strncmp(&(chars[10]), "igS", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[13]))
                                                              {
                                                                case 'k':
                                                                    if (strcmp(&(chars[14]), "y") == 0)
                                                                        return Value_NCAAFBFCSBigSky;
                                                                    break;
                                                                case 'o':
                                                                    if (strcmp(&(chars[14]), "uth") == 0)
                                                                        return Value_NCAAFBFCSBigSouth;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'C':
                                                        if (strcmp(&(chars[10]), "olonialAthleticAssociation") == 0)
                                                            return Value_NCAAFBFCSColonialAthleticAssociation;
                                                        break;
                                                    case 'I':
                                                        switch ((unsigned char)(chars[10]))
                                                          {
                                                            case 'n':
                                                                if (strcmp(&(chars[11]), "dependents") == 0)
                                                                    return Value_NCAAFBFCSIndependents;
                                                                break;
                                                            case 'v':
                                                                if (strcmp(&(chars[11]), "yLeague") == 0)
                                                                    return Value_NCAAFBFCSIvyLeague;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'M':
                                                        if (strncmp(&(chars[10]), "i", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[11]))
                                                              {
                                                                case 'd':
                                                                    if (strcmp(&(chars[12]), "EasternAthletic") == 0)
                                                                        return Value_NCAAFBFCSMidEasternAthletic;
                                                                    break;
                                                                case 's':
                                                                    if (strcmp(&(chars[12]), "souriValley") == 0)
                                                                        return Value_NCAAFBFCSMissouriValley;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'N':
                                                        if (strcmp(&(chars[10]), "ortheast") == 0)
                                                            return Value_NCAAFBFCSNortheast;
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(chars[10]), "hioValley") == 0)
                                                            return Value_NCAAFBFCSOhioValley;
                                                        break;
                                                    case 'P':
                                                        switch ((unsigned char)(chars[10]))
                                                          {
                                                            case 'a':
                                                                if (strcmp(&(chars[11]), "triotLeague") == 0)
                                                                    return Value_NCAAFBFCSPatriotLeague;
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(chars[11]), "oneerLeague") == 0)
                                                                    return Value_NCAAFBFCSPioneerLeague;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'S':
                                                        if (strncmp(&(chars[10]), "outh", 4) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[14]))
                                                              {
                                                                case 'e':
                                                                    if (strcmp(&(chars[15]), "rn") == 0)
                                                                        return Value_NCAAFBFCSSouthern;
                                                                    break;
                                                                case 'l':
                                                                    if (strcmp(&(chars[15]), "and") == 0)
                                                                        return Value_NCAAFBFCSSouthland;
                                                                    break;
                                                                case 'w':
                                                                    if (strncmp(&(chars[15]), "esternAthletic", 14) == 0)
                                                                      {
                                                                        switch ((unsigned char)(chars[29]))
                                                                          {
                                                                            case 0:
                                                                                return Value_NCAAFBFCSSouthwesternAthletic;
                                                                            case 'E':
                                                                                if (strcmp(&(chars[30]), "ast") == 0)
                                                                                    return Value_NCAAFBFCSSouthwesternAthleticEast;
                                                                                break;
                                                                            case 'W':
                                                                                if (strcmp(&(chars[30]), "est") == 0)
                                                                                    return Value_NCAAFBFCSSouthwesternAthleticWest;
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
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strncmp(&(chars[5]), "BDivisionI", 10) == 0)
                                  {
                                    switch ((unsigned char)(chars[15]))
                                      {
                                        case 0:
                                            return Value_NCAAMBDivisionI;
                                        case 'A':
                                            switch ((unsigned char)(chars[16]))
                                              {
                                                case 'm':
                                                    if (strncmp(&(chars[17]), "erica", 5) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[22]))
                                                          {
                                                            case 'E':
                                                                if (strcmp(&(chars[23]), "ast") == 0)
                                                                    return Value_NCAAMBDivisionIAmericaEast;
                                                                break;
                                                            case 'n':
                                                                if (strcmp(&(chars[23]), "AthleticConference") == 0)
                                                                    return Value_NCAAMBDivisionIAmericanAthleticConference;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 't':
                                                    if (strncmp(&(chars[17]), "lantic", 6) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[23]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(chars[24]), "0") == 0)
                                                                    return Value_NCAAMBDivisionIAtlantic10;
                                                                break;
                                                            case 'C':
                                                                if (strcmp(&(chars[24]), "oast") == 0)
                                                                    return Value_NCAAMBDivisionIAtlanticCoast;
                                                                break;
                                                            case 'S':
                                                                if (strcmp(&(chars[24]), "un") == 0)
                                                                    return Value_NCAAMBDivisionIAtlanticSun;
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
                                        case 'B':
                                            if (strncmp(&(chars[16]), "ig", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[18]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(chars[19]))
                                                          {
                                                            case '0':
                                                                if (chars[20] == 0)
                                                                    return Value_NCAAMBDivisionIBig10;
                                                                break;
                                                            case '2':
                                                                if (chars[20] == 0)
                                                                    return Value_NCAAMBDivisionIBig12;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'E':
                                                        if (strcmp(&(chars[19]), "ast") == 0)
                                                            return Value_NCAAMBDivisionIBigEast;
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(chars[19]))
                                                          {
                                                            case 'k':
                                                                if (strcmp(&(chars[20]), "y") == 0)
                                                                    return Value_NCAAMBDivisionIBigSky;
                                                                break;
                                                            case 'o':
                                                                if (strcmp(&(chars[20]), "uth") == 0)
                                                                    return Value_NCAAMBDivisionIBigSouth;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[19]), "est") == 0)
                                                            return Value_NCAAMBDivisionIBigWest;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'C':
                                            if (strncmp(&(chars[16]), "o", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[17]))
                                                  {
                                                    case 'l':
                                                        if (strcmp(&(chars[18]), "onialAthleticAssociation") == 0)
                                                            return Value_NCAAMBDivisionIColonialAthleticAssociation;
                                                        break;
                                                    case 'n':
                                                        if (strcmp(&(chars[18]), "ferenceUSA") == 0)
                                                            return Value_NCAAMBDivisionIConferenceUSA;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[16]), "orizon") == 0)
                                                return Value_NCAAMBDivisionIHorizon;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[16]), "vyLeague") == 0)
                                                return Value_NCAAMBDivisionIIvyLeague;
                                            break;
                                        case 'M':
                                            switch ((unsigned char)(chars[16]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[17]), "troAtlanticAthletic") == 0)
                                                        return Value_NCAAMBDivisionIMetroAtlanticAthletic;
                                                    break;
                                                case 'i':
                                                    switch ((unsigned char)(chars[17]))
                                                      {
                                                        case 'd':
                                                            switch ((unsigned char)(chars[18]))
                                                              {
                                                                case 'A':
                                                                    if (strncmp(&(chars[19]), "merican", 7) == 0)
                                                                      {
                                                                        switch ((unsigned char)(chars[26]))
                                                                          {
                                                                            case 0:
                                                                                return Value_NCAAMBDivisionIMidAmerican;
                                                                            case 'E':
                                                                                if (strcmp(&(chars[27]), "ast") == 0)
                                                                                    return Value_NCAAMBDivisionIMidAmericanEast;
                                                                                break;
                                                                            case 'W':
                                                                                if (strcmp(&(chars[27]), "est") == 0)
                                                                                    return Value_NCAAMBDivisionIMidAmericanWest;
                                                                                break;
                                                                            default:
                                                                                break;
                                                                          }
                                                                      }
                                                                    break;
                                                                case 'E':
                                                                    if (strcmp(&(chars[19]), "astern") == 0)
                                                                        return Value_NCAAMBDivisionIMidEastern;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                            break;
                                                        case 's':
                                                            if (strcmp(&(chars[18]), "souriValley") == 0)
                                                                return Value_NCAAMBDivisionIMissouriValley;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[17]), "untainWest") == 0)
                                                        return Value_NCAAMBDivisionIMountainWest;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[16]), "ortheast") == 0)
                                                return Value_NCAAMBDivisionINortheast;
                                            break;
                                        case 'O':
                                            if (strncmp(&(chars[16]), "hioValley", 9) == 0)
                                              {
                                                switch ((unsigned char)(chars[25]))
                                                  {
                                                    case 0:
                                                        return Value_NCAAMBDivisionIOhioValley;
                                                    case 'E':
                                                        if (strcmp(&(chars[26]), "ast") == 0)
                                                            return Value_NCAAMBDivisionIOhioValleyEast;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[26]), "est") == 0)
                                                            return Value_NCAAMBDivisionIOhioValleyWest;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'P':
                                            if (strncmp(&(chars[16]), "a", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[17]))
                                                  {
                                                    case 'c':
                                                        if (strcmp(&(chars[18]), "12") == 0)
                                                            return Value_NCAAMBDivisionIPac12;
                                                        break;
                                                    case 't':
                                                        if (strcmp(&(chars[18]), "riotLeague") == 0)
                                                            return Value_NCAAMBDivisionIPatriotLeague;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[16]))
                                              {
                                                case 'o':
                                                    if (strncmp(&(chars[17]), "uth", 3) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[20]))
                                                          {
                                                            case 'e':
                                                                switch ((unsigned char)(chars[21]))
                                                                  {
                                                                    case 'a':
                                                                        if (strcmp(&(chars[22]), "stern") == 0)
                                                                            return Value_NCAAMBDivisionISoutheastern;
                                                                        break;
                                                                    case 'r':
                                                                        if (strcmp(&(chars[22]), "n") == 0)
                                                                            return Value_NCAAMBDivisionISouthern;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            case 'l':
                                                                if (strcmp(&(chars[21]), "and") == 0)
                                                                    return Value_NCAAMBDivisionISouthland;
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(chars[21]), "esternAtlantic") == 0)
                                                                    return Value_NCAAMBDivisionISouthwesternAtlantic;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'u':
                                                    switch ((unsigned char)(chars[17]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[18]), "mitLeague") == 0)
                                                                return Value_NCAAMBDivisionISummitLeague;
                                                            break;
                                                        case 'n':
                                                            if (strcmp(&(chars[18]), "Belt") == 0)
                                                                return Value_NCAAMBDivisionISunBelt;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'W':
                                            if (strncmp(&(chars[16]), "est", 3) == 0)
                                              {
                                                switch ((unsigned char)(chars[19]))
                                                  {
                                                    case 'C':
                                                        if (strcmp(&(chars[20]), "oast") == 0)
                                                            return Value_NCAAMBDivisionIWestCoast;
                                                        break;
                                                    case 'e':
                                                        if (strcmp(&(chars[20]), "rnAthletic") == 0)
                                                            return Value_NCAAMBDivisionIWesternAthletic;
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
                            case 'A':
                                if (strncmp(&(chars[4]), "FC", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 0:
                                            return Value_NFLAFC;
                                        case 'E':
                                            if (strcmp(&(chars[7]), "ast") == 0)
                                                return Value_NFLAFCEast;
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[7]), "orth") == 0)
                                                return Value_NFLAFCNorth;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[7]), "outh") == 0)
                                                return Value_NFLAFCSouth;
                                            break;
                                        case 'W':
                                            if (strcmp(&(chars[7]), "est") == 0)
                                                return Value_NFLAFCWest;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'N':
                                if (strncmp(&(chars[4]), "FC", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 0:
                                            return Value_NFLNFC;
                                        case 'E':
                                            if (strcmp(&(chars[7]), "ast") == 0)
                                                return Value_NFLNFCEast;
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[7]), "orth") == 0)
                                                return Value_NFLNFCNorth;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[7]), "outh") == 0)
                                                return Value_NFLNFCSouth;
                                            break;
                                        case 'W':
                                            if (strcmp(&(chars[7]), "est") == 0)
                                                return Value_NFLNFCWest;
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
                            case 'E':
                                if (strncmp(&(chars[4]), "astern", 6) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 0:
                                            return Value_NHLEastern;
                                        case 'A':
                                            if (strcmp(&(chars[11]), "tlantic") == 0)
                                                return Value_NHLEasternAtlantic;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[11]), "etropolitan") == 0)
                                                return Value_NHLEasternMetropolitan;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[4]), "estern", 6) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 0:
                                            return Value_NHLWestern;
                                        case 'C':
                                            if (strcmp(&(chars[11]), "entral") == 0)
                                                return Value_NHLWesternCentral;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[11]), "acific") == 0)
                                                return Value_NHLWesternPacific;
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
        default:
            break;
      }
    return Value__none;
  }

const char *SportsLeagueDivisionJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_MLBNationalLeague:
            return "MLBNationalLeague";
        case Value_MLBNationalLeagueEast:
            return "MLBNationalLeagueEast";
        case Value_MLBNationalLeagueCentral:
            return "MLBNationalLeagueCentral";
        case Value_MLBNationalLeagueWest:
            return "MLBNationalLeagueWest";
        case Value_MLBAmericanLeague:
            return "MLBAmericanLeague";
        case Value_MLBAmericanLeagueEast:
            return "MLBAmericanLeagueEast";
        case Value_MLBAmericanLeagueCentral:
            return "MLBAmericanLeagueCentral";
        case Value_MLBAmericanLeagueWest:
            return "MLBAmericanLeagueWest";
        case Value_NBAEastern:
            return "NBAEastern";
        case Value_NBAEasternAtlantic:
            return "NBAEasternAtlantic";
        case Value_NBAEasternCentral:
            return "NBAEasternCentral";
        case Value_NBAEasternSoutheast:
            return "NBAEasternSoutheast";
        case Value_NBAWestern:
            return "NBAWestern";
        case Value_NBAWesternNorthwest:
            return "NBAWesternNorthwest";
        case Value_NBAWesternPacific:
            return "NBAWesternPacific";
        case Value_NBAWesternSouthwest:
            return "NBAWesternSouthwest";
        case Value_NFLAFC:
            return "NFLAFC";
        case Value_NFLAFCEast:
            return "NFLAFCEast";
        case Value_NFLAFCNorth:
            return "NFLAFCNorth";
        case Value_NFLAFCSouth:
            return "NFLAFCSouth";
        case Value_NFLAFCWest:
            return "NFLAFCWest";
        case Value_NFLNFC:
            return "NFLNFC";
        case Value_NFLNFCEast:
            return "NFLNFCEast";
        case Value_NFLNFCNorth:
            return "NFLNFCNorth";
        case Value_NFLNFCSouth:
            return "NFLNFCSouth";
        case Value_NFLNFCWest:
            return "NFLNFCWest";
        case Value_NHLEastern:
            return "NHLEastern";
        case Value_NHLEasternAtlantic:
            return "NHLEasternAtlantic";
        case Value_NHLEasternMetropolitan:
            return "NHLEasternMetropolitan";
        case Value_NHLWestern:
            return "NHLWestern";
        case Value_NHLWesternCentral:
            return "NHLWesternCentral";
        case Value_NHLWesternPacific:
            return "NHLWesternPacific";
        case Value_NCAAMBDivisionI:
            return "NCAAMBDivisionI";
        case Value_NCAAMBDivisionIAmericaEast:
            return "NCAAMBDivisionIAmericaEast";
        case Value_NCAAMBDivisionIAmericanAthleticConference:
            return "NCAAMBDivisionIAmericanAthleticConference";
        case Value_NCAAMBDivisionIAtlantic10:
            return "NCAAMBDivisionIAtlantic10";
        case Value_NCAAMBDivisionIAtlanticCoast:
            return "NCAAMBDivisionIAtlanticCoast";
        case Value_NCAAMBDivisionIAtlanticSun:
            return "NCAAMBDivisionIAtlanticSun";
        case Value_NCAAMBDivisionIBig10:
            return "NCAAMBDivisionIBig10";
        case Value_NCAAMBDivisionIBig12:
            return "NCAAMBDivisionIBig12";
        case Value_NCAAMBDivisionIBigEast:
            return "NCAAMBDivisionIBigEast";
        case Value_NCAAMBDivisionIBigSky:
            return "NCAAMBDivisionIBigSky";
        case Value_NCAAMBDivisionIBigSouth:
            return "NCAAMBDivisionIBigSouth";
        case Value_NCAAMBDivisionIBigWest:
            return "NCAAMBDivisionIBigWest";
        case Value_NCAAMBDivisionIColonialAthleticAssociation:
            return "NCAAMBDivisionIColonialAthleticAssociation";
        case Value_NCAAMBDivisionIConferenceUSA:
            return "NCAAMBDivisionIConferenceUSA";
        case Value_NCAAMBDivisionIHorizon:
            return "NCAAMBDivisionIHorizon";
        case Value_NCAAMBDivisionIIvyLeague:
            return "NCAAMBDivisionIIvyLeague";
        case Value_NCAAMBDivisionIMetroAtlanticAthletic:
            return "NCAAMBDivisionIMetroAtlanticAthletic";
        case Value_NCAAMBDivisionIMidAmerican:
            return "NCAAMBDivisionIMidAmerican";
        case Value_NCAAMBDivisionIMidAmericanEast:
            return "NCAAMBDivisionIMidAmericanEast";
        case Value_NCAAMBDivisionIMidAmericanWest:
            return "NCAAMBDivisionIMidAmericanWest";
        case Value_NCAAMBDivisionIMidEastern:
            return "NCAAMBDivisionIMidEastern";
        case Value_NCAAMBDivisionIMissouriValley:
            return "NCAAMBDivisionIMissouriValley";
        case Value_NCAAMBDivisionIMountainWest:
            return "NCAAMBDivisionIMountainWest";
        case Value_NCAAMBDivisionINortheast:
            return "NCAAMBDivisionINortheast";
        case Value_NCAAMBDivisionIOhioValley:
            return "NCAAMBDivisionIOhioValley";
        case Value_NCAAMBDivisionIOhioValleyEast:
            return "NCAAMBDivisionIOhioValleyEast";
        case Value_NCAAMBDivisionIOhioValleyWest:
            return "NCAAMBDivisionIOhioValleyWest";
        case Value_NCAAMBDivisionIPac12:
            return "NCAAMBDivisionIPac12";
        case Value_NCAAMBDivisionIPatriotLeague:
            return "NCAAMBDivisionIPatriotLeague";
        case Value_NCAAMBDivisionISoutheastern:
            return "NCAAMBDivisionISoutheastern";
        case Value_NCAAMBDivisionISouthern:
            return "NCAAMBDivisionISouthern";
        case Value_NCAAMBDivisionISouthland:
            return "NCAAMBDivisionISouthland";
        case Value_NCAAMBDivisionISouthwesternAtlantic:
            return "NCAAMBDivisionISouthwesternAtlantic";
        case Value_NCAAMBDivisionISummitLeague:
            return "NCAAMBDivisionISummitLeague";
        case Value_NCAAMBDivisionISunBelt:
            return "NCAAMBDivisionISunBelt";
        case Value_NCAAMBDivisionIWestCoast:
            return "NCAAMBDivisionIWestCoast";
        case Value_NCAAMBDivisionIWesternAthletic:
            return "NCAAMBDivisionIWesternAthletic";
        case Value_NCAAFBFBS:
            return "NCAAFBFBS";
        case Value_NCAAFBFBSAtlanticCoast:
            return "NCAAFBFBSAtlanticCoast";
        case Value_NCAAFBFBSAtlanticCoastAtlantic:
            return "NCAAFBFBSAtlanticCoastAtlantic";
        case Value_NCAAFBFBSAtlanticCoastCoastal:
            return "NCAAFBFBSAtlanticCoastCoastal";
        case Value_NCAAFBFBSAmericanAthleticConference:
            return "NCAAFBFBSAmericanAthleticConference";
        case Value_NCAAFBFBSAmericanAthleticConferenceWest:
            return "NCAAFBFBSAmericanAthleticConferenceWest";
        case Value_NCAAFBFBSAmericanAthleticConferenceEast:
            return "NCAAFBFBSAmericanAthleticConferenceEast";
        case Value_NCAAFBFBSBig12:
            return "NCAAFBFBSBig12";
        case Value_NCAAFBFBSBig10:
            return "NCAAFBFBSBig10";
        case Value_NCAAFBFBSBig10East:
            return "NCAAFBFBSBig10East";
        case Value_NCAAFBFBSBig10West:
            return "NCAAFBFBSBig10West";
        case Value_NCAAFBFBSConferenceUSA:
            return "NCAAFBFBSConferenceUSA";
        case Value_NCAAFBFBSConferenceUSAEast:
            return "NCAAFBFBSConferenceUSAEast";
        case Value_NCAAFBFBSConferenceUSAWest:
            return "NCAAFBFBSConferenceUSAWest";
        case Value_NCAAFBFBSIndependents:
            return "NCAAFBFBSIndependents";
        case Value_NCAAFBFBSMidAmerican:
            return "NCAAFBFBSMidAmerican";
        case Value_NCAAFBFBSMidAmericanWest:
            return "NCAAFBFBSMidAmericanWest";
        case Value_NCAAFBFBSMidAmericanEast:
            return "NCAAFBFBSMidAmericanEast";
        case Value_NCAAFBFBSMountainWest:
            return "NCAAFBFBSMountainWest";
        case Value_NCAAFBFBSMountainWestWest:
            return "NCAAFBFBSMountainWestWest";
        case Value_NCAAFBFBSMountainWestMountain:
            return "NCAAFBFBSMountainWestMountain";
        case Value_NCAAFBFBSPac12:
            return "NCAAFBFBSPac12";
        case Value_NCAAFBFBSPac12North:
            return "NCAAFBFBSPac12North";
        case Value_NCAAFBFBSPac12South:
            return "NCAAFBFBSPac12South";
        case Value_NCAAFBFBSSoutheastern:
            return "NCAAFBFBSSoutheastern";
        case Value_NCAAFBFBSSoutheasternWest:
            return "NCAAFBFBSSoutheasternWest";
        case Value_NCAAFBFBSSoutheasternEast:
            return "NCAAFBFBSSoutheasternEast";
        case Value_NCAAFBFBSSunBelt:
            return "NCAAFBFBSSunBelt";
        case Value_NCAAFBFCS:
            return "NCAAFBFCS";
        case Value_NCAAFBFCSBigSky:
            return "NCAAFBFCSBigSky";
        case Value_NCAAFBFCSBigSouth:
            return "NCAAFBFCSBigSouth";
        case Value_NCAAFBFCSColonialAthleticAssociation:
            return "NCAAFBFCSColonialAthleticAssociation";
        case Value_NCAAFBFCSIndependents:
            return "NCAAFBFCSIndependents";
        case Value_NCAAFBFCSIvyLeague:
            return "NCAAFBFCSIvyLeague";
        case Value_NCAAFBFCSMidEasternAthletic:
            return "NCAAFBFCSMidEasternAthletic";
        case Value_NCAAFBFCSMissouriValley:
            return "NCAAFBFCSMissouriValley";
        case Value_NCAAFBFCSNortheast:
            return "NCAAFBFCSNortheast";
        case Value_NCAAFBFCSOhioValley:
            return "NCAAFBFCSOhioValley";
        case Value_NCAAFBFCSPatriotLeague:
            return "NCAAFBFCSPatriotLeague";
        case Value_NCAAFBFCSPioneerLeague:
            return "NCAAFBFCSPioneerLeague";
        case Value_NCAAFBFCSSouthern:
            return "NCAAFBFCSSouthern";
        case Value_NCAAFBFCSSouthland:
            return "NCAAFBFCSSouthland";
        case Value_NCAAFBFCSSouthwesternAthletic:
            return "NCAAFBFCSSouthwesternAthletic";
        case Value_NCAAFBFCSSouthwesternAthleticWest:
            return "NCAAFBFCSSouthwesternAthleticWest";
        case Value_NCAAFBFCSSouthwesternAthleticEast:
            return "NCAAFBFCSSouthwesternAthleticEast";
        case Value_MLSEastern:
            return "MLSEastern";
        case Value_MLSWestern:
            return "MLSWestern";
        case Value_CFLEast:
            return "CFLEast";
        case Value_CFLWest:
            return "CFLWest";
        default:
            assert(false);
            return NULL;
      }
  }

SportsLeagueDivisionJSON::SportsLeagueDivisionJSON(const SportsLeagueDivisionJSON &)
  {
    assert(false);
  }

SportsLeagueDivisionJSON &SportsLeagueDivisionJSON::operator=(const SportsLeagueDivisionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueDivisionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsLeagueDivisionJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strncmp(&(json_string->getData()[1]), "FL", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'E':
                        if (strcmp(&(json_string->getData()[4]), "ast") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_CFLEast;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[4]), "est") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_CFLWest;
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
                                if (strncmp(&(json_string->getData()[4]), "mericanLeague", 13) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[17]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_MLBAmericanLeague;
                                                goto open_enum_is_done;
                                              }
                                        case 'C':
                                            if (strcmp(&(json_string->getData()[18]), "entral") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBAmericanLeagueCentral;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'E':
                                            if (strcmp(&(json_string->getData()[18]), "ast") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBAmericanLeagueEast;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strcmp(&(json_string->getData()[18]), "est") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBAmericanLeagueWest;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'N':
                                if (strncmp(&(json_string->getData()[4]), "ationalLeague", 13) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[17]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_MLBNationalLeague;
                                                goto open_enum_is_done;
                                              }
                                        case 'C':
                                            if (strcmp(&(json_string->getData()[18]), "entral") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBNationalLeagueCentral;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'E':
                                            if (strcmp(&(json_string->getData()[18]), "ast") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBNationalLeagueEast;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strcmp(&(json_string->getData()[18]), "est") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MLBNationalLeagueWest;
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
                    case 'S':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'E':
                                if (strcmp(&(json_string->getData()[4]), "astern") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLSEastern;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[4]), "estern") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLSWestern;
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
        case 'N':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'B':
                    if (strncmp(&(json_string->getData()[2]), "A", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'E':
                                if (strncmp(&(json_string->getData()[4]), "astern", 6) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NBAEastern;
                                                goto open_enum_is_done;
                                              }
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[11]), "tlantic") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NBAEasternAtlantic;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'C':
                                            if (strcmp(&(json_string->getData()[11]), "entral") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NBAEasternCentral;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[11]), "outheast") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NBAEasternSoutheast;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[4]), "estern", 6) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NBAWestern;
                                                goto open_enum_is_done;
                                              }
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[11]), "orthwest") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NBAWesternNorthwest;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[11]), "acific") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NBAWesternPacific;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[11]), "outhwest") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NBAWesternSouthwest;
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
                case 'C':
                    if (strncmp(&(json_string->getData()[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'F':
                                if (strncmp(&(json_string->getData()[5]), "BF", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[7]))
                                      {
                                        case 'B':
                                            if (strncmp(&(json_string->getData()[8]), "S", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[9]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBFBS;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'A':
                                                        switch ((unsigned char)(json_string->getData()[10]))
                                                          {
                                                            case 'm':
                                                                if (strncmp(&(json_string->getData()[11]), "ericanAthleticConference", 24) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[35]))
                                                                      {
                                                                        case 0:
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_NCAAFBFBSAmericanAthleticConference;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        case 'E':
                                                                            if (strcmp(&(json_string->getData()[36]), "ast") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSAmericanAthleticConferenceEast;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(json_string->getData()[36]), "est") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSAmericanAthleticConferenceWest;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 't':
                                                                if (strncmp(&(json_string->getData()[11]), "lanticCoast", 11) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[22]))
                                                                      {
                                                                        case 0:
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_NCAAFBFBSAtlanticCoast;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        case 'A':
                                                                            if (strcmp(&(json_string->getData()[23]), "tlantic") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSAtlanticCoastAtlantic;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'C':
                                                                            if (strcmp(&(json_string->getData()[23]), "oastal") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSAtlanticCoastCoastal;
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
                                                    case 'B':
                                                        if (strncmp(&(json_string->getData()[10]), "ig1", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[13]))
                                                              {
                                                                case '0':
                                                                    switch ((unsigned char)(json_string->getData()[14]))
                                                                      {
                                                                        case 0:
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_NCAAFBFBSBig10;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        case 'E':
                                                                            if (strcmp(&(json_string->getData()[15]), "ast") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSBig10East;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(json_string->getData()[15]), "est") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSBig10West;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                    break;
                                                                case '2':
                                                                    if (json_string->getData()[14] == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFBSBig12;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'C':
                                                        if (strncmp(&(json_string->getData()[10]), "onferenceUSA", 12) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[22]))
                                                              {
                                                                case 0:
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBFBSConferenceUSA;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                case 'E':
                                                                    if (strcmp(&(json_string->getData()[23]), "ast") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFBSConferenceUSAEast;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'W':
                                                                    if (strcmp(&(json_string->getData()[23]), "est") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFBSConferenceUSAWest;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(json_string->getData()[10]), "ndependents") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBFBSIndependents;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'M':
                                                        switch ((unsigned char)(json_string->getData()[10]))
                                                          {
                                                            case 'i':
                                                                if (strncmp(&(json_string->getData()[11]), "dAmerican", 9) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[20]))
                                                                      {
                                                                        case 0:
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_NCAAFBFBSMidAmerican;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        case 'E':
                                                                            if (strcmp(&(json_string->getData()[21]), "ast") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSMidAmericanEast;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(json_string->getData()[21]), "est") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSMidAmericanWest;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 'o':
                                                                if (strncmp(&(json_string->getData()[11]), "untainWest", 10) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[21]))
                                                                      {
                                                                        case 0:
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_NCAAFBFBSMountainWest;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        case 'M':
                                                                            if (strcmp(&(json_string->getData()[22]), "ountain") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSMountainWestMountain;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(json_string->getData()[22]), "est") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSMountainWestWest;
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
                                                    case 'P':
                                                        if (strncmp(&(json_string->getData()[10]), "ac12", 4) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[14]))
                                                              {
                                                                case 0:
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBFBSPac12;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                case 'N':
                                                                    if (strcmp(&(json_string->getData()[15]), "orth") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFBSPac12North;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'S':
                                                                    if (strcmp(&(json_string->getData()[15]), "outh") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFBSPac12South;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(json_string->getData()[10]))
                                                          {
                                                            case 'o':
                                                                if (strncmp(&(json_string->getData()[11]), "utheastern", 10) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[21]))
                                                                      {
                                                                        case 0:
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_NCAAFBFBSSoutheastern;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        case 'E':
                                                                            if (strcmp(&(json_string->getData()[22]), "ast") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSSoutheasternEast;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'W':
                                                                            if (strcmp(&(json_string->getData()[22]), "est") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFBSSoutheasternWest;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 'u':
                                                                if (strcmp(&(json_string->getData()[11]), "nBelt") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBFBSSunBelt;
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
                                        case 'C':
                                            if (strncmp(&(json_string->getData()[8]), "S", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[9]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBFCS;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'B':
                                                        if (strncmp(&(json_string->getData()[10]), "igS", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[13]))
                                                              {
                                                                case 'k':
                                                                    if (strcmp(&(json_string->getData()[14]), "y") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFCSBigSky;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'o':
                                                                    if (strcmp(&(json_string->getData()[14]), "uth") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFCSBigSouth;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'C':
                                                        if (strcmp(&(json_string->getData()[10]), "olonialAthleticAssociation") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBFCSColonialAthleticAssociation;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'I':
                                                        switch ((unsigned char)(json_string->getData()[10]))
                                                          {
                                                            case 'n':
                                                                if (strcmp(&(json_string->getData()[11]), "dependents") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBFCSIndependents;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'v':
                                                                if (strcmp(&(json_string->getData()[11]), "yLeague") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBFCSIvyLeague;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'M':
                                                        if (strncmp(&(json_string->getData()[10]), "i", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[11]))
                                                              {
                                                                case 'd':
                                                                    if (strcmp(&(json_string->getData()[12]), "EasternAthletic") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFCSMidEasternAthletic;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 's':
                                                                    if (strcmp(&(json_string->getData()[12]), "souriValley") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFCSMissouriValley;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'N':
                                                        if (strcmp(&(json_string->getData()[10]), "ortheast") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBFCSNortheast;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(json_string->getData()[10]), "hioValley") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBFCSOhioValley;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'P':
                                                        switch ((unsigned char)(json_string->getData()[10]))
                                                          {
                                                            case 'a':
                                                                if (strcmp(&(json_string->getData()[11]), "triotLeague") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBFCSPatriotLeague;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(json_string->getData()[11]), "oneerLeague") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBFCSPioneerLeague;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'S':
                                                        if (strncmp(&(json_string->getData()[10]), "outh", 4) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[14]))
                                                              {
                                                                case 'e':
                                                                    if (strcmp(&(json_string->getData()[15]), "rn") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFCSSouthern;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'l':
                                                                    if (strcmp(&(json_string->getData()[15]), "and") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAFBFCSSouthland;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'w':
                                                                    if (strncmp(&(json_string->getData()[15]), "esternAthletic", 14) == 0)
                                                                      {
                                                                        switch ((unsigned char)(json_string->getData()[29]))
                                                                          {
                                                                            case 0:
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAFBFCSSouthwesternAthletic;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            case 'E':
                                                                                if (strcmp(&(json_string->getData()[30]), "ast") == 0)
                                                                                      {
                                                                                        the_open_enum.in_known_list = true;
                                                                                        the_open_enum.list_value = Value_NCAAFBFCSSouthwesternAthleticEast;
                                                                                        goto open_enum_is_done;
                                                                                      }
                                                                                break;
                                                                            case 'W':
                                                                                if (strcmp(&(json_string->getData()[30]), "est") == 0)
                                                                                      {
                                                                                        the_open_enum.in_known_list = true;
                                                                                        the_open_enum.list_value = Value_NCAAFBFCSSouthwesternAthleticWest;
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
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strncmp(&(json_string->getData()[5]), "BDivisionI", 10) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[15]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NCAAMBDivisionI;
                                                goto open_enum_is_done;
                                              }
                                        case 'A':
                                            switch ((unsigned char)(json_string->getData()[16]))
                                              {
                                                case 'm':
                                                    if (strncmp(&(json_string->getData()[17]), "erica", 5) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[22]))
                                                          {
                                                            case 'E':
                                                                if (strcmp(&(json_string->getData()[23]), "ast") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIAmericaEast;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'n':
                                                                if (strcmp(&(json_string->getData()[23]), "AthleticConference") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIAmericanAthleticConference;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 't':
                                                    if (strncmp(&(json_string->getData()[17]), "lantic", 6) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[23]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(json_string->getData()[24]), "0") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIAtlantic10;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'C':
                                                                if (strcmp(&(json_string->getData()[24]), "oast") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIAtlanticCoast;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'S':
                                                                if (strcmp(&(json_string->getData()[24]), "un") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIAtlanticSun;
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
                                        case 'B':
                                            if (strncmp(&(json_string->getData()[16]), "ig", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[18]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(json_string->getData()[19]))
                                                          {
                                                            case '0':
                                                                if (json_string->getData()[20] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIBig10;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '2':
                                                                if (json_string->getData()[20] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIBig12;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[19]), "ast") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIBigEast;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        switch ((unsigned char)(json_string->getData()[19]))
                                                          {
                                                            case 'k':
                                                                if (strcmp(&(json_string->getData()[20]), "y") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIBigSky;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'o':
                                                                if (strcmp(&(json_string->getData()[20]), "uth") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIBigSouth;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[19]), "est") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIBigWest;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'C':
                                            if (strncmp(&(json_string->getData()[16]), "o", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[17]))
                                                  {
                                                    case 'l':
                                                        if (strcmp(&(json_string->getData()[18]), "onialAthleticAssociation") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIColonialAthleticAssociation;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'n':
                                                        if (strcmp(&(json_string->getData()[18]), "ferenceUSA") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIConferenceUSA;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[16]), "orizon") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAMBDivisionIHorizon;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[16]), "vyLeague") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAMBDivisionIIvyLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            switch ((unsigned char)(json_string->getData()[16]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[17]), "troAtlanticAthletic") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAMBDivisionIMetroAtlanticAthletic;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    switch ((unsigned char)(json_string->getData()[17]))
                                                      {
                                                        case 'd':
                                                            switch ((unsigned char)(json_string->getData()[18]))
                                                              {
                                                                case 'A':
                                                                    if (strncmp(&(json_string->getData()[19]), "merican", 7) == 0)
                                                                      {
                                                                        switch ((unsigned char)(json_string->getData()[26]))
                                                                          {
                                                                            case 0:
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_NCAAMBDivisionIMidAmerican;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            case 'E':
                                                                                if (strcmp(&(json_string->getData()[27]), "ast") == 0)
                                                                                      {
                                                                                        the_open_enum.in_known_list = true;
                                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIMidAmericanEast;
                                                                                        goto open_enum_is_done;
                                                                                      }
                                                                                break;
                                                                            case 'W':
                                                                                if (strcmp(&(json_string->getData()[27]), "est") == 0)
                                                                                      {
                                                                                        the_open_enum.in_known_list = true;
                                                                                        the_open_enum.list_value = Value_NCAAMBDivisionIMidAmericanWest;
                                                                                        goto open_enum_is_done;
                                                                                      }
                                                                                break;
                                                                            default:
                                                                                break;
                                                                          }
                                                                      }
                                                                    break;
                                                                case 'E':
                                                                    if (strcmp(&(json_string->getData()[19]), "astern") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_NCAAMBDivisionIMidEastern;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                            break;
                                                        case 's':
                                                            if (strcmp(&(json_string->getData()[18]), "souriValley") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAMBDivisionIMissouriValley;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[17]), "untainWest") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAMBDivisionIMountainWest;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[16]), "ortheast") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAMBDivisionINortheast;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'O':
                                            if (strncmp(&(json_string->getData()[16]), "hioValley", 9) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[25]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAMBDivisionIOhioValley;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[26]), "ast") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIOhioValleyEast;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[26]), "est") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIOhioValleyWest;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'P':
                                            if (strncmp(&(json_string->getData()[16]), "a", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[17]))
                                                  {
                                                    case 'c':
                                                        if (strcmp(&(json_string->getData()[18]), "12") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIPac12;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 't':
                                                        if (strcmp(&(json_string->getData()[18]), "riotLeague") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIPatriotLeague;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[16]))
                                              {
                                                case 'o':
                                                    if (strncmp(&(json_string->getData()[17]), "uth", 3) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[20]))
                                                          {
                                                            case 'e':
                                                                switch ((unsigned char)(json_string->getData()[21]))
                                                                  {
                                                                    case 'a':
                                                                        if (strcmp(&(json_string->getData()[22]), "stern") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_NCAAMBDivisionISoutheastern;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case 'r':
                                                                        if (strcmp(&(json_string->getData()[22]), "n") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_NCAAMBDivisionISouthern;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            case 'l':
                                                                if (strcmp(&(json_string->getData()[21]), "and") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionISouthland;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(json_string->getData()[21]), "esternAtlantic") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAMBDivisionISouthwesternAtlantic;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'u':
                                                    switch ((unsigned char)(json_string->getData()[17]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[18]), "mitLeague") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAMBDivisionISummitLeague;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'n':
                                                            if (strcmp(&(json_string->getData()[18]), "Belt") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_NCAAMBDivisionISunBelt;
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
                                        case 'W':
                                            if (strncmp(&(json_string->getData()[16]), "est", 3) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[19]))
                                                  {
                                                    case 'C':
                                                        if (strcmp(&(json_string->getData()[20]), "oast") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIWestCoast;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'e':
                                                        if (strcmp(&(json_string->getData()[20]), "rnAthletic") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBDivisionIWesternAthletic;
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
                            case 'A':
                                if (strncmp(&(json_string->getData()[4]), "FC", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLAFC;
                                                goto open_enum_is_done;
                                              }
                                        case 'E':
                                            if (strcmp(&(json_string->getData()[7]), "ast") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLAFCEast;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[7]), "orth") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLAFCNorth;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[7]), "outh") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLAFCSouth;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strcmp(&(json_string->getData()[7]), "est") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLAFCWest;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'N':
                                if (strncmp(&(json_string->getData()[4]), "FC", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLNFC;
                                                goto open_enum_is_done;
                                              }
                                        case 'E':
                                            if (strcmp(&(json_string->getData()[7]), "ast") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLNFCEast;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[7]), "orth") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLNFCNorth;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[7]), "outh") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLNFCSouth;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strcmp(&(json_string->getData()[7]), "est") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLNFCWest;
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
                            case 'E':
                                if (strncmp(&(json_string->getData()[4]), "astern", 6) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NHLEastern;
                                                goto open_enum_is_done;
                                              }
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[11]), "tlantic") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NHLEasternAtlantic;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[11]), "etropolitan") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NHLEasternMetropolitan;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[4]), "estern", 6) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NHLWestern;
                                                goto open_enum_is_done;
                                              }
                                        case 'C':
                                            if (strcmp(&(json_string->getData()[11]), "entral") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NHLWesternCentral;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[11]), "acific") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NHLWesternPacific;
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
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

SportsLeagueDivisionJSON::SportsLeagueDivisionJSON(void) :
        flagHasValue(false)
  {
  }

SportsLeagueDivisionJSON::SportsLeagueDivisionJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsLeagueDivisionJSON::SportsLeagueDivisionJSON(const char *init_value) :
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

SportsLeagueDivisionJSON::SportsLeagueDivisionJSON(std::string init_value) :
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

SportsLeagueDivisionJSON::SportsLeagueDivisionJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsLeagueDivisionJSON::~SportsLeagueDivisionJSON(void)
  {
  }

bool SportsLeagueDivisionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsLeagueDivisionJSON::TypeValue SportsLeagueDivisionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsLeagueDivisionJSON::TypeValue SportsLeagueDivisionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsLeagueDivisionJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsLeagueDivisionJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsLeagueDivisionJSON *SportsLeagueDivisionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueDivisionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool> generator("Type SportsLeagueDivision", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
