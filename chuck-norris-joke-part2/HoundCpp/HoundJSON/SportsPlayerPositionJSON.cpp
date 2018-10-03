/* file "SportsPlayerPositionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayerPositionJSON.h"

#include "SportsPlayerPositionJSON.h"


SportsPlayerPositionJSON::TypeValue::TypeValue(void)
  {
  }

SportsPlayerPositionJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayerPositionJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayerPositionJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayerPositionJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayerPositionJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayerPositionJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayerPositionJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayerPositionJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayerPositionJSON::TypeValueKnownValues SportsPlayerPositionJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strncmp(&(chars[1]), "ricket", 6) == 0)
              {
                switch ((unsigned char)(chars[7]))
                  {
                    case 'A':
                        if (strcmp(&(chars[8]), "llRounder") == 0)
                            return Value_CricketAllRounder;
                        break;
                    case 'B':
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'a':
                                if (strcmp(&(chars[9]), "tsman") == 0)
                                    return Value_CricketBatsman;
                                break;
                            case 'o':
                                if (strcmp(&(chars[9]), "wler") == 0)
                                    return Value_CricketBowler;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'W':
                        if (strcmp(&(chars[8]), "icketKeeper") == 0)
                            return Value_CricketWicketKeeper;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strncmp(&(chars[1]), "LB", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'C':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "tcher") == 0)
                                    return Value_MLBCatcher;
                                break;
                            case 'e':
                                if (strcmp(&(chars[5]), "nterField") == 0)
                                    return Value_MLBCenterField;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'D':
                        if (strcmp(&(chars[4]), "esignatedHitter") == 0)
                            return Value_MLBDesignatedHitter;
                        break;
                    case 'F':
                        if (strcmp(&(chars[4]), "irstBase") == 0)
                            return Value_MLBFirstBase;
                        break;
                    case 'I':
                        if (strcmp(&(chars[4]), "nfield") == 0)
                            return Value_MLBInfield;
                        break;
                    case 'L':
                        if (strcmp(&(chars[4]), "eftField") == 0)
                            return Value_MLBLeftField;
                        break;
                    case 'O':
                        if (strcmp(&(chars[4]), "utfield") == 0)
                            return Value_MLBOutfield;
                        break;
                    case 'P':
                        if (strcmp(&(chars[4]), "itcher") == 0)
                            return Value_MLBPitcher;
                        break;
                    case 'R':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'e':
                                if (strcmp(&(chars[5]), "liefPitcher") == 0)
                                    return Value_MLBReliefPitcher;
                                break;
                            case 'i':
                                if (strcmp(&(chars[5]), "ghtField") == 0)
                                    return Value_MLBRightField;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'e':
                                if (strcmp(&(chars[5]), "condBase") == 0)
                                    return Value_MLBSecondBase;
                                break;
                            case 'h':
                                if (strcmp(&(chars[5]), "ortStop") == 0)
                                    return Value_MLBShortStop;
                                break;
                            case 't':
                                if (strcmp(&(chars[5]), "artingPitcher") == 0)
                                    return Value_MLBStartingPitcher;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'T':
                        if (strcmp(&(chars[4]), "hirdBase") == 0)
                            return Value_MLBThirdBase;
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
                            case 'C':
                                if (strcmp(&(chars[4]), "enter") == 0)
                                    return Value_NBACenter;
                                break;
                            case 'P':
                                if (strncmp(&(chars[4]), "o", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[5]))
                                      {
                                        case 'i':
                                            if (strcmp(&(chars[6]), "ntGuard") == 0)
                                                return Value_NBAPointGuard;
                                            break;
                                        case 'w':
                                            if (strcmp(&(chars[6]), "erForward") == 0)
                                                return Value_NBAPowerForward;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'S':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'h':
                                        if (strcmp(&(chars[5]), "ootingGuard") == 0)
                                            return Value_NBAShootingGuard;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[5]), "allForward") == 0)
                                            return Value_NBASmallForward;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'U':
                                if (strcmp(&(chars[4]), "nknown") == 0)
                                    return Value_NBAUnknown;
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
                                            if (strcmp(&(chars[7]), "thlete") == 0)
                                                return Value_NCAAFBAthlete;
                                            break;
                                        case 'C':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[8]), "nter") == 0)
                                                        return Value_NCAAFBCenter;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[8]), "rnerback") == 0)
                                                        return Value_NCAAFBCornerback;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'D':
                                            if (strncmp(&(chars[7]), "efensive", 8) == 0)
                                              {
                                                switch ((unsigned char)(chars[15]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(chars[16]), "ack") == 0)
                                                            return Value_NCAAFBDefensiveBack;
                                                        break;
                                                    case 'E':
                                                        if (strcmp(&(chars[16]), "nd") == 0)
                                                            return Value_NCAAFBDefensiveEnd;
                                                        break;
                                                    case 'L':
                                                        if (strcmp(&(chars[16]), "ine") == 0)
                                                            return Value_NCAAFBDefensiveLine;
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[16]), "ackle") == 0)
                                                            return Value_NCAAFBDefensiveTackle;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'F':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'r':
                                                    if (strcmp(&(chars[8]), "eeSafety") == 0)
                                                        return Value_NCAAFBFreeSafety;
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[8]), "llback") == 0)
                                                        return Value_NCAAFBFullback;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'G':
                                            if (strncmp(&(chars[7]), "eneral", 6) == 0)
                                              {
                                                switch ((unsigned char)(chars[13]))
                                                  {
                                                    case 'D':
                                                        if (strcmp(&(chars[14]), "efense") == 0)
                                                            return Value_NCAAFBGeneralDefense;
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(chars[14]), "ffense") == 0)
                                                            return Value_NCAAFBGeneralOffense;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[14]), "pecialTeams") == 0)
                                                            return Value_NCAAFBGeneralSpecialTeams;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'K':
                                            if (strncmp(&(chars[7]), "icker", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[12]))
                                                  {
                                                    case 0:
                                                        return Value_NCAAFBKicker;
                                                    case 'P':
                                                        if (strcmp(&(chars[13]), "unter") == 0)
                                                            return Value_NCAAFBKickerPunter;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'L':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'i':
                                                    if (strcmp(&(chars[8]), "nebacker") == 0)
                                                        return Value_NCAAFBLinebacker;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[8]), "ngSnapper") == 0)
                                                        return Value_NCAAFBLongSnapper;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[7]), "iddleLinebacker") == 0)
                                                return Value_NCAAFBMiddleLinebacker;
                                            break;
                                        case 'N':
                                            if (strcmp(&(chars[7]), "oseTackle") == 0)
                                                return Value_NCAAFBNoseTackle;
                                            break;
                                        case 'O':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'f':
                                                    if (strncmp(&(chars[8]), "fensive", 7) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[15]))
                                                          {
                                                            case 'G':
                                                                if (strcmp(&(chars[16]), "uard") == 0)
                                                                    return Value_NCAAFBOffensiveGuard;
                                                                break;
                                                            case 'L':
                                                                if (strcmp(&(chars[16]), "ineman") == 0)
                                                                    return Value_NCAAFBOffensiveLineman;
                                                                break;
                                                            case 'T':
                                                                if (strcmp(&(chars[16]), "ackle") == 0)
                                                                    return Value_NCAAFBOffensiveTackle;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[8]), "tsideLinebacker") == 0)
                                                        return Value_NCAAFBOutsideLinebacker;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[7]), "unter") == 0)
                                                return Value_NCAAFBPunter;
                                            break;
                                        case 'Q':
                                            if (strcmp(&(chars[7]), "uarterback") == 0)
                                                return Value_NCAAFBQuarterback;
                                            break;
                                        case 'R':
                                            if (strcmp(&(chars[7]), "unningBack") == 0)
                                                return Value_NCAAFBRunningBack;
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[8]), "fety") == 0)
                                                        return Value_NCAAFBSafety;
                                                    break;
                                                case 't':
                                                    if (strcmp(&(chars[8]), "rongSafety") == 0)
                                                        return Value_NCAAFBStrongSafety;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[7]), "ightEnd") == 0)
                                                return Value_NCAAFBTightEnd;
                                            break;
                                        case 'U':
                                            if (strcmp(&(chars[7]), "nknown") == 0)
                                                return Value_NCAAFBUnknown;
                                            break;
                                        case 'W':
                                            if (strcmp(&(chars[7]), "ideReceiver") == 0)
                                                return Value_NCAAFBWideReceiver;
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
                                            if (strncmp(&(chars[7]), "enter", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[12]))
                                                  {
                                                    case 0:
                                                        return Value_NCAAMBCenter;
                                                    case 'F':
                                                        if (strcmp(&(chars[13]), "orward") == 0)
                                                            return Value_NCAAMBCenterForward;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'F':
                                            if (strncmp(&(chars[7]), "orward", 6) == 0)
                                              {
                                                switch ((unsigned char)(chars[13]))
                                                  {
                                                    case 0:
                                                        return Value_NCAAMBForward;
                                                    case 'C':
                                                        if (strcmp(&(chars[14]), "enter") == 0)
                                                            return Value_NCAAMBForwardCenter;
                                                        break;
                                                    case 'G':
                                                        if (strcmp(&(chars[14]), "uard") == 0)
                                                            return Value_NCAAMBForwardGuard;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'G':
                                            if (strncmp(&(chars[7]), "uard", 4) == 0)
                                              {
                                                switch ((unsigned char)(chars[11]))
                                                  {
                                                    case 0:
                                                        return Value_NCAAMBGuard;
                                                    case 'F':
                                                        if (strcmp(&(chars[12]), "orward") == 0)
                                                            return Value_NCAAMBGuardForward;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'U':
                                            if (strcmp(&(chars[7]), "nknown") == 0)
                                                return Value_NCAAMBUnknown;
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
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[5]), "nter") == 0)
                                            return Value_NFLCenter;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[5]), "rnerback") == 0)
                                            return Value_NFLCornerback;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'D':
                                if (strncmp(&(chars[4]), "efensive", 8) == 0)
                                  {
                                    switch ((unsigned char)(chars[12]))
                                      {
                                        case 'B':
                                            if (strcmp(&(chars[13]), "ack") == 0)
                                                return Value_NFLDefensiveBack;
                                            break;
                                        case 'E':
                                            if (strcmp(&(chars[13]), "nd") == 0)
                                                return Value_NFLDefensiveEnd;
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[13]), "ackle") == 0)
                                                return Value_NFLDefensiveTackle;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'F':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'r':
                                        if (strcmp(&(chars[5]), "eeSafety") == 0)
                                            return Value_NFLFreeSafety;
                                        break;
                                    case 'u':
                                        if (strcmp(&(chars[5]), "llback") == 0)
                                            return Value_NFLFullback;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'G':
                                if (strncmp(&(chars[4]), "eneral", 6) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 'D':
                                            if (strncmp(&(chars[11]), "efens", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[16]))
                                                  {
                                                    case 'e':
                                                        if (chars[17] == 0)
                                                            return Value_NFLGeneralDefense;
                                                        break;
                                                    case 'i':
                                                        if (strcmp(&(chars[17]), "veLine") == 0)
                                                            return Value_NFLGeneralDefensiveLine;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'O':
                                            if (strcmp(&(chars[11]), "ffense") == 0)
                                                return Value_NFLGeneralOffense;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[11]), "pecialTeams") == 0)
                                                return Value_NFLGeneralSpecialTeams;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'K':
                                if (strcmp(&(chars[4]), "icker") == 0)
                                    return Value_NFLKicker;
                                break;
                            case 'L':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[5]), "nebacker") == 0)
                                            return Value_NFLLinebacker;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[5]), "ngSnapper") == 0)
                                            return Value_NFLLongSnapper;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'M':
                                if (strcmp(&(chars[4]), "iddleLinebacker") == 0)
                                    return Value_NFLMiddleLinebacker;
                                break;
                            case 'N':
                                if (strcmp(&(chars[4]), "oseTackle") == 0)
                                    return Value_NFLNoseTackle;
                                break;
                            case 'O':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'f':
                                        if (strncmp(&(chars[5]), "fensive", 7) == 0)
                                          {
                                            switch ((unsigned char)(chars[12]))
                                              {
                                                case 'G':
                                                    if (strcmp(&(chars[13]), "uard") == 0)
                                                        return Value_NFLOffensiveGuard;
                                                    break;
                                                case 'L':
                                                    if (strcmp(&(chars[13]), "ineman") == 0)
                                                        return Value_NFLOffensiveLineman;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(chars[13]), "ackle") == 0)
                                                        return Value_NFLOffensiveTackle;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'u':
                                        if (strcmp(&(chars[5]), "tsideLinebacker") == 0)
                                            return Value_NFLOutsideLinebacker;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'P':
                                if (strcmp(&(chars[4]), "unter") == 0)
                                    return Value_NFLPunter;
                                break;
                            case 'Q':
                                if (strcmp(&(chars[4]), "uarterback") == 0)
                                    return Value_NFLQuarterback;
                                break;
                            case 'R':
                                if (strcmp(&(chars[4]), "unningBack") == 0)
                                    return Value_NFLRunningBack;
                                break;
                            case 'S':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[5]), "fety") == 0)
                                            return Value_NFLSafety;
                                        break;
                                    case 't':
                                        if (strcmp(&(chars[5]), "rongSafety") == 0)
                                            return Value_NFLStrongSafety;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(chars[4]), "ightEnd") == 0)
                                    return Value_NFLTightEnd;
                                break;
                            case 'U':
                                if (strcmp(&(chars[4]), "nknown") == 0)
                                    return Value_NFLUnknown;
                                break;
                            case 'W':
                                if (strcmp(&(chars[4]), "ideReceiver") == 0)
                                    return Value_NFLWideReceiver;
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
                            case 'C':
                                if (strcmp(&(chars[4]), "enter") == 0)
                                    return Value_NHLCenter;
                                break;
                            case 'D':
                                if (strcmp(&(chars[4]), "efense") == 0)
                                    return Value_NHLDefense;
                                break;
                            case 'F':
                                if (strcmp(&(chars[4]), "orward") == 0)
                                    return Value_NHLForward;
                                break;
                            case 'G':
                                if (strcmp(&(chars[4]), "oalie") == 0)
                                    return Value_NHLGoalie;
                                break;
                            case 'L':
                                if (strcmp(&(chars[4]), "eftWing") == 0)
                                    return Value_NHLLeftWing;
                                break;
                            case 'R':
                                if (strcmp(&(chars[4]), "ightWing") == 0)
                                    return Value_NHLRightWing;
                                break;
                            case 'U':
                                if (strcmp(&(chars[4]), "nknown") == 0)
                                    return Value_NHLUnknown;
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
            if (strncmp(&(chars[1]), "occer", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'D':
                        if (strcmp(&(chars[7]), "efender") == 0)
                            return Value_SoccerDefender;
                        break;
                    case 'F':
                        if (strcmp(&(chars[7]), "orward") == 0)
                            return Value_SoccerForward;
                        break;
                    case 'G':
                        if (strcmp(&(chars[7]), "oalkeeper") == 0)
                            return Value_SoccerGoalkeeper;
                        break;
                    case 'M':
                        if (strcmp(&(chars[7]), "idfielder") == 0)
                            return Value_SoccerMidfielder;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return Value_Unknown;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsPlayerPositionJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Unknown:
            return "Unknown";
        case Value_MLBCatcher:
            return "MLBCatcher";
        case Value_MLBInfield:
            return "MLBInfield";
        case Value_MLBFirstBase:
            return "MLBFirstBase";
        case Value_MLBSecondBase:
            return "MLBSecondBase";
        case Value_MLBThirdBase:
            return "MLBThirdBase";
        case Value_MLBShortStop:
            return "MLBShortStop";
        case Value_MLBOutfield:
            return "MLBOutfield";
        case Value_MLBLeftField:
            return "MLBLeftField";
        case Value_MLBCenterField:
            return "MLBCenterField";
        case Value_MLBPitcher:
            return "MLBPitcher";
        case Value_MLBRightField:
            return "MLBRightField";
        case Value_MLBReliefPitcher:
            return "MLBReliefPitcher";
        case Value_MLBStartingPitcher:
            return "MLBStartingPitcher";
        case Value_MLBDesignatedHitter:
            return "MLBDesignatedHitter";
        case Value_NHLUnknown:
            return "NHLUnknown";
        case Value_NHLCenter:
            return "NHLCenter";
        case Value_NHLForward:
            return "NHLForward";
        case Value_NHLDefense:
            return "NHLDefense";
        case Value_NHLGoalie:
            return "NHLGoalie";
        case Value_NHLLeftWing:
            return "NHLLeftWing";
        case Value_NHLRightWing:
            return "NHLRightWing";
        case Value_NBAUnknown:
            return "NBAUnknown";
        case Value_NBACenter:
            return "NBACenter";
        case Value_NBAPowerForward:
            return "NBAPowerForward";
        case Value_NBAPointGuard:
            return "NBAPointGuard";
        case Value_NBASmallForward:
            return "NBASmallForward";
        case Value_NBAShootingGuard:
            return "NBAShootingGuard";
        case Value_NCAAMBUnknown:
            return "NCAAMBUnknown";
        case Value_NCAAMBCenter:
            return "NCAAMBCenter";
        case Value_NCAAMBCenterForward:
            return "NCAAMBCenterForward";
        case Value_NCAAMBForward:
            return "NCAAMBForward";
        case Value_NCAAMBForwardCenter:
            return "NCAAMBForwardCenter";
        case Value_NCAAMBForwardGuard:
            return "NCAAMBForwardGuard";
        case Value_NCAAMBGuard:
            return "NCAAMBGuard";
        case Value_NCAAMBGuardForward:
            return "NCAAMBGuardForward";
        case Value_NFLUnknown:
            return "NFLUnknown";
        case Value_NFLCenter:
            return "NFLCenter";
        case Value_NFLFullback:
            return "NFLFullback";
        case Value_NFLOffensiveGuard:
            return "NFLOffensiveGuard";
        case Value_NFLOffensiveLineman:
            return "NFLOffensiveLineman";
        case Value_NFLOffensiveTackle:
            return "NFLOffensiveTackle";
        case Value_NFLQuarterback:
            return "NFLQuarterback";
        case Value_NFLRunningBack:
            return "NFLRunningBack";
        case Value_NFLTightEnd:
            return "NFLTightEnd";
        case Value_NFLWideReceiver:
            return "NFLWideReceiver";
        case Value_NFLCornerback:
            return "NFLCornerback";
        case Value_NFLDefensiveBack:
            return "NFLDefensiveBack";
        case Value_NFLDefensiveEnd:
            return "NFLDefensiveEnd";
        case Value_NFLDefensiveTackle:
            return "NFLDefensiveTackle";
        case Value_NFLFreeSafety:
            return "NFLFreeSafety";
        case Value_NFLLinebacker:
            return "NFLLinebacker";
        case Value_NFLMiddleLinebacker:
            return "NFLMiddleLinebacker";
        case Value_NFLNoseTackle:
            return "NFLNoseTackle";
        case Value_NFLOutsideLinebacker:
            return "NFLOutsideLinebacker";
        case Value_NFLSafety:
            return "NFLSafety";
        case Value_NFLStrongSafety:
            return "NFLStrongSafety";
        case Value_NFLKicker:
            return "NFLKicker";
        case Value_NFLLongSnapper:
            return "NFLLongSnapper";
        case Value_NFLPunter:
            return "NFLPunter";
        case Value_NFLGeneralDefense:
            return "NFLGeneralDefense";
        case Value_NFLGeneralDefensiveLine:
            return "NFLGeneralDefensiveLine";
        case Value_NFLGeneralOffense:
            return "NFLGeneralOffense";
        case Value_NFLGeneralSpecialTeams:
            return "NFLGeneralSpecialTeams";
        case Value_NCAAFBUnknown:
            return "NCAAFBUnknown";
        case Value_NCAAFBCenter:
            return "NCAAFBCenter";
        case Value_NCAAFBFullback:
            return "NCAAFBFullback";
        case Value_NCAAFBOffensiveGuard:
            return "NCAAFBOffensiveGuard";
        case Value_NCAAFBOffensiveLineman:
            return "NCAAFBOffensiveLineman";
        case Value_NCAAFBOffensiveTackle:
            return "NCAAFBOffensiveTackle";
        case Value_NCAAFBQuarterback:
            return "NCAAFBQuarterback";
        case Value_NCAAFBRunningBack:
            return "NCAAFBRunningBack";
        case Value_NCAAFBTightEnd:
            return "NCAAFBTightEnd";
        case Value_NCAAFBWideReceiver:
            return "NCAAFBWideReceiver";
        case Value_NCAAFBCornerback:
            return "NCAAFBCornerback";
        case Value_NCAAFBDefensiveLine:
            return "NCAAFBDefensiveLine";
        case Value_NCAAFBDefensiveBack:
            return "NCAAFBDefensiveBack";
        case Value_NCAAFBDefensiveEnd:
            return "NCAAFBDefensiveEnd";
        case Value_NCAAFBDefensiveTackle:
            return "NCAAFBDefensiveTackle";
        case Value_NCAAFBFreeSafety:
            return "NCAAFBFreeSafety";
        case Value_NCAAFBLinebacker:
            return "NCAAFBLinebacker";
        case Value_NCAAFBMiddleLinebacker:
            return "NCAAFBMiddleLinebacker";
        case Value_NCAAFBNoseTackle:
            return "NCAAFBNoseTackle";
        case Value_NCAAFBOutsideLinebacker:
            return "NCAAFBOutsideLinebacker";
        case Value_NCAAFBSafety:
            return "NCAAFBSafety";
        case Value_NCAAFBStrongSafety:
            return "NCAAFBStrongSafety";
        case Value_NCAAFBKicker:
            return "NCAAFBKicker";
        case Value_NCAAFBLongSnapper:
            return "NCAAFBLongSnapper";
        case Value_NCAAFBPunter:
            return "NCAAFBPunter";
        case Value_NCAAFBKickerPunter:
            return "NCAAFBKickerPunter";
        case Value_NCAAFBAthlete:
            return "NCAAFBAthlete";
        case Value_NCAAFBGeneralDefense:
            return "NCAAFBGeneralDefense";
        case Value_NCAAFBGeneralOffense:
            return "NCAAFBGeneralOffense";
        case Value_NCAAFBGeneralSpecialTeams:
            return "NCAAFBGeneralSpecialTeams";
        case Value_SoccerForward:
            return "SoccerForward";
        case Value_SoccerMidfielder:
            return "SoccerMidfielder";
        case Value_SoccerDefender:
            return "SoccerDefender";
        case Value_SoccerGoalkeeper:
            return "SoccerGoalkeeper";
        case Value_CricketBatsman:
            return "CricketBatsman";
        case Value_CricketBowler:
            return "CricketBowler";
        case Value_CricketAllRounder:
            return "CricketAllRounder";
        case Value_CricketWicketKeeper:
            return "CricketWicketKeeper";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayerPositionJSON::SportsPlayerPositionJSON(const SportsPlayerPositionJSON &)
  {
    assert(false);
  }

SportsPlayerPositionJSON &SportsPlayerPositionJSON::operator=(const SportsPlayerPositionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayerPositionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsPlayerPositionJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strncmp(&(json_string->getData()[1]), "ricket", 6) == 0)
              {
                switch ((unsigned char)(json_string->getData()[7]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[8]), "llRounder") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_CricketAllRounder;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'B':
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[9]), "tsman") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_CricketBatsman;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[9]), "wler") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_CricketBowler;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[8]), "icketKeeper") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_CricketWicketKeeper;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "LB", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'C':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "tcher") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLBCatcher;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "nterField") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLBCenterField;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[4]), "esignatedHitter") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MLBDesignatedHitter;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'F':
                        if (strcmp(&(json_string->getData()[4]), "irstBase") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MLBFirstBase;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[4]), "nfield") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MLBInfield;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[4]), "eftField") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MLBLeftField;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'O':
                        if (strcmp(&(json_string->getData()[4]), "utfield") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MLBOutfield;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strcmp(&(json_string->getData()[4]), "itcher") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MLBPitcher;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'R':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "liefPitcher") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLBReliefPitcher;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'i':
                                if (strcmp(&(json_string->getData()[5]), "ghtField") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLBRightField;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "condBase") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLBSecondBase;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'h':
                                if (strcmp(&(json_string->getData()[5]), "ortStop") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLBShortStop;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 't':
                                if (strcmp(&(json_string->getData()[5]), "artingPitcher") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_MLBStartingPitcher;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[4]), "hirdBase") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MLBThirdBase;
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
                    if (strncmp(&(json_string->getData()[2]), "A", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'C':
                                if (strcmp(&(json_string->getData()[4]), "enter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NBACenter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'P':
                                if (strncmp(&(json_string->getData()[4]), "o", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[5]))
                                      {
                                        case 'i':
                                            if (strcmp(&(json_string->getData()[6]), "ntGuard") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NBAPointGuard;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'w':
                                            if (strcmp(&(json_string->getData()[6]), "erForward") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NBAPowerForward;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'S':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[5]), "ootingGuard") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NBAShootingGuard;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[5]), "allForward") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NBASmallForward;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'U':
                                if (strcmp(&(json_string->getData()[4]), "nknown") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NBAUnknown;
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
                                            if (strcmp(&(json_string->getData()[7]), "thlete") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBAthlete;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'C':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[8]), "nter") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBCenter;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[8]), "rnerback") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBCornerback;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'D':
                                            if (strncmp(&(json_string->getData()[7]), "efensive", 8) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[15]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(json_string->getData()[16]), "ack") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBDefensiveBack;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[16]), "nd") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBDefensiveEnd;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'L':
                                                        if (strcmp(&(json_string->getData()[16]), "ine") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBDefensiveLine;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[16]), "ackle") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBDefensiveTackle;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'F':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[8]), "eeSafety") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBFreeSafety;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[8]), "llback") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBFullback;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'G':
                                            if (strncmp(&(json_string->getData()[7]), "eneral", 6) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[13]))
                                                  {
                                                    case 'D':
                                                        if (strcmp(&(json_string->getData()[14]), "efense") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBGeneralDefense;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(json_string->getData()[14]), "ffense") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBGeneralOffense;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[14]), "pecialTeams") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBGeneralSpecialTeams;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'K':
                                            if (strncmp(&(json_string->getData()[7]), "icker", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[12]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBKicker;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'P':
                                                        if (strcmp(&(json_string->getData()[13]), "unter") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAFBKickerPunter;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'L':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[8]), "nebacker") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBLinebacker;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[8]), "ngSnapper") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBLongSnapper;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[7]), "iddleLinebacker") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBMiddleLinebacker;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'N':
                                            if (strcmp(&(json_string->getData()[7]), "oseTackle") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBNoseTackle;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'O':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'f':
                                                    if (strncmp(&(json_string->getData()[8]), "fensive", 7) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[15]))
                                                          {
                                                            case 'G':
                                                                if (strcmp(&(json_string->getData()[16]), "uard") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBOffensiveGuard;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'L':
                                                                if (strcmp(&(json_string->getData()[16]), "ineman") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBOffensiveLineman;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'T':
                                                                if (strcmp(&(json_string->getData()[16]), "ackle") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_NCAAFBOffensiveTackle;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[8]), "tsideLinebacker") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBOutsideLinebacker;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[7]), "unter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBPunter;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'Q':
                                            if (strcmp(&(json_string->getData()[7]), "uarterback") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBQuarterback;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'R':
                                            if (strcmp(&(json_string->getData()[7]), "unningBack") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBRunningBack;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[8]), "fety") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBSafety;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 't':
                                                    if (strcmp(&(json_string->getData()[8]), "rongSafety") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAFBStrongSafety;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[7]), "ightEnd") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBTightEnd;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'U':
                                            if (strcmp(&(json_string->getData()[7]), "nknown") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBUnknown;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strcmp(&(json_string->getData()[7]), "ideReceiver") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAFBWideReceiver;
                                                    goto open_enum_is_done;
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
                                            if (strncmp(&(json_string->getData()[7]), "enter", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[12]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAMBCenter;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[13]), "orward") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBCenterForward;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'F':
                                            if (strncmp(&(json_string->getData()[7]), "orward", 6) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[13]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAMBForward;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'C':
                                                        if (strcmp(&(json_string->getData()[14]), "enter") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBForwardCenter;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'G':
                                                        if (strcmp(&(json_string->getData()[14]), "uard") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBForwardGuard;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'G':
                                            if (strncmp(&(json_string->getData()[7]), "uard", 4) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[11]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NCAAMBGuard;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[12]), "orward") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NCAAMBGuardForward;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'U':
                                            if (strcmp(&(json_string->getData()[7]), "nknown") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NCAAMBUnknown;
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
                    if (strncmp(&(json_string->getData()[2]), "L", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'C':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[5]), "nter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLCenter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[5]), "rnerback") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLCornerback;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'D':
                                if (strncmp(&(json_string->getData()[4]), "efensive", 8) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[12]))
                                      {
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[13]), "ack") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLDefensiveBack;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'E':
                                            if (strcmp(&(json_string->getData()[13]), "nd") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLDefensiveEnd;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[13]), "ackle") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLDefensiveTackle;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'F':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[5]), "eeSafety") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLFreeSafety;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'u':
                                        if (strcmp(&(json_string->getData()[5]), "llback") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLFullback;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'G':
                                if (strncmp(&(json_string->getData()[4]), "eneral", 6) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 'D':
                                            if (strncmp(&(json_string->getData()[11]), "efens", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[16]))
                                                  {
                                                    case 'e':
                                                        if (json_string->getData()[17] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NFLGeneralDefense;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'i':
                                                        if (strcmp(&(json_string->getData()[17]), "veLine") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_NFLGeneralDefensiveLine;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'O':
                                            if (strcmp(&(json_string->getData()[11]), "ffense") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLGeneralOffense;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[11]), "pecialTeams") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_NFLGeneralSpecialTeams;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'K':
                                if (strcmp(&(json_string->getData()[4]), "icker") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLKicker;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'L':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[5]), "nebacker") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLLinebacker;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[5]), "ngSnapper") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLLongSnapper;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[4]), "iddleLinebacker") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLMiddleLinebacker;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'N':
                                if (strcmp(&(json_string->getData()[4]), "oseTackle") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLNoseTackle;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'O':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'f':
                                        if (strncmp(&(json_string->getData()[5]), "fensive", 7) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[12]))
                                              {
                                                case 'G':
                                                    if (strcmp(&(json_string->getData()[13]), "uard") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NFLOffensiveGuard;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'L':
                                                    if (strcmp(&(json_string->getData()[13]), "ineman") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NFLOffensiveLineman;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(json_string->getData()[13]), "ackle") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_NFLOffensiveTackle;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'u':
                                        if (strcmp(&(json_string->getData()[5]), "tsideLinebacker") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLOutsideLinebacker;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'P':
                                if (strcmp(&(json_string->getData()[4]), "unter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLPunter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'Q':
                                if (strcmp(&(json_string->getData()[4]), "uarterback") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLQuarterback;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'R':
                                if (strcmp(&(json_string->getData()[4]), "unningBack") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLRunningBack;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'S':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[5]), "fety") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLSafety;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 't':
                                        if (strcmp(&(json_string->getData()[5]), "rongSafety") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_NFLStrongSafety;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[4]), "ightEnd") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLTightEnd;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'U':
                                if (strcmp(&(json_string->getData()[4]), "nknown") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLUnknown;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[4]), "ideReceiver") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NFLWideReceiver;
                                        goto open_enum_is_done;
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
                            case 'C':
                                if (strcmp(&(json_string->getData()[4]), "enter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NHLCenter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'D':
                                if (strcmp(&(json_string->getData()[4]), "efense") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NHLDefense;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'F':
                                if (strcmp(&(json_string->getData()[4]), "orward") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NHLForward;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'G':
                                if (strcmp(&(json_string->getData()[4]), "oalie") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NHLGoalie;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'L':
                                if (strcmp(&(json_string->getData()[4]), "eftWing") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NHLLeftWing;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'R':
                                if (strcmp(&(json_string->getData()[4]), "ightWing") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NHLRightWing;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'U':
                                if (strcmp(&(json_string->getData()[4]), "nknown") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NHLUnknown;
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
            if (strncmp(&(json_string->getData()[1]), "occer", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'D':
                        if (strcmp(&(json_string->getData()[7]), "efender") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_SoccerDefender;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'F':
                        if (strcmp(&(json_string->getData()[7]), "orward") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_SoccerForward;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'G':
                        if (strcmp(&(json_string->getData()[7]), "oalkeeper") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_SoccerGoalkeeper;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'M':
                        if (strcmp(&(json_string->getData()[7]), "idfielder") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_SoccerMidfielder;
                                goto open_enum_is_done;
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
                    the_open_enum.list_value = Value_Unknown;
                    goto open_enum_is_done;
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

SportsPlayerPositionJSON::SportsPlayerPositionJSON(void) :
        flagHasValue(false)
  {
  }

SportsPlayerPositionJSON::SportsPlayerPositionJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsPlayerPositionJSON::SportsPlayerPositionJSON(const char *init_value) :
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

SportsPlayerPositionJSON::SportsPlayerPositionJSON(std::string init_value) :
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

SportsPlayerPositionJSON::SportsPlayerPositionJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsPlayerPositionJSON::~SportsPlayerPositionJSON(void)
  {
  }

bool SportsPlayerPositionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsPlayerPositionJSON::TypeValue SportsPlayerPositionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsPlayerPositionJSON::TypeValue SportsPlayerPositionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsPlayerPositionJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayerPositionJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsPlayerPositionJSON *SportsPlayerPositionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayerPositionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayerPositionJSON>, SportsPlayerPositionJSON *, bool> generator("Type SportsPlayerPosition", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
