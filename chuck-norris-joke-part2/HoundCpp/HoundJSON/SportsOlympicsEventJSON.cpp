/* file "SportsOlympicsEventJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventJSON.h"

#include "SportsOlympicsEventJSON.h"


SportsOlympicsEventJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsEventJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsEventJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsEventJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsEventJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsEventJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsEventJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsEventJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsEventJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsEventJSON::TypeValueKnownValues SportsOlympicsEventJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strncmp(&(chars[2]), "pineSkiing", 10) == 0)
                      {
                        switch ((unsigned char)(chars[12]))
                          {
                            case 'M':
                                switch ((unsigned char)(chars[13]))
                                  {
                                    case 'e':
                                        if (strncmp(&(chars[14]), "ns", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[16]))
                                              {
                                                case 'C':
                                                    if (strcmp(&(chars[17]), "ombined") == 0)
                                                        return Value_AlpineSkiingMensCombined;
                                                    break;
                                                case 'D':
                                                    if (strcmp(&(chars[17]), "ownhill") == 0)
                                                        return Value_AlpineSkiingMensDownhill;
                                                    break;
                                                case 'G':
                                                    if (strcmp(&(chars[17]), "iantSlalom") == 0)
                                                        return Value_AlpineSkiingMensGiantSlalom;
                                                    break;
                                                case 'S':
                                                    switch ((unsigned char)(chars[17]))
                                                      {
                                                        case 'l':
                                                            if (strcmp(&(chars[18]), "alom") == 0)
                                                                return Value_AlpineSkiingMensSlalom;
                                                            break;
                                                        case 'u':
                                                            if (strcmp(&(chars[18]), "perG") == 0)
                                                                return Value_AlpineSkiingMensSuperG;
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
                                    case 'i':
                                        if (strcmp(&(chars[14]), "xedTeam") == 0)
                                            return Value_AlpineSkiingMixedTeam;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[13]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[18]))
                                      {
                                        case 'C':
                                            if (strcmp(&(chars[19]), "ombined") == 0)
                                                return Value_AlpineSkiingWomensCombined;
                                            break;
                                        case 'D':
                                            if (strcmp(&(chars[19]), "ownhill") == 0)
                                                return Value_AlpineSkiingWomensDownhill;
                                            break;
                                        case 'G':
                                            if (strcmp(&(chars[19]), "iantSlalom") == 0)
                                                return Value_AlpineSkiingWomensGiantSlalom;
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[19]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(chars[20]), "alom") == 0)
                                                        return Value_AlpineSkiingWomensSlalom;
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[20]), "perG") == 0)
                                                        return Value_AlpineSkiingWomensSuperG;
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
                            default:
                                break;
                          }
                      }
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "chery", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'M':
                                if (strncmp(&(chars[8]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'I':
                                            if (strcmp(&(chars[12]), "ndividual") == 0)
                                                return Value_ArcheryMensIndividual;
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[12]), "eam") == 0)
                                                return Value_ArcheryMensTeam;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[8]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'I':
                                            if (strcmp(&(chars[14]), "ndividual") == 0)
                                                return Value_ArcheryWomensIndividual;
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[14]), "eam") == 0)
                                                return Value_ArcheryWomensTeam;
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
                case 't':
                    if (strncmp(&(chars[2]), "hletics", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'M':
                                if (strncmp(&(chars[10]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case '0':
                                                    if (strncmp(&(chars[15]), "0", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[16]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(chars[17]), "0M") == 0)
                                                                    return Value_AthleticsMens10000M;
                                                                break;
                                                            case 'M':
                                                                if (chars[17] == 0)
                                                                    return Value_AthleticsMens100M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(chars[15]), "00M") == 0)
                                                        return Value_AthleticsMens1500M;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '2':
                                            if (strcmp(&(chars[14]), "00M") == 0)
                                                return Value_AthleticsMens200M;
                                            break;
                                        case '4':
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case '0':
                                                    if (strcmp(&(chars[15]), "0M") == 0)
                                                        return Value_AthleticsMens400M;
                                                    break;
                                                case 'X':
                                                    switch ((unsigned char)(chars[15]))
                                                      {
                                                        case '1':
                                                            if (strcmp(&(chars[16]), "00MRelay") == 0)
                                                                return Value_AthleticsMens4X100MRelay;
                                                            break;
                                                        case '4':
                                                            if (strcmp(&(chars[16]), "00MRelay") == 0)
                                                                return Value_AthleticsMens4X400MRelay;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '5':
                                            if (strcmp(&(chars[14]), "000M") == 0)
                                                return Value_AthleticsMens5000M;
                                            break;
                                        case '8':
                                            if (strcmp(&(chars[14]), "00M") == 0)
                                                return Value_AthleticsMens800M;
                                            break;
                                        case 'D':
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[15]), "cathlon") == 0)
                                                        return Value_AthleticsMensDecathlon;
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(chars[15]), "scusThrow") == 0)
                                                        return Value_AthleticsMensDiscusThrow;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'H':
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[15]), "mmerThrow") == 0)
                                                        return Value_AthleticsMensHammerThrow;
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(chars[15]), "ghJump") == 0)
                                                        return Value_AthleticsMensHighJump;
                                                    break;
                                                case 'u':
                                                    if (strncmp(&(chars[15]), "rdles", 5) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[20]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(chars[21]), "10M") == 0)
                                                                    return Value_AthleticsMensHurdles110M;
                                                                break;
                                                            case '4':
                                                                if (strcmp(&(chars[21]), "00M") == 0)
                                                                    return Value_AthleticsMensHurdles400M;
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
                                        case 'J':
                                            if (strcmp(&(chars[14]), "avelinThrow") == 0)
                                                return Value_AthleticsMensJavelinThrow;
                                            break;
                                        case 'L':
                                            if (strcmp(&(chars[14]), "ongJump") == 0)
                                                return Value_AthleticsMensLongJump;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[14]), "arathon") == 0)
                                                return Value_AthleticsMensMarathon;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[14]), "oleVault") == 0)
                                                return Value_AthleticsMensPoleVault;
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case 'h':
                                                    if (strcmp(&(chars[15]), "otPut") == 0)
                                                        return Value_AthleticsMensShotPut;
                                                    break;
                                                case 't':
                                                    if (strcmp(&(chars[15]), "eeplechase3000M") == 0)
                                                        return Value_AthleticsMensSteeplechase3000M;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[14]), "ripleJump") == 0)
                                                return Value_AthleticsMensTripleJump;
                                            break;
                                        case 'W':
                                            if (strncmp(&(chars[14]), "alk", 3) == 0)
                                              {
                                                switch ((unsigned char)(chars[17]))
                                                  {
                                                    case '2':
                                                        if (strcmp(&(chars[18]), "0KM") == 0)
                                                            return Value_AthleticsMensWalk20KM;
                                                        break;
                                                    case '5':
                                                        if (strcmp(&(chars[18]), "0KM") == 0)
                                                            return Value_AthleticsMensWalk50KM;
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
                            case 'W':
                                if (strncmp(&(chars[10]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[15]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(chars[16]))
                                              {
                                                case '0':
                                                    if (strncmp(&(chars[17]), "0", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[18]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(chars[19]), "0M") == 0)
                                                                    return Value_AthleticsWomens10000M;
                                                                break;
                                                            case 'M':
                                                                if (chars[19] == 0)
                                                                    return Value_AthleticsWomens100M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(chars[17]), "00M") == 0)
                                                        return Value_AthleticsWomens1500M;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '2':
                                            if (strcmp(&(chars[16]), "00M") == 0)
                                                return Value_AthleticsWomens200M;
                                            break;
                                        case '3':
                                            if (strcmp(&(chars[16]), "000M") == 0)
                                                return Value_AthleticsWomens3000M;
                                            break;
                                        case '4':
                                            switch ((unsigned char)(chars[16]))
                                              {
                                                case '0':
                                                    if (strcmp(&(chars[17]), "0M") == 0)
                                                        return Value_AthleticsWomens400M;
                                                    break;
                                                case 'X':
                                                    switch ((unsigned char)(chars[17]))
                                                      {
                                                        case '1':
                                                            if (strcmp(&(chars[18]), "00MRelay") == 0)
                                                                return Value_AthleticsWomens4X100MRelay;
                                                            break;
                                                        case '4':
                                                            if (strcmp(&(chars[18]), "00MRelay") == 0)
                                                                return Value_AthleticsWomens4X400MRelay;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '5':
                                            if (strcmp(&(chars[16]), "000M") == 0)
                                                return Value_AthleticsWomens5000M;
                                            break;
                                        case '8':
                                            if (strcmp(&(chars[16]), "00M") == 0)
                                                return Value_AthleticsWomens800M;
                                            break;
                                        case 'D':
                                            if (strcmp(&(chars[16]), "iscusThrow") == 0)
                                                return Value_AthleticsWomensDiscusThrow;
                                            break;
                                        case 'H':
                                            switch ((unsigned char)(chars[16]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[17]), "mmerThrow") == 0)
                                                        return Value_AthleticsWomensHammerThrow;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[17]), "ptathlon") == 0)
                                                        return Value_AthleticsWomensHeptathlon;
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(chars[17]), "ghJump") == 0)
                                                        return Value_AthleticsWomensHighJump;
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[17]), "rdles100M") == 0)
                                                        return Value_AthleticsWomensHurdles100M;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'J':
                                            if (strcmp(&(chars[16]), "avelinThrow") == 0)
                                                return Value_AthleticsWomensJavelinThrow;
                                            break;
                                        case 'L':
                                            if (strcmp(&(chars[16]), "ongJump") == 0)
                                                return Value_AthleticsWomensLongJump;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[16]), "arathon") == 0)
                                                return Value_AthleticsWomensMarathon;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[16]), "oleVault") == 0)
                                                return Value_AthleticsWomensPoleVault;
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[16]))
                                              {
                                                case 'h':
                                                    if (strcmp(&(chars[17]), "otPut") == 0)
                                                        return Value_AthleticsWomensShotPut;
                                                    break;
                                                case 't':
                                                    if (strcmp(&(chars[17]), "eeplechase3000M") == 0)
                                                        return Value_AthleticsWomensSteeplechase3000M;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[16]), "ripleJump") == 0)
                                                return Value_AthleticsWomensTripleJump;
                                            break;
                                        case 'W':
                                            if (strncmp(&(chars[16]), "alk", 3) == 0)
                                              {
                                                switch ((unsigned char)(chars[19]))
                                                  {
                                                    case '1':
                                                        if (strcmp(&(chars[20]), "0KM") == 0)
                                                            return Value_AthleticsWomensWalk10KM;
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(chars[20]), "0KM") == 0)
                                                            return Value_AthleticsWomensWalk20KM;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'h':
                                            if (strcmp(&(chars[16]), "urdles400M") == 0)
                                                return Value_AthleticsWomenshurdles400M;
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
        case 'B':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'd':
                            if (strncmp(&(chars[3]), "minton", 6) == 0)
                              {
                                switch ((unsigned char)(chars[9]))
                                  {
                                    case 'M':
                                        switch ((unsigned char)(chars[10]))
                                          {
                                            case 'e':
                                                if (strncmp(&(chars[11]), "ns", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[13]))
                                                      {
                                                        case 'D':
                                                            if (strcmp(&(chars[14]), "oubles") == 0)
                                                                return Value_BadmintonMensDoubles;
                                                            break;
                                                        case 'S':
                                                            if (strcmp(&(chars[14]), "ingles") == 0)
                                                                return Value_BadmintonMensSingles;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'i':
                                                if (strcmp(&(chars[11]), "xedDoubles") == 0)
                                                    return Value_BadmintonMixedDoubles;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(chars[10]), "omens", 5) == 0)
                                          {
                                            switch ((unsigned char)(chars[15]))
                                              {
                                                case 'D':
                                                    if (strcmp(&(chars[16]), "oubles") == 0)
                                                        return Value_BadmintonWomensDoubles;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(chars[16]), "ingles") == 0)
                                                        return Value_BadmintonWomensSingles;
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
                        case 's':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'e':
                                    if (strcmp(&(chars[4]), "ballMens") == 0)
                                        return Value_BaseballMens;
                                    break;
                                case 'k':
                                    if (strncmp(&(chars[4]), "etball", 6) == 0)
                                      {
                                        switch ((unsigned char)(chars[10]))
                                          {
                                            case 'M':
                                                if (strcmp(&(chars[11]), "ens") == 0)
                                                    return Value_BasketballMens;
                                                break;
                                            case 'W':
                                                if (strcmp(&(chars[11]), "omens") == 0)
                                                    return Value_BasketballWomens;
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
                    break;
                case 'i':
                    if (strncmp(&(chars[2]), "athlon", 6) == 0)
                      {
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'M':
                                switch ((unsigned char)(chars[9]))
                                  {
                                    case 'e':
                                        if (strncmp(&(chars[10]), "ns", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[12]))
                                              {
                                                case 'I':
                                                    if (strcmp(&(chars[13]), "ndividual") == 0)
                                                        return Value_BiathlonMensIndividual;
                                                    break;
                                                case 'M':
                                                    switch ((unsigned char)(chars[13]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(chars[14]), "ssStart") == 0)
                                                                return Value_BiathlonMensMassStart;
                                                            break;
                                                        case 'i':
                                                            if (strcmp(&(chars[14]), "litaryPatrol") == 0)
                                                                return Value_BiathlonMensMilitaryPatrol;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'P':
                                                    if (strcmp(&(chars[13]), "ursuit") == 0)
                                                        return Value_BiathlonMensPursuit;
                                                    break;
                                                case 'R':
                                                    if (strcmp(&(chars[13]), "elay") == 0)
                                                        return Value_BiathlonMensRelay;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(chars[13]), "print") == 0)
                                                        return Value_BiathlonMensSprint;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'i':
                                        if (strcmp(&(chars[10]), "xedRelay") == 0)
                                            return Value_BiathlonMixedRelay;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[9]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[14]))
                                      {
                                        case 'I':
                                            if (strcmp(&(chars[15]), "ndividual") == 0)
                                                return Value_BiathlonWomensIndividual;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[15]), "assStart") == 0)
                                                return Value_BiathlonWomensMassStart;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[15]), "ursuit") == 0)
                                                return Value_BiathlonWomensPursuit;
                                            break;
                                        case 'R':
                                            if (strcmp(&(chars[15]), "elay") == 0)
                                                return Value_BiathlonWomensRelay;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[15]), "print") == 0)
                                                return Value_BiathlonWomensSprint;
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
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'b':
                            if (strncmp(&(chars[3]), "sleigh", 6) == 0)
                              {
                                switch ((unsigned char)(chars[9]))
                                  {
                                    case 'M':
                                        if (strncmp(&(chars[10]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[13]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[14]), "our") == 0)
                                                        return Value_BobsleighMensFour;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(chars[14]), "wo") == 0)
                                                        return Value_BobsleighMensTwo;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strcmp(&(chars[10]), "omensTwo") == 0)
                                            return Value_BobsleighWomensTwo;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'x':
                            if (strncmp(&(chars[3]), "ing", 3) == 0)
                              {
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'M':
                                        if (strncmp(&(chars[7]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[10]))
                                              {
                                                case 'B':
                                                    if (strcmp(&(chars[11]), "antamweight") == 0)
                                                        return Value_BoxingMensBantamweight;
                                                    break;
                                                case 'F':
                                                    switch ((unsigned char)(chars[11]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(chars[12]), "atherweight") == 0)
                                                                return Value_BoxingMensFeatherweight;
                                                            break;
                                                        case 'l':
                                                            if (strcmp(&(chars[12]), "yweight") == 0)
                                                                return Value_BoxingMensFlyweight;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'H':
                                                    if (strcmp(&(chars[11]), "eavyweight") == 0)
                                                        return Value_BoxingMensHeavyweight;
                                                    break;
                                                case 'L':
                                                    if (strncmp(&(chars[11]), "ight", 4) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[15]))
                                                          {
                                                            case 'F':
                                                                if (strcmp(&(chars[16]), "lyweight") == 0)
                                                                    return Value_BoxingMensLightFlyweight;
                                                                break;
                                                            case 'H':
                                                                if (strcmp(&(chars[16]), "eavyweight") == 0)
                                                                    return Value_BoxingMensLightHeavyweight;
                                                                break;
                                                            case 'M':
                                                                if (strcmp(&(chars[16]), "iddleweight") == 0)
                                                                    return Value_BoxingMensLightMiddleweight;
                                                                break;
                                                            case 'W':
                                                                if (strcmp(&(chars[16]), "elterweight") == 0)
                                                                    return Value_BoxingMensLightWelterweight;
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(chars[16]), "eight") == 0)
                                                                    return Value_BoxingMensLightweight;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'M':
                                                    if (strcmp(&(chars[11]), "iddleweight") == 0)
                                                        return Value_BoxingMensMiddleweight;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(chars[11]), "uperHeavyweight") == 0)
                                                        return Value_BoxingMensSuperHeavyweight;
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(chars[11]), "elterweight") == 0)
                                                        return Value_BoxingMensWelterweight;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(chars[7]), "omens", 5) == 0)
                                          {
                                            switch ((unsigned char)(chars[12]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[13]), "lyweight") == 0)
                                                        return Value_BoxingWomensFlyweight;
                                                    break;
                                                case 'L':
                                                    if (strcmp(&(chars[13]), "ightweight") == 0)
                                                        return Value_BoxingWomensLightweight;
                                                    break;
                                                case 'M':
                                                    if (strcmp(&(chars[13]), "iddleweight") == 0)
                                                        return Value_BoxingWomensMiddleweight;
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
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strncmp(&(chars[2]), "noeing", 6) == 0)
                      {
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'M':
                                if (strncmp(&(chars[9]), "ensS", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'l':
                                            if (strncmp(&(chars[14]), "alom", 4) == 0)
                                              {
                                                switch ((unsigned char)(chars[18]))
                                                  {
                                                    case 'C':
                                                        switch ((unsigned char)(chars[19]))
                                                          {
                                                            case '1':
                                                                if (chars[20] == 0)
                                                                    return Value_CanoeingMensSlalomC1;
                                                                break;
                                                            case '2':
                                                                if (chars[20] == 0)
                                                                    return Value_CanoeingMensSlalomC2;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'K':
                                                        if (strcmp(&(chars[19]), "1") == 0)
                                                            return Value_CanoeingMensSlalomK1;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'p':
                                            if (strncmp(&(chars[14]), "rint", 4) == 0)
                                              {
                                                switch ((unsigned char)(chars[18]))
                                                  {
                                                    case 'C':
                                                        switch ((unsigned char)(chars[19]))
                                                          {
                                                            case '1':
                                                                switch ((unsigned char)(chars[20]))
                                                                  {
                                                                    case '1':
                                                                        if (strcmp(&(chars[21]), "000M") == 0)
                                                                            return Value_CanoeingMensSprintC11000M;
                                                                        break;
                                                                    case '2':
                                                                        if (strcmp(&(chars[21]), "00M") == 0)
                                                                            return Value_CanoeingMensSprintC1200M;
                                                                        break;
                                                                    case '5':
                                                                        if (strcmp(&(chars[21]), "00M") == 0)
                                                                            return Value_CanoeingMensSprintC1500M;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            case '2':
                                                                switch ((unsigned char)(chars[20]))
                                                                  {
                                                                    case '1':
                                                                        if (strcmp(&(chars[21]), "000M") == 0)
                                                                            return Value_CanoeingMensSprintC21000M;
                                                                        break;
                                                                    case '5':
                                                                        if (strcmp(&(chars[21]), "00M") == 0)
                                                                            return Value_CanoeingMensSprintC2500M;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'K':
                                                        switch ((unsigned char)(chars[19]))
                                                          {
                                                            case '1':
                                                                switch ((unsigned char)(chars[20]))
                                                                  {
                                                                    case '1':
                                                                        if (strcmp(&(chars[21]), "000M") == 0)
                                                                            return Value_CanoeingMensSprintK11000M;
                                                                        break;
                                                                    case '2':
                                                                        if (strcmp(&(chars[21]), "00M") == 0)
                                                                            return Value_CanoeingMensSprintK1200M;
                                                                        break;
                                                                    case '5':
                                                                        if (strcmp(&(chars[21]), "00M") == 0)
                                                                            return Value_CanoeingMensSprintK1500M;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            case '2':
                                                                switch ((unsigned char)(chars[20]))
                                                                  {
                                                                    case '1':
                                                                        if (strcmp(&(chars[21]), "000M") == 0)
                                                                            return Value_CanoeingMensSprintK21000M;
                                                                        break;
                                                                    case '2':
                                                                        if (strcmp(&(chars[21]), "00M") == 0)
                                                                            return Value_CanoeingMensSprintK2200M;
                                                                        break;
                                                                    case '5':
                                                                        if (strcmp(&(chars[21]), "00M") == 0)
                                                                            return Value_CanoeingMensSprintK2500M;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            case '4':
                                                                if (strcmp(&(chars[20]), "1000M") == 0)
                                                                    return Value_CanoeingMensSprintK41000M;
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
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[9]), "omensS", 6) == 0)
                                  {
                                    switch ((unsigned char)(chars[15]))
                                      {
                                        case 'l':
                                            if (strcmp(&(chars[16]), "alomK1") == 0)
                                                return Value_CanoeingWomensSlalomK1;
                                            break;
                                        case 'p':
                                            if (strncmp(&(chars[16]), "rintK", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[21]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(chars[22]))
                                                          {
                                                            case '2':
                                                                if (strcmp(&(chars[23]), "00M") == 0)
                                                                    return Value_CanoeingWomensSprintK1200M;
                                                                break;
                                                            case '5':
                                                                if (strcmp(&(chars[23]), "00M") == 0)
                                                                    return Value_CanoeingWomensSprintK1500M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(chars[22]), "500M") == 0)
                                                            return Value_CanoeingWomensSprintK2500M;
                                                        break;
                                                    case '4':
                                                        if (strcmp(&(chars[22]), "500M") == 0)
                                                            return Value_CanoeingWomensSprintK4500M;
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
                case 'r':
                    if (strncmp(&(chars[2]), "ossCountrySkiing", 16) == 0)
                      {
                        switch ((unsigned char)(chars[18]))
                          {
                            case 'M':
                                if (strncmp(&(chars[19]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[22]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(chars[23]))
                                              {
                                                case '0':
                                                    if (strcmp(&(chars[24]), "KMClassical") == 0)
                                                        return Value_CrossCountrySkiingMens10KMClassical;
                                                    break;
                                                case '5':
                                                    if (strcmp(&(chars[24]), "KMClassical") == 0)
                                                        return Value_CrossCountrySkiingMens15KMClassical;
                                                    break;
                                                case '8':
                                                    if (strcmp(&(chars[24]), "KM") == 0)
                                                        return Value_CrossCountrySkiingMens18KM;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '2':
                                            if (strcmp(&(chars[23]), "X10KMPursuit") == 0)
                                                return Value_CrossCountrySkiingMens2X10KMPursuit;
                                            break;
                                        case '3':
                                            if (strcmp(&(chars[23]), "0KMSkiathlon") == 0)
                                                return Value_CrossCountrySkiingMens30KMSkiathlon;
                                            break;
                                        case '4':
                                            if (strcmp(&(chars[23]), "X10KMRelay") == 0)
                                                return Value_CrossCountrySkiingMens4X10KMRelay;
                                            break;
                                        case '5':
                                            if (strcmp(&(chars[23]), "0KMFreestyle") == 0)
                                                return Value_CrossCountrySkiingMens50KMFreestyle;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[23]), "print") == 0)
                                                return Value_CrossCountrySkiingMensSprint;
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[23]), "eamSprint") == 0)
                                                return Value_CrossCountrySkiingMensTeamSprint;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[19]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[24]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(chars[25]))
                                              {
                                                case '0':
                                                    if (strcmp(&(chars[26]), "KMClassical") == 0)
                                                        return Value_CrossCountrySkiingWomens10KMClassical;
                                                    break;
                                                case '5':
                                                    if (strcmp(&(chars[26]), "KMSkiathlon") == 0)
                                                        return Value_CrossCountrySkiingWomens15KMSkiathlon;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '2':
                                            switch ((unsigned char)(chars[25]))
                                              {
                                                case '0':
                                                    if (strcmp(&(chars[26]), "KM") == 0)
                                                        return Value_CrossCountrySkiingWomens20KM;
                                                    break;
                                                case 'X':
                                                    if (strcmp(&(chars[26]), "5KMPursuit") == 0)
                                                        return Value_CrossCountrySkiingWomens2X5KMPursuit;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '3':
                                            if (strcmp(&(chars[25]), "0KMFreestyle") == 0)
                                                return Value_CrossCountrySkiingWomens30KMFreestyle;
                                            break;
                                        case '4':
                                            if (strcmp(&(chars[25]), "X5KMRelay") == 0)
                                                return Value_CrossCountrySkiingWomens4X5KMRelay;
                                            break;
                                        case '5':
                                            if (strcmp(&(chars[25]), "KM") == 0)
                                                return Value_CrossCountrySkiingWomens5KM;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[25]), "print") == 0)
                                                return Value_CrossCountrySkiingWomensSprint;
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[25]), "eamSprint") == 0)
                                                return Value_CrossCountrySkiingWomensTeamSprint;
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
                    if (strncmp(&(chars[2]), "rling", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'M':
                                switch ((unsigned char)(chars[8]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[9]), "ns") == 0)
                                            return Value_CurlingMens;
                                        break;
                                    case 'i':
                                        if (strcmp(&(chars[9]), "xedDoubles") == 0)
                                            return Value_CurlingMixedDoubles;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strcmp(&(chars[8]), "omens") == 0)
                                    return Value_CurlingWomens;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'y':
                    if (strncmp(&(chars[2]), "cling", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'M':
                                if (strncmp(&(chars[8]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'B':
                                            if (strcmp(&(chars[12]), "MX") == 0)
                                                return Value_CyclingMensBMX;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[12]), "ountainBikingCrossCountry") == 0)
                                                return Value_CyclingMensMountainBikingCrossCountry;
                                            break;
                                        case 'R':
                                            if (strncmp(&(chars[12]), "oadCycling", 10) == 0)
                                              {
                                                switch ((unsigned char)(chars[22]))
                                                  {
                                                    case 'R':
                                                        if (strcmp(&(chars[23]), "oadRace") == 0)
                                                            return Value_CyclingMensRoadCyclingRoadRace;
                                                        break;
                                                    case 'T':
                                                        switch ((unsigned char)(chars[23]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(chars[24]), "amTimeTrial") == 0)
                                                                    return Value_CyclingMensRoadCyclingTeamTimeTrial;
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(chars[24]), "meTrial") == 0)
                                                                    return Value_CyclingMensRoadCyclingTimeTrial;
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
                                        case 'T':
                                            if (strncmp(&(chars[12]), "rackCycling", 11) == 0)
                                              {
                                                switch ((unsigned char)(chars[23]))
                                                  {
                                                    case 'I':
                                                        if (strncmp(&(chars[24]), "ndividual", 9) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[33]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(chars[34]), "ursuit") == 0)
                                                                        return Value_CyclingMensTrackCyclingIndividualPursuit;
                                                                    break;
                                                                case 'S':
                                                                    if (strcmp(&(chars[34]), "print") == 0)
                                                                        return Value_CyclingMensTrackCyclingIndividualSprint;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'K':
                                                        if (strcmp(&(chars[24]), "eirin") == 0)
                                                            return Value_CyclingMensTrackCyclingKeirin;
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(chars[24]), "adison") == 0)
                                                            return Value_CyclingMensTrackCyclingMadison;
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(chars[24]), "mnium") == 0)
                                                            return Value_CyclingMensTrackCyclingOmnium;
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(chars[24]), "ointsRace") == 0)
                                                            return Value_CyclingMensTrackCyclingPointsRace;
                                                        break;
                                                    case 'T':
                                                        switch ((unsigned char)(chars[24]))
                                                          {
                                                            case 'e':
                                                                if (strncmp(&(chars[25]), "am", 2) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[27]))
                                                                      {
                                                                        case 'P':
                                                                            if (strcmp(&(chars[28]), "ursuit") == 0)
                                                                                return Value_CyclingMensTrackCyclingTeamPursuit;
                                                                            break;
                                                                        case 'S':
                                                                            if (strcmp(&(chars[28]), "print") == 0)
                                                                                return Value_CyclingMensTrackCyclingTeamSprint;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(chars[25]), "meTrial") == 0)
                                                                    return Value_CyclingMensTrackCyclingTimeTrial;
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
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[8]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'B':
                                            if (strcmp(&(chars[14]), "MX") == 0)
                                                return Value_CyclingWomensBMX;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[14]), "ountainBikingCrossCountry") == 0)
                                                return Value_CyclingWomensMountainBikingCrossCountry;
                                            break;
                                        case 'R':
                                            if (strncmp(&(chars[14]), "oadCycling", 10) == 0)
                                              {
                                                switch ((unsigned char)(chars[24]))
                                                  {
                                                    case 'R':
                                                        if (strcmp(&(chars[25]), "oadRace") == 0)
                                                            return Value_CyclingWomensRoadCyclingRoadRace;
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[25]), "imeTrial") == 0)
                                                            return Value_CyclingWomensRoadCyclingTimeTrial;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strncmp(&(chars[14]), "rackCycling", 11) == 0)
                                              {
                                                switch ((unsigned char)(chars[25]))
                                                  {
                                                    case 'I':
                                                        if (strncmp(&(chars[26]), "ndividual", 9) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[35]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(chars[36]), "ursuit") == 0)
                                                                        return Value_CyclingWomensTrackCyclingIndividualPursuit;
                                                                    break;
                                                                case 'S':
                                                                    if (strcmp(&(chars[36]), "print") == 0)
                                                                        return Value_CyclingWomensTrackCyclingIndividualSprint;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'K':
                                                        if (strcmp(&(chars[26]), "eirin") == 0)
                                                            return Value_CyclingWomensTrackCyclingKeirin;
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(chars[26]), "adison") == 0)
                                                            return Value_CyclingWomensTrackCyclingMadison;
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(chars[26]), "mnium") == 0)
                                                            return Value_CyclingWomensTrackCyclingOmnium;
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(chars[26]), "ointsRace") == 0)
                                                            return Value_CyclingWomensTrackCyclingPointsRace;
                                                        break;
                                                    case 'T':
                                                        switch ((unsigned char)(chars[26]))
                                                          {
                                                            case 'e':
                                                                if (strncmp(&(chars[27]), "am", 2) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[29]))
                                                                      {
                                                                        case 'P':
                                                                            if (strcmp(&(chars[30]), "ursuit") == 0)
                                                                                return Value_CyclingWomensTrackCyclingTeamPursuit;
                                                                            break;
                                                                        case 'S':
                                                                            if (strcmp(&(chars[30]), "print") == 0)
                                                                                return Value_CyclingWomensTrackCyclingTeamSprint;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(chars[27]), "meTrial") == 0)
                                                                    return Value_CyclingWomensTrackCyclingTimeTrial;
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
        case 'D':
            if (strncmp(&(chars[1]), "iving", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'M':
                        if (strncmp(&(chars[7]), "ens", 3) == 0)
                          {
                            switch ((unsigned char)(chars[10]))
                              {
                                case 'P':
                                    if (strcmp(&(chars[11]), "latform") == 0)
                                        return Value_DivingMensPlatform;
                                    break;
                                case 'S':
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'p':
                                            if (strcmp(&(chars[12]), "ringboard") == 0)
                                                return Value_DivingMensSpringboard;
                                            break;
                                        case 'y':
                                            if (strncmp(&(chars[12]), "nchronized", 10) == 0)
                                              {
                                                switch ((unsigned char)(chars[22]))
                                                  {
                                                    case 'P':
                                                        if (strcmp(&(chars[23]), "latform") == 0)
                                                            return Value_DivingMensSynchronizedPlatform;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[23]), "pringboard") == 0)
                                                            return Value_DivingMensSynchronizedSpringboard;
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
                          }
                        break;
                    case 'W':
                        if (strncmp(&(chars[7]), "omens", 5) == 0)
                          {
                            switch ((unsigned char)(chars[12]))
                              {
                                case 'P':
                                    if (strcmp(&(chars[13]), "latform") == 0)
                                        return Value_DivingWomensPlatform;
                                    break;
                                case 'S':
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'p':
                                            if (strcmp(&(chars[14]), "ringboard") == 0)
                                                return Value_DivingWomensSpringboard;
                                            break;
                                        case 'y':
                                            if (strncmp(&(chars[14]), "nchronized", 10) == 0)
                                              {
                                                switch ((unsigned char)(chars[24]))
                                                  {
                                                    case 'P':
                                                        if (strcmp(&(chars[25]), "latform") == 0)
                                                            return Value_DivingWomensSynchronizedPlatform;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[25]), "pringboard") == 0)
                                                            return Value_DivingWomensSynchronizedSpringboard;
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
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'E':
            if (strncmp(&(chars[1]), "questrian", 9) == 0)
              {
                switch ((unsigned char)(chars[10]))
                  {
                    case 'I':
                        if (strncmp(&(chars[11]), "ndividual", 9) == 0)
                          {
                            switch ((unsigned char)(chars[20]))
                              {
                                case 'D':
                                    if (strcmp(&(chars[21]), "ressage") == 0)
                                        return Value_EquestrianIndividualDressage;
                                    break;
                                case 'E':
                                    if (strcmp(&(chars[21]), "venting") == 0)
                                        return Value_EquestrianIndividualEventing;
                                    break;
                                case 'J':
                                    if (strcmp(&(chars[21]), "umping") == 0)
                                        return Value_EquestrianIndividualJumping;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strncmp(&(chars[11]), "eam", 3) == 0)
                          {
                            switch ((unsigned char)(chars[14]))
                              {
                                case 'D':
                                    if (strcmp(&(chars[15]), "ressage") == 0)
                                        return Value_EquestrianTeamDressage;
                                    break;
                                case 'E':
                                    if (strcmp(&(chars[15]), "venting") == 0)
                                        return Value_EquestrianTeamEventing;
                                    break;
                                case 'J':
                                    if (strcmp(&(chars[15]), "umping") == 0)
                                        return Value_EquestrianTeamJumping;
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
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strncmp(&(chars[2]), "ncing", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'M':
                                if (strncmp(&(chars[8]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'I':
                                            if (strncmp(&(chars[12]), "ndividual", 9) == 0)
                                              {
                                                switch ((unsigned char)(chars[21]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[22]), "pee") == 0)
                                                            return Value_FencingMensIndividualEpee;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[22]), "oil") == 0)
                                                            return Value_FencingMensIndividualFoil;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[22]), "abre") == 0)
                                                            return Value_FencingMensIndividualSabre;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strncmp(&(chars[12]), "eam", 3) == 0)
                                              {
                                                switch ((unsigned char)(chars[15]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[16]), "pee") == 0)
                                                            return Value_FencingMensTeamEpee;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[16]), "oil") == 0)
                                                            return Value_FencingMensTeamFoil;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[16]), "abre") == 0)
                                                            return Value_FencingMensTeamSabre;
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
                            case 'W':
                                if (strncmp(&(chars[8]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'I':
                                            if (strncmp(&(chars[14]), "ndividual", 9) == 0)
                                              {
                                                switch ((unsigned char)(chars[23]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[24]), "pee") == 0)
                                                            return Value_FencingWomensIndividualEpee;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[24]), "oil") == 0)
                                                            return Value_FencingWomensIndividualFoil;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[24]), "abre") == 0)
                                                            return Value_FencingWomensIndividualSabre;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strncmp(&(chars[14]), "eam", 3) == 0)
                                              {
                                                switch ((unsigned char)(chars[17]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(chars[18]), "pee") == 0)
                                                            return Value_FencingWomensTeamEpee;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[18]), "oil") == 0)
                                                            return Value_FencingWomensTeamFoil;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[18]), "abre") == 0)
                                                            return Value_FencingWomensTeamSabre;
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
                case 'i':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'e':
                            if (strncmp(&(chars[3]), "ldHockey", 8) == 0)
                              {
                                switch ((unsigned char)(chars[11]))
                                  {
                                    case 'M':
                                        if (strcmp(&(chars[12]), "ens") == 0)
                                            return Value_FieldHockeyMens;
                                        break;
                                    case 'W':
                                        if (strcmp(&(chars[12]), "omens") == 0)
                                            return Value_FieldHockeyWomens;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'g':
                            if (strncmp(&(chars[3]), "ureSkating", 10) == 0)
                              {
                                switch ((unsigned char)(chars[13]))
                                  {
                                    case 'I':
                                        if (strcmp(&(chars[14]), "ceDancing") == 0)
                                            return Value_FigureSkatingIceDancing;
                                        break;
                                    case 'M':
                                        if (strcmp(&(chars[14]), "ensSingles") == 0)
                                            return Value_FigureSkatingMensSingles;
                                        break;
                                    case 'P':
                                        if (strcmp(&(chars[14]), "air") == 0)
                                            return Value_FigureSkatingPair;
                                        break;
                                    case 'T':
                                        if (strcmp(&(chars[14]), "eamTrophy") == 0)
                                            return Value_FigureSkatingTeamTrophy;
                                        break;
                                    case 'W':
                                        if (strcmp(&(chars[14]), "omensSingles") == 0)
                                            return Value_FigureSkatingWomensSingles;
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
                case 'o':
                    if (strncmp(&(chars[2]), "otball", 6) == 0)
                      {
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'M':
                                if (strcmp(&(chars[9]), "ens") == 0)
                                    return Value_FootballMens;
                                break;
                            case 'W':
                                if (strcmp(&(chars[9]), "omens") == 0)
                                    return Value_FootballWomens;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "eestyleSkiing", 13) == 0)
                      {
                        switch ((unsigned char)(chars[15]))
                          {
                            case 'M':
                                if (strncmp(&(chars[16]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[19]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[20]), "erials") == 0)
                                                return Value_FreestyleSkiingMensAerials;
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[20]), "alfpipe") == 0)
                                                return Value_FreestyleSkiingMensHalfpipe;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[20]), "oguls") == 0)
                                                return Value_FreestyleSkiingMensMoguls;
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[20]))
                                              {
                                                case 'k':
                                                    if (strcmp(&(chars[21]), "iCross") == 0)
                                                        return Value_FreestyleSkiingMensSkiCross;
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(chars[21]), "opestyle") == 0)
                                                        return Value_FreestyleSkiingMensSlopestyle;
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
                            case 'W':
                                if (strncmp(&(chars[16]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[21]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[22]), "erials") == 0)
                                                return Value_FreestyleSkiingWomensAerials;
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[22]), "alfpipe") == 0)
                                                return Value_FreestyleSkiingWomensHalfpipe;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[22]), "oguls") == 0)
                                                return Value_FreestyleSkiingWomensMoguls;
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[22]))
                                              {
                                                case 'k':
                                                    if (strcmp(&(chars[23]), "iCross") == 0)
                                                        return Value_FreestyleSkiingWomensSkiCross;
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(chars[23]), "opestyle") == 0)
                                                        return Value_FreestyleSkiingWomensSlopestyle;
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
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'G':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strncmp(&(chars[2]), "lf", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'M':
                                if (strcmp(&(chars[5]), "ensIndividual") == 0)
                                    return Value_GolfMensIndividual;
                                break;
                            case 'W':
                                if (strcmp(&(chars[5]), "omensIndividual") == 0)
                                    return Value_GolfWomensIndividual;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'y':
                    if (strncmp(&(chars[2]), "mnastics", 8) == 0)
                      {
                        switch ((unsigned char)(chars[10]))
                          {
                            case 'M':
                                if (strncmp(&(chars[11]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[14]))
                                      {
                                        case 'A':
                                            if (strncmp(&(chars[15]), "rtistic", 7) == 0)
                                              {
                                                switch ((unsigned char)(chars[22]))
                                                  {
                                                    case 'F':
                                                        if (strcmp(&(chars[23]), "loorExercise") == 0)
                                                            return Value_GymnasticsMensArtisticFloorExercise;
                                                        break;
                                                    case 'H':
                                                        if (strcmp(&(chars[23]), "orizontalBar") == 0)
                                                            return Value_GymnasticsMensArtisticHorizontalBar;
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(chars[23]), "ndividualAllAround") == 0)
                                                            return Value_GymnasticsMensArtisticIndividualAllAround;
                                                        break;
                                                    case 'P':
                                                        switch ((unsigned char)(chars[23]))
                                                          {
                                                            case 'a':
                                                                if (strcmp(&(chars[24]), "rallelBars") == 0)
                                                                    return Value_GymnasticsMensArtisticParallelBars;
                                                                break;
                                                            case 'o':
                                                                if (strcmp(&(chars[24]), "mmelHorse") == 0)
                                                                    return Value_GymnasticsMensArtisticPommelHorse;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'R':
                                                        if (strcmp(&(chars[23]), "ings") == 0)
                                                            return Value_GymnasticsMensArtisticRings;
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[23]), "eamAllAround") == 0)
                                                            return Value_GymnasticsMensArtisticTeamAllAround;
                                                        break;
                                                    case 'V':
                                                        if (strcmp(&(chars[23]), "ault") == 0)
                                                            return Value_GymnasticsMensArtisticVault;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[15]), "rampolineIndividual") == 0)
                                                return Value_GymnasticsMensTrampolineIndividual;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[11]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[16]))
                                      {
                                        case 'A':
                                            if (strncmp(&(chars[17]), "rtistic", 7) == 0)
                                              {
                                                switch ((unsigned char)(chars[24]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(chars[25]), "alanceBeam") == 0)
                                                            return Value_GymnasticsWomensArtisticBalanceBeam;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[25]), "loorExercise") == 0)
                                                            return Value_GymnasticsWomensArtisticFloorExercise;
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(chars[25]), "ndividualAllAround") == 0)
                                                            return Value_GymnasticsWomensArtisticIndividualAllAround;
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[25]), "eamAllAround") == 0)
                                                            return Value_GymnasticsWomensArtisticTeamAllAround;
                                                        break;
                                                    case 'U':
                                                        if (strcmp(&(chars[25]), "nevenBars") == 0)
                                                            return Value_GymnasticsWomensArtisticUnevenBars;
                                                        break;
                                                    case 'V':
                                                        if (strcmp(&(chars[25]), "ault") == 0)
                                                            return Value_GymnasticsWomensArtisticVault;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'R':
                                            if (strncmp(&(chars[17]), "hythmic", 7) == 0)
                                              {
                                                switch ((unsigned char)(chars[24]))
                                                  {
                                                    case 'G':
                                                        if (strcmp(&(chars[25]), "roupAllAround") == 0)
                                                            return Value_GymnasticsWomensRhythmicGroupAllAround;
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(chars[25]), "ndividualAllAround") == 0)
                                                            return Value_GymnasticsWomensRhythmicIndividualAllAround;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[17]), "rampolineIndividual") == 0)
                                                return Value_GymnasticsWomensTrampolineIndividual;
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
        case 'H':
            if (strncmp(&(chars[1]), "andball", 7) == 0)
              {
                switch ((unsigned char)(chars[8]))
                  {
                    case 'M':
                        if (strcmp(&(chars[9]), "ens") == 0)
                            return Value_HandballMens;
                        break;
                    case 'W':
                        if (strcmp(&(chars[9]), "omens") == 0)
                            return Value_HandballWomens;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'I':
            if (strncmp(&(chars[1]), "ceHockey", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 'M':
                        if (strcmp(&(chars[10]), "ens") == 0)
                            return Value_IceHockeyMens;
                        break;
                    case 'W':
                        if (strcmp(&(chars[10]), "omens") == 0)
                            return Value_IceHockeyWomens;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'J':
            if (strncmp(&(chars[1]), "udo", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'M':
                        if (strncmp(&(chars[5]), "ens", 3) == 0)
                          {
                            switch ((unsigned char)(chars[8]))
                              {
                                case 'E':
                                    if (strcmp(&(chars[9]), "xtraLightweight") == 0)
                                        return Value_JudoMensExtraLightweight;
                                    break;
                                case 'H':
                                    switch ((unsigned char)(chars[9]))
                                      {
                                        case 'a':
                                            if (strncmp(&(chars[10]), "lf", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[12]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(chars[13]), "eavyweight") == 0)
                                                            return Value_JudoMensHalfHeavyweight;
                                                        break;
                                                    case 'L':
                                                        if (strcmp(&(chars[13]), "ightweight") == 0)
                                                            return Value_JudoMensHalfLightweight;
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(chars[13]), "iddleweight") == 0)
                                                            return Value_JudoMensHalfMiddleweight;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'e':
                                            if (strcmp(&(chars[10]), "avyweight") == 0)
                                                return Value_JudoMensHeavyweight;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'L':
                                    if (strcmp(&(chars[9]), "ightweight") == 0)
                                        return Value_JudoMensLightweight;
                                    break;
                                case 'M':
                                    if (strcmp(&(chars[9]), "iddleweight") == 0)
                                        return Value_JudoMensMiddleweight;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'W':
                        if (strncmp(&(chars[5]), "omens", 5) == 0)
                          {
                            switch ((unsigned char)(chars[10]))
                              {
                                case 'E':
                                    if (strcmp(&(chars[11]), "xtraLightweight") == 0)
                                        return Value_JudoWomensExtraLightweight;
                                    break;
                                case 'H':
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'a':
                                            if (strncmp(&(chars[12]), "lf", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[14]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(chars[15]), "eavyweight") == 0)
                                                            return Value_JudoWomensHalfHeavyweight;
                                                        break;
                                                    case 'L':
                                                        if (strcmp(&(chars[15]), "ightweight") == 0)
                                                            return Value_JudoWomensHalfLightweight;
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(chars[15]), "iddleweight") == 0)
                                                            return Value_JudoWomensHalfMiddleweight;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'e':
                                            if (strcmp(&(chars[12]), "avyweight") == 0)
                                                return Value_JudoWomensHeavyweight;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'L':
                                    if (strcmp(&(chars[11]), "ightweight") == 0)
                                        return Value_JudoWomensLightweight;
                                    break;
                                case 'M':
                                    if (strcmp(&(chars[11]), "iddleweight") == 0)
                                        return Value_JudoWomensMiddleweight;
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
        case 'L':
            if (strncmp(&(chars[1]), "uge", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'D':
                        if (strcmp(&(chars[5]), "oubles") == 0)
                            return Value_LugeDoubles;
                        break;
                    case 'M':
                        if (strcmp(&(chars[5]), "ensSingles") == 0)
                            return Value_LugeMensSingles;
                        break;
                    case 'T':
                        if (strcmp(&(chars[5]), "eamRelay") == 0)
                            return Value_LugeTeamRelay;
                        break;
                    case 'W':
                        if (strcmp(&(chars[5]), "omensSingles") == 0)
                            return Value_LugeWomensSingles;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strncmp(&(chars[1]), "odernPentathlon", 15) == 0)
              {
                switch ((unsigned char)(chars[16]))
                  {
                    case 'M':
                        if (strcmp(&(chars[17]), "ens") == 0)
                            return Value_ModernPentathlonMens;
                        break;
                    case 'W':
                        if (strcmp(&(chars[17]), "omens") == 0)
                            return Value_ModernPentathlonWomens;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strncmp(&(chars[1]), "ordicCombined", 13) == 0)
              {
                switch ((unsigned char)(chars[14]))
                  {
                    case 'I':
                        if (strncmp(&(chars[15]), "ndividual", 9) == 0)
                          {
                            switch ((unsigned char)(chars[24]))
                              {
                                case 'L':
                                    if (strcmp(&(chars[25]), "argeHill10KM") == 0)
                                        return Value_NordicCombinedIndividualLargeHill10KM;
                                    break;
                                case 'N':
                                    if (strcmp(&(chars[25]), "ormalHill10KM") == 0)
                                        return Value_NordicCombinedIndividualNormalHill10KM;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(chars[15]), "eamLargeHill4X5KM") == 0)
                            return Value_NordicCombinedTeamLargeHill4X5KM;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strncmp(&(chars[2]), "wing", 4) == 0)
                      {
                        switch ((unsigned char)(chars[6]))
                          {
                            case 'M':
                                if (strncmp(&(chars[7]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 'C':
                                            if (strncmp(&(chars[11]), "ox", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[13]))
                                                  {
                                                    case 'e':
                                                        if (strncmp(&(chars[14]), "d", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[15]))
                                                              {
                                                                case 'E':
                                                                    if (strcmp(&(chars[16]), "ight") == 0)
                                                                        return Value_RowingMensCoxedEight;
                                                                    break;
                                                                case 'F':
                                                                    if (strcmp(&(chars[16]), "our") == 0)
                                                                        return Value_RowingMensCoxedFour;
                                                                    break;
                                                                case 'P':
                                                                    if (strcmp(&(chars[16]), "air") == 0)
                                                                        return Value_RowingMensCoxedPair;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'l':
                                                        if (strncmp(&(chars[14]), "ess", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[17]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(chars[18]), "our") == 0)
                                                                        return Value_RowingMensCoxlessFour;
                                                                    break;
                                                                case 'P':
                                                                    if (strcmp(&(chars[18]), "air") == 0)
                                                                        return Value_RowingMensCoxlessPair;
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
                                        case 'D':
                                            if (strcmp(&(chars[11]), "oubleSculls") == 0)
                                                return Value_RowingMensDoubleSculls;
                                            break;
                                        case 'L':
                                            if (strncmp(&(chars[11]), "ightweight", 10) == 0)
                                              {
                                                switch ((unsigned char)(chars[21]))
                                                  {
                                                    case 'C':
                                                        if (strcmp(&(chars[22]), "oxlessFour") == 0)
                                                            return Value_RowingMensLightweightCoxlessFour;
                                                        break;
                                                    case 'D':
                                                        if (strcmp(&(chars[22]), "oubleSculls") == 0)
                                                            return Value_RowingMensLightweightDoubleSculls;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'Q':
                                            if (strcmp(&(chars[11]), "uadrupleSculls") == 0)
                                                return Value_RowingMensQuadrupleSculls;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[11]), "ingleSculls") == 0)
                                                return Value_RowingMensSingleSculls;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[7]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[12]))
                                      {
                                        case 'C':
                                            if (strncmp(&(chars[13]), "ox", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[15]))
                                                  {
                                                    case 'e':
                                                        if (strncmp(&(chars[16]), "d", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[17]))
                                                              {
                                                                case 'E':
                                                                    if (strcmp(&(chars[18]), "ight") == 0)
                                                                        return Value_RowingWomensCoxedEight;
                                                                    break;
                                                                case 'F':
                                                                    if (strcmp(&(chars[18]), "our") == 0)
                                                                        return Value_RowingWomensCoxedFour;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'l':
                                                        if (strcmp(&(chars[16]), "essPair") == 0)
                                                            return Value_RowingWomensCoxlessPair;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'D':
                                            if (strcmp(&(chars[13]), "oubleSculls") == 0)
                                                return Value_RowingWomensDoubleSculls;
                                            break;
                                        case 'L':
                                            if (strcmp(&(chars[13]), "ightweightDoubleSculls") == 0)
                                                return Value_RowingWomensLightweightDoubleSculls;
                                            break;
                                        case 'Q':
                                            if (strcmp(&(chars[13]), "uadrupleSculls") == 0)
                                                return Value_RowingWomensQuadrupleSculls;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[13]), "ingleSculls") == 0)
                                                return Value_RowingWomensSingleSculls;
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
                    if (strncmp(&(chars[2]), "gby", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'M':
                                if (strcmp(&(chars[6]), "ens") == 0)
                                    return Value_RugbyMens;
                                break;
                            case 'W':
                                if (strcmp(&(chars[6]), "omens") == 0)
                                    return Value_RugbyWomens;
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
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strncmp(&(chars[2]), "iling", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'M':
                                switch ((unsigned char)(chars[8]))
                                  {
                                    case 'e':
                                        if (strncmp(&(chars[9]), "ns", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[11]))
                                              {
                                                case '4':
                                                    switch ((unsigned char)(chars[12]))
                                                      {
                                                        case '7':
                                                            if (strcmp(&(chars[13]), "0") == 0)
                                                                return Value_SailingMens470;
                                                            break;
                                                        case '9':
                                                            if (strcmp(&(chars[13]), "erFX") == 0)
                                                                return Value_SailingMens49erFX;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(chars[12]), "inn") == 0)
                                                        return Value_SailingMensFinn;
                                                    break;
                                                case 'L':
                                                    if (strcmp(&(chars[12]), "aser") == 0)
                                                        return Value_SailingMensLaser;
                                                    break;
                                                case 'R':
                                                    if (strcmp(&(chars[12]), "SX") == 0)
                                                        return Value_SailingMensRSX;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(chars[12]), "tar") == 0)
                                                        return Value_SailingMensStar;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'i':
                                        if (strncmp(&(chars[9]), "xed", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[12]))
                                              {
                                                case '4':
                                                    if (strcmp(&(chars[13]), "9erFX") == 0)
                                                        return Value_SailingMixed49erFX;
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(chars[13]), "inn") == 0)
                                                        return Value_SailingMixedFinn;
                                                    break;
                                                case 'N':
                                                    if (strcmp(&(chars[13]), "acra17") == 0)
                                                        return Value_SailingMixedNacra17;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(chars[13]), "ornado") == 0)
                                                        return Value_SailingMixedTornado;
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
                            case 'W':
                                if (strncmp(&(chars[8]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case '4':
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case '7':
                                                    if (strcmp(&(chars[15]), "0") == 0)
                                                        return Value_SailingWomens470;
                                                    break;
                                                case '9':
                                                    if (strcmp(&(chars[15]), "erFX") == 0)
                                                        return Value_SailingWomens49erFX;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'E':
                                            if (strcmp(&(chars[14]), "lliott6M") == 0)
                                                return Value_SailingWomensElliott6M;
                                            break;
                                        case 'L':
                                            if (strcmp(&(chars[14]), "aser") == 0)
                                                return Value_SailingWomensLaser;
                                            break;
                                        case 'R':
                                            if (strcmp(&(chars[14]), "SX") == 0)
                                                return Value_SailingWomensRSX;
                                            break;
                                        case 'Y':
                                            if (strcmp(&(chars[14]), "ngling") == 0)
                                                return Value_SailingWomensYngling;
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
                case 'h':
                    if (strncmp(&(chars[2]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'o':
                                if (strncmp(&(chars[4]), "ting", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[8]))
                                      {
                                        case 'M':
                                            if (strncmp(&(chars[9]), "ens", 3) == 0)
                                              {
                                                switch ((unsigned char)(chars[12]))
                                                  {
                                                    case '1':
                                                        if (strcmp(&(chars[13]), "0MRunningTarget") == 0)
                                                            return Value_ShootingMens10MRunningTarget;
                                                        break;
                                                    case 'A':
                                                        if (strncmp(&(chars[13]), "ir", 2) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[15]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(chars[16]), "istol10M") == 0)
                                                                        return Value_ShootingMensAirPistol10M;
                                                                    break;
                                                                case 'R':
                                                                    if (strcmp(&(chars[16]), "ifle10M") == 0)
                                                                        return Value_ShootingMensAirRifle10M;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'D':
                                                        if (strcmp(&(chars[13]), "oubleTrap") == 0)
                                                            return Value_ShootingMensDoubleTrap;
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(chars[13]), "istol50M") == 0)
                                                            return Value_ShootingMensPistol50M;
                                                        break;
                                                    case 'R':
                                                        switch ((unsigned char)(chars[13]))
                                                          {
                                                            case 'a':
                                                                if (strcmp(&(chars[14]), "pidFirePistol25M") == 0)
                                                                    return Value_ShootingMensRapidFirePistol25M;
                                                                break;
                                                            case 'i':
                                                                if (strncmp(&(chars[14]), "fle", 3) == 0)
                                                                  {
                                                                    switch ((unsigned char)(chars[17]))
                                                                      {
                                                                        case 'P':
                                                                            if (strcmp(&(chars[18]), "rone50M") == 0)
                                                                                return Value_ShootingMensRifleProne50M;
                                                                            break;
                                                                        case 'T':
                                                                            if (strcmp(&(chars[18]), "hreePositions50M") == 0)
                                                                                return Value_ShootingMensRifleThreePositions50M;
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
                                                        if (strcmp(&(chars[13]), "keet") == 0)
                                                            return Value_ShootingMensSkeet;
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[13]), "rap") == 0)
                                                            return Value_ShootingMensTrap;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'W':
                                            if (strncmp(&(chars[9]), "omens", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[14]))
                                                  {
                                                    case 'A':
                                                        if (strncmp(&(chars[15]), "ir", 2) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[17]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(chars[18]), "istol10M") == 0)
                                                                        return Value_ShootingWomensAirPistol10M;
                                                                    break;
                                                                case 'R':
                                                                    if (strcmp(&(chars[18]), "ifle10M") == 0)
                                                                        return Value_ShootingWomensAirRifle10M;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'D':
                                                        if (strcmp(&(chars[15]), "oubleTrap") == 0)
                                                            return Value_ShootingWomensDoubleTrap;
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(chars[15]), "istol25M") == 0)
                                                            return Value_ShootingWomensPistol25M;
                                                        break;
                                                    case 'R':
                                                        if (strcmp(&(chars[15]), "ifleThreePositions50M") == 0)
                                                            return Value_ShootingWomensRifleThreePositions50M;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[15]), "keet") == 0)
                                                            return Value_ShootingWomensSkeet;
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(chars[15]), "rap") == 0)
                                                            return Value_ShootingWomensTrap;
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
                            case 'r':
                                if (strncmp(&(chars[4]), "tTrackSpeedSkating", 18) == 0)
                                  {
                                    switch ((unsigned char)(chars[22]))
                                      {
                                        case 'M':
                                            if (strncmp(&(chars[23]), "ens", 3) == 0)
                                              {
                                                switch ((unsigned char)(chars[26]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(chars[27]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(chars[28]), "00M") == 0)
                                                                    return Value_ShortTrackSpeedSkatingMens1000M;
                                                                break;
                                                            case '5':
                                                                if (strcmp(&(chars[28]), "00M") == 0)
                                                                    return Value_ShortTrackSpeedSkatingMens1500M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case '5':
                                                        if (strncmp(&(chars[27]), "00", 2) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[29]))
                                                              {
                                                                case '0':
                                                                    if (strcmp(&(chars[30]), "MRelay") == 0)
                                                                        return Value_ShortTrackSpeedSkatingMens5000MRelay;
                                                                    break;
                                                                case 'M':
                                                                    if (chars[30] == 0)
                                                                        return Value_ShortTrackSpeedSkatingMens500M;
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
                                        case 'W':
                                            if (strncmp(&(chars[23]), "omens", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[28]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(chars[29]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(chars[30]), "00M") == 0)
                                                                    return Value_ShortTrackSpeedSkatingWomens1000M;
                                                                break;
                                                            case '5':
                                                                if (strcmp(&(chars[30]), "00M") == 0)
                                                                    return Value_ShortTrackSpeedSkatingWomens1500M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case '3':
                                                        if (strcmp(&(chars[29]), "000MRelay") == 0)
                                                            return Value_ShortTrackSpeedSkatingWomens3000MRelay;
                                                        break;
                                                    case '5':
                                                        if (strcmp(&(chars[29]), "00M") == 0)
                                                            return Value_ShortTrackSpeedSkatingWomens500M;
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
                case 'k':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'e':
                            if (strncmp(&(chars[3]), "leton", 5) == 0)
                              {
                                switch ((unsigned char)(chars[8]))
                                  {
                                    case 'M':
                                        if (strcmp(&(chars[9]), "ens") == 0)
                                            return Value_SkeletonMens;
                                        break;
                                    case 'W':
                                        if (strcmp(&(chars[9]), "omens") == 0)
                                            return Value_SkeletonWomens;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strncmp(&(chars[3]), "Jumping", 7) == 0)
                              {
                                switch ((unsigned char)(chars[10]))
                                  {
                                    case 'M':
                                        if (strncmp(&(chars[11]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case 'I':
                                                    if (strncmp(&(chars[15]), "ndividual", 9) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[24]))
                                                          {
                                                            case 'L':
                                                                if (strcmp(&(chars[25]), "argeHill") == 0)
                                                                    return Value_SkiJumpingMensIndividualLargeHill;
                                                                break;
                                                            case 'N':
                                                                if (strcmp(&(chars[25]), "ormalHill") == 0)
                                                                    return Value_SkiJumpingMensIndividualNormalHill;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(chars[15]), "eamLargeHill") == 0)
                                                        return Value_SkiJumpingMensTeamLargeHill;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strcmp(&(chars[11]), "omensIndividualNormalHill") == 0)
                                            return Value_SkiJumpingWomensIndividualNormalHill;
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
                case 'n':
                    if (strncmp(&(chars[2]), "owboarding", 10) == 0)
                      {
                        switch ((unsigned char)(chars[12]))
                          {
                            case 'M':
                                if (strncmp(&(chars[13]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[16]))
                                      {
                                        case 'B':
                                            if (strcmp(&(chars[17]), "igAir") == 0)
                                                return Value_SnowboardingMensBigAir;
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[17]), "alfpipe") == 0)
                                                return Value_SnowboardingMensHalfpipe;
                                            break;
                                        case 'P':
                                            if (strncmp(&(chars[17]), "arallel", 7) == 0)
                                              {
                                                switch ((unsigned char)(chars[24]))
                                                  {
                                                    case 'G':
                                                        if (strcmp(&(chars[25]), "iantSlalom") == 0)
                                                            return Value_SnowboardingMensParallelGiantSlalom;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[25]), "lalom") == 0)
                                                            return Value_SnowboardingMensParallelSlalom;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[17]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(chars[18]), "opestyle") == 0)
                                                        return Value_SnowboardingMensSlopestyle;
                                                    break;
                                                case 'n':
                                                    if (strcmp(&(chars[18]), "owboardCross") == 0)
                                                        return Value_SnowboardingMensSnowboardCross;
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
                            case 'W':
                                if (strncmp(&(chars[13]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[18]))
                                      {
                                        case 'B':
                                            if (strcmp(&(chars[19]), "igAir") == 0)
                                                return Value_SnowboardingWomensBigAir;
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[19]), "alfpipe") == 0)
                                                return Value_SnowboardingWomensHalfpipe;
                                            break;
                                        case 'P':
                                            if (strncmp(&(chars[19]), "arallel", 7) == 0)
                                              {
                                                switch ((unsigned char)(chars[26]))
                                                  {
                                                    case 'G':
                                                        if (strcmp(&(chars[27]), "iantSlalom") == 0)
                                                            return Value_SnowboardingWomensParallelGiantSlalom;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[27]), "lalom") == 0)
                                                            return Value_SnowboardingWomensParallelSlalom;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[19]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(chars[20]), "opestyle") == 0)
                                                        return Value_SnowboardingWomensSlopestyle;
                                                    break;
                                                case 'n':
                                                    if (strcmp(&(chars[20]), "owboardCross") == 0)
                                                        return Value_SnowboardingWomensSnowboardCross;
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
                            default:
                                break;
                          }
                      }
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ftballWomens") == 0)
                        return Value_SoftballWomens;
                    break;
                case 'p':
                    if (strncmp(&(chars[2]), "eedSkating", 10) == 0)
                      {
                        switch ((unsigned char)(chars[12]))
                          {
                            case 'M':
                                if (strncmp(&(chars[13]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[16]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(chars[17]))
                                              {
                                                case '0':
                                                    if (strncmp(&(chars[18]), "00", 2) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[20]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(chars[21]), "M") == 0)
                                                                    return Value_SpeedSkatingMens10000M;
                                                                break;
                                                            case 'M':
                                                                if (chars[21] == 0)
                                                                    return Value_SpeedSkatingMens1000M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(chars[18]), "00M") == 0)
                                                        return Value_SpeedSkatingMens1500M;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '5':
                                            if (strncmp(&(chars[17]), "00", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[19]))
                                                  {
                                                    case '0':
                                                        if (strcmp(&(chars[20]), "M") == 0)
                                                            return Value_SpeedSkatingMens5000M;
                                                        break;
                                                    case 'M':
                                                        if (chars[20] == 0)
                                                            return Value_SpeedSkatingMens500M;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'A':
                                            if (strcmp(&(chars[17]), "llRound") == 0)
                                                return Value_SpeedSkatingMensAllRound;
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[17]), "assStart") == 0)
                                                return Value_SpeedSkatingMensMassStart;
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[17]), "eamPursuit") == 0)
                                                return Value_SpeedSkatingMensTeamPursuit;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[13]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[18]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(chars[19]))
                                              {
                                                case '0':
                                                    if (strcmp(&(chars[20]), "00M") == 0)
                                                        return Value_SpeedSkatingWomens1000M;
                                                    break;
                                                case '5':
                                                    if (strcmp(&(chars[20]), "00M") == 0)
                                                        return Value_SpeedSkatingWomens1500M;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '3':
                                            if (strcmp(&(chars[19]), "000M") == 0)
                                                return Value_SpeedSkatingWomens3000M;
                                            break;
                                        case '5':
                                            if (strncmp(&(chars[19]), "00", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[21]))
                                                  {
                                                    case '0':
                                                        if (strcmp(&(chars[22]), "M") == 0)
                                                            return Value_SpeedSkatingWomens5000M;
                                                        break;
                                                    case 'M':
                                                        if (chars[22] == 0)
                                                            return Value_SpeedSkatingWomens500M;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[19]), "assStart") == 0)
                                                return Value_SpeedSkatingWomensMassStart;
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[19]), "eamPursuit") == 0)
                                                return Value_SpeedSkatingWomensTeamPursuit;
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
                case 'w':
                    if (strncmp(&(chars[2]), "imming", 6) == 0)
                      {
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'M':
                                if (strncmp(&(chars[9]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[12]))
                                      {
                                        case '4':
                                            if (strncmp(&(chars[13]), "X", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[14]))
                                                  {
                                                    case '1':
                                                        if (strncmp(&(chars[15]), "00M", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[18]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(chars[19]), "reestyleRelay") == 0)
                                                                        return Value_SwimmingMens4X100MFreestyleRelay;
                                                                    break;
                                                                case 'M':
                                                                    if (strcmp(&(chars[19]), "edleyRelay") == 0)
                                                                        return Value_SwimmingMens4X100MMedleyRelay;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(chars[15]), "00MFreestyleRelay") == 0)
                                                            return Value_SwimmingMens4X200MFreestyleRelay;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'B':
                                            switch ((unsigned char)(chars[13]))
                                              {
                                                case 'a':
                                                    if (strncmp(&(chars[14]), "ckstroke", 8) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[22]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(chars[23]), "00M") == 0)
                                                                    return Value_SwimmingMensBackstroke100M;
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(chars[23]), "00M") == 0)
                                                                    return Value_SwimmingMensBackstroke200M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'r':
                                                    if (strncmp(&(chars[14]), "eaststroke", 10) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[24]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(chars[25]), "00M") == 0)
                                                                    return Value_SwimmingMensBreaststroke100M;
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(chars[25]), "00M") == 0)
                                                                    return Value_SwimmingMensBreaststroke200M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strncmp(&(chars[14]), "tterfly", 7) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[21]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(chars[22]), "00M") == 0)
                                                                    return Value_SwimmingMensButterfly100M;
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(chars[22]), "00M") == 0)
                                                                    return Value_SwimmingMensButterfly200M;
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
                                        case 'F':
                                            if (strncmp(&(chars[13]), "reestyle", 8) == 0)
                                              {
                                                switch ((unsigned char)(chars[21]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(chars[22]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(chars[23]), "0M") == 0)
                                                                    return Value_SwimmingMensFreestyle100M;
                                                                break;
                                                            case '5':
                                                                if (strcmp(&(chars[23]), "00M") == 0)
                                                                    return Value_SwimmingMensFreestyle1500M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(chars[22]), "00M") == 0)
                                                            return Value_SwimmingMensFreestyle200M;
                                                        break;
                                                    case '4':
                                                        if (strcmp(&(chars[22]), "00M") == 0)
                                                            return Value_SwimmingMensFreestyle400M;
                                                        break;
                                                    case '5':
                                                        if (strcmp(&(chars[22]), "0M") == 0)
                                                            return Value_SwimmingMensFreestyle50M;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'I':
                                            if (strncmp(&(chars[13]), "ndividualMedley", 15) == 0)
                                              {
                                                switch ((unsigned char)(chars[28]))
                                                  {
                                                    case '2':
                                                        if (strcmp(&(chars[29]), "00M") == 0)
                                                            return Value_SwimmingMensIndividualMedley200M;
                                                        break;
                                                    case '4':
                                                        if (strcmp(&(chars[29]), "00M") == 0)
                                                            return Value_SwimmingMensIndividualMedley400M;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'O':
                                            if (strcmp(&(chars[13]), "penWater10KM") == 0)
                                                return Value_SwimmingMensOpenWater10KM;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[9]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[14]))
                                      {
                                        case '4':
                                            if (strncmp(&(chars[15]), "X", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[16]))
                                                  {
                                                    case '1':
                                                        if (strncmp(&(chars[17]), "00M", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[20]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(chars[21]), "reestyleRelay") == 0)
                                                                        return Value_SwimmingWomens4X100MFreestyleRelay;
                                                                    break;
                                                                case 'M':
                                                                    if (strcmp(&(chars[21]), "edleyRelay") == 0)
                                                                        return Value_SwimmingWomens4X100MMedleyRelay;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(chars[17]), "00MFreestyleRelay") == 0)
                                                            return Value_SwimmingWomens4X200MFreestyleRelay;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'B':
                                            switch ((unsigned char)(chars[15]))
                                              {
                                                case 'a':
                                                    if (strncmp(&(chars[16]), "ckstroke", 8) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[24]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(chars[25]), "00M") == 0)
                                                                    return Value_SwimmingWomensBackstroke100M;
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(chars[25]), "00M") == 0)
                                                                    return Value_SwimmingWomensBackstroke200M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'r':
                                                    if (strncmp(&(chars[16]), "eaststroke", 10) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[26]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(chars[27]), "00M") == 0)
                                                                    return Value_SwimmingWomensBreaststroke100M;
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(chars[27]), "00M") == 0)
                                                                    return Value_SwimmingWomensBreaststroke200M;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strncmp(&(chars[16]), "tterfly", 7) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[23]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(chars[24]), "00M") == 0)
                                                                    return Value_SwimmingWomensButterfly100M;
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(chars[24]), "00M") == 0)
                                                                    return Value_SwimmingWomensButterfly200M;
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
                                        case 'F':
                                            if (strncmp(&(chars[15]), "reestyle", 8) == 0)
                                              {
                                                switch ((unsigned char)(chars[23]))
                                                  {
                                                    case '1':
                                                        if (strcmp(&(chars[24]), "00M") == 0)
                                                            return Value_SwimmingWomensFreestyle100M;
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(chars[24]), "00M") == 0)
                                                            return Value_SwimmingWomensFreestyle200M;
                                                        break;
                                                    case '4':
                                                        if (strcmp(&(chars[24]), "00M") == 0)
                                                            return Value_SwimmingWomensFreestyle400M;
                                                        break;
                                                    case '5':
                                                        if (strcmp(&(chars[24]), "0M") == 0)
                                                            return Value_SwimmingWomensFreestyle50M;
                                                        break;
                                                    case '8':
                                                        if (strcmp(&(chars[24]), "00M") == 0)
                                                            return Value_SwimmingWomensFreestyle800M;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[15]), "ndividualMedley200M") == 0)
                                                return Value_SwimmingWomensIndividualMedley200M;
                                            break;
                                        case 'O':
                                            if (strcmp(&(chars[15]), "penWater10KM") == 0)
                                                return Value_SwimmingWomensOpenWater10KM;
                                            break;
                                        case 'i':
                                            if (strcmp(&(chars[15]), "ndividualMedley400M") == 0)
                                                return Value_SwimmingWomensindividualMedley400M;
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
                case 'y':
                    if (strncmp(&(chars[2]), "nchronizedSwimmingWomens", 24) == 0)
                      {
                        switch ((unsigned char)(chars[26]))
                          {
                            case 'D':
                                if (strcmp(&(chars[27]), "uet") == 0)
                                    return Value_SynchronizedSwimmingWomensDuet;
                                break;
                            case 'S':
                                if (strcmp(&(chars[27]), "olo") == 0)
                                    return Value_SynchronizedSwimmingWomensSolo;
                                break;
                            case 'T':
                                if (strcmp(&(chars[27]), "eam") == 0)
                                    return Value_SynchronizedSwimmingWomensTeam;
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
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'b':
                            if (strncmp(&(chars[3]), "leTennis", 8) == 0)
                              {
                                switch ((unsigned char)(chars[11]))
                                  {
                                    case 'M':
                                        if (strncmp(&(chars[12]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[15]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(chars[16]), "ingles") == 0)
                                                        return Value_TableTennisMensSingles;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(chars[16]), "eam") == 0)
                                                        return Value_TableTennisMensTeam;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(chars[12]), "omens", 5) == 0)
                                          {
                                            switch ((unsigned char)(chars[17]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(chars[18]), "ingles") == 0)
                                                        return Value_TableTennisWomensSingles;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(chars[18]), "eam") == 0)
                                                        return Value_TableTennisWomensTeam;
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
                        case 'e':
                            if (strncmp(&(chars[3]), "kwondo", 6) == 0)
                              {
                                switch ((unsigned char)(chars[9]))
                                  {
                                    case 'M':
                                        if (strncmp(&(chars[10]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[13]))
                                              {
                                                case 'F':
                                                    switch ((unsigned char)(chars[14]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(chars[15]), "atherweight") == 0)
                                                                return Value_TaekwondoMensFeatherweight;
                                                            break;
                                                        case 'l':
                                                            if (strcmp(&(chars[15]), "yweight") == 0)
                                                                return Value_TaekwondoMensFlyweight;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'H':
                                                    if (strcmp(&(chars[14]), "eavyweight") == 0)
                                                        return Value_TaekwondoMensHeavyweight;
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(chars[14]), "elterweight") == 0)
                                                        return Value_TaekwondoMensWelterweight;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(chars[10]), "omens", 5) == 0)
                                          {
                                            switch ((unsigned char)(chars[15]))
                                              {
                                                case 'F':
                                                    switch ((unsigned char)(chars[16]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(chars[17]), "atherweight") == 0)
                                                                return Value_TaekwondoWomensFeatherweight;
                                                            break;
                                                        case 'l':
                                                            if (strcmp(&(chars[17]), "yweight") == 0)
                                                                return Value_TaekwondoWomensFlyweight;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'H':
                                                    if (strcmp(&(chars[16]), "eavyweight") == 0)
                                                        return Value_TaekwondoWomensHeavyweight;
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(chars[16]), "elterweight") == 0)
                                                        return Value_TaekwondoWomensWelterweight;
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
                case 'e':
                    if (strncmp(&(chars[2]), "nnis", 4) == 0)
                      {
                        switch ((unsigned char)(chars[6]))
                          {
                            case 'M':
                                switch ((unsigned char)(chars[7]))
                                  {
                                    case 'e':
                                        if (strncmp(&(chars[8]), "ns", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[10]))
                                              {
                                                case 'D':
                                                    if (strcmp(&(chars[11]), "oubles") == 0)
                                                        return Value_TennisMensDoubles;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(chars[11]), "ingles") == 0)
                                                        return Value_TennisMensSingles;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'i':
                                        if (strcmp(&(chars[8]), "xedDoubles") == 0)
                                            return Value_TennisMixedDoubles;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[7]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[12]))
                                      {
                                        case 'D':
                                            if (strcmp(&(chars[13]), "oubles") == 0)
                                                return Value_TennisWomensDoubles;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[13]), "ingles") == 0)
                                                return Value_TennisWomensSingles;
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
                case 'r':
                    if (strncmp(&(chars[2]), "iathlon", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'M':
                                if (strcmp(&(chars[10]), "ensIndividual") == 0)
                                    return Value_TriathlonMensIndividual;
                                break;
                            case 'W':
                                if (strcmp(&(chars[10]), "omensIndividual") == 0)
                                    return Value_TriathlonWomensIndividual;
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
        case 'V':
            if (strncmp(&(chars[1]), "olleyball", 9) == 0)
              {
                switch ((unsigned char)(chars[10]))
                  {
                    case 'M':
                        if (strncmp(&(chars[11]), "ens", 3) == 0)
                          {
                            switch ((unsigned char)(chars[14]))
                              {
                                case 'B':
                                    if (strcmp(&(chars[15]), "each") == 0)
                                        return Value_VolleyballMensBeach;
                                    break;
                                case 'I':
                                    if (strcmp(&(chars[15]), "ndoor") == 0)
                                        return Value_VolleyballMensIndoor;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'W':
                        if (strncmp(&(chars[11]), "omens", 5) == 0)
                          {
                            switch ((unsigned char)(chars[16]))
                              {
                                case 'B':
                                    if (strcmp(&(chars[17]), "each") == 0)
                                        return Value_VolleyballWomensBeach;
                                    break;
                                case 'I':
                                    if (strcmp(&(chars[17]), "ndoor") == 0)
                                        return Value_VolleyballWomensIndoor;
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
        case 'W':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strncmp(&(chars[2]), "terPolo", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'M':
                                if (strcmp(&(chars[10]), "ens") == 0)
                                    return Value_WaterPoloMens;
                                break;
                            case 'W':
                                if (strcmp(&(chars[10]), "omens") == 0)
                                    return Value_WaterPoloWomens;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'e':
                    if (strncmp(&(chars[2]), "ightlifting", 11) == 0)
                      {
                        switch ((unsigned char)(chars[13]))
                          {
                            case 'M':
                                if (strncmp(&(chars[14]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[17]))
                                      {
                                        case 'B':
                                            if (strcmp(&(chars[18]), "antamweight") == 0)
                                                return Value_WeightliftingMensBantamweight;
                                            break;
                                        case 'F':
                                            switch ((unsigned char)(chars[18]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[19]), "atherweight") == 0)
                                                        return Value_WeightliftingMensFeatherweight;
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(chars[19]), "rstHeavyweight") == 0)
                                                        return Value_WeightliftingMensFirstHeavyweight;
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(chars[19]), "yweight") == 0)
                                                        return Value_WeightliftingMensFlyweight;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[18]), "eavyweight") == 0)
                                                return Value_WeightliftingMensHeavyweight;
                                            break;
                                        case 'L':
                                            if (strncmp(&(chars[18]), "ight", 4) == 0)
                                              {
                                                switch ((unsigned char)(chars[22]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(chars[23]), "eavyweight") == 0)
                                                            return Value_WeightliftingMensLightHeavyweight;
                                                        break;
                                                    case 'w':
                                                        if (strcmp(&(chars[23]), "eight") == 0)
                                                            return Value_WeightliftingMensLightweight;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strncmp(&(chars[18]), "iddle", 5) == 0)
                                              {
                                                switch ((unsigned char)(chars[23]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(chars[24]), "eavyweight") == 0)
                                                            return Value_WeightliftingMensMiddleHeavyweight;
                                                        break;
                                                    case 'w':
                                                        if (strcmp(&(chars[24]), "eight") == 0)
                                                            return Value_WeightliftingMensMiddleweight;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[18]), "uperHeavyweight") == 0)
                                                return Value_WeightliftingMensSuperHeavyweight;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[14]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[19]))
                                      {
                                        case 'F':
                                            switch ((unsigned char)(chars[20]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[21]), "atherweight") == 0)
                                                        return Value_WeightliftingWomensFeatherweight;
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(chars[21]), "yweight") == 0)
                                                        return Value_WeightliftingWomensFlyweight;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[20]), "eavyweight") == 0)
                                                return Value_WeightliftingWomensHeavyweight;
                                            break;
                                        case 'L':
                                            if (strncmp(&(chars[20]), "ight", 4) == 0)
                                              {
                                                switch ((unsigned char)(chars[24]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(chars[25]), "eavyweight") == 0)
                                                            return Value_WeightliftingWomensLightHeavyweight;
                                                        break;
                                                    case 'w':
                                                        if (strcmp(&(chars[25]), "eight") == 0)
                                                            return Value_WeightliftingWomensLightweight;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[20]), "iddleweight") == 0)
                                                return Value_WeightliftingWomensMiddleweight;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[20]), "uperHeavyweight") == 0)
                                                return Value_WeightliftingWomensSuperHeavyweight;
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
                case 'r':
                    if (strncmp(&(chars[2]), "estling", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'M':
                                if (strncmp(&(chars[10]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 'F':
                                            if (strncmp(&(chars[14]), "reestyle", 8) == 0)
                                              {
                                                switch ((unsigned char)(chars[22]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(chars[23]), "antamweight") == 0)
                                                            return Value_WrestlingMensFreestyleBantamweight;
                                                        break;
                                                    case 'F':
                                                        switch ((unsigned char)(chars[23]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(chars[24]), "atherweight") == 0)
                                                                    return Value_WrestlingMensFreestyleFeatherweight;
                                                                break;
                                                            case 'l':
                                                                if (strcmp(&(chars[24]), "yweight") == 0)
                                                                    return Value_WrestlingMensFreestyleFlyweight;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'H':
                                                        if (strcmp(&(chars[23]), "eavyweight") == 0)
                                                            return Value_WrestlingMensFreestyleHeavyweight;
                                                        break;
                                                    case 'L':
                                                        if (strncmp(&(chars[23]), "ight", 4) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[27]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(chars[28]), "lyweight") == 0)
                                                                        return Value_WrestlingMensFreestyleLightFlyweight;
                                                                    break;
                                                                case 'H':
                                                                    if (strcmp(&(chars[28]), "eavyweight") == 0)
                                                                        return Value_WrestlingMensFreestyleLightHeavyweight;
                                                                    break;
                                                                case 'w':
                                                                    if (strcmp(&(chars[28]), "eight") == 0)
                                                                        return Value_WrestlingMensFreestyleLightweight;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(chars[23]), "iddleweight") == 0)
                                                            return Value_WrestlingMensFreestyleMiddleweight;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[23]), "uperHeavyweight") == 0)
                                                            return Value_WrestlingMensFreestyleSuperHeavyweight;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[23]), "elterweight") == 0)
                                                            return Value_WrestlingMensFreestyleWelterweight;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'G':
                                            if (strncmp(&(chars[14]), "recoRoman", 9) == 0)
                                              {
                                                switch ((unsigned char)(chars[23]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(chars[24]), "antamweight") == 0)
                                                            return Value_WrestlingMensGrecoRomanBantamweight;
                                                        break;
                                                    case 'F':
                                                        switch ((unsigned char)(chars[24]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(chars[25]), "atherweight") == 0)
                                                                    return Value_WrestlingMensGrecoRomanFeatherweight;
                                                                break;
                                                            case 'l':
                                                                if (strcmp(&(chars[25]), "yweight") == 0)
                                                                    return Value_WrestlingMensGrecoRomanFlyweight;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'H':
                                                        if (strcmp(&(chars[24]), "eavyweight") == 0)
                                                            return Value_WrestlingMensGrecoRomanHeavyweight;
                                                        break;
                                                    case 'L':
                                                        if (strncmp(&(chars[24]), "ight", 4) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[28]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(chars[29]), "lyweight") == 0)
                                                                        return Value_WrestlingMensGrecoRomanLightFlyweight;
                                                                    break;
                                                                case 'H':
                                                                    if (strcmp(&(chars[29]), "eavyweight") == 0)
                                                                        return Value_WrestlingMensGrecoRomanLightHeavyweight;
                                                                    break;
                                                                case 'w':
                                                                    if (strcmp(&(chars[29]), "eight") == 0)
                                                                        return Value_WrestlingMensGrecoRomanLightweight;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(chars[24]), "iddleweight") == 0)
                                                            return Value_WrestlingMensGrecoRomanMiddleweight;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(chars[24]), "uperHeavyweight") == 0)
                                                            return Value_WrestlingMensGrecoRomanSuperHeavyweight;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(chars[24]), "elterweight") == 0)
                                                            return Value_WrestlingMensGrecoRomanWelterweight;
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
                            case 'W':
                                if (strncmp(&(chars[10]), "omensFreestyle", 14) == 0)
                                  {
                                    switch ((unsigned char)(chars[24]))
                                      {
                                        case 'B':
                                            if (strcmp(&(chars[25]), "antamweight") == 0)
                                                return Value_WrestlingWomensFreestyleBantamweight;
                                            break;
                                        case 'F':
                                            if (strcmp(&(chars[25]), "lyweight") == 0)
                                                return Value_WrestlingWomensFreestyleFlyweight;
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[25]), "eavyweight") == 0)
                                                return Value_WrestlingWomensFreestyleHeavyweight;
                                            break;
                                        case 'L':
                                            if (strncmp(&(chars[25]), "ight", 4) == 0)
                                              {
                                                switch ((unsigned char)(chars[29]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(chars[30]), "eavyweight") == 0)
                                                            return Value_WrestlingWomensFreestyleLightHeavyweight;
                                                        break;
                                                    case 'w':
                                                        if (strcmp(&(chars[30]), "eight") == 0)
                                                            return Value_WrestlingWomensFreestyleLightweight;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strcmp(&(chars[25]), "iddleweight") == 0)
                                                return Value_WrestlingWomensFreestyleMiddleweight;
                                            break;
                                        case 'W':
                                            if (strcmp(&(chars[25]), "elterweight") == 0)
                                                return Value_WrestlingWomensFreestyleWelterweight;
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

const char *SportsOlympicsEventJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_AlpineSkiingMensDownhill:
            return "AlpineSkiingMensDownhill";
        case Value_AlpineSkiingMensSuperG:
            return "AlpineSkiingMensSuperG";
        case Value_AlpineSkiingMensGiantSlalom:
            return "AlpineSkiingMensGiantSlalom";
        case Value_AlpineSkiingMensSlalom:
            return "AlpineSkiingMensSlalom";
        case Value_AlpineSkiingMensCombined:
            return "AlpineSkiingMensCombined";
        case Value_AlpineSkiingWomensDownhill:
            return "AlpineSkiingWomensDownhill";
        case Value_AlpineSkiingWomensSuperG:
            return "AlpineSkiingWomensSuperG";
        case Value_AlpineSkiingWomensGiantSlalom:
            return "AlpineSkiingWomensGiantSlalom";
        case Value_AlpineSkiingWomensSlalom:
            return "AlpineSkiingWomensSlalom";
        case Value_AlpineSkiingWomensCombined:
            return "AlpineSkiingWomensCombined";
        case Value_AlpineSkiingMixedTeam:
            return "AlpineSkiingMixedTeam";
        case Value_BiathlonMensIndividual:
            return "BiathlonMensIndividual";
        case Value_BiathlonMensSprint:
            return "BiathlonMensSprint";
        case Value_BiathlonMensPursuit:
            return "BiathlonMensPursuit";
        case Value_BiathlonMensMassStart:
            return "BiathlonMensMassStart";
        case Value_BiathlonMensRelay:
            return "BiathlonMensRelay";
        case Value_BiathlonMensMilitaryPatrol:
            return "BiathlonMensMilitaryPatrol";
        case Value_BiathlonWomensIndividual:
            return "BiathlonWomensIndividual";
        case Value_BiathlonWomensSprint:
            return "BiathlonWomensSprint";
        case Value_BiathlonWomensPursuit:
            return "BiathlonWomensPursuit";
        case Value_BiathlonWomensMassStart:
            return "BiathlonWomensMassStart";
        case Value_BiathlonWomensRelay:
            return "BiathlonWomensRelay";
        case Value_BiathlonMixedRelay:
            return "BiathlonMixedRelay";
        case Value_BobsleighMensTwo:
            return "BobsleighMensTwo";
        case Value_BobsleighMensFour:
            return "BobsleighMensFour";
        case Value_BobsleighWomensTwo:
            return "BobsleighWomensTwo";
        case Value_CrossCountrySkiingMens10KMClassical:
            return "CrossCountrySkiingMens10KMClassical";
        case Value_CrossCountrySkiingMens15KMClassical:
            return "CrossCountrySkiingMens15KMClassical";
        case Value_CrossCountrySkiingMens18KM:
            return "CrossCountrySkiingMens18KM";
        case Value_CrossCountrySkiingMens30KMSkiathlon:
            return "CrossCountrySkiingMens30KMSkiathlon";
        case Value_CrossCountrySkiingMens50KMFreestyle:
            return "CrossCountrySkiingMens50KMFreestyle";
        case Value_CrossCountrySkiingMens4X10KMRelay:
            return "CrossCountrySkiingMens4X10KMRelay";
        case Value_CrossCountrySkiingMens2X10KMPursuit:
            return "CrossCountrySkiingMens2X10KMPursuit";
        case Value_CrossCountrySkiingMensSprint:
            return "CrossCountrySkiingMensSprint";
        case Value_CrossCountrySkiingMensTeamSprint:
            return "CrossCountrySkiingMensTeamSprint";
        case Value_CrossCountrySkiingWomens5KM:
            return "CrossCountrySkiingWomens5KM";
        case Value_CrossCountrySkiingWomens10KMClassical:
            return "CrossCountrySkiingWomens10KMClassical";
        case Value_CrossCountrySkiingWomens15KMSkiathlon:
            return "CrossCountrySkiingWomens15KMSkiathlon";
        case Value_CrossCountrySkiingWomens20KM:
            return "CrossCountrySkiingWomens20KM";
        case Value_CrossCountrySkiingWomens30KMFreestyle:
            return "CrossCountrySkiingWomens30KMFreestyle";
        case Value_CrossCountrySkiingWomens4X5KMRelay:
            return "CrossCountrySkiingWomens4X5KMRelay";
        case Value_CrossCountrySkiingWomens2X5KMPursuit:
            return "CrossCountrySkiingWomens2X5KMPursuit";
        case Value_CrossCountrySkiingWomensSprint:
            return "CrossCountrySkiingWomensSprint";
        case Value_CrossCountrySkiingWomensTeamSprint:
            return "CrossCountrySkiingWomensTeamSprint";
        case Value_CurlingMens:
            return "CurlingMens";
        case Value_CurlingWomens:
            return "CurlingWomens";
        case Value_CurlingMixedDoubles:
            return "CurlingMixedDoubles";
        case Value_FigureSkatingMensSingles:
            return "FigureSkatingMensSingles";
        case Value_FigureSkatingWomensSingles:
            return "FigureSkatingWomensSingles";
        case Value_FigureSkatingPair:
            return "FigureSkatingPair";
        case Value_FigureSkatingIceDancing:
            return "FigureSkatingIceDancing";
        case Value_FigureSkatingTeamTrophy:
            return "FigureSkatingTeamTrophy";
        case Value_FreestyleSkiingMensAerials:
            return "FreestyleSkiingMensAerials";
        case Value_FreestyleSkiingMensHalfpipe:
            return "FreestyleSkiingMensHalfpipe";
        case Value_FreestyleSkiingMensMoguls:
            return "FreestyleSkiingMensMoguls";
        case Value_FreestyleSkiingMensSlopestyle:
            return "FreestyleSkiingMensSlopestyle";
        case Value_FreestyleSkiingMensSkiCross:
            return "FreestyleSkiingMensSkiCross";
        case Value_FreestyleSkiingWomensAerials:
            return "FreestyleSkiingWomensAerials";
        case Value_FreestyleSkiingWomensHalfpipe:
            return "FreestyleSkiingWomensHalfpipe";
        case Value_FreestyleSkiingWomensMoguls:
            return "FreestyleSkiingWomensMoguls";
        case Value_FreestyleSkiingWomensSlopestyle:
            return "FreestyleSkiingWomensSlopestyle";
        case Value_FreestyleSkiingWomensSkiCross:
            return "FreestyleSkiingWomensSkiCross";
        case Value_IceHockeyMens:
            return "IceHockeyMens";
        case Value_IceHockeyWomens:
            return "IceHockeyWomens";
        case Value_LugeMensSingles:
            return "LugeMensSingles";
        case Value_LugeWomensSingles:
            return "LugeWomensSingles";
        case Value_LugeDoubles:
            return "LugeDoubles";
        case Value_LugeTeamRelay:
            return "LugeTeamRelay";
        case Value_NordicCombinedIndividualLargeHill10KM:
            return "NordicCombinedIndividualLargeHill10KM";
        case Value_NordicCombinedIndividualNormalHill10KM:
            return "NordicCombinedIndividualNormalHill10KM";
        case Value_NordicCombinedTeamLargeHill4X5KM:
            return "NordicCombinedTeamLargeHill4X5KM";
        case Value_ShortTrackSpeedSkatingMens500M:
            return "ShortTrackSpeedSkatingMens500M";
        case Value_ShortTrackSpeedSkatingMens1000M:
            return "ShortTrackSpeedSkatingMens1000M";
        case Value_ShortTrackSpeedSkatingMens1500M:
            return "ShortTrackSpeedSkatingMens1500M";
        case Value_ShortTrackSpeedSkatingMens5000MRelay:
            return "ShortTrackSpeedSkatingMens5000MRelay";
        case Value_ShortTrackSpeedSkatingWomens500M:
            return "ShortTrackSpeedSkatingWomens500M";
        case Value_ShortTrackSpeedSkatingWomens1000M:
            return "ShortTrackSpeedSkatingWomens1000M";
        case Value_ShortTrackSpeedSkatingWomens1500M:
            return "ShortTrackSpeedSkatingWomens1500M";
        case Value_ShortTrackSpeedSkatingWomens3000MRelay:
            return "ShortTrackSpeedSkatingWomens3000MRelay";
        case Value_SkeletonMens:
            return "SkeletonMens";
        case Value_SkeletonWomens:
            return "SkeletonWomens";
        case Value_SkiJumpingMensIndividualNormalHill:
            return "SkiJumpingMensIndividualNormalHill";
        case Value_SkiJumpingMensIndividualLargeHill:
            return "SkiJumpingMensIndividualLargeHill";
        case Value_SkiJumpingMensTeamLargeHill:
            return "SkiJumpingMensTeamLargeHill";
        case Value_SkiJumpingWomensIndividualNormalHill:
            return "SkiJumpingWomensIndividualNormalHill";
        case Value_SnowboardingMensParallelSlalom:
            return "SnowboardingMensParallelSlalom";
        case Value_SnowboardingMensParallelGiantSlalom:
            return "SnowboardingMensParallelGiantSlalom";
        case Value_SnowboardingMensHalfpipe:
            return "SnowboardingMensHalfpipe";
        case Value_SnowboardingMensSlopestyle:
            return "SnowboardingMensSlopestyle";
        case Value_SnowboardingMensSnowboardCross:
            return "SnowboardingMensSnowboardCross";
        case Value_SnowboardingMensBigAir:
            return "SnowboardingMensBigAir";
        case Value_SnowboardingWomensParallelSlalom:
            return "SnowboardingWomensParallelSlalom";
        case Value_SnowboardingWomensParallelGiantSlalom:
            return "SnowboardingWomensParallelGiantSlalom";
        case Value_SnowboardingWomensHalfpipe:
            return "SnowboardingWomensHalfpipe";
        case Value_SnowboardingWomensSlopestyle:
            return "SnowboardingWomensSlopestyle";
        case Value_SnowboardingWomensSnowboardCross:
            return "SnowboardingWomensSnowboardCross";
        case Value_SnowboardingWomensBigAir:
            return "SnowboardingWomensBigAir";
        case Value_SpeedSkatingMens500M:
            return "SpeedSkatingMens500M";
        case Value_SpeedSkatingMens1000M:
            return "SpeedSkatingMens1000M";
        case Value_SpeedSkatingMens1500M:
            return "SpeedSkatingMens1500M";
        case Value_SpeedSkatingMens5000M:
            return "SpeedSkatingMens5000M";
        case Value_SpeedSkatingMens10000M:
            return "SpeedSkatingMens10000M";
        case Value_SpeedSkatingMensTeamPursuit:
            return "SpeedSkatingMensTeamPursuit";
        case Value_SpeedSkatingMensMassStart:
            return "SpeedSkatingMensMassStart";
        case Value_SpeedSkatingMensAllRound:
            return "SpeedSkatingMensAllRound";
        case Value_SpeedSkatingWomens500M:
            return "SpeedSkatingWomens500M";
        case Value_SpeedSkatingWomens1000M:
            return "SpeedSkatingWomens1000M";
        case Value_SpeedSkatingWomens1500M:
            return "SpeedSkatingWomens1500M";
        case Value_SpeedSkatingWomens3000M:
            return "SpeedSkatingWomens3000M";
        case Value_SpeedSkatingWomens5000M:
            return "SpeedSkatingWomens5000M";
        case Value_SpeedSkatingWomensTeamPursuit:
            return "SpeedSkatingWomensTeamPursuit";
        case Value_SpeedSkatingWomensMassStart:
            return "SpeedSkatingWomensMassStart";
        case Value_ArcheryMensIndividual:
            return "ArcheryMensIndividual";
        case Value_ArcheryMensTeam:
            return "ArcheryMensTeam";
        case Value_ArcheryWomensIndividual:
            return "ArcheryWomensIndividual";
        case Value_ArcheryWomensTeam:
            return "ArcheryWomensTeam";
        case Value_AthleticsMens100M:
            return "AthleticsMens100M";
        case Value_AthleticsMens200M:
            return "AthleticsMens200M";
        case Value_AthleticsMens400M:
            return "AthleticsMens400M";
        case Value_AthleticsMens800M:
            return "AthleticsMens800M";
        case Value_AthleticsMens1500M:
            return "AthleticsMens1500M";
        case Value_AthleticsMens5000M:
            return "AthleticsMens5000M";
        case Value_AthleticsMens10000M:
            return "AthleticsMens10000M";
        case Value_AthleticsMensHurdles110M:
            return "AthleticsMensHurdles110M";
        case Value_AthleticsMensHurdles400M:
            return "AthleticsMensHurdles400M";
        case Value_AthleticsMensSteeplechase3000M:
            return "AthleticsMensSteeplechase3000M";
        case Value_AthleticsMens4X100MRelay:
            return "AthleticsMens4X100MRelay";
        case Value_AthleticsMens4X400MRelay:
            return "AthleticsMens4X400MRelay";
        case Value_AthleticsMensMarathon:
            return "AthleticsMensMarathon";
        case Value_AthleticsMensWalk20KM:
            return "AthleticsMensWalk20KM";
        case Value_AthleticsMensWalk50KM:
            return "AthleticsMensWalk50KM";
        case Value_AthleticsMensHighJump:
            return "AthleticsMensHighJump";
        case Value_AthleticsMensPoleVault:
            return "AthleticsMensPoleVault";
        case Value_AthleticsMensLongJump:
            return "AthleticsMensLongJump";
        case Value_AthleticsMensTripleJump:
            return "AthleticsMensTripleJump";
        case Value_AthleticsMensShotPut:
            return "AthleticsMensShotPut";
        case Value_AthleticsMensDiscusThrow:
            return "AthleticsMensDiscusThrow";
        case Value_AthleticsMensHammerThrow:
            return "AthleticsMensHammerThrow";
        case Value_AthleticsMensJavelinThrow:
            return "AthleticsMensJavelinThrow";
        case Value_AthleticsMensDecathlon:
            return "AthleticsMensDecathlon";
        case Value_AthleticsWomens100M:
            return "AthleticsWomens100M";
        case Value_AthleticsWomens200M:
            return "AthleticsWomens200M";
        case Value_AthleticsWomens400M:
            return "AthleticsWomens400M";
        case Value_AthleticsWomens800M:
            return "AthleticsWomens800M";
        case Value_AthleticsWomens1500M:
            return "AthleticsWomens1500M";
        case Value_AthleticsWomens3000M:
            return "AthleticsWomens3000M";
        case Value_AthleticsWomens5000M:
            return "AthleticsWomens5000M";
        case Value_AthleticsWomens10000M:
            return "AthleticsWomens10000M";
        case Value_AthleticsWomensHurdles100M:
            return "AthleticsWomensHurdles100M";
        case Value_AthleticsWomenshurdles400M:
            return "AthleticsWomenshurdles400M";
        case Value_AthleticsWomensSteeplechase3000M:
            return "AthleticsWomensSteeplechase3000M";
        case Value_AthleticsWomens4X100MRelay:
            return "AthleticsWomens4X100MRelay";
        case Value_AthleticsWomens4X400MRelay:
            return "AthleticsWomens4X400MRelay";
        case Value_AthleticsWomensMarathon:
            return "AthleticsWomensMarathon";
        case Value_AthleticsWomensWalk10KM:
            return "AthleticsWomensWalk10KM";
        case Value_AthleticsWomensWalk20KM:
            return "AthleticsWomensWalk20KM";
        case Value_AthleticsWomensHighJump:
            return "AthleticsWomensHighJump";
        case Value_AthleticsWomensPoleVault:
            return "AthleticsWomensPoleVault";
        case Value_AthleticsWomensLongJump:
            return "AthleticsWomensLongJump";
        case Value_AthleticsWomensTripleJump:
            return "AthleticsWomensTripleJump";
        case Value_AthleticsWomensShotPut:
            return "AthleticsWomensShotPut";
        case Value_AthleticsWomensDiscusThrow:
            return "AthleticsWomensDiscusThrow";
        case Value_AthleticsWomensHammerThrow:
            return "AthleticsWomensHammerThrow";
        case Value_AthleticsWomensJavelinThrow:
            return "AthleticsWomensJavelinThrow";
        case Value_AthleticsWomensHeptathlon:
            return "AthleticsWomensHeptathlon";
        case Value_BadmintonMensSingles:
            return "BadmintonMensSingles";
        case Value_BadmintonMensDoubles:
            return "BadmintonMensDoubles";
        case Value_BadmintonWomensSingles:
            return "BadmintonWomensSingles";
        case Value_BadmintonWomensDoubles:
            return "BadmintonWomensDoubles";
        case Value_BadmintonMixedDoubles:
            return "BadmintonMixedDoubles";
        case Value_BaseballMens:
            return "BaseballMens";
        case Value_BasketballMens:
            return "BasketballMens";
        case Value_BasketballWomens:
            return "BasketballWomens";
        case Value_BoxingMensLightFlyweight:
            return "BoxingMensLightFlyweight";
        case Value_BoxingMensFlyweight:
            return "BoxingMensFlyweight";
        case Value_BoxingMensBantamweight:
            return "BoxingMensBantamweight";
        case Value_BoxingMensFeatherweight:
            return "BoxingMensFeatherweight";
        case Value_BoxingMensLightweight:
            return "BoxingMensLightweight";
        case Value_BoxingMensLightWelterweight:
            return "BoxingMensLightWelterweight";
        case Value_BoxingMensWelterweight:
            return "BoxingMensWelterweight";
        case Value_BoxingMensLightMiddleweight:
            return "BoxingMensLightMiddleweight";
        case Value_BoxingMensMiddleweight:
            return "BoxingMensMiddleweight";
        case Value_BoxingMensLightHeavyweight:
            return "BoxingMensLightHeavyweight";
        case Value_BoxingMensHeavyweight:
            return "BoxingMensHeavyweight";
        case Value_BoxingMensSuperHeavyweight:
            return "BoxingMensSuperHeavyweight";
        case Value_BoxingWomensFlyweight:
            return "BoxingWomensFlyweight";
        case Value_BoxingWomensLightweight:
            return "BoxingWomensLightweight";
        case Value_BoxingWomensMiddleweight:
            return "BoxingWomensMiddleweight";
        case Value_CanoeingMensSlalomC1:
            return "CanoeingMensSlalomC1";
        case Value_CanoeingMensSlalomC2:
            return "CanoeingMensSlalomC2";
        case Value_CanoeingMensSlalomK1:
            return "CanoeingMensSlalomK1";
        case Value_CanoeingMensSprintC1200M:
            return "CanoeingMensSprintC1200M";
        case Value_CanoeingMensSprintC1500M:
            return "CanoeingMensSprintC1500M";
        case Value_CanoeingMensSprintC11000M:
            return "CanoeingMensSprintC11000M";
        case Value_CanoeingMensSprintC2500M:
            return "CanoeingMensSprintC2500M";
        case Value_CanoeingMensSprintC21000M:
            return "CanoeingMensSprintC21000M";
        case Value_CanoeingMensSprintK1200M:
            return "CanoeingMensSprintK1200M";
        case Value_CanoeingMensSprintK1500M:
            return "CanoeingMensSprintK1500M";
        case Value_CanoeingMensSprintK11000M:
            return "CanoeingMensSprintK11000M";
        case Value_CanoeingMensSprintK2200M:
            return "CanoeingMensSprintK2200M";
        case Value_CanoeingMensSprintK2500M:
            return "CanoeingMensSprintK2500M";
        case Value_CanoeingMensSprintK21000M:
            return "CanoeingMensSprintK21000M";
        case Value_CanoeingMensSprintK41000M:
            return "CanoeingMensSprintK41000M";
        case Value_CanoeingWomensSlalomK1:
            return "CanoeingWomensSlalomK1";
        case Value_CanoeingWomensSprintK1200M:
            return "CanoeingWomensSprintK1200M";
        case Value_CanoeingWomensSprintK1500M:
            return "CanoeingWomensSprintK1500M";
        case Value_CanoeingWomensSprintK2500M:
            return "CanoeingWomensSprintK2500M";
        case Value_CanoeingWomensSprintK4500M:
            return "CanoeingWomensSprintK4500M";
        case Value_CyclingMensRoadCyclingRoadRace:
            return "CyclingMensRoadCyclingRoadRace";
        case Value_CyclingMensRoadCyclingTimeTrial:
            return "CyclingMensRoadCyclingTimeTrial";
        case Value_CyclingMensRoadCyclingTeamTimeTrial:
            return "CyclingMensRoadCyclingTeamTimeTrial";
        case Value_CyclingMensTrackCyclingKeirin:
            return "CyclingMensTrackCyclingKeirin";
        case Value_CyclingMensTrackCyclingMadison:
            return "CyclingMensTrackCyclingMadison";
        case Value_CyclingMensTrackCyclingOmnium:
            return "CyclingMensTrackCyclingOmnium";
        case Value_CyclingMensTrackCyclingPointsRace:
            return "CyclingMensTrackCyclingPointsRace";
        case Value_CyclingMensTrackCyclingIndividualPursuit:
            return "CyclingMensTrackCyclingIndividualPursuit";
        case Value_CyclingMensTrackCyclingTeamPursuit:
            return "CyclingMensTrackCyclingTeamPursuit";
        case Value_CyclingMensTrackCyclingIndividualSprint:
            return "CyclingMensTrackCyclingIndividualSprint";
        case Value_CyclingMensTrackCyclingTeamSprint:
            return "CyclingMensTrackCyclingTeamSprint";
        case Value_CyclingMensTrackCyclingTimeTrial:
            return "CyclingMensTrackCyclingTimeTrial";
        case Value_CyclingMensMountainBikingCrossCountry:
            return "CyclingMensMountainBikingCrossCountry";
        case Value_CyclingMensBMX:
            return "CyclingMensBMX";
        case Value_CyclingWomensRoadCyclingRoadRace:
            return "CyclingWomensRoadCyclingRoadRace";
        case Value_CyclingWomensRoadCyclingTimeTrial:
            return "CyclingWomensRoadCyclingTimeTrial";
        case Value_CyclingWomensTrackCyclingKeirin:
            return "CyclingWomensTrackCyclingKeirin";
        case Value_CyclingWomensTrackCyclingMadison:
            return "CyclingWomensTrackCyclingMadison";
        case Value_CyclingWomensTrackCyclingOmnium:
            return "CyclingWomensTrackCyclingOmnium";
        case Value_CyclingWomensTrackCyclingPointsRace:
            return "CyclingWomensTrackCyclingPointsRace";
        case Value_CyclingWomensTrackCyclingIndividualPursuit:
            return "CyclingWomensTrackCyclingIndividualPursuit";
        case Value_CyclingWomensTrackCyclingTeamPursuit:
            return "CyclingWomensTrackCyclingTeamPursuit";
        case Value_CyclingWomensTrackCyclingIndividualSprint:
            return "CyclingWomensTrackCyclingIndividualSprint";
        case Value_CyclingWomensTrackCyclingTeamSprint:
            return "CyclingWomensTrackCyclingTeamSprint";
        case Value_CyclingWomensTrackCyclingTimeTrial:
            return "CyclingWomensTrackCyclingTimeTrial";
        case Value_CyclingWomensMountainBikingCrossCountry:
            return "CyclingWomensMountainBikingCrossCountry";
        case Value_CyclingWomensBMX:
            return "CyclingWomensBMX";
        case Value_DivingMensSpringboard:
            return "DivingMensSpringboard";
        case Value_DivingMensPlatform:
            return "DivingMensPlatform";
        case Value_DivingMensSynchronizedSpringboard:
            return "DivingMensSynchronizedSpringboard";
        case Value_DivingMensSynchronizedPlatform:
            return "DivingMensSynchronizedPlatform";
        case Value_DivingWomensSpringboard:
            return "DivingWomensSpringboard";
        case Value_DivingWomensPlatform:
            return "DivingWomensPlatform";
        case Value_DivingWomensSynchronizedSpringboard:
            return "DivingWomensSynchronizedSpringboard";
        case Value_DivingWomensSynchronizedPlatform:
            return "DivingWomensSynchronizedPlatform";
        case Value_EquestrianIndividualDressage:
            return "EquestrianIndividualDressage";
        case Value_EquestrianTeamDressage:
            return "EquestrianTeamDressage";
        case Value_EquestrianIndividualEventing:
            return "EquestrianIndividualEventing";
        case Value_EquestrianTeamEventing:
            return "EquestrianTeamEventing";
        case Value_EquestrianIndividualJumping:
            return "EquestrianIndividualJumping";
        case Value_EquestrianTeamJumping:
            return "EquestrianTeamJumping";
        case Value_FencingMensIndividualEpee:
            return "FencingMensIndividualEpee";
        case Value_FencingMensTeamEpee:
            return "FencingMensTeamEpee";
        case Value_FencingMensIndividualFoil:
            return "FencingMensIndividualFoil";
        case Value_FencingMensTeamFoil:
            return "FencingMensTeamFoil";
        case Value_FencingMensIndividualSabre:
            return "FencingMensIndividualSabre";
        case Value_FencingMensTeamSabre:
            return "FencingMensTeamSabre";
        case Value_FencingWomensIndividualEpee:
            return "FencingWomensIndividualEpee";
        case Value_FencingWomensTeamEpee:
            return "FencingWomensTeamEpee";
        case Value_FencingWomensIndividualFoil:
            return "FencingWomensIndividualFoil";
        case Value_FencingWomensTeamFoil:
            return "FencingWomensTeamFoil";
        case Value_FencingWomensIndividualSabre:
            return "FencingWomensIndividualSabre";
        case Value_FencingWomensTeamSabre:
            return "FencingWomensTeamSabre";
        case Value_FieldHockeyMens:
            return "FieldHockeyMens";
        case Value_FieldHockeyWomens:
            return "FieldHockeyWomens";
        case Value_FootballMens:
            return "FootballMens";
        case Value_FootballWomens:
            return "FootballWomens";
        case Value_GolfMensIndividual:
            return "GolfMensIndividual";
        case Value_GolfWomensIndividual:
            return "GolfWomensIndividual";
        case Value_GymnasticsMensArtisticTeamAllAround:
            return "GymnasticsMensArtisticTeamAllAround";
        case Value_GymnasticsMensArtisticIndividualAllAround:
            return "GymnasticsMensArtisticIndividualAllAround";
        case Value_GymnasticsMensArtisticFloorExercise:
            return "GymnasticsMensArtisticFloorExercise";
        case Value_GymnasticsMensArtisticHorizontalBar:
            return "GymnasticsMensArtisticHorizontalBar";
        case Value_GymnasticsMensArtisticParallelBars:
            return "GymnasticsMensArtisticParallelBars";
        case Value_GymnasticsMensArtisticPommelHorse:
            return "GymnasticsMensArtisticPommelHorse";
        case Value_GymnasticsMensArtisticRings:
            return "GymnasticsMensArtisticRings";
        case Value_GymnasticsMensArtisticVault:
            return "GymnasticsMensArtisticVault";
        case Value_GymnasticsMensTrampolineIndividual:
            return "GymnasticsMensTrampolineIndividual";
        case Value_GymnasticsWomensArtisticTeamAllAround:
            return "GymnasticsWomensArtisticTeamAllAround";
        case Value_GymnasticsWomensArtisticIndividualAllAround:
            return "GymnasticsWomensArtisticIndividualAllAround";
        case Value_GymnasticsWomensArtisticBalanceBeam:
            return "GymnasticsWomensArtisticBalanceBeam";
        case Value_GymnasticsWomensArtisticFloorExercise:
            return "GymnasticsWomensArtisticFloorExercise";
        case Value_GymnasticsWomensArtisticUnevenBars:
            return "GymnasticsWomensArtisticUnevenBars";
        case Value_GymnasticsWomensArtisticVault:
            return "GymnasticsWomensArtisticVault";
        case Value_GymnasticsWomensRhythmicIndividualAllAround:
            return "GymnasticsWomensRhythmicIndividualAllAround";
        case Value_GymnasticsWomensRhythmicGroupAllAround:
            return "GymnasticsWomensRhythmicGroupAllAround";
        case Value_GymnasticsWomensTrampolineIndividual:
            return "GymnasticsWomensTrampolineIndividual";
        case Value_HandballMens:
            return "HandballMens";
        case Value_HandballWomens:
            return "HandballWomens";
        case Value_JudoMensExtraLightweight:
            return "JudoMensExtraLightweight";
        case Value_JudoMensHalfLightweight:
            return "JudoMensHalfLightweight";
        case Value_JudoMensLightweight:
            return "JudoMensLightweight";
        case Value_JudoMensHalfMiddleweight:
            return "JudoMensHalfMiddleweight";
        case Value_JudoMensMiddleweight:
            return "JudoMensMiddleweight";
        case Value_JudoMensHalfHeavyweight:
            return "JudoMensHalfHeavyweight";
        case Value_JudoMensHeavyweight:
            return "JudoMensHeavyweight";
        case Value_JudoWomensExtraLightweight:
            return "JudoWomensExtraLightweight";
        case Value_JudoWomensHalfLightweight:
            return "JudoWomensHalfLightweight";
        case Value_JudoWomensLightweight:
            return "JudoWomensLightweight";
        case Value_JudoWomensHalfMiddleweight:
            return "JudoWomensHalfMiddleweight";
        case Value_JudoWomensMiddleweight:
            return "JudoWomensMiddleweight";
        case Value_JudoWomensHalfHeavyweight:
            return "JudoWomensHalfHeavyweight";
        case Value_JudoWomensHeavyweight:
            return "JudoWomensHeavyweight";
        case Value_ModernPentathlonMens:
            return "ModernPentathlonMens";
        case Value_ModernPentathlonWomens:
            return "ModernPentathlonWomens";
        case Value_RowingMensSingleSculls:
            return "RowingMensSingleSculls";
        case Value_RowingMensDoubleSculls:
            return "RowingMensDoubleSculls";
        case Value_RowingMensQuadrupleSculls:
            return "RowingMensQuadrupleSculls";
        case Value_RowingMensCoxlessPair:
            return "RowingMensCoxlessPair";
        case Value_RowingMensCoxedPair:
            return "RowingMensCoxedPair";
        case Value_RowingMensCoxlessFour:
            return "RowingMensCoxlessFour";
        case Value_RowingMensCoxedFour:
            return "RowingMensCoxedFour";
        case Value_RowingMensCoxedEight:
            return "RowingMensCoxedEight";
        case Value_RowingMensLightweightDoubleSculls:
            return "RowingMensLightweightDoubleSculls";
        case Value_RowingMensLightweightCoxlessFour:
            return "RowingMensLightweightCoxlessFour";
        case Value_RowingWomensSingleSculls:
            return "RowingWomensSingleSculls";
        case Value_RowingWomensDoubleSculls:
            return "RowingWomensDoubleSculls";
        case Value_RowingWomensQuadrupleSculls:
            return "RowingWomensQuadrupleSculls";
        case Value_RowingWomensCoxlessPair:
            return "RowingWomensCoxlessPair";
        case Value_RowingWomensCoxedFour:
            return "RowingWomensCoxedFour";
        case Value_RowingWomensCoxedEight:
            return "RowingWomensCoxedEight";
        case Value_RowingWomensLightweightDoubleSculls:
            return "RowingWomensLightweightDoubleSculls";
        case Value_RugbyMens:
            return "RugbyMens";
        case Value_RugbyWomens:
            return "RugbyWomens";
        case Value_SailingMensRSX:
            return "SailingMensRSX";
        case Value_SailingMensLaser:
            return "SailingMensLaser";
        case Value_SailingMensFinn:
            return "SailingMensFinn";
        case Value_SailingMens470:
            return "SailingMens470";
        case Value_SailingMens49erFX:
            return "SailingMens49erFX";
        case Value_SailingMensStar:
            return "SailingMensStar";
        case Value_SailingWomensRSX:
            return "SailingWomensRSX";
        case Value_SailingWomensLaser:
            return "SailingWomensLaser";
        case Value_SailingWomens470:
            return "SailingWomens470";
        case Value_SailingWomens49erFX:
            return "SailingWomens49erFX";
        case Value_SailingWomensElliott6M:
            return "SailingWomensElliott6M";
        case Value_SailingWomensYngling:
            return "SailingWomensYngling";
        case Value_SailingMixedNacra17:
            return "SailingMixedNacra17";
        case Value_SailingMixed49erFX:
            return "SailingMixed49erFX";
        case Value_SailingMixedFinn:
            return "SailingMixedFinn";
        case Value_SailingMixedTornado:
            return "SailingMixedTornado";
        case Value_ShootingMensAirPistol10M:
            return "ShootingMensAirPistol10M";
        case Value_ShootingMensAirRifle10M:
            return "ShootingMensAirRifle10M";
        case Value_ShootingMensRapidFirePistol25M:
            return "ShootingMensRapidFirePistol25M";
        case Value_ShootingMensPistol50M:
            return "ShootingMensPistol50M";
        case Value_ShootingMensRifleProne50M:
            return "ShootingMensRifleProne50M";
        case Value_ShootingMensRifleThreePositions50M:
            return "ShootingMensRifleThreePositions50M";
        case Value_ShootingMensSkeet:
            return "ShootingMensSkeet";
        case Value_ShootingMensTrap:
            return "ShootingMensTrap";
        case Value_ShootingMensDoubleTrap:
            return "ShootingMensDoubleTrap";
        case Value_ShootingMens10MRunningTarget:
            return "ShootingMens10MRunningTarget";
        case Value_ShootingWomensAirPistol10M:
            return "ShootingWomensAirPistol10M";
        case Value_ShootingWomensAirRifle10M:
            return "ShootingWomensAirRifle10M";
        case Value_ShootingWomensPistol25M:
            return "ShootingWomensPistol25M";
        case Value_ShootingWomensRifleThreePositions50M:
            return "ShootingWomensRifleThreePositions50M";
        case Value_ShootingWomensSkeet:
            return "ShootingWomensSkeet";
        case Value_ShootingWomensTrap:
            return "ShootingWomensTrap";
        case Value_ShootingWomensDoubleTrap:
            return "ShootingWomensDoubleTrap";
        case Value_SoftballWomens:
            return "SoftballWomens";
        case Value_SwimmingMensFreestyle50M:
            return "SwimmingMensFreestyle50M";
        case Value_SwimmingMensFreestyle100M:
            return "SwimmingMensFreestyle100M";
        case Value_SwimmingMensFreestyle200M:
            return "SwimmingMensFreestyle200M";
        case Value_SwimmingMensFreestyle400M:
            return "SwimmingMensFreestyle400M";
        case Value_SwimmingMensFreestyle1500M:
            return "SwimmingMensFreestyle1500M";
        case Value_SwimmingMensBackstroke100M:
            return "SwimmingMensBackstroke100M";
        case Value_SwimmingMensBackstroke200M:
            return "SwimmingMensBackstroke200M";
        case Value_SwimmingMensBreaststroke100M:
            return "SwimmingMensBreaststroke100M";
        case Value_SwimmingMensBreaststroke200M:
            return "SwimmingMensBreaststroke200M";
        case Value_SwimmingMensButterfly100M:
            return "SwimmingMensButterfly100M";
        case Value_SwimmingMensButterfly200M:
            return "SwimmingMensButterfly200M";
        case Value_SwimmingMensIndividualMedley200M:
            return "SwimmingMensIndividualMedley200M";
        case Value_SwimmingMensIndividualMedley400M:
            return "SwimmingMensIndividualMedley400M";
        case Value_SwimmingMens4X100MFreestyleRelay:
            return "SwimmingMens4X100MFreestyleRelay";
        case Value_SwimmingMens4X200MFreestyleRelay:
            return "SwimmingMens4X200MFreestyleRelay";
        case Value_SwimmingMens4X100MMedleyRelay:
            return "SwimmingMens4X100MMedleyRelay";
        case Value_SwimmingMensOpenWater10KM:
            return "SwimmingMensOpenWater10KM";
        case Value_SwimmingWomensFreestyle50M:
            return "SwimmingWomensFreestyle50M";
        case Value_SwimmingWomensFreestyle100M:
            return "SwimmingWomensFreestyle100M";
        case Value_SwimmingWomensFreestyle200M:
            return "SwimmingWomensFreestyle200M";
        case Value_SwimmingWomensFreestyle400M:
            return "SwimmingWomensFreestyle400M";
        case Value_SwimmingWomensFreestyle800M:
            return "SwimmingWomensFreestyle800M";
        case Value_SwimmingWomensBackstroke100M:
            return "SwimmingWomensBackstroke100M";
        case Value_SwimmingWomensBackstroke200M:
            return "SwimmingWomensBackstroke200M";
        case Value_SwimmingWomensBreaststroke100M:
            return "SwimmingWomensBreaststroke100M";
        case Value_SwimmingWomensBreaststroke200M:
            return "SwimmingWomensBreaststroke200M";
        case Value_SwimmingWomensButterfly100M:
            return "SwimmingWomensButterfly100M";
        case Value_SwimmingWomensButterfly200M:
            return "SwimmingWomensButterfly200M";
        case Value_SwimmingWomensIndividualMedley200M:
            return "SwimmingWomensIndividualMedley200M";
        case Value_SwimmingWomensindividualMedley400M:
            return "SwimmingWomensindividualMedley400M";
        case Value_SwimmingWomens4X100MFreestyleRelay:
            return "SwimmingWomens4X100MFreestyleRelay";
        case Value_SwimmingWomens4X200MFreestyleRelay:
            return "SwimmingWomens4X200MFreestyleRelay";
        case Value_SwimmingWomens4X100MMedleyRelay:
            return "SwimmingWomens4X100MMedleyRelay";
        case Value_SwimmingWomensOpenWater10KM:
            return "SwimmingWomensOpenWater10KM";
        case Value_SynchronizedSwimmingWomensDuet:
            return "SynchronizedSwimmingWomensDuet";
        case Value_SynchronizedSwimmingWomensTeam:
            return "SynchronizedSwimmingWomensTeam";
        case Value_SynchronizedSwimmingWomensSolo:
            return "SynchronizedSwimmingWomensSolo";
        case Value_TableTennisMensSingles:
            return "TableTennisMensSingles";
        case Value_TableTennisMensTeam:
            return "TableTennisMensTeam";
        case Value_TableTennisWomensSingles:
            return "TableTennisWomensSingles";
        case Value_TableTennisWomensTeam:
            return "TableTennisWomensTeam";
        case Value_TaekwondoMensFlyweight:
            return "TaekwondoMensFlyweight";
        case Value_TaekwondoMensFeatherweight:
            return "TaekwondoMensFeatherweight";
        case Value_TaekwondoMensWelterweight:
            return "TaekwondoMensWelterweight";
        case Value_TaekwondoMensHeavyweight:
            return "TaekwondoMensHeavyweight";
        case Value_TaekwondoWomensFlyweight:
            return "TaekwondoWomensFlyweight";
        case Value_TaekwondoWomensFeatherweight:
            return "TaekwondoWomensFeatherweight";
        case Value_TaekwondoWomensWelterweight:
            return "TaekwondoWomensWelterweight";
        case Value_TaekwondoWomensHeavyweight:
            return "TaekwondoWomensHeavyweight";
        case Value_TennisMensSingles:
            return "TennisMensSingles";
        case Value_TennisMensDoubles:
            return "TennisMensDoubles";
        case Value_TennisWomensSingles:
            return "TennisWomensSingles";
        case Value_TennisWomensDoubles:
            return "TennisWomensDoubles";
        case Value_TennisMixedDoubles:
            return "TennisMixedDoubles";
        case Value_TriathlonMensIndividual:
            return "TriathlonMensIndividual";
        case Value_TriathlonWomensIndividual:
            return "TriathlonWomensIndividual";
        case Value_VolleyballMensIndoor:
            return "VolleyballMensIndoor";
        case Value_VolleyballMensBeach:
            return "VolleyballMensBeach";
        case Value_VolleyballWomensIndoor:
            return "VolleyballWomensIndoor";
        case Value_VolleyballWomensBeach:
            return "VolleyballWomensBeach";
        case Value_WaterPoloMens:
            return "WaterPoloMens";
        case Value_WaterPoloWomens:
            return "WaterPoloWomens";
        case Value_WeightliftingMensFlyweight:
            return "WeightliftingMensFlyweight";
        case Value_WeightliftingMensBantamweight:
            return "WeightliftingMensBantamweight";
        case Value_WeightliftingMensFeatherweight:
            return "WeightliftingMensFeatherweight";
        case Value_WeightliftingMensLightweight:
            return "WeightliftingMensLightweight";
        case Value_WeightliftingMensMiddleweight:
            return "WeightliftingMensMiddleweight";
        case Value_WeightliftingMensLightHeavyweight:
            return "WeightliftingMensLightHeavyweight";
        case Value_WeightliftingMensMiddleHeavyweight:
            return "WeightliftingMensMiddleHeavyweight";
        case Value_WeightliftingMensFirstHeavyweight:
            return "WeightliftingMensFirstHeavyweight";
        case Value_WeightliftingMensHeavyweight:
            return "WeightliftingMensHeavyweight";
        case Value_WeightliftingMensSuperHeavyweight:
            return "WeightliftingMensSuperHeavyweight";
        case Value_WeightliftingWomensFlyweight:
            return "WeightliftingWomensFlyweight";
        case Value_WeightliftingWomensFeatherweight:
            return "WeightliftingWomensFeatherweight";
        case Value_WeightliftingWomensLightweight:
            return "WeightliftingWomensLightweight";
        case Value_WeightliftingWomensMiddleweight:
            return "WeightliftingWomensMiddleweight";
        case Value_WeightliftingWomensLightHeavyweight:
            return "WeightliftingWomensLightHeavyweight";
        case Value_WeightliftingWomensHeavyweight:
            return "WeightliftingWomensHeavyweight";
        case Value_WeightliftingWomensSuperHeavyweight:
            return "WeightliftingWomensSuperHeavyweight";
        case Value_WrestlingMensGrecoRomanLightFlyweight:
            return "WrestlingMensGrecoRomanLightFlyweight";
        case Value_WrestlingMensGrecoRomanFlyweight:
            return "WrestlingMensGrecoRomanFlyweight";
        case Value_WrestlingMensGrecoRomanBantamweight:
            return "WrestlingMensGrecoRomanBantamweight";
        case Value_WrestlingMensGrecoRomanFeatherweight:
            return "WrestlingMensGrecoRomanFeatherweight";
        case Value_WrestlingMensGrecoRomanLightweight:
            return "WrestlingMensGrecoRomanLightweight";
        case Value_WrestlingMensGrecoRomanWelterweight:
            return "WrestlingMensGrecoRomanWelterweight";
        case Value_WrestlingMensGrecoRomanMiddleweight:
            return "WrestlingMensGrecoRomanMiddleweight";
        case Value_WrestlingMensGrecoRomanLightHeavyweight:
            return "WrestlingMensGrecoRomanLightHeavyweight";
        case Value_WrestlingMensGrecoRomanHeavyweight:
            return "WrestlingMensGrecoRomanHeavyweight";
        case Value_WrestlingMensGrecoRomanSuperHeavyweight:
            return "WrestlingMensGrecoRomanSuperHeavyweight";
        case Value_WrestlingMensFreestyleLightFlyweight:
            return "WrestlingMensFreestyleLightFlyweight";
        case Value_WrestlingMensFreestyleFlyweight:
            return "WrestlingMensFreestyleFlyweight";
        case Value_WrestlingMensFreestyleBantamweight:
            return "WrestlingMensFreestyleBantamweight";
        case Value_WrestlingMensFreestyleFeatherweight:
            return "WrestlingMensFreestyleFeatherweight";
        case Value_WrestlingMensFreestyleLightweight:
            return "WrestlingMensFreestyleLightweight";
        case Value_WrestlingMensFreestyleWelterweight:
            return "WrestlingMensFreestyleWelterweight";
        case Value_WrestlingMensFreestyleMiddleweight:
            return "WrestlingMensFreestyleMiddleweight";
        case Value_WrestlingMensFreestyleLightHeavyweight:
            return "WrestlingMensFreestyleLightHeavyweight";
        case Value_WrestlingMensFreestyleHeavyweight:
            return "WrestlingMensFreestyleHeavyweight";
        case Value_WrestlingMensFreestyleSuperHeavyweight:
            return "WrestlingMensFreestyleSuperHeavyweight";
        case Value_WrestlingWomensFreestyleFlyweight:
            return "WrestlingWomensFreestyleFlyweight";
        case Value_WrestlingWomensFreestyleBantamweight:
            return "WrestlingWomensFreestyleBantamweight";
        case Value_WrestlingWomensFreestyleLightweight:
            return "WrestlingWomensFreestyleLightweight";
        case Value_WrestlingWomensFreestyleMiddleweight:
            return "WrestlingWomensFreestyleMiddleweight";
        case Value_WrestlingWomensFreestyleWelterweight:
            return "WrestlingWomensFreestyleWelterweight";
        case Value_WrestlingWomensFreestyleLightHeavyweight:
            return "WrestlingWomensFreestyleLightHeavyweight";
        case Value_WrestlingWomensFreestyleHeavyweight:
            return "WrestlingWomensFreestyleHeavyweight";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsEventJSON::SportsOlympicsEventJSON(const SportsOlympicsEventJSON &)
  {
    assert(false);
  }

SportsOlympicsEventJSON &SportsOlympicsEventJSON::operator=(const SportsOlympicsEventJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsEventJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strncmp(&(json_string->getData()[2]), "pineSkiing", 10) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[12]))
                          {
                            case 'M':
                                switch ((unsigned char)(json_string->getData()[13]))
                                  {
                                    case 'e':
                                        if (strncmp(&(json_string->getData()[14]), "ns", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[16]))
                                              {
                                                case 'C':
                                                    if (strcmp(&(json_string->getData()[17]), "ombined") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AlpineSkiingMensCombined;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'D':
                                                    if (strcmp(&(json_string->getData()[17]), "ownhill") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AlpineSkiingMensDownhill;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'G':
                                                    if (strcmp(&(json_string->getData()[17]), "iantSlalom") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AlpineSkiingMensGiantSlalom;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'S':
                                                    switch ((unsigned char)(json_string->getData()[17]))
                                                      {
                                                        case 'l':
                                                            if (strcmp(&(json_string->getData()[18]), "alom") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_AlpineSkiingMensSlalom;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'u':
                                                            if (strcmp(&(json_string->getData()[18]), "perG") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_AlpineSkiingMensSuperG;
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
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[14]), "xedTeam") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_AlpineSkiingMixedTeam;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[13]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[18]))
                                      {
                                        case 'C':
                                            if (strcmp(&(json_string->getData()[19]), "ombined") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AlpineSkiingWomensCombined;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[19]), "ownhill") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AlpineSkiingWomensDownhill;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'G':
                                            if (strcmp(&(json_string->getData()[19]), "iantSlalom") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AlpineSkiingWomensGiantSlalom;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[19]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[20]), "alom") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AlpineSkiingWomensSlalom;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[20]), "perG") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AlpineSkiingWomensSuperG;
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
                            default:
                                break;
                          }
                      }
                    break;
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "chery", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[8]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[12]), "ndividual") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArcheryMensIndividual;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[12]), "eam") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArcheryMensTeam;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[8]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[14]), "ndividual") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArcheryWomensIndividual;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[14]), "eam") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArcheryWomensTeam;
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
                case 't':
                    if (strncmp(&(json_string->getData()[2]), "hletics", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[10]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case '0':
                                                    if (strncmp(&(json_string->getData()[15]), "0", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[16]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(json_string->getData()[17]), "0M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_AthleticsMens10000M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'M':
                                                                if (json_string->getData()[17] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_AthleticsMens100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(json_string->getData()[15]), "00M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsMens1500M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '2':
                                            if (strcmp(&(json_string->getData()[14]), "00M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsMens200M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '4':
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case '0':
                                                    if (strcmp(&(json_string->getData()[15]), "0M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsMens400M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'X':
                                                    switch ((unsigned char)(json_string->getData()[15]))
                                                      {
                                                        case '1':
                                                            if (strcmp(&(json_string->getData()[16]), "00MRelay") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_AthleticsMens4X100MRelay;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case '4':
                                                            if (strcmp(&(json_string->getData()[16]), "00MRelay") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_AthleticsMens4X400MRelay;
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
                                        case '5':
                                            if (strcmp(&(json_string->getData()[14]), "000M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsMens5000M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '8':
                                            if (strcmp(&(json_string->getData()[14]), "00M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsMens800M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'D':
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[15]), "cathlon") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsMensDecathlon;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[15]), "scusThrow") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsMensDiscusThrow;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'H':
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[15]), "mmerThrow") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsMensHammerThrow;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[15]), "ghJump") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsMensHighJump;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    if (strncmp(&(json_string->getData()[15]), "rdles", 5) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[20]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(json_string->getData()[21]), "10M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_AthleticsMensHurdles110M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '4':
                                                                if (strcmp(&(json_string->getData()[21]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_AthleticsMensHurdles400M;
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
                                        case 'J':
                                            if (strcmp(&(json_string->getData()[14]), "avelinThrow") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsMensJavelinThrow;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strcmp(&(json_string->getData()[14]), "ongJump") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsMensLongJump;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[14]), "arathon") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsMensMarathon;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[14]), "oleVault") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsMensPoleVault;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case 'h':
                                                    if (strcmp(&(json_string->getData()[15]), "otPut") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsMensShotPut;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 't':
                                                    if (strcmp(&(json_string->getData()[15]), "eeplechase3000M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsMensSteeplechase3000M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[14]), "ripleJump") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsMensTripleJump;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strncmp(&(json_string->getData()[14]), "alk", 3) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[17]))
                                                  {
                                                    case '2':
                                                        if (strcmp(&(json_string->getData()[18]), "0KM") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_AthleticsMensWalk20KM;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '5':
                                                        if (strcmp(&(json_string->getData()[18]), "0KM") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_AthleticsMensWalk50KM;
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
                            case 'W':
                                if (strncmp(&(json_string->getData()[10]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[15]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(json_string->getData()[16]))
                                              {
                                                case '0':
                                                    if (strncmp(&(json_string->getData()[17]), "0", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[18]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(json_string->getData()[19]), "0M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_AthleticsWomens10000M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'M':
                                                                if (json_string->getData()[19] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_AthleticsWomens100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(json_string->getData()[17]), "00M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsWomens1500M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '2':
                                            if (strcmp(&(json_string->getData()[16]), "00M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomens200M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '3':
                                            if (strcmp(&(json_string->getData()[16]), "000M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomens3000M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '4':
                                            switch ((unsigned char)(json_string->getData()[16]))
                                              {
                                                case '0':
                                                    if (strcmp(&(json_string->getData()[17]), "0M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsWomens400M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'X':
                                                    switch ((unsigned char)(json_string->getData()[17]))
                                                      {
                                                        case '1':
                                                            if (strcmp(&(json_string->getData()[18]), "00MRelay") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_AthleticsWomens4X100MRelay;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case '4':
                                                            if (strcmp(&(json_string->getData()[18]), "00MRelay") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_AthleticsWomens4X400MRelay;
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
                                        case '5':
                                            if (strcmp(&(json_string->getData()[16]), "000M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomens5000M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '8':
                                            if (strcmp(&(json_string->getData()[16]), "00M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomens800M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[16]), "iscusThrow") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomensDiscusThrow;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'H':
                                            switch ((unsigned char)(json_string->getData()[16]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[17]), "mmerThrow") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsWomensHammerThrow;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[17]), "ptathlon") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsWomensHeptathlon;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[17]), "ghJump") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsWomensHighJump;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[17]), "rdles100M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsWomensHurdles100M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'J':
                                            if (strcmp(&(json_string->getData()[16]), "avelinThrow") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomensJavelinThrow;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strcmp(&(json_string->getData()[16]), "ongJump") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomensLongJump;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[16]), "arathon") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomensMarathon;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[16]), "oleVault") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomensPoleVault;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[16]))
                                              {
                                                case 'h':
                                                    if (strcmp(&(json_string->getData()[17]), "otPut") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsWomensShotPut;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 't':
                                                    if (strcmp(&(json_string->getData()[17]), "eeplechase3000M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_AthleticsWomensSteeplechase3000M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[16]), "ripleJump") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomensTripleJump;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strncmp(&(json_string->getData()[16]), "alk", 3) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[19]))
                                                  {
                                                    case '1':
                                                        if (strcmp(&(json_string->getData()[20]), "0KM") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_AthleticsWomensWalk10KM;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(json_string->getData()[20]), "0KM") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_AthleticsWomensWalk20KM;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'h':
                                            if (strcmp(&(json_string->getData()[16]), "urdles400M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_AthleticsWomenshurdles400M;
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
        case 'B':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'd':
                            if (strncmp(&(json_string->getData()[3]), "minton", 6) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[9]))
                                  {
                                    case 'M':
                                        switch ((unsigned char)(json_string->getData()[10]))
                                          {
                                            case 'e':
                                                if (strncmp(&(json_string->getData()[11]), "ns", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[13]))
                                                      {
                                                        case 'D':
                                                            if (strcmp(&(json_string->getData()[14]), "oubles") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_BadmintonMensDoubles;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'S':
                                                            if (strcmp(&(json_string->getData()[14]), "ingles") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_BadmintonMensSingles;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[11]), "xedDoubles") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_BadmintonMixedDoubles;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(json_string->getData()[10]), "omens", 5) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[15]))
                                              {
                                                case 'D':
                                                    if (strcmp(&(json_string->getData()[16]), "oubles") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BadmintonWomensDoubles;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[16]), "ingles") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BadmintonWomensSingles;
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
                        case 's':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'e':
                                    if (strcmp(&(json_string->getData()[4]), "ballMens") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_BaseballMens;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'k':
                                    if (strncmp(&(json_string->getData()[4]), "etball", 6) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[10]))
                                          {
                                            case 'M':
                                                if (strcmp(&(json_string->getData()[11]), "ens") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_BasketballMens;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'W':
                                                if (strcmp(&(json_string->getData()[11]), "omens") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_BasketballWomens;
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
                        default:
                            break;
                      }
                    break;
                case 'i':
                    if (strncmp(&(json_string->getData()[2]), "athlon", 6) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 'M':
                                switch ((unsigned char)(json_string->getData()[9]))
                                  {
                                    case 'e':
                                        if (strncmp(&(json_string->getData()[10]), "ns", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[12]))
                                              {
                                                case 'I':
                                                    if (strcmp(&(json_string->getData()[13]), "ndividual") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BiathlonMensIndividual;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'M':
                                                    switch ((unsigned char)(json_string->getData()[13]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(json_string->getData()[14]), "ssStart") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_BiathlonMensMassStart;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'i':
                                                            if (strcmp(&(json_string->getData()[14]), "litaryPatrol") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_BiathlonMensMilitaryPatrol;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'P':
                                                    if (strcmp(&(json_string->getData()[13]), "ursuit") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BiathlonMensPursuit;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'R':
                                                    if (strcmp(&(json_string->getData()[13]), "elay") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BiathlonMensRelay;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[13]), "print") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BiathlonMensSprint;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[10]), "xedRelay") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_BiathlonMixedRelay;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[9]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[14]))
                                      {
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[15]), "ndividual") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_BiathlonWomensIndividual;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[15]), "assStart") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_BiathlonWomensMassStart;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[15]), "ursuit") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_BiathlonWomensPursuit;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'R':
                                            if (strcmp(&(json_string->getData()[15]), "elay") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_BiathlonWomensRelay;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[15]), "print") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_BiathlonWomensSprint;
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
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'b':
                            if (strncmp(&(json_string->getData()[3]), "sleigh", 6) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[9]))
                                  {
                                    case 'M':
                                        if (strncmp(&(json_string->getData()[10]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[13]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[14]), "our") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BobsleighMensFour;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(json_string->getData()[14]), "wo") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BobsleighMensTwo;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strcmp(&(json_string->getData()[10]), "omensTwo") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_BobsleighWomensTwo;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'x':
                            if (strncmp(&(json_string->getData()[3]), "ing", 3) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'M':
                                        if (strncmp(&(json_string->getData()[7]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[10]))
                                              {
                                                case 'B':
                                                    if (strcmp(&(json_string->getData()[11]), "antamweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BoxingMensBantamweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'F':
                                                    switch ((unsigned char)(json_string->getData()[11]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(json_string->getData()[12]), "atherweight") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_BoxingMensFeatherweight;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'l':
                                                            if (strcmp(&(json_string->getData()[12]), "yweight") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_BoxingMensFlyweight;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'H':
                                                    if (strcmp(&(json_string->getData()[11]), "eavyweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BoxingMensHeavyweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'L':
                                                    if (strncmp(&(json_string->getData()[11]), "ight", 4) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[15]))
                                                          {
                                                            case 'F':
                                                                if (strcmp(&(json_string->getData()[16]), "lyweight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_BoxingMensLightFlyweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'H':
                                                                if (strcmp(&(json_string->getData()[16]), "eavyweight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_BoxingMensLightHeavyweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'M':
                                                                if (strcmp(&(json_string->getData()[16]), "iddleweight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_BoxingMensLightMiddleweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'W':
                                                                if (strcmp(&(json_string->getData()[16]), "elterweight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_BoxingMensLightWelterweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'w':
                                                                if (strcmp(&(json_string->getData()[16]), "eight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_BoxingMensLightweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'M':
                                                    if (strcmp(&(json_string->getData()[11]), "iddleweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BoxingMensMiddleweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[11]), "uperHeavyweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BoxingMensSuperHeavyweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(json_string->getData()[11]), "elterweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BoxingMensWelterweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(json_string->getData()[7]), "omens", 5) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[12]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[13]), "lyweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BoxingWomensFlyweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'L':
                                                    if (strcmp(&(json_string->getData()[13]), "ightweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BoxingWomensLightweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'M':
                                                    if (strcmp(&(json_string->getData()[13]), "iddleweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_BoxingWomensMiddleweight;
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
            break;
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strncmp(&(json_string->getData()[2]), "noeing", 6) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[9]), "ensS", 4) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'l':
                                            if (strncmp(&(json_string->getData()[14]), "alom", 4) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[18]))
                                                  {
                                                    case 'C':
                                                        switch ((unsigned char)(json_string->getData()[19]))
                                                          {
                                                            case '1':
                                                                if (json_string->getData()[20] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CanoeingMensSlalomC1;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '2':
                                                                if (json_string->getData()[20] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CanoeingMensSlalomC2;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'K':
                                                        if (strcmp(&(json_string->getData()[19]), "1") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CanoeingMensSlalomK1;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'p':
                                            if (strncmp(&(json_string->getData()[14]), "rint", 4) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[18]))
                                                  {
                                                    case 'C':
                                                        switch ((unsigned char)(json_string->getData()[19]))
                                                          {
                                                            case '1':
                                                                switch ((unsigned char)(json_string->getData()[20]))
                                                                  {
                                                                    case '1':
                                                                        if (strcmp(&(json_string->getData()[21]), "000M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintC11000M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case '2':
                                                                        if (strcmp(&(json_string->getData()[21]), "00M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintC1200M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case '5':
                                                                        if (strcmp(&(json_string->getData()[21]), "00M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintC1500M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            case '2':
                                                                switch ((unsigned char)(json_string->getData()[20]))
                                                                  {
                                                                    case '1':
                                                                        if (strcmp(&(json_string->getData()[21]), "000M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintC21000M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case '5':
                                                                        if (strcmp(&(json_string->getData()[21]), "00M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintC2500M;
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
                                                    case 'K':
                                                        switch ((unsigned char)(json_string->getData()[19]))
                                                          {
                                                            case '1':
                                                                switch ((unsigned char)(json_string->getData()[20]))
                                                                  {
                                                                    case '1':
                                                                        if (strcmp(&(json_string->getData()[21]), "000M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintK11000M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case '2':
                                                                        if (strcmp(&(json_string->getData()[21]), "00M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintK1200M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case '5':
                                                                        if (strcmp(&(json_string->getData()[21]), "00M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintK1500M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            case '2':
                                                                switch ((unsigned char)(json_string->getData()[20]))
                                                                  {
                                                                    case '1':
                                                                        if (strcmp(&(json_string->getData()[21]), "000M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintK21000M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case '2':
                                                                        if (strcmp(&(json_string->getData()[21]), "00M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintK2200M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case '5':
                                                                        if (strcmp(&(json_string->getData()[21]), "00M") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Value_CanoeingMensSprintK2500M;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                                break;
                                                            case '4':
                                                                if (strcmp(&(json_string->getData()[20]), "1000M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CanoeingMensSprintK41000M;
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
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[9]), "omensS", 6) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[15]))
                                      {
                                        case 'l':
                                            if (strcmp(&(json_string->getData()[16]), "alomK1") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CanoeingWomensSlalomK1;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'p':
                                            if (strncmp(&(json_string->getData()[16]), "rintK", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[21]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(json_string->getData()[22]))
                                                          {
                                                            case '2':
                                                                if (strcmp(&(json_string->getData()[23]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CanoeingWomensSprintK1200M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '5':
                                                                if (strcmp(&(json_string->getData()[23]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CanoeingWomensSprintK1500M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(json_string->getData()[22]), "500M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CanoeingWomensSprintK2500M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '4':
                                                        if (strcmp(&(json_string->getData()[22]), "500M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CanoeingWomensSprintK4500M;
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
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "ossCountrySkiing", 16) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[18]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[19]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[22]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(json_string->getData()[23]))
                                              {
                                                case '0':
                                                    if (strcmp(&(json_string->getData()[24]), "KMClassical") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_CrossCountrySkiingMens10KMClassical;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(json_string->getData()[24]), "KMClassical") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_CrossCountrySkiingMens15KMClassical;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case '8':
                                                    if (strcmp(&(json_string->getData()[24]), "KM") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_CrossCountrySkiingMens18KM;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '2':
                                            if (strcmp(&(json_string->getData()[23]), "X10KMPursuit") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingMens2X10KMPursuit;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '3':
                                            if (strcmp(&(json_string->getData()[23]), "0KMSkiathlon") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingMens30KMSkiathlon;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '4':
                                            if (strcmp(&(json_string->getData()[23]), "X10KMRelay") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingMens4X10KMRelay;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '5':
                                            if (strcmp(&(json_string->getData()[23]), "0KMFreestyle") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingMens50KMFreestyle;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[23]), "print") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingMensSprint;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[23]), "eamSprint") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingMensTeamSprint;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[19]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[24]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(json_string->getData()[25]))
                                              {
                                                case '0':
                                                    if (strcmp(&(json_string->getData()[26]), "KMClassical") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_CrossCountrySkiingWomens10KMClassical;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(json_string->getData()[26]), "KMSkiathlon") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_CrossCountrySkiingWomens15KMSkiathlon;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '2':
                                            switch ((unsigned char)(json_string->getData()[25]))
                                              {
                                                case '0':
                                                    if (strcmp(&(json_string->getData()[26]), "KM") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_CrossCountrySkiingWomens20KM;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'X':
                                                    if (strcmp(&(json_string->getData()[26]), "5KMPursuit") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_CrossCountrySkiingWomens2X5KMPursuit;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '3':
                                            if (strcmp(&(json_string->getData()[25]), "0KMFreestyle") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingWomens30KMFreestyle;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '4':
                                            if (strcmp(&(json_string->getData()[25]), "X5KMRelay") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingWomens4X5KMRelay;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '5':
                                            if (strcmp(&(json_string->getData()[25]), "KM") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingWomens5KM;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[25]), "print") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingWomensSprint;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[25]), "eamSprint") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CrossCountrySkiingWomensTeamSprint;
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
                    if (strncmp(&(json_string->getData()[2]), "rling", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'M':
                                switch ((unsigned char)(json_string->getData()[8]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[9]), "ns") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_CurlingMens;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[9]), "xedDoubles") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_CurlingMixedDoubles;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[8]), "omens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_CurlingWomens;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'y':
                    if (strncmp(&(json_string->getData()[2]), "cling", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[8]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[12]), "MX") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CyclingMensBMX;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[12]), "ountainBikingCrossCountry") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CyclingMensMountainBikingCrossCountry;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'R':
                                            if (strncmp(&(json_string->getData()[12]), "oadCycling", 10) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[22]))
                                                  {
                                                    case 'R':
                                                        if (strcmp(&(json_string->getData()[23]), "oadRace") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingMensRoadCyclingRoadRace;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        switch ((unsigned char)(json_string->getData()[23]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(json_string->getData()[24]), "amTimeTrial") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CyclingMensRoadCyclingTeamTimeTrial;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(json_string->getData()[24]), "meTrial") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CyclingMensRoadCyclingTimeTrial;
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
                                        case 'T':
                                            if (strncmp(&(json_string->getData()[12]), "rackCycling", 11) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[23]))
                                                  {
                                                    case 'I':
                                                        if (strncmp(&(json_string->getData()[24]), "ndividual", 9) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[33]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(json_string->getData()[34]), "ursuit") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_CyclingMensTrackCyclingIndividualPursuit;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'S':
                                                                    if (strcmp(&(json_string->getData()[34]), "print") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_CyclingMensTrackCyclingIndividualSprint;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'K':
                                                        if (strcmp(&(json_string->getData()[24]), "eirin") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingMensTrackCyclingKeirin;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(json_string->getData()[24]), "adison") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingMensTrackCyclingMadison;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(json_string->getData()[24]), "mnium") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingMensTrackCyclingOmnium;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(json_string->getData()[24]), "ointsRace") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingMensTrackCyclingPointsRace;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        switch ((unsigned char)(json_string->getData()[24]))
                                                          {
                                                            case 'e':
                                                                if (strncmp(&(json_string->getData()[25]), "am", 2) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[27]))
                                                                      {
                                                                        case 'P':
                                                                            if (strcmp(&(json_string->getData()[28]), "ursuit") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_CyclingMensTrackCyclingTeamPursuit;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'S':
                                                                            if (strcmp(&(json_string->getData()[28]), "print") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_CyclingMensTrackCyclingTeamSprint;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(json_string->getData()[25]), "meTrial") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CyclingMensTrackCyclingTimeTrial;
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
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[8]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[14]), "MX") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CyclingWomensBMX;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[14]), "ountainBikingCrossCountry") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_CyclingWomensMountainBikingCrossCountry;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'R':
                                            if (strncmp(&(json_string->getData()[14]), "oadCycling", 10) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[24]))
                                                  {
                                                    case 'R':
                                                        if (strcmp(&(json_string->getData()[25]), "oadRace") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingWomensRoadCyclingRoadRace;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[25]), "imeTrial") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingWomensRoadCyclingTimeTrial;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strncmp(&(json_string->getData()[14]), "rackCycling", 11) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[25]))
                                                  {
                                                    case 'I':
                                                        if (strncmp(&(json_string->getData()[26]), "ndividual", 9) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[35]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(json_string->getData()[36]), "ursuit") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_CyclingWomensTrackCyclingIndividualPursuit;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'S':
                                                                    if (strcmp(&(json_string->getData()[36]), "print") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_CyclingWomensTrackCyclingIndividualSprint;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'K':
                                                        if (strcmp(&(json_string->getData()[26]), "eirin") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingWomensTrackCyclingKeirin;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(json_string->getData()[26]), "adison") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingWomensTrackCyclingMadison;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(json_string->getData()[26]), "mnium") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingWomensTrackCyclingOmnium;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(json_string->getData()[26]), "ointsRace") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_CyclingWomensTrackCyclingPointsRace;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        switch ((unsigned char)(json_string->getData()[26]))
                                                          {
                                                            case 'e':
                                                                if (strncmp(&(json_string->getData()[27]), "am", 2) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[29]))
                                                                      {
                                                                        case 'P':
                                                                            if (strcmp(&(json_string->getData()[30]), "ursuit") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_CyclingWomensTrackCyclingTeamPursuit;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'S':
                                                                            if (strcmp(&(json_string->getData()[30]), "print") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_CyclingWomensTrackCyclingTeamSprint;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        default:
                                                                            break;
                                                                      }
                                                                  }
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(json_string->getData()[27]), "meTrial") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_CyclingWomensTrackCyclingTimeTrial;
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
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "iving", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'M':
                        if (strncmp(&(json_string->getData()[7]), "ens", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[10]))
                              {
                                case 'P':
                                    if (strcmp(&(json_string->getData()[11]), "latform") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_DivingMensPlatform;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'p':
                                            if (strcmp(&(json_string->getData()[12]), "ringboard") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_DivingMensSpringboard;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'y':
                                            if (strncmp(&(json_string->getData()[12]), "nchronized", 10) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[22]))
                                                  {
                                                    case 'P':
                                                        if (strcmp(&(json_string->getData()[23]), "latform") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_DivingMensSynchronizedPlatform;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[23]), "pringboard") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_DivingMensSynchronizedSpringboard;
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
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'W':
                        if (strncmp(&(json_string->getData()[7]), "omens", 5) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[12]))
                              {
                                case 'P':
                                    if (strcmp(&(json_string->getData()[13]), "latform") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_DivingWomensPlatform;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'p':
                                            if (strcmp(&(json_string->getData()[14]), "ringboard") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_DivingWomensSpringboard;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'y':
                                            if (strncmp(&(json_string->getData()[14]), "nchronized", 10) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[24]))
                                                  {
                                                    case 'P':
                                                        if (strcmp(&(json_string->getData()[25]), "latform") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_DivingWomensSynchronizedPlatform;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[25]), "pringboard") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_DivingWomensSynchronizedSpringboard;
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
            if (strncmp(&(json_string->getData()[1]), "questrian", 9) == 0)
              {
                switch ((unsigned char)(json_string->getData()[10]))
                  {
                    case 'I':
                        if (strncmp(&(json_string->getData()[11]), "ndividual", 9) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[20]))
                              {
                                case 'D':
                                    if (strcmp(&(json_string->getData()[21]), "ressage") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_EquestrianIndividualDressage;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'E':
                                    if (strcmp(&(json_string->getData()[21]), "venting") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_EquestrianIndividualEventing;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'J':
                                    if (strcmp(&(json_string->getData()[21]), "umping") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_EquestrianIndividualJumping;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strncmp(&(json_string->getData()[11]), "eam", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[14]))
                              {
                                case 'D':
                                    if (strcmp(&(json_string->getData()[15]), "ressage") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_EquestrianTeamDressage;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'E':
                                    if (strcmp(&(json_string->getData()[15]), "venting") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_EquestrianTeamEventing;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'J':
                                    if (strcmp(&(json_string->getData()[15]), "umping") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_EquestrianTeamJumping;
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
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "ncing", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[8]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'I':
                                            if (strncmp(&(json_string->getData()[12]), "ndividual", 9) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[21]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[22]), "pee") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingMensIndividualEpee;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[22]), "oil") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingMensIndividualFoil;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[22]), "abre") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingMensIndividualSabre;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strncmp(&(json_string->getData()[12]), "eam", 3) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[15]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[16]), "pee") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingMensTeamEpee;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[16]), "oil") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingMensTeamFoil;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[16]), "abre") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingMensTeamSabre;
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
                            case 'W':
                                if (strncmp(&(json_string->getData()[8]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'I':
                                            if (strncmp(&(json_string->getData()[14]), "ndividual", 9) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[23]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[24]), "pee") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingWomensIndividualEpee;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[24]), "oil") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingWomensIndividualFoil;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[24]), "abre") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingWomensIndividualSabre;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strncmp(&(json_string->getData()[14]), "eam", 3) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[17]))
                                                  {
                                                    case 'E':
                                                        if (strcmp(&(json_string->getData()[18]), "pee") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingWomensTeamEpee;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[18]), "oil") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingWomensTeamFoil;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[18]), "abre") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FencingWomensTeamSabre;
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
                case 'i':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'e':
                            if (strncmp(&(json_string->getData()[3]), "ldHockey", 8) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[11]))
                                  {
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[12]), "ens") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_FieldHockeyMens;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'W':
                                        if (strcmp(&(json_string->getData()[12]), "omens") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_FieldHockeyWomens;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'g':
                            if (strncmp(&(json_string->getData()[3]), "ureSkating", 10) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[13]))
                                  {
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[14]), "ceDancing") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_FigureSkatingIceDancing;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[14]), "ensSingles") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_FigureSkatingMensSingles;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'P':
                                        if (strcmp(&(json_string->getData()[14]), "air") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_FigureSkatingPair;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'T':
                                        if (strcmp(&(json_string->getData()[14]), "eamTrophy") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_FigureSkatingTeamTrophy;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'W':
                                        if (strcmp(&(json_string->getData()[14]), "omensSingles") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_FigureSkatingWomensSingles;
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
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "otball", 6) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 'M':
                                if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_FootballMens;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[9]), "omens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_FootballWomens;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "eestyleSkiing", 13) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[15]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[16]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[19]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[20]), "erials") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_FreestyleSkiingMensAerials;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[20]), "alfpipe") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_FreestyleSkiingMensHalfpipe;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[20]), "oguls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_FreestyleSkiingMensMoguls;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[20]))
                                              {
                                                case 'k':
                                                    if (strcmp(&(json_string->getData()[21]), "iCross") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_FreestyleSkiingMensSkiCross;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[21]), "opestyle") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_FreestyleSkiingMensSlopestyle;
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
                            case 'W':
                                if (strncmp(&(json_string->getData()[16]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[21]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[22]), "erials") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_FreestyleSkiingWomensAerials;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[22]), "alfpipe") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_FreestyleSkiingWomensHalfpipe;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[22]), "oguls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_FreestyleSkiingWomensMoguls;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[22]))
                                              {
                                                case 'k':
                                                    if (strcmp(&(json_string->getData()[23]), "iCross") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_FreestyleSkiingWomensSkiCross;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[23]), "opestyle") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_FreestyleSkiingWomensSlopestyle;
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
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'G':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "lf", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'M':
                                if (strcmp(&(json_string->getData()[5]), "ensIndividual") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_GolfMensIndividual;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[5]), "omensIndividual") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_GolfWomensIndividual;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'y':
                    if (strncmp(&(json_string->getData()[2]), "mnastics", 8) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[10]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[11]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[14]))
                                      {
                                        case 'A':
                                            if (strncmp(&(json_string->getData()[15]), "rtistic", 7) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[22]))
                                                  {
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[23]), "loorExercise") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsMensArtisticFloorExercise;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[23]), "orizontalBar") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsMensArtisticHorizontalBar;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(json_string->getData()[23]), "ndividualAllAround") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsMensArtisticIndividualAllAround;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'P':
                                                        switch ((unsigned char)(json_string->getData()[23]))
                                                          {
                                                            case 'a':
                                                                if (strcmp(&(json_string->getData()[24]), "rallelBars") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_GymnasticsMensArtisticParallelBars;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'o':
                                                                if (strcmp(&(json_string->getData()[24]), "mmelHorse") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_GymnasticsMensArtisticPommelHorse;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'R':
                                                        if (strcmp(&(json_string->getData()[23]), "ings") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsMensArtisticRings;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[23]), "eamAllAround") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsMensArtisticTeamAllAround;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'V':
                                                        if (strcmp(&(json_string->getData()[23]), "ault") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsMensArtisticVault;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[15]), "rampolineIndividual") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_GymnasticsMensTrampolineIndividual;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[11]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[16]))
                                      {
                                        case 'A':
                                            if (strncmp(&(json_string->getData()[17]), "rtistic", 7) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[24]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(json_string->getData()[25]), "alanceBeam") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsWomensArtisticBalanceBeam;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[25]), "loorExercise") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsWomensArtisticFloorExercise;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(json_string->getData()[25]), "ndividualAllAround") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsWomensArtisticIndividualAllAround;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[25]), "eamAllAround") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsWomensArtisticTeamAllAround;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'U':
                                                        if (strcmp(&(json_string->getData()[25]), "nevenBars") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsWomensArtisticUnevenBars;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'V':
                                                        if (strcmp(&(json_string->getData()[25]), "ault") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsWomensArtisticVault;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'R':
                                            if (strncmp(&(json_string->getData()[17]), "hythmic", 7) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[24]))
                                                  {
                                                    case 'G':
                                                        if (strcmp(&(json_string->getData()[25]), "roupAllAround") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsWomensRhythmicGroupAllAround;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(json_string->getData()[25]), "ndividualAllAround") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_GymnasticsWomensRhythmicIndividualAllAround;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[17]), "rampolineIndividual") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_GymnasticsWomensTrampolineIndividual;
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
        case 'H':
            if (strncmp(&(json_string->getData()[1]), "andball", 7) == 0)
              {
                switch ((unsigned char)(json_string->getData()[8]))
                  {
                    case 'M':
                        if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_HandballMens;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[9]), "omens") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_HandballWomens;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'I':
            if (strncmp(&(json_string->getData()[1]), "ceHockey", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 'M':
                        if (strcmp(&(json_string->getData()[10]), "ens") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_IceHockeyMens;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[10]), "omens") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_IceHockeyWomens;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'J':
            if (strncmp(&(json_string->getData()[1]), "udo", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'M':
                        if (strncmp(&(json_string->getData()[5]), "ens", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[8]))
                              {
                                case 'E':
                                    if (strcmp(&(json_string->getData()[9]), "xtraLightweight") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_JudoMensExtraLightweight;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'H':
                                    switch ((unsigned char)(json_string->getData()[9]))
                                      {
                                        case 'a':
                                            if (strncmp(&(json_string->getData()[10]), "lf", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[12]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[13]), "eavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_JudoMensHalfHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'L':
                                                        if (strcmp(&(json_string->getData()[13]), "ightweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_JudoMensHalfLightweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(json_string->getData()[13]), "iddleweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_JudoMensHalfMiddleweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[10]), "avyweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_JudoMensHeavyweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'L':
                                    if (strcmp(&(json_string->getData()[9]), "ightweight") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_JudoMensLightweight;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'M':
                                    if (strcmp(&(json_string->getData()[9]), "iddleweight") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_JudoMensMiddleweight;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'W':
                        if (strncmp(&(json_string->getData()[5]), "omens", 5) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[10]))
                              {
                                case 'E':
                                    if (strcmp(&(json_string->getData()[11]), "xtraLightweight") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_JudoWomensExtraLightweight;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'H':
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'a':
                                            if (strncmp(&(json_string->getData()[12]), "lf", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[14]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[15]), "eavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_JudoWomensHalfHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'L':
                                                        if (strcmp(&(json_string->getData()[15]), "ightweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_JudoWomensHalfLightweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(json_string->getData()[15]), "iddleweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_JudoWomensHalfMiddleweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[12]), "avyweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_JudoWomensHeavyweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'L':
                                    if (strcmp(&(json_string->getData()[11]), "ightweight") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_JudoWomensLightweight;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'M':
                                    if (strcmp(&(json_string->getData()[11]), "iddleweight") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_JudoWomensMiddleweight;
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
        case 'L':
            if (strncmp(&(json_string->getData()[1]), "uge", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'D':
                        if (strcmp(&(json_string->getData()[5]), "oubles") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_LugeDoubles;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'M':
                        if (strcmp(&(json_string->getData()[5]), "ensSingles") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_LugeMensSingles;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[5]), "eamRelay") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_LugeTeamRelay;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[5]), "omensSingles") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_LugeWomensSingles;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "odernPentathlon", 15) == 0)
              {
                switch ((unsigned char)(json_string->getData()[16]))
                  {
                    case 'M':
                        if (strcmp(&(json_string->getData()[17]), "ens") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_ModernPentathlonMens;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[17]), "omens") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_ModernPentathlonWomens;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "ordicCombined", 13) == 0)
              {
                switch ((unsigned char)(json_string->getData()[14]))
                  {
                    case 'I':
                        if (strncmp(&(json_string->getData()[15]), "ndividual", 9) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[24]))
                              {
                                case 'L':
                                    if (strcmp(&(json_string->getData()[25]), "argeHill10KM") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_NordicCombinedIndividualLargeHill10KM;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'N':
                                    if (strcmp(&(json_string->getData()[25]), "ormalHill10KM") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_NordicCombinedIndividualNormalHill10KM;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[15]), "eamLargeHill4X5KM") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_NordicCombinedTeamLargeHill4X5KM;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "wing", 4) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[6]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[7]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 'C':
                                            if (strncmp(&(json_string->getData()[11]), "ox", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[13]))
                                                  {
                                                    case 'e':
                                                        if (strncmp(&(json_string->getData()[14]), "d", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[15]))
                                                              {
                                                                case 'E':
                                                                    if (strcmp(&(json_string->getData()[16]), "ight") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_RowingMensCoxedEight;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[16]), "our") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_RowingMensCoxedFour;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'P':
                                                                    if (strcmp(&(json_string->getData()[16]), "air") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_RowingMensCoxedPair;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'l':
                                                        if (strncmp(&(json_string->getData()[14]), "ess", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[17]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[18]), "our") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_RowingMensCoxlessFour;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'P':
                                                                    if (strcmp(&(json_string->getData()[18]), "air") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_RowingMensCoxlessPair;
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
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[11]), "oubleSculls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_RowingMensDoubleSculls;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strncmp(&(json_string->getData()[11]), "ightweight", 10) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[21]))
                                                  {
                                                    case 'C':
                                                        if (strcmp(&(json_string->getData()[22]), "oxlessFour") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_RowingMensLightweightCoxlessFour;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'D':
                                                        if (strcmp(&(json_string->getData()[22]), "oubleSculls") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_RowingMensLightweightDoubleSculls;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'Q':
                                            if (strcmp(&(json_string->getData()[11]), "uadrupleSculls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_RowingMensQuadrupleSculls;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[11]), "ingleSculls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_RowingMensSingleSculls;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[7]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[12]))
                                      {
                                        case 'C':
                                            if (strncmp(&(json_string->getData()[13]), "ox", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[15]))
                                                  {
                                                    case 'e':
                                                        if (strncmp(&(json_string->getData()[16]), "d", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[17]))
                                                              {
                                                                case 'E':
                                                                    if (strcmp(&(json_string->getData()[18]), "ight") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_RowingWomensCoxedEight;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[18]), "our") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_RowingWomensCoxedFour;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'l':
                                                        if (strcmp(&(json_string->getData()[16]), "essPair") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_RowingWomensCoxlessPair;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[13]), "oubleSculls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_RowingWomensDoubleSculls;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strcmp(&(json_string->getData()[13]), "ightweightDoubleSculls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_RowingWomensLightweightDoubleSculls;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'Q':
                                            if (strcmp(&(json_string->getData()[13]), "uadrupleSculls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_RowingWomensQuadrupleSculls;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[13]), "ingleSculls") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_RowingWomensSingleSculls;
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
                    if (strncmp(&(json_string->getData()[2]), "gby", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'M':
                                if (strcmp(&(json_string->getData()[6]), "ens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_RugbyMens;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[6]), "omens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_RugbyWomens;
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
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strncmp(&(json_string->getData()[2]), "iling", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'M':
                                switch ((unsigned char)(json_string->getData()[8]))
                                  {
                                    case 'e':
                                        if (strncmp(&(json_string->getData()[9]), "ns", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[11]))
                                              {
                                                case '4':
                                                    switch ((unsigned char)(json_string->getData()[12]))
                                                      {
                                                        case '7':
                                                            if (strcmp(&(json_string->getData()[13]), "0") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_SailingMens470;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case '9':
                                                            if (strcmp(&(json_string->getData()[13]), "erFX") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_SailingMens49erFX;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[12]), "inn") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingMensFinn;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'L':
                                                    if (strcmp(&(json_string->getData()[12]), "aser") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingMensLaser;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'R':
                                                    if (strcmp(&(json_string->getData()[12]), "SX") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingMensRSX;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[12]), "tar") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingMensStar;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[9]), "xed", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[12]))
                                              {
                                                case '4':
                                                    if (strcmp(&(json_string->getData()[13]), "9erFX") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingMixed49erFX;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[13]), "inn") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingMixedFinn;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'N':
                                                    if (strcmp(&(json_string->getData()[13]), "acra17") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingMixedNacra17;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(json_string->getData()[13]), "ornado") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingMixedTornado;
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
                            case 'W':
                                if (strncmp(&(json_string->getData()[8]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case '4':
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case '7':
                                                    if (strcmp(&(json_string->getData()[15]), "0") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingWomens470;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case '9':
                                                    if (strcmp(&(json_string->getData()[15]), "erFX") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SailingWomens49erFX;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'E':
                                            if (strcmp(&(json_string->getData()[14]), "lliott6M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SailingWomensElliott6M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strcmp(&(json_string->getData()[14]), "aser") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SailingWomensLaser;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'R':
                                            if (strcmp(&(json_string->getData()[14]), "SX") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SailingWomensRSX;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'Y':
                                            if (strcmp(&(json_string->getData()[14]), "ngling") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SailingWomensYngling;
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
                case 'h':
                    if (strncmp(&(json_string->getData()[2]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'o':
                                if (strncmp(&(json_string->getData()[4]), "ting", 4) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[8]))
                                      {
                                        case 'M':
                                            if (strncmp(&(json_string->getData()[9]), "ens", 3) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[12]))
                                                  {
                                                    case '1':
                                                        if (strcmp(&(json_string->getData()[13]), "0MRunningTarget") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingMens10MRunningTarget;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'A':
                                                        if (strncmp(&(json_string->getData()[13]), "ir", 2) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[15]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(json_string->getData()[16]), "istol10M") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_ShootingMensAirPistol10M;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'R':
                                                                    if (strcmp(&(json_string->getData()[16]), "ifle10M") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_ShootingMensAirRifle10M;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'D':
                                                        if (strcmp(&(json_string->getData()[13]), "oubleTrap") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingMensDoubleTrap;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(json_string->getData()[13]), "istol50M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingMensPistol50M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'R':
                                                        switch ((unsigned char)(json_string->getData()[13]))
                                                          {
                                                            case 'a':
                                                                if (strcmp(&(json_string->getData()[14]), "pidFirePistol25M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_ShootingMensRapidFirePistol25M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'i':
                                                                if (strncmp(&(json_string->getData()[14]), "fle", 3) == 0)
                                                                  {
                                                                    switch ((unsigned char)(json_string->getData()[17]))
                                                                      {
                                                                        case 'P':
                                                                            if (strcmp(&(json_string->getData()[18]), "rone50M") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_ShootingMensRifleProne50M;
                                                                                    goto open_enum_is_done;
                                                                                  }
                                                                            break;
                                                                        case 'T':
                                                                            if (strcmp(&(json_string->getData()[18]), "hreePositions50M") == 0)
                                                                                  {
                                                                                    the_open_enum.in_known_list = true;
                                                                                    the_open_enum.list_value = Value_ShootingMensRifleThreePositions50M;
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
                                                        if (strcmp(&(json_string->getData()[13]), "keet") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingMensSkeet;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[13]), "rap") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingMensTrap;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'W':
                                            if (strncmp(&(json_string->getData()[9]), "omens", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[14]))
                                                  {
                                                    case 'A':
                                                        if (strncmp(&(json_string->getData()[15]), "ir", 2) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[17]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(json_string->getData()[18]), "istol10M") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_ShootingWomensAirPistol10M;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'R':
                                                                    if (strcmp(&(json_string->getData()[18]), "ifle10M") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_ShootingWomensAirRifle10M;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'D':
                                                        if (strcmp(&(json_string->getData()[15]), "oubleTrap") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingWomensDoubleTrap;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(json_string->getData()[15]), "istol25M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingWomensPistol25M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'R':
                                                        if (strcmp(&(json_string->getData()[15]), "ifleThreePositions50M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingWomensRifleThreePositions50M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[15]), "keet") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingWomensSkeet;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'T':
                                                        if (strcmp(&(json_string->getData()[15]), "rap") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShootingWomensTrap;
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
                            case 'r':
                                if (strncmp(&(json_string->getData()[4]), "tTrackSpeedSkating", 18) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[22]))
                                      {
                                        case 'M':
                                            if (strncmp(&(json_string->getData()[23]), "ens", 3) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[26]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(json_string->getData()[27]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(json_string->getData()[28]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_ShortTrackSpeedSkatingMens1000M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '5':
                                                                if (strcmp(&(json_string->getData()[28]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_ShortTrackSpeedSkatingMens1500M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case '5':
                                                        if (strncmp(&(json_string->getData()[27]), "00", 2) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[29]))
                                                              {
                                                                case '0':
                                                                    if (strcmp(&(json_string->getData()[30]), "MRelay") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_ShortTrackSpeedSkatingMens5000MRelay;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'M':
                                                                    if (json_string->getData()[30] == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_ShortTrackSpeedSkatingMens500M;
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
                                        case 'W':
                                            if (strncmp(&(json_string->getData()[23]), "omens", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[28]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(json_string->getData()[29]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(json_string->getData()[30]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_ShortTrackSpeedSkatingWomens1000M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '5':
                                                                if (strcmp(&(json_string->getData()[30]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_ShortTrackSpeedSkatingWomens1500M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case '3':
                                                        if (strcmp(&(json_string->getData()[29]), "000MRelay") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShortTrackSpeedSkatingWomens3000MRelay;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '5':
                                                        if (strcmp(&(json_string->getData()[29]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_ShortTrackSpeedSkatingWomens500M;
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
                case 'k':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'e':
                            if (strncmp(&(json_string->getData()[3]), "leton", 5) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[8]))
                                  {
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SkeletonMens;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'W':
                                        if (strcmp(&(json_string->getData()[9]), "omens") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SkeletonWomens;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strncmp(&(json_string->getData()[3]), "Jumping", 7) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[10]))
                                  {
                                    case 'M':
                                        if (strncmp(&(json_string->getData()[11]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case 'I':
                                                    if (strncmp(&(json_string->getData()[15]), "ndividual", 9) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[24]))
                                                          {
                                                            case 'L':
                                                                if (strcmp(&(json_string->getData()[25]), "argeHill") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SkiJumpingMensIndividualLargeHill;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'N':
                                                                if (strcmp(&(json_string->getData()[25]), "ormalHill") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SkiJumpingMensIndividualNormalHill;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(json_string->getData()[15]), "eamLargeHill") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SkiJumpingMensTeamLargeHill;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strcmp(&(json_string->getData()[11]), "omensIndividualNormalHill") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SkiJumpingWomensIndividualNormalHill;
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
                case 'n':
                    if (strncmp(&(json_string->getData()[2]), "owboarding", 10) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[12]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[13]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[16]))
                                      {
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[17]), "igAir") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SnowboardingMensBigAir;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[17]), "alfpipe") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SnowboardingMensHalfpipe;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strncmp(&(json_string->getData()[17]), "arallel", 7) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[24]))
                                                  {
                                                    case 'G':
                                                        if (strcmp(&(json_string->getData()[25]), "iantSlalom") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SnowboardingMensParallelGiantSlalom;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[25]), "lalom") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SnowboardingMensParallelSlalom;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[17]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[18]), "opestyle") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SnowboardingMensSlopestyle;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[18]), "owboardCross") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SnowboardingMensSnowboardCross;
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
                            case 'W':
                                if (strncmp(&(json_string->getData()[13]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[18]))
                                      {
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[19]), "igAir") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SnowboardingWomensBigAir;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[19]), "alfpipe") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SnowboardingWomensHalfpipe;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strncmp(&(json_string->getData()[19]), "arallel", 7) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[26]))
                                                  {
                                                    case 'G':
                                                        if (strcmp(&(json_string->getData()[27]), "iantSlalom") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SnowboardingWomensParallelGiantSlalom;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[27]), "lalom") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SnowboardingWomensParallelSlalom;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[19]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[20]), "opestyle") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SnowboardingWomensSlopestyle;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[20]), "owboardCross") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SnowboardingWomensSnowboardCross;
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
                            default:
                                break;
                          }
                      }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ftballWomens") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_SoftballWomens;
                            goto open_enum_is_done;
                          }
                    break;
                case 'p':
                    if (strncmp(&(json_string->getData()[2]), "eedSkating", 10) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[12]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[13]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[16]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(json_string->getData()[17]))
                                              {
                                                case '0':
                                                    if (strncmp(&(json_string->getData()[18]), "00", 2) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[20]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(json_string->getData()[21]), "M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SpeedSkatingMens10000M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'M':
                                                                if (json_string->getData()[21] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SpeedSkatingMens1000M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(json_string->getData()[18]), "00M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SpeedSkatingMens1500M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '5':
                                            if (strncmp(&(json_string->getData()[17]), "00", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[19]))
                                                  {
                                                    case '0':
                                                        if (strcmp(&(json_string->getData()[20]), "M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SpeedSkatingMens5000M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'M':
                                                        if (json_string->getData()[20] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SpeedSkatingMens500M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[17]), "llRound") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SpeedSkatingMensAllRound;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[17]), "assStart") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SpeedSkatingMensMassStart;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[17]), "eamPursuit") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SpeedSkatingMensTeamPursuit;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[13]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[18]))
                                      {
                                        case '1':
                                            switch ((unsigned char)(json_string->getData()[19]))
                                              {
                                                case '0':
                                                    if (strcmp(&(json_string->getData()[20]), "00M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SpeedSkatingWomens1000M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case '5':
                                                    if (strcmp(&(json_string->getData()[20]), "00M") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SpeedSkatingWomens1500M;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case '3':
                                            if (strcmp(&(json_string->getData()[19]), "000M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SpeedSkatingWomens3000M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '5':
                                            if (strncmp(&(json_string->getData()[19]), "00", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[21]))
                                                  {
                                                    case '0':
                                                        if (strcmp(&(json_string->getData()[22]), "M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SpeedSkatingWomens5000M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'M':
                                                        if (json_string->getData()[22] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SpeedSkatingWomens500M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[19]), "assStart") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SpeedSkatingWomensMassStart;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[19]), "eamPursuit") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SpeedSkatingWomensTeamPursuit;
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
                case 'w':
                    if (strncmp(&(json_string->getData()[2]), "imming", 6) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[9]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[12]))
                                      {
                                        case '4':
                                            if (strncmp(&(json_string->getData()[13]), "X", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[14]))
                                                  {
                                                    case '1':
                                                        if (strncmp(&(json_string->getData()[15]), "00M", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[18]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[19]), "reestyleRelay") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_SwimmingMens4X100MFreestyleRelay;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'M':
                                                                    if (strcmp(&(json_string->getData()[19]), "edleyRelay") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_SwimmingMens4X100MMedleyRelay;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(json_string->getData()[15]), "00MFreestyleRelay") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingMens4X200MFreestyleRelay;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'B':
                                            switch ((unsigned char)(json_string->getData()[13]))
                                              {
                                                case 'a':
                                                    if (strncmp(&(json_string->getData()[14]), "ckstroke", 8) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[22]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(json_string->getData()[23]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingMensBackstroke100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(json_string->getData()[23]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingMensBackstroke200M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'r':
                                                    if (strncmp(&(json_string->getData()[14]), "eaststroke", 10) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[24]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(json_string->getData()[25]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingMensBreaststroke100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(json_string->getData()[25]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingMensBreaststroke200M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strncmp(&(json_string->getData()[14]), "tterfly", 7) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[21]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(json_string->getData()[22]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingMensButterfly100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(json_string->getData()[22]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingMensButterfly200M;
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
                                        case 'F':
                                            if (strncmp(&(json_string->getData()[13]), "reestyle", 8) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[21]))
                                                  {
                                                    case '1':
                                                        switch ((unsigned char)(json_string->getData()[22]))
                                                          {
                                                            case '0':
                                                                if (strcmp(&(json_string->getData()[23]), "0M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingMensFreestyle100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '5':
                                                                if (strcmp(&(json_string->getData()[23]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingMensFreestyle1500M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(json_string->getData()[22]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingMensFreestyle200M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '4':
                                                        if (strcmp(&(json_string->getData()[22]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingMensFreestyle400M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '5':
                                                        if (strcmp(&(json_string->getData()[22]), "0M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingMensFreestyle50M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'I':
                                            if (strncmp(&(json_string->getData()[13]), "ndividualMedley", 15) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[28]))
                                                  {
                                                    case '2':
                                                        if (strcmp(&(json_string->getData()[29]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingMensIndividualMedley200M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '4':
                                                        if (strcmp(&(json_string->getData()[29]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingMensIndividualMedley400M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'O':
                                            if (strcmp(&(json_string->getData()[13]), "penWater10KM") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SwimmingMensOpenWater10KM;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[9]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[14]))
                                      {
                                        case '4':
                                            if (strncmp(&(json_string->getData()[15]), "X", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[16]))
                                                  {
                                                    case '1':
                                                        if (strncmp(&(json_string->getData()[17]), "00M", 3) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[20]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[21]), "reestyleRelay") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_SwimmingWomens4X100MFreestyleRelay;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'M':
                                                                    if (strcmp(&(json_string->getData()[21]), "edleyRelay") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_SwimmingWomens4X100MMedleyRelay;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(json_string->getData()[17]), "00MFreestyleRelay") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingWomens4X200MFreestyleRelay;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'B':
                                            switch ((unsigned char)(json_string->getData()[15]))
                                              {
                                                case 'a':
                                                    if (strncmp(&(json_string->getData()[16]), "ckstroke", 8) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[24]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(json_string->getData()[25]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingWomensBackstroke100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(json_string->getData()[25]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingWomensBackstroke200M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'r':
                                                    if (strncmp(&(json_string->getData()[16]), "eaststroke", 10) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[26]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(json_string->getData()[27]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingWomensBreaststroke100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(json_string->getData()[27]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingWomensBreaststroke200M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'u':
                                                    if (strncmp(&(json_string->getData()[16]), "tterfly", 7) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[23]))
                                                          {
                                                            case '1':
                                                                if (strcmp(&(json_string->getData()[24]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingWomensButterfly100M;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case '2':
                                                                if (strcmp(&(json_string->getData()[24]), "00M") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_SwimmingWomensButterfly200M;
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
                                        case 'F':
                                            if (strncmp(&(json_string->getData()[15]), "reestyle", 8) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[23]))
                                                  {
                                                    case '1':
                                                        if (strcmp(&(json_string->getData()[24]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingWomensFreestyle100M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '2':
                                                        if (strcmp(&(json_string->getData()[24]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingWomensFreestyle200M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '4':
                                                        if (strcmp(&(json_string->getData()[24]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingWomensFreestyle400M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '5':
                                                        if (strcmp(&(json_string->getData()[24]), "0M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingWomensFreestyle50M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case '8':
                                                        if (strcmp(&(json_string->getData()[24]), "00M") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_SwimmingWomensFreestyle800M;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[15]), "ndividualMedley200M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SwimmingWomensIndividualMedley200M;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'O':
                                            if (strcmp(&(json_string->getData()[15]), "penWater10KM") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SwimmingWomensOpenWater10KM;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            if (strcmp(&(json_string->getData()[15]), "ndividualMedley400M") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SwimmingWomensindividualMedley400M;
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
                case 'y':
                    if (strncmp(&(json_string->getData()[2]), "nchronizedSwimmingWomens", 24) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[26]))
                          {
                            case 'D':
                                if (strcmp(&(json_string->getData()[27]), "uet") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SynchronizedSwimmingWomensDuet;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'S':
                                if (strcmp(&(json_string->getData()[27]), "olo") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SynchronizedSwimmingWomensSolo;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[27]), "eam") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SynchronizedSwimmingWomensTeam;
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
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'b':
                            if (strncmp(&(json_string->getData()[3]), "leTennis", 8) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[11]))
                                  {
                                    case 'M':
                                        if (strncmp(&(json_string->getData()[12]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[15]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[16]), "ingles") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TableTennisMensSingles;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(json_string->getData()[16]), "eam") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TableTennisMensTeam;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(json_string->getData()[12]), "omens", 5) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[17]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[18]), "ingles") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TableTennisWomensSingles;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(json_string->getData()[18]), "eam") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TableTennisWomensTeam;
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
                        case 'e':
                            if (strncmp(&(json_string->getData()[3]), "kwondo", 6) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[9]))
                                  {
                                    case 'M':
                                        if (strncmp(&(json_string->getData()[10]), "ens", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[13]))
                                              {
                                                case 'F':
                                                    switch ((unsigned char)(json_string->getData()[14]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(json_string->getData()[15]), "atherweight") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_TaekwondoMensFeatherweight;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'l':
                                                            if (strcmp(&(json_string->getData()[15]), "yweight") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_TaekwondoMensFlyweight;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'H':
                                                    if (strcmp(&(json_string->getData()[14]), "eavyweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TaekwondoMensHeavyweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(json_string->getData()[14]), "elterweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TaekwondoMensWelterweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(json_string->getData()[10]), "omens", 5) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[15]))
                                              {
                                                case 'F':
                                                    switch ((unsigned char)(json_string->getData()[16]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(json_string->getData()[17]), "atherweight") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_TaekwondoWomensFeatherweight;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'l':
                                                            if (strcmp(&(json_string->getData()[17]), "yweight") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_TaekwondoWomensFlyweight;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'H':
                                                    if (strcmp(&(json_string->getData()[16]), "eavyweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TaekwondoWomensHeavyweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(json_string->getData()[16]), "elterweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TaekwondoWomensWelterweight;
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
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "nnis", 4) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[6]))
                          {
                            case 'M':
                                switch ((unsigned char)(json_string->getData()[7]))
                                  {
                                    case 'e':
                                        if (strncmp(&(json_string->getData()[8]), "ns", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[10]))
                                              {
                                                case 'D':
                                                    if (strcmp(&(json_string->getData()[11]), "oubles") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TennisMensDoubles;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[11]), "ingles") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_TennisMensSingles;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[8]), "xedDoubles") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_TennisMixedDoubles;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[7]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[12]))
                                      {
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[13]), "oubles") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_TennisWomensDoubles;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[13]), "ingles") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_TennisWomensSingles;
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
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "iathlon", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'M':
                                if (strcmp(&(json_string->getData()[10]), "ensIndividual") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TriathlonMensIndividual;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[10]), "omensIndividual") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TriathlonWomensIndividual;
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
        case 'V':
            if (strncmp(&(json_string->getData()[1]), "olleyball", 9) == 0)
              {
                switch ((unsigned char)(json_string->getData()[10]))
                  {
                    case 'M':
                        if (strncmp(&(json_string->getData()[11]), "ens", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[14]))
                              {
                                case 'B':
                                    if (strcmp(&(json_string->getData()[15]), "each") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_VolleyballMensBeach;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'I':
                                    if (strcmp(&(json_string->getData()[15]), "ndoor") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_VolleyballMensIndoor;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'W':
                        if (strncmp(&(json_string->getData()[11]), "omens", 5) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[16]))
                              {
                                case 'B':
                                    if (strcmp(&(json_string->getData()[17]), "each") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_VolleyballWomensBeach;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'I':
                                    if (strcmp(&(json_string->getData()[17]), "ndoor") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_VolleyballWomensIndoor;
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
        case 'W':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strncmp(&(json_string->getData()[2]), "terPolo", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'M':
                                if (strcmp(&(json_string->getData()[10]), "ens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_WaterPoloMens;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[10]), "omens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_WaterPoloWomens;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "ightlifting", 11) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[13]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[14]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[17]))
                                      {
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[18]), "antamweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WeightliftingMensBantamweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'F':
                                            switch ((unsigned char)(json_string->getData()[18]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[19]), "atherweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_WeightliftingMensFeatherweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[19]), "rstHeavyweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_WeightliftingMensFirstHeavyweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[19]), "yweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_WeightliftingMensFlyweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[18]), "eavyweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WeightliftingMensHeavyweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strncmp(&(json_string->getData()[18]), "ight", 4) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[22]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[23]), "eavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WeightliftingMensLightHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'w':
                                                        if (strcmp(&(json_string->getData()[23]), "eight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WeightliftingMensLightweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strncmp(&(json_string->getData()[18]), "iddle", 5) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[23]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[24]), "eavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WeightliftingMensMiddleHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'w':
                                                        if (strcmp(&(json_string->getData()[24]), "eight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WeightliftingMensMiddleweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[18]), "uperHeavyweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WeightliftingMensSuperHeavyweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[14]), "omens", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[19]))
                                      {
                                        case 'F':
                                            switch ((unsigned char)(json_string->getData()[20]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[21]), "atherweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_WeightliftingWomensFeatherweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[21]), "yweight") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_WeightliftingWomensFlyweight;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[20]), "eavyweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WeightliftingWomensHeavyweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strncmp(&(json_string->getData()[20]), "ight", 4) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[24]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[25]), "eavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WeightliftingWomensLightHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'w':
                                                        if (strcmp(&(json_string->getData()[25]), "eight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WeightliftingWomensLightweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[20]), "iddleweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WeightliftingWomensMiddleweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[20]), "uperHeavyweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WeightliftingWomensSuperHeavyweight;
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
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "estling", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'M':
                                if (strncmp(&(json_string->getData()[10]), "ens", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 'F':
                                            if (strncmp(&(json_string->getData()[14]), "reestyle", 8) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[22]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(json_string->getData()[23]), "antamweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensFreestyleBantamweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        switch ((unsigned char)(json_string->getData()[23]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(json_string->getData()[24]), "atherweight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_WrestlingMensFreestyleFeatherweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'l':
                                                                if (strcmp(&(json_string->getData()[24]), "yweight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_WrestlingMensFreestyleFlyweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[23]), "eavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensFreestyleHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'L':
                                                        if (strncmp(&(json_string->getData()[23]), "ight", 4) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[27]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[28]), "lyweight") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_WrestlingMensFreestyleLightFlyweight;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'H':
                                                                    if (strcmp(&(json_string->getData()[28]), "eavyweight") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_WrestlingMensFreestyleLightHeavyweight;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'w':
                                                                    if (strcmp(&(json_string->getData()[28]), "eight") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_WrestlingMensFreestyleLightweight;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(json_string->getData()[23]), "iddleweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensFreestyleMiddleweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[23]), "uperHeavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensFreestyleSuperHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[23]), "elterweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensFreestyleWelterweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'G':
                                            if (strncmp(&(json_string->getData()[14]), "recoRoman", 9) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[23]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(json_string->getData()[24]), "antamweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensGrecoRomanBantamweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        switch ((unsigned char)(json_string->getData()[24]))
                                                          {
                                                            case 'e':
                                                                if (strcmp(&(json_string->getData()[25]), "atherweight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_WrestlingMensGrecoRomanFeatherweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'l':
                                                                if (strcmp(&(json_string->getData()[25]), "yweight") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Value_WrestlingMensGrecoRomanFlyweight;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[24]), "eavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensGrecoRomanHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'L':
                                                        if (strncmp(&(json_string->getData()[24]), "ight", 4) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[28]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[29]), "lyweight") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_WrestlingMensGrecoRomanLightFlyweight;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'H':
                                                                    if (strcmp(&(json_string->getData()[29]), "eavyweight") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_WrestlingMensGrecoRomanLightHeavyweight;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'w':
                                                                    if (strcmp(&(json_string->getData()[29]), "eight") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Value_WrestlingMensGrecoRomanLightweight;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'M':
                                                        if (strcmp(&(json_string->getData()[24]), "iddleweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensGrecoRomanMiddleweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(json_string->getData()[24]), "uperHeavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensGrecoRomanSuperHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(json_string->getData()[24]), "elterweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingMensGrecoRomanWelterweight;
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
                            case 'W':
                                if (strncmp(&(json_string->getData()[10]), "omensFreestyle", 14) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[24]))
                                      {
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[25]), "antamweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WrestlingWomensFreestyleBantamweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[25]), "lyweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WrestlingWomensFreestyleFlyweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[25]), "eavyweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WrestlingWomensFreestyleHeavyweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strncmp(&(json_string->getData()[25]), "ight", 4) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[29]))
                                                  {
                                                    case 'H':
                                                        if (strcmp(&(json_string->getData()[30]), "eavyweight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingWomensFreestyleLightHeavyweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'w':
                                                        if (strcmp(&(json_string->getData()[30]), "eight") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_WrestlingWomensFreestyleLightweight;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'M':
                                            if (strcmp(&(json_string->getData()[25]), "iddleweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WrestlingWomensFreestyleMiddleweight;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strcmp(&(json_string->getData()[25]), "elterweight") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_WrestlingWomensFreestyleWelterweight;
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

SportsOlympicsEventJSON::SportsOlympicsEventJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsEventJSON::SportsOlympicsEventJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsEventJSON::SportsOlympicsEventJSON(const char *init_value) :
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

SportsOlympicsEventJSON::SportsOlympicsEventJSON(std::string init_value) :
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

SportsOlympicsEventJSON::SportsOlympicsEventJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsEventJSON::~SportsOlympicsEventJSON(void)
  {
  }

bool SportsOlympicsEventJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsEventJSON::TypeValue SportsOlympicsEventJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsEventJSON::TypeValue SportsOlympicsEventJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsEventJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsEventJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsEventJSON *SportsOlympicsEventJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventJSON>, SportsOlympicsEventJSON *, bool> generator("Type SportsOlympicsEvent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
