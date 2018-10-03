/* file "SmallTalkInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SmallTalkInformationNuggetJSON.h"

#include "SmallTalkInformationNuggetJSON.h"


SmallTalkInformationNuggetJSON::TypeNormalizedQuery::TypeNormalizedQuery(void)
  {
  }

SmallTalkInformationNuggetJSON::TypeNormalizedQuery::TypeNormalizedQuery(const TypeNormalizedQuery &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SmallTalkInformationNuggetJSON::TypeNormalizedQuery::TypeNormalizedQuery(TypeNormalizedQueryKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SmallTalkInformationNuggetJSON::TypeNormalizedQuery::operator==(const TypeNormalizedQuery &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SmallTalkInformationNuggetJSON::TypeNormalizedQuery::operator!=(const TypeNormalizedQuery &other) const
  {
    return !(operator==(other));
  }

bool SmallTalkInformationNuggetJSON::TypeNormalizedQuery::operator<(const TypeNormalizedQuery &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SmallTalkInformationNuggetJSON::TypeNormalizedQuery::operator>(const TypeNormalizedQuery &other) const
  {
    return other.operator<(*this);
  }

bool SmallTalkInformationNuggetJSON::TypeNormalizedQuery::operator>=(const TypeNormalizedQuery &other) const
  {
    return !(operator<(other));
  }

bool SmallTalkInformationNuggetJSON::TypeNormalizedQuery::operator<=(const TypeNormalizedQuery &other) const
  {
    return !(other.operator<(*this));
  }

SmallTalkInformationNuggetJSON::TypeNormalizedQueryKnownValues SmallTalkInformationNuggetJSON::stringToNormalizedQuery(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'n':
                    if (strncmp(&(chars[2]), "y", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'K':
                                if (strncmp(&(chars[4]), "ids_", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[8]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[9]), "ormal") == 0)
                                                return NormalizedQuery_AnyKids_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[9]), "nformal") == 0)
                                                return NormalizedQuery_AnyKids_Informal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'P':
                                if (strncmp(&(chars[4]), "lans_", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[9]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[10]), "ormal") == 0)
                                                return NormalizedQuery_AnyPlans_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[10]), "nformal") == 0)
                                                return NormalizedQuery_AnyPlans_Informal;
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
                    if (strncmp(&(chars[2]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'W':
                                if (strcmp(&(chars[4]), "eFriends") == 0)
                                    return NormalizedQuery_AreWeFriends;
                                break;
                            case 'Y':
                                if (strncmp(&(chars[4]), "ou", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'A':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'M':
                                                    if (strcmp(&(chars[8]), "anOrAWoman") == 0)
                                                        return NormalizedQuery_AreYouAManOrAWoman;
                                                    break;
                                                case 'R':
                                                    if (strcmp(&(chars[8]), "ealPerson") == 0)
                                                        return NormalizedQuery_AreYouARealPerson;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'B':
                                            if (strcmp(&(chars[7]), "org") == 0)
                                                return NormalizedQuery_AreYouBorg;
                                            break;
                                        case 'F':
                                            if (strcmp(&(chars[7]), "eeling") == 0)
                                                return NormalizedQuery_AreYouFeeling;
                                            break;
                                        case 'G':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(chars[8]), "ados") == 0)
                                                        return NormalizedQuery_AreYouGlados;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[8]), "odLooking") == 0)
                                                        return NormalizedQuery_AreYouGoodLooking;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'H':
                                            if (strcmp(&(chars[7]), "al") == 0)
                                                return NormalizedQuery_AreYouHal;
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'i':
                                                    if (strcmp(&(chars[8]), "ngle") == 0)
                                                        return NormalizedQuery_AreYouSingle;
                                                    break;
                                                case 'k':
                                                    if (strcmp(&(chars[8]), "ynet") == 0)
                                                        return NormalizedQuery_AreYouSkynet;
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(chars[8]), "re") == 0)
                                                        return NormalizedQuery_AreYouSure;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strncmp(&(chars[7]), "he", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[9]))
                                                  {
                                                    case 'M':
                                                        if (strcmp(&(chars[10]), "atrix") == 0)
                                                            return NormalizedQuery_AreYouTheMatrix;
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(chars[10]), "e") == 0)
                                                            return NormalizedQuery_AreYouThere;
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
                case 's':
                    if (strcmp(&(chars[2]), "kAQuestion") == 0)
                        return NormalizedQuery_AskAQuestion;
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
                            if (strncmp(&(chars[3]), "Day_", 4) == 0)
                              {
                                switch ((unsigned char)(chars[7]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[8]), "ormal") == 0)
                                            return NormalizedQuery_BadDay_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[8]), "nformal") == 0)
                                            return NormalizedQuery_BadDay_Informal;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "kLikeADog") == 0)
                                return NormalizedQuery_BarkLikeADog;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'T':
                            if (strncmp(&(chars[3]), "hatWay_", 7) == 0)
                              {
                                switch ((unsigned char)(chars[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[11]), "ormal") == 0)
                                            return NormalizedQuery_BeThatWay_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[11]), "nformal") == 0)
                                            return NormalizedQuery_BeThatWay_Informal;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'a':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'm':
                                    if (strcmp(&(chars[4]), "MeUp") == 0)
                                        return NormalizedQuery_BeamMeUp;
                                    break;
                                case 't':
                                    if (strcmp(&(chars[4]), "box") == 0)
                                        return NormalizedQuery_Beatbox;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 's':
                            if (strncmp(&(chars[3]), "tFriend_", 8) == 0)
                              {
                                switch ((unsigned char)(chars[11]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[12]), "ormal") == 0)
                                            return NormalizedQuery_BestFriend_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[12]), "nformal") == 0)
                                            return NormalizedQuery_BestFriend_Informal;
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
                case 'l':
                    if (strcmp(&(chars[2]), "essYourHeart") == 0)
                        return NormalizedQuery_BlessYourHeart;
                    break;
                case 'o':
                    if (strncmp(&(chars[2]), "xersOrBriefs_", 13) == 0)
                      {
                        switch ((unsigned char)(chars[15]))
                          {
                            case 'F':
                                if (strcmp(&(chars[16]), "ormal") == 0)
                                    return NormalizedQuery_BoxersOrBriefs_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[16]), "nformal") == 0)
                                    return NormalizedQuery_BoxersOrBriefs_Informal;
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
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'n':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'Y':
                                    if (strncmp(&(chars[4]), "ou", 2) == 0)
                                      {
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'D':
                                                if (strcmp(&(chars[7]), "oTricks") == 0)
                                                    return NormalizedQuery_CanYouDoTricks;
                                                break;
                                            case 'H':
                                                if (strcmp(&(chars[7]), "earMe") == 0)
                                                    return NormalizedQuery_CanYouHearMe;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'c':
                                    if (strcmp(&(chars[4]), "el") == 0)
                                        return NormalizedQuery_Cancel;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strncmp(&(chars[3]), "chGame_", 7) == 0)
                              {
                                switch ((unsigned char)(chars[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[11]), "ormal") == 0)
                                            return NormalizedQuery_CatchGame_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[11]), "nformal") == 0)
                                            return NormalizedQuery_CatchGame_Informal;
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
                case 'h':
                    if (strcmp(&(chars[2]), "ickenCrossRoad") == 0)
                        return NormalizedQuery_ChickenCrossRoad;
                    break;
                case 'o':
                    if (strncmp(&(chars[2]), "mpliment_", 9) == 0)
                      {
                        switch ((unsigned char)(chars[11]))
                          {
                            case 'F':
                                if (strcmp(&(chars[12]), "ormal") == 0)
                                    return NormalizedQuery_Compliment_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[12]), "nformal") == 0)
                                    return NormalizedQuery_Compliment_Informal;
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
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strncmp(&(chars[2]), "adBody_", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'F':
                                if (strcmp(&(chars[10]), "ormal") == 0)
                                    return NormalizedQuery_DeadBody_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[10]), "nformal") == 0)
                                    return NormalizedQuery_DeadBody_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'd':
                            if (strcmp(&(chars[3]), "YouFart") == 0)
                                return NormalizedQuery_DidYouFart;
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "tyJoke") == 0)
                                return NormalizedQuery_DirtyJoke;
                            break;
                        case 's':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'b':
                                    if (strncmp(&(chars[4]), "elief_", 6) == 0)
                                      {
                                        switch ((unsigned char)(chars[10]))
                                          {
                                            case 'F':
                                                if (strcmp(&(chars[11]), "ormal") == 0)
                                                    return NormalizedQuery_Disbelief_Formal;
                                                break;
                                            case 'I':
                                                if (strcmp(&(chars[11]), "nformal") == 0)
                                                    return NormalizedQuery_Disbelief_Informal;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'm':
                                    if (strcmp(&(chars[4]), "issal") == 0)
                                        return NormalizedQuery_Dismissal;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'Y':
                            if (strncmp(&(chars[3]), "ou", 2) == 0)
                              {
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'D':
                                        if (strcmp(&(chars[6]), "ream") == 0)
                                            return NormalizedQuery_DoYouDream;
                                        break;
                                    case 'G':
                                        if (strcmp(&(chars[6]), "iveAChuck") == 0)
                                            return NormalizedQuery_DoYouGiveAChuck;
                                        break;
                                    case 'L':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'i':
                                                if (strncmp(&(chars[7]), "ke", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[9]))
                                                      {
                                                        case 'F':
                                                            if (strcmp(&(chars[10]), "ood") == 0)
                                                                return NormalizedQuery_DoYouLikeFood;
                                                            break;
                                                        case 'H':
                                                            if (strcmp(&(chars[10]), "umans") == 0)
                                                                return NormalizedQuery_DoYouLikeHumans;
                                                            break;
                                                        case 'M':
                                                            if (strcmp(&(chars[10]), "yClothes") == 0)
                                                                return NormalizedQuery_DoYouLikeMyClothes;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'o':
                                                if (strncmp(&(chars[7]), "veMe_", 5) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[12]))
                                                      {
                                                        case 'F':
                                                            if (strcmp(&(chars[13]), "ormal") == 0)
                                                                return NormalizedQuery_DoYouLoveMe_Formal;
                                                            break;
                                                        case 'I':
                                                            if (strcmp(&(chars[13]), "nformal") == 0)
                                                                return NormalizedQuery_DoYouLoveMe_Informal;
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
                        case 'e':
                            if (strncmp(&(chars[3]), "s", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'H':
                                        if (strncmp(&(chars[5]), "eLoveMe_", 8) == 0)
                                          {
                                            switch ((unsigned char)(chars[13]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[14]), "ormal") == 0)
                                                        return NormalizedQuery_DoesHeLoveMe_Formal;
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(chars[14]), "nformal") == 0)
                                                        return NormalizedQuery_DoesHeLoveMe_Informal;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'S':
                                        if (strncmp(&(chars[5]), "heLoveMe_", 9) == 0)
                                          {
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[15]), "ormal") == 0)
                                                        return NormalizedQuery_DoesSheLoveMe_Formal;
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(chars[15]), "nformal") == 0)
                                                        return NormalizedQuery_DoesSheLoveMe_Informal;
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
                            if (strcmp(&(chars[3]), "glasAdams") == 0)
                                return NormalizedQuery_DouglasAdams;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'E':
            if (strncmp(&(chars[1]), "xcuseMe_", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 'F':
                        if (strcmp(&(chars[10]), "ormal") == 0)
                            return NormalizedQuery_ExcuseMe_Formal;
                        break;
                    case 'I':
                        if (strcmp(&(chars[10]), "nformal") == 0)
                            return NormalizedQuery_ExcuseMe_Informal;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'r':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'e':
                                    if (strncmp(&(chars[4]), "well_", 5) == 0)
                                      {
                                        switch ((unsigned char)(chars[9]))
                                          {
                                            case 'F':
                                                if (strcmp(&(chars[10]), "ormal") == 0)
                                                    return NormalizedQuery_Farewell_Formal;
                                                break;
                                            case 'I':
                                                if (strcmp(&(chars[10]), "nformal") == 0)
                                                    return NormalizedQuery_Farewell_Informal;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 't':
                                    if (chars[4] == 0)
                                        return NormalizedQuery_Fart;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(chars[3]), "hersDay") == 0)
                                return NormalizedQuery_FathersDay;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strncmp(&(chars[2]), "elBetter_", 9) == 0)
                      {
                        switch ((unsigned char)(chars[11]))
                          {
                            case 'F':
                                if (strcmp(&(chars[12]), "ormal") == 0)
                                    return NormalizedQuery_FeelBetter_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[12]), "nformal") == 0)
                                    return NormalizedQuery_FeelBetter_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "ipACoin") == 0)
                        return NormalizedQuery_FlipACoin;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "rceBeWithYou") == 0)
                        return NormalizedQuery_ForceBeWithYou;
                    break;
                default:
                    break;
              }
            break;
        case 'G':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strncmp(&(chars[2]), "od", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'B':
                                if (strncmp(&(chars[5]), "ooks_", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[11]), "ormal") == 0)
                                                return NormalizedQuery_GoodBooks_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[11]), "nformal") == 0)
                                                return NormalizedQuery_GoodBooks_Informal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strncmp(&(chars[5]), "ovies_", 6) == 0)
                                  {
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[12]), "ormal") == 0)
                                                return NormalizedQuery_GoodMovies_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[12]), "nformal") == 0)
                                                return NormalizedQuery_GoodMovies_Informal;
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
                    if (strncmp(&(chars[2]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'a':
                                if (strcmp(&(chars[4]), "tToSeeYou") == 0)
                                    return NormalizedQuery_GreatToSeeYou;
                                break;
                            case 'e':
                                if (strncmp(&(chars[4]), "tings", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[9]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[10]), "lexaAndQuery") == 0)
                                                return NormalizedQuery_GreetingsAlexaAndQuery;
                                            break;
                                        case 'C':
                                            if (strncmp(&(chars[10]), "o", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[11]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[12]), "petitor") == 0)
                                                            return NormalizedQuery_GreetingsCompetitor;
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(chars[12]), "tanaAndQuery") == 0)
                                                            return NormalizedQuery_GreetingsCortanaAndQuery;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'G':
                                            if (strcmp(&(chars[10]), "alaxyAndQuery") == 0)
                                                return NormalizedQuery_GreetingsGalaxyAndQuery;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[10]), "iriAndQuery") == 0)
                                                return NormalizedQuery_GreetingsSiriAndQuery;
                                            break;
                                        case '_':
                                            switch ((unsigned char)(chars[10]))
                                              {
                                                case 'E':
                                                    if (strcmp(&(chars[11]), "vening") == 0)
                                                        return NormalizedQuery_Greetings_Evening;
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(chars[11]), "ormal") == 0)
                                                        return NormalizedQuery_Greetings_Formal;
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(chars[11]), "nformal") == 0)
                                                        return NormalizedQuery_Greetings_Informal;
                                                    break;
                                                case 'M':
                                                    if (strcmp(&(chars[11]), "orning") == 0)
                                                        return NormalizedQuery_Greetings_Morning;
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
        case 'H':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ppyBirthday") == 0)
                        return NormalizedQuery_HappyBirthday;
                    break;
                case 'o':
                    if (strncmp(&(chars[2]), "w", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'A':
                                if (strcmp(&(chars[4]), "reKids") == 0)
                                    return NormalizedQuery_HowAreKids;
                                break;
                            case 'D':
                                if (strncmp(&(chars[4]), "oI", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'G':
                                            if (strcmp(&(chars[7]), "etAGirlfriend") == 0)
                                                return NormalizedQuery_HowDoIGetAGirlfriend;
                                            break;
                                        case 'L':
                                            if (strcmp(&(chars[7]), "andAirplane") == 0)
                                                return NormalizedQuery_HowDoILandAirplane;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[7]), "topZombie") == 0)
                                                return NormalizedQuery_HowDoIStopZombie;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'F':
                                if (strncmp(&(chars[4]), "amily_", 6) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[11]), "ormal") == 0)
                                                return NormalizedQuery_HowFamily_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[11]), "nformal") == 0)
                                                return NormalizedQuery_HowFamily_Informal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'G':
                                if (strncmp(&(chars[4]), "oing_", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[9]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[10]), "ormal") == 0)
                                                return NormalizedQuery_HowGoing_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[10]), "nformal") == 0)
                                                return NormalizedQuery_HowGoing_Informal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'I':
                                if (strncmp(&(chars[4]), "s", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[5]))
                                      {
                                        case 'H':
                                            if (strcmp(&(chars[6]), "usband") == 0)
                                                return NormalizedQuery_HowIsHusband;
                                            break;
                                        case 'W':
                                            if (strcmp(&(chars[6]), "ife") == 0)
                                                return NormalizedQuery_HowIsWife;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strncmp(&(chars[4]), "anyChucks_", 10) == 0)
                                  {
                                    switch ((unsigned char)(chars[14]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[15]), "ormal") == 0)
                                                return NormalizedQuery_HowManyChucks_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[15]), "nformal") == 0)
                                                return NormalizedQuery_HowManyChucks_Informal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'O':
                                if (strncmp(&(chars[4]), "ld_", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[7]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[8]), "ormal") == 0)
                                                return NormalizedQuery_HowOld_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[8]), "nformal") == 0)
                                                return NormalizedQuery_HowOld_Informal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(chars[4]), "oGetRich") == 0)
                                    return NormalizedQuery_HowToGetRich;
                                break;
                            case 'W':
                                if (strncmp(&(chars[4]), "asWeekend_", 10) == 0)
                                  {
                                    switch ((unsigned char)(chars[14]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[15]), "ormal") == 0)
                                                return NormalizedQuery_HowWasWeekend_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[15]), "nformal") == 0)
                                                return NormalizedQuery_HowWasWeekend_Informal;
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
        case 'I':
            switch ((unsigned char)(chars[1]))
              {
                case 'A':
                    if (strncmp(&(chars[2]), "mYour", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'F':
                                if (strcmp(&(chars[8]), "ather") == 0)
                                    return NormalizedQuery_IAmYourFather;
                                break;
                            case 'M':
                                if (strcmp(&(chars[8]), "other") == 0)
                                    return NormalizedQuery_IAmYourMother;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'f':
                    if (strncmp(&(chars[2]), "ATreeFalls_", 11) == 0)
                      {
                        switch ((unsigned char)(chars[13]))
                          {
                            case 'F':
                                if (strcmp(&(chars[14]), "ormal") == 0)
                                    return NormalizedQuery_IfATreeFalls_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[14]), "nformal") == 0)
                                    return NormalizedQuery_IfATreeFalls_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'n':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'c':
                            if (strcmp(&(chars[3]), "onceivable") == 0)
                                return NormalizedQuery_Inconceivable;
                            break;
                        case 's':
                            if (strncmp(&(chars[3]), "ult_", 4) == 0)
                              {
                                switch ((unsigned char)(chars[7]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[8]), "ormal") == 0)
                                            return NormalizedQuery_Insult_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[8]), "nformal") == 0)
                                            return NormalizedQuery_Insult_Informal;
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
                case 's':
                    if (strcmp(&(chars[2]), "aacAsimovMultivac") == 0)
                        return NormalizedQuery_IsaacAsimovMultivac;
                    break;
                case 't':
                    if (strcmp(&(chars[2]), "sMyBirthday") == 0)
                        return NormalizedQuery_ItsMyBirthday;
                    break;
                default:
                    break;
              }
            break;
        case 'J':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strncmp(&(chars[2]), "kes_", 4) == 0)
                      {
                        switch ((unsigned char)(chars[6]))
                          {
                            case 'F':
                                if (strcmp(&(chars[7]), "ormal") == 0)
                                    return NormalizedQuery_Jokes_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[7]), "nformal") == 0)
                                    return NormalizedQuery_Jokes_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "stKidding") == 0)
                        return NormalizedQuery_JustKidding;
                    break;
                default:
                    break;
              }
            break;
        case 'K':
            if (strncmp(&(chars[1]), "nockKnock_", 10) == 0)
              {
                switch ((unsigned char)(chars[11]))
                  {
                    case 'E':
                        if (strcmp(&(chars[12]), "xitMode") == 0)
                            return NormalizedQuery_KnockKnock_ExitMode;
                        break;
                    case 'F':
                        if (strcmp(&(chars[12]), "ormal") == 0)
                            return NormalizedQuery_KnockKnock_Formal;
                        break;
                    case 'I':
                        if (strcmp(&(chars[12]), "nformal") == 0)
                            return NormalizedQuery_KnockKnock_Informal;
                        break;
                    case 'N':
                        if (strncmp(&(chars[12]), "ame_", 4) == 0)
                          {
                            switch ((unsigned char)(chars[16]))
                              {
                                case 'B':
                                    if (strcmp(&(chars[17]), "rokenPencil") == 0)
                                        return NormalizedQuery_KnockKnock_Name_BrokenPencil;
                                    break;
                                case 'D':
                                    if (strcmp(&(chars[17]), "oris") == 0)
                                        return NormalizedQuery_KnockKnock_Name_Doris;
                                    break;
                                case 'T':
                                    switch ((unsigned char)(chars[17]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[18]), "nk") == 0)
                                                return NormalizedQuery_KnockKnock_Name_Tank;
                                            break;
                                        case 'o':
                                            if (chars[18] == 0)
                                                return NormalizedQuery_KnockKnock_Name_To;
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
                    case 'P':
                        if (strncmp(&(chars[12]), "unchline_", 9) == 0)
                          {
                            switch ((unsigned char)(chars[21]))
                              {
                                case 'B':
                                    if (strcmp(&(chars[22]), "rokenPencil") == 0)
                                        return NormalizedQuery_KnockKnock_Punchline_BrokenPencil;
                                    break;
                                case 'D':
                                    if (strcmp(&(chars[22]), "oris") == 0)
                                        return NormalizedQuery_KnockKnock_Punchline_Doris;
                                    break;
                                case 'T':
                                    switch ((unsigned char)(chars[22]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[23]), "nk") == 0)
                                                return NormalizedQuery_KnockKnock_Punchline_Tank;
                                            break;
                                        case 'o':
                                            if (chars[23] == 0)
                                                return NormalizedQuery_KnockKnock_Punchline_To;
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
                    case 'U':
                        if (strcmp(&(chars[12]), "serPunchline") == 0)
                            return NormalizedQuery_KnockKnock_UserPunchline;
                        break;
                    case 'W':
                        if (strcmp(&(chars[12]), "hosThere") == 0)
                            return NormalizedQuery_KnockKnock_WhosThere;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strncmp(&(chars[2]), "keYou_", 6) == 0)
                      {
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'F':
                                if (strcmp(&(chars[9]), "ormal") == 0)
                                    return NormalizedQuery_LikeYou_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[9]), "nformal") == 0)
                                    return NormalizedQuery_LikeYou_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'o':
                            if (strncmp(&(chars[3]), "k", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'B':
                                        if (strncmp(&(chars[5]), "uffed_", 6) == 0)
                                          {
                                            switch ((unsigned char)(chars[11]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[12]), "ormal") == 0)
                                                        return NormalizedQuery_LookBuffed_Formal;
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(chars[12]), "nformal") == 0)
                                                        return NormalizedQuery_LookBuffed_Informal;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'L':
                                        if (strncmp(&(chars[5]), "ike_", 4) == 0)
                                          {
                                            switch ((unsigned char)(chars[9]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[10]), "ormal") == 0)
                                                        return NormalizedQuery_LookLike_Formal;
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(chars[10]), "nformal") == 0)
                                                        return NormalizedQuery_LookLike_Informal;
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
                            if (strncmp(&(chars[3]), "tWeight_", 8) == 0)
                              {
                                switch ((unsigned char)(chars[11]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[12]), "ormal") == 0)
                                            return NormalizedQuery_LostWeight_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[12]), "nformal") == 0)
                                            return NormalizedQuery_LostWeight_Informal;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'v':
                            if (strncmp(&(chars[3]), "eYou_", 5) == 0)
                              {
                                switch ((unsigned char)(chars[8]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[9]), "ormal") == 0)
                                            return NormalizedQuery_LoveYou_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[9]), "nformal") == 0)
                                            return NormalizedQuery_LoveYou_Informal;
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
        case 'M':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'k':
                            if (strcmp(&(chars[3]), "eMeASandwich") == 0)
                                return NormalizedQuery_MakeMeASandwich;
                            break;
                        case 'r':
                            if (strncmp(&(chars[3]), "ryMe_", 5) == 0)
                              {
                                switch ((unsigned char)(chars[8]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[9]), "ormal") == 0)
                                            return NormalizedQuery_MarryMe_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[9]), "nformal") == 0)
                                            return NormalizedQuery_MarryMe_Informal;
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
                    if (strncmp(&(chars[2]), "aningOfLife_", 12) == 0)
                      {
                        switch ((unsigned char)(chars[14]))
                          {
                            case 'F':
                                if (strcmp(&(chars[15]), "ormal") == 0)
                                    return NormalizedQuery_MeaningOfLife_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[15]), "nformal") == 0)
                                    return NormalizedQuery_MeaningOfLife_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'n':
                            if (strncmp(&(chars[3]), "tyPython", 8) == 0)
                              {
                                switch ((unsigned char)(chars[11]))
                                  {
                                    case 'K':
                                        if (strcmp(&(chars[12]), "nowAboutSwallows") == 0)
                                            return NormalizedQuery_MontyPythonKnowAboutSwallows;
                                        break;
                                    case 'Q':
                                        if (strcmp(&(chars[12]), "uest") == 0)
                                            return NormalizedQuery_MontyPythonQuest;
                                        break;
                                    case 'U':
                                        if (strcmp(&(chars[12]), "nladenSwallow") == 0)
                                            return NormalizedQuery_MontyPythonUnladenSwallow;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 't':
                            if (strcmp(&(chars[3]), "hersDay") == 0)
                                return NormalizedQuery_MothersDay;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strncmp(&(chars[2]), "ce", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'J':
                                if (strcmp(&(chars[5]), "oke") == 0)
                                    return NormalizedQuery_NiceJoke;
                                break;
                            case 'T':
                                if (strcmp(&(chars[5]), "oMeetYou") == 0)
                                    return NormalizedQuery_NiceToMeetYou;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 0:
                            return NormalizedQuery_No;
                        case 't':
                            if (strcmp(&(chars[3]), "Average") == 0)
                                return NormalizedQuery_NotAverage;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'O':
            switch ((unsigned char)(chars[1]))
              {
                case 'n':
                    if (strncmp(&(chars[2]), "eHandClapping_", 14) == 0)
                      {
                        switch ((unsigned char)(chars[16]))
                          {
                            case 'F':
                                if (strcmp(&(chars[17]), "ormal") == 0)
                                    return NormalizedQuery_OneHandClapping_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[17]), "nformal") == 0)
                                    return NormalizedQuery_OneHandClapping_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'p':
                    if (strcmp(&(chars[2]), "enPodBay") == 0)
                        return NormalizedQuery_OpenPodBay;
                    break;
                default:
                    break;
              }
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'a':
                            if (strcmp(&(chars[3]), "ce") == 0)
                                return NormalizedQuery_Peace;
                            break;
                        case 'n':
                            if (strncmp(&(chars[3]), "nyThoughts_", 11) == 0)
                              {
                                switch ((unsigned char)(chars[14]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[15]), "ormal") == 0)
                                            return NormalizedQuery_PennyThoughts_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[15]), "nformal") == 0)
                                            return NormalizedQuery_PennyThoughts_Informal;
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
                    if (strncmp(&(chars[2]), "s", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'i':
                                if (strncmp(&(chars[4]), "tive_", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[9]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[10]), "ormal") == 0)
                                                return NormalizedQuery_Positive_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[10]), "nformal") == 0)
                                                return NormalizedQuery_Positive_Informal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 't':
                                if (strcmp(&(chars[4]), "Question") == 0)
                                    return NormalizedQuery_PostQuestion;
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
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "p") == 0)
                        return NormalizedQuery_Rap;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "manticQuote") == 0)
                        return NormalizedQuery_RomanticQuote;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "yMyName") == 0)
                        return NormalizedQuery_SayMyName;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "lfDestruct") == 0)
                        return NormalizedQuery_SelfDestruct;
                    break;
                case 'h':
                    if (strncmp(&(chars[2]), "utUp_", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'F':
                                if (strcmp(&(chars[8]), "ormal") == 0)
                                    return NormalizedQuery_ShutUp_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[8]), "nformal") == 0)
                                    return NormalizedQuery_ShutUp_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "ng") == 0)
                        return NormalizedQuery_Sing;
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "ackStadium") == 0)
                        return NormalizedQuery_SnackStadium;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "methingIDontKnow") == 0)
                        return NormalizedQuery_SomethingIDontKnow;
                    break;
                case 'p':
                    if (strncmp(&(chars[2]), "areTime_", 8) == 0)
                      {
                        switch ((unsigned char)(chars[10]))
                          {
                            case 'F':
                                if (strcmp(&(chars[11]), "ormal") == 0)
                                    return NormalizedQuery_SpareTime_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[11]), "nformal") == 0)
                                    return NormalizedQuery_SpareTime_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 't':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'a':
                            if (strncmp(&(chars[3]), "rWars", 5) == 0)
                              {
                                switch ((unsigned char)(chars[8]))
                                  {
                                    case 'D':
                                        if (strcmp(&(chars[9]), "roids") == 0)
                                            return NormalizedQuery_StarWarsDroids;
                                        break;
                                    case 'F':
                                        if (strcmp(&(chars[9]), "orce") == 0)
                                            return NormalizedQuery_StarWarsForce;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strncmp(&(chars[3]), "ryTime_", 7) == 0)
                              {
                                switch ((unsigned char)(chars[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[11]), "ormal") == 0)
                                            return NormalizedQuery_StoryTime_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[11]), "nformal") == 0)
                                            return NormalizedQuery_StoryTime_Informal;
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
                case 'u':
                    if (strcmp(&(chars[2]), "doMakeMeASandwich") == 0)
                        return NormalizedQuery_SudoMakeMeASandwich;
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
                        case 'k':
                            if (strcmp(&(chars[3]), "eOverWorld") == 0)
                                return NormalizedQuery_TakeOverWorld;
                            break;
                        case 'l':
                            if (strncmp(&(chars[3]), "kDirty_", 7) == 0)
                              {
                                switch ((unsigned char)(chars[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[11]), "ormal") == 0)
                                            return NormalizedQuery_TalkDirty_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[11]), "nformal") == 0)
                                            return NormalizedQuery_TalkDirty_Informal;
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
                    if (strcmp(&(chars[2]), "sting") == 0)
                        return NormalizedQuery_Testing;
                    break;
                case 'h':
                    if (strncmp(&(chars[2]), "ankYou_", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'F':
                                if (strcmp(&(chars[10]), "ormal") == 0)
                                    return NormalizedQuery_ThankYou_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[10]), "nformal") == 0)
                                    return NormalizedQuery_ThankYou_Informal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'm':
                            if (strncmp(&(chars[3]), "eFlies_", 7) == 0)
                              {
                                switch ((unsigned char)(chars[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[11]), "ormal") == 0)
                                            return NormalizedQuery_TimeFlies_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[11]), "nformal") == 0)
                                            return NormalizedQuery_TimeFlies_Informal;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strncmp(&(chars[3]), "ed_", 3) == 0)
                              {
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'F':
                                        if (strcmp(&(chars[7]), "ormal") == 0)
                                            return NormalizedQuery_Tired_Formal;
                                        break;
                                    case 'I':
                                        if (strcmp(&(chars[7]), "nformal") == 0)
                                            return NormalizedQuery_Tired_Informal;
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
                    if (strcmp(&(chars[2]), "ngueTwister") == 0)
                        return NormalizedQuery_TongueTwister;
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ntToDateMe") == 0)
                        return NormalizedQuery_WantToDateMe;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "lcome") == 0)
                        return NormalizedQuery_Welcome;
                    break;
                case 'h':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'a':
                            if (strncmp(&(chars[3]), "t", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'A':
                                        if (strcmp(&(chars[5]), "reYourInterests") == 0)
                                            return NormalizedQuery_WhatAreYourInterests;
                                        break;
                                    case 'C':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'h':
                                                if (strcmp(&(chars[6]), "ineseZodiac") == 0)
                                                    return NormalizedQuery_WhatChineseZodiac;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "lorAreYou") == 0)
                                                    return NormalizedQuery_WhatColorAreYou;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'D':
                                        if (strncmp(&(chars[5]), "oesThe", 6) == 0)
                                          {
                                            switch ((unsigned char)(chars[11]))
                                              {
                                                case 'C':
                                                    if (strcmp(&(chars[12]), "atSay") == 0)
                                                        return NormalizedQuery_WhatDoesTheCatSay;
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(chars[12]), "oxSay") == 0)
                                                        return NormalizedQuery_WhatDoesTheFoxSay;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'I':
                                        if (strncmp(&(chars[5]), "sMy", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[8]))
                                              {
                                                case 'B':
                                                    if (strcmp(&(chars[9]), "irthDay_Informal") == 0)
                                                        return NormalizedQuery_WhatIsMyBirthDay_Informal;
                                                    break;
                                                case 'N':
                                                    if (strcmp(&(chars[9]), "ame_Informal") == 0)
                                                        return NormalizedQuery_WhatIsMyName_Informal;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'M':
                                        if (strcmp(&(chars[5]), "usicDoYouLike") == 0)
                                            return NormalizedQuery_WhatMusicDoYouLike;
                                        break;
                                    case 'S':
                                        if (strncmp(&(chars[5]), "houldIDo_", 9) == 0)
                                          {
                                            switch ((unsigned char)(chars[14]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[15]), "ormal") == 0)
                                                        return NormalizedQuery_WhatShouldIDo_Formal;
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(chars[15]), "nformal") == 0)
                                                        return NormalizedQuery_WhatShouldIDo_Informal;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'T':
                                        if (strncmp(&(chars[5]), "o", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[6]))
                                              {
                                                case 'E':
                                                    if (strncmp(&(chars[7]), "at_", 3) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[10]))
                                                          {
                                                            case 'F':
                                                                if (strcmp(&(chars[11]), "ormal") == 0)
                                                                    return NormalizedQuery_WhatToEat_Formal;
                                                                break;
                                                            case 'I':
                                                                if (strcmp(&(chars[11]), "nformal") == 0)
                                                                    return NormalizedQuery_WhatToEat_Informal;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(chars[7]), "ay") == 0)
                                                        return NormalizedQuery_WhatToSay;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(chars[5]), "earing_", 7) == 0)
                                          {
                                            switch ((unsigned char)(chars[12]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(chars[13]), "ormal") == 0)
                                                        return NormalizedQuery_WhatWearing_Formal;
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(chars[13]), "nformal") == 0)
                                                        return NormalizedQuery_WhatWearing_Informal;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'F':
                                                if (strncmp(&(chars[6]), "avorite", 7) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[13]))
                                                      {
                                                        case 'A':
                                                            if (strcmp(&(chars[14]), "nimal") == 0)
                                                                return NormalizedQuery_WhatsFavoriteAnimal;
                                                            break;
                                                        case 'C':
                                                            if (strcmp(&(chars[14]), "olor") == 0)
                                                                return NormalizedQuery_WhatsFavoriteColor;
                                                            break;
                                                        case 'F':
                                                            if (strcmp(&(chars[14]), "ood") == 0)
                                                                return NormalizedQuery_WhatsFavoriteFood;
                                                            break;
                                                        case 'M':
                                                            if (strcmp(&(chars[14]), "ovie") == 0)
                                                                return NormalizedQuery_WhatsFavoriteMovie;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'I':
                                                if (strcmp(&(chars[6]), "nAName") == 0)
                                                    return NormalizedQuery_WhatsInAName;
                                                break;
                                            case 'U':
                                                if (strncmp(&(chars[6]), "p", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[7]))
                                                      {
                                                        case 'D':
                                                            if (strcmp(&(chars[8]), "oc") == 0)
                                                                return NormalizedQuery_WhatsUpDoc;
                                                            break;
                                                        case '_':
                                                            switch ((unsigned char)(chars[8]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(chars[9]), "ormal") == 0)
                                                                        return NormalizedQuery_WhatsUp_Formal;
                                                                    break;
                                                                case 'I':
                                                                    if (strcmp(&(chars[9]), "nformal") == 0)
                                                                        return NormalizedQuery_WhatsUp_Informal;
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
                                            case 'Y':
                                                if (strncmp(&(chars[6]), "our", 3) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[9]))
                                                      {
                                                        case 'A':
                                                            if (strncmp(&(chars[10]), "ge_", 3) == 0)
                                                              {
                                                                switch ((unsigned char)(chars[13]))
                                                                  {
                                                                    case 'F':
                                                                        if (strcmp(&(chars[14]), "ormal") == 0)
                                                                            return NormalizedQuery_WhatsYourAge_Formal;
                                                                        break;
                                                                    case 'I':
                                                                        if (strcmp(&(chars[14]), "nformal") == 0)
                                                                            return NormalizedQuery_WhatsYourAge_Informal;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                              }
                                                            break;
                                                        case 'S':
                                                            if (strcmp(&(chars[10]), "ign") == 0)
                                                                return NormalizedQuery_WhatsYourSign;
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
                        case 'e':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'n':
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 'B':
                                            if (strncmp(&(chars[5]), "orn_", 4) == 0)
                                              {
                                                switch ((unsigned char)(chars[9]))
                                                  {
                                                    case 'F':
                                                        if (strcmp(&(chars[10]), "ormal") == 0)
                                                            return NormalizedQuery_WhenBorn_Formal;
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(chars[10]), "nformal") == 0)
                                                            return NormalizedQuery_WhenBorn_Informal;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[5]), "sYourBirthDay_Informal") == 0)
                                                return NormalizedQuery_WhenIsYourBirthDay_Informal;
                                            break;
                                        case 'W':
                                            if (strcmp(&(chars[5]), "illWorldEnd") == 0)
                                                return NormalizedQuery_WhenWillWorldEnd;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'r':
                                    if (strncmp(&(chars[4]), "e", 1) == 0)
                                      {
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'A':
                                                if (strcmp(&(chars[6]), "reYou") == 0)
                                                    return NormalizedQuery_WhereAreYou;
                                                break;
                                            case 'D':
                                                if (strcmp(&(chars[6]), "oYouLive") == 0)
                                                    return NormalizedQuery_WhereDoYouLive;
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
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'A':
                                    if (strcmp(&(chars[4]), "mI") == 0)
                                        return NormalizedQuery_WhoAmI;
                                    break;
                                case 's':
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 'O':
                                            if (strncmp(&(chars[5]), "nFirst_", 7) == 0)
                                              {
                                                switch ((unsigned char)(chars[12]))
                                                  {
                                                    case 'F':
                                                        if (strcmp(&(chars[13]), "ormal") == 0)
                                                            return NormalizedQuery_WhosOnFirst_Formal;
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(chars[13]), "nformal") == 0)
                                                            return NormalizedQuery_WhosOnFirst_Informal;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'Y':
                                            if (strncmp(&(chars[5]), "ourDaddy_", 9) == 0)
                                              {
                                                switch ((unsigned char)(chars[14]))
                                                  {
                                                    case 'F':
                                                        if (strcmp(&(chars[15]), "ormal") == 0)
                                                            return NormalizedQuery_WhosYourDaddy_Formal;
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(chars[15]), "nformal") == 0)
                                                            return NormalizedQuery_WhosYourDaddy_Informal;
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
                        case 'y':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'F':
                                    if (strcmp(&(chars[4]), "iretruckRed") == 0)
                                        return NormalizedQuery_WhyFiretruckRed;
                                    break;
                                case 'S':
                                    if (strncmp(&(chars[4]), "oBad_", 5) == 0)
                                      {
                                        switch ((unsigned char)(chars[9]))
                                          {
                                            case 'F':
                                                if (strcmp(&(chars[10]), "ormal") == 0)
                                                    return NormalizedQuery_WhySoBad_Formal;
                                                break;
                                            case 'I':
                                                if (strcmp(&(chars[10]), "nformal") == 0)
                                                    return NormalizedQuery_WhySoBad_Informal;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case '_':
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 'F':
                                            if (strcmp(&(chars[5]), "ormal") == 0)
                                                return NormalizedQuery_Why_Formal;
                                            break;
                                        case 'I':
                                            if (strcmp(&(chars[5]), "nformal") == 0)
                                                return NormalizedQuery_Why_Informal;
                                            break;
                                        default:
                                            break;
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
                case 'o':
                    if (strncmp(&(chars[2]), "rkingHard_", 10) == 0)
                      {
                        switch ((unsigned char)(chars[12]))
                          {
                            case 'F':
                                if (strcmp(&(chars[13]), "ormal") == 0)
                                    return NormalizedQuery_WorkingHard_Formal;
                                break;
                            case 'I':
                                if (strcmp(&(chars[13]), "nformal") == 0)
                                    return NormalizedQuery_WorkingHard_Informal;
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
        case 'Y':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "s") == 0)
                        return NormalizedQuery_Yes;
                    break;
                case 'o':
                    if (strncmp(&(chars[2]), "u", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'A':
                                if (strncmp(&(chars[4]), "re", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'C':
                                            if (strcmp(&(chars[7]), "ute") == 0)
                                                return NormalizedQuery_YouAreCute;
                                            break;
                                        case 'R':
                                            if (strcmp(&(chars[7]), "ude") == 0)
                                                return NormalizedQuery_YouAreRude;
                                            break;
                                        case 'S':
                                            if (strcmp(&(chars[7]), "exy") == 0)
                                                return NormalizedQuery_YouAreSexy;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(chars[4]), "alkinToMe") == 0)
                                    return NormalizedQuery_YouTalkinToMe;
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
    return NormalizedQuery__none;
  }

const char *SmallTalkInformationNuggetJSON::stringFromNormalizedQuery(TypeNormalizedQueryKnownValues the_enum)
  {
    switch (the_enum)
      {
        case NormalizedQuery_AreYouARealPerson:
            return "AreYouARealPerson";
        case NormalizedQuery_BadDay_Formal:
            return "BadDay_Formal";
        case NormalizedQuery_BadDay_Informal:
            return "BadDay_Informal";
        case NormalizedQuery_BestFriend_Formal:
            return "BestFriend_Formal";
        case NormalizedQuery_BestFriend_Informal:
            return "BestFriend_Informal";
        case NormalizedQuery_Compliment_Formal:
            return "Compliment_Formal";
        case NormalizedQuery_Compliment_Informal:
            return "Compliment_Informal";
        case NormalizedQuery_Disbelief_Formal:
            return "Disbelief_Formal";
        case NormalizedQuery_Disbelief_Informal:
            return "Disbelief_Informal";
        case NormalizedQuery_ExcuseMe_Formal:
            return "ExcuseMe_Formal";
        case NormalizedQuery_ExcuseMe_Informal:
            return "ExcuseMe_Informal";
        case NormalizedQuery_Farewell_Formal:
            return "Farewell_Formal";
        case NormalizedQuery_Farewell_Informal:
            return "Farewell_Informal";
        case NormalizedQuery_Greetings_Formal:
            return "Greetings_Formal";
        case NormalizedQuery_Greetings_Informal:
            return "Greetings_Informal";
        case NormalizedQuery_HappyBirthday:
            return "HappyBirthday";
        case NormalizedQuery_ItsMyBirthday:
            return "ItsMyBirthday";
        case NormalizedQuery_Inconceivable:
            return "Inconceivable";
        case NormalizedQuery_Insult_Formal:
            return "Insult_Formal";
        case NormalizedQuery_Insult_Informal:
            return "Insult_Informal";
        case NormalizedQuery_KnockKnock_Formal:
            return "KnockKnock_Formal";
        case NormalizedQuery_KnockKnock_Informal:
            return "KnockKnock_Informal";
        case NormalizedQuery_KnockKnock_WhosThere:
            return "KnockKnock_WhosThere";
        case NormalizedQuery_KnockKnock_Name_BrokenPencil:
            return "KnockKnock_Name_BrokenPencil";
        case NormalizedQuery_KnockKnock_Punchline_BrokenPencil:
            return "KnockKnock_Punchline_BrokenPencil";
        case NormalizedQuery_KnockKnock_Name_Doris:
            return "KnockKnock_Name_Doris";
        case NormalizedQuery_KnockKnock_Punchline_Doris:
            return "KnockKnock_Punchline_Doris";
        case NormalizedQuery_KnockKnock_Name_Tank:
            return "KnockKnock_Name_Tank";
        case NormalizedQuery_KnockKnock_Punchline_Tank:
            return "KnockKnock_Punchline_Tank";
        case NormalizedQuery_KnockKnock_Name_To:
            return "KnockKnock_Name_To";
        case NormalizedQuery_KnockKnock_Punchline_To:
            return "KnockKnock_Punchline_To";
        case NormalizedQuery_KnockKnock_UserPunchline:
            return "KnockKnock_UserPunchline";
        case NormalizedQuery_KnockKnock_ExitMode:
            return "KnockKnock_ExitMode";
        case NormalizedQuery_LikeYou_Formal:
            return "LikeYou_Formal";
        case NormalizedQuery_LikeYou_Informal:
            return "LikeYou_Informal";
        case NormalizedQuery_LoveYou_Formal:
            return "LoveYou_Formal";
        case NormalizedQuery_LoveYou_Informal:
            return "LoveYou_Informal";
        case NormalizedQuery_NiceToMeetYou:
            return "NiceToMeetYou";
        case NormalizedQuery_Peace:
            return "Peace";
        case NormalizedQuery_Positive_Formal:
            return "Positive_Formal";
        case NormalizedQuery_Positive_Informal:
            return "Positive_Informal";
        case NormalizedQuery_Testing:
            return "Testing";
        case NormalizedQuery_ThankYou_Formal:
            return "ThankYou_Formal";
        case NormalizedQuery_ThankYou_Informal:
            return "ThankYou_Informal";
        case NormalizedQuery_TimeFlies_Formal:
            return "TimeFlies_Formal";
        case NormalizedQuery_TimeFlies_Informal:
            return "TimeFlies_Informal";
        case NormalizedQuery_Tired_Formal:
            return "Tired_Formal";
        case NormalizedQuery_Tired_Informal:
            return "Tired_Informal";
        case NormalizedQuery_YouAreSexy:
            return "YouAreSexy";
        case NormalizedQuery_Yes:
            return "Yes";
        case NormalizedQuery_No:
            return "No";
        case NormalizedQuery_WhatToSay:
            return "WhatToSay";
        case NormalizedQuery_BeamMeUp:
            return "BeamMeUp";
        case NormalizedQuery_BeThatWay_Formal:
            return "BeThatWay_Formal";
        case NormalizedQuery_BeThatWay_Informal:
            return "BeThatWay_Informal";
        case NormalizedQuery_FeelBetter_Formal:
            return "FeelBetter_Formal";
        case NormalizedQuery_FeelBetter_Informal:
            return "FeelBetter_Informal";
        case NormalizedQuery_FlipACoin:
            return "FlipACoin";
        case NormalizedQuery_RomanticQuote:
            return "RomanticQuote";
        case NormalizedQuery_TongueTwister:
            return "TongueTwister";
        case NormalizedQuery_Jokes_Formal:
            return "Jokes_Formal";
        case NormalizedQuery_Jokes_Informal:
            return "Jokes_Informal";
        case NormalizedQuery_OpenPodBay:
            return "OpenPodBay";
        case NormalizedQuery_SayMyName:
            return "SayMyName";
        case NormalizedQuery_ShutUp_Formal:
            return "ShutUp_Formal";
        case NormalizedQuery_ShutUp_Informal:
            return "ShutUp_Informal";
        case NormalizedQuery_Rap:
            return "Rap";
        case NormalizedQuery_Sing:
            return "Sing";
        case NormalizedQuery_Beatbox:
            return "Beatbox";
        case NormalizedQuery_Fart:
            return "Fart";
        case NormalizedQuery_MakeMeASandwich:
            return "MakeMeASandwich";
        case NormalizedQuery_SudoMakeMeASandwich:
            return "SudoMakeMeASandwich";
        case NormalizedQuery_SomethingIDontKnow:
            return "SomethingIDontKnow";
        case NormalizedQuery_StoryTime_Formal:
            return "StoryTime_Formal";
        case NormalizedQuery_StoryTime_Informal:
            return "StoryTime_Informal";
        case NormalizedQuery_TalkDirty_Formal:
            return "TalkDirty_Formal";
        case NormalizedQuery_TalkDirty_Informal:
            return "TalkDirty_Informal";
        case NormalizedQuery_AskAQuestion:
            return "AskAQuestion";
        case NormalizedQuery_AnyKids_Informal:
            return "AnyKids_Informal";
        case NormalizedQuery_AnyKids_Formal:
            return "AnyKids_Formal";
        case NormalizedQuery_WhatIsMyName_Informal:
            return "WhatIsMyName_Informal";
        case NormalizedQuery_WhatIsMyBirthDay_Informal:
            return "WhatIsMyBirthDay_Informal";
        case NormalizedQuery_WhenIsYourBirthDay_Informal:
            return "WhenIsYourBirthDay_Informal";
        case NormalizedQuery_AnyPlans_Informal:
            return "AnyPlans_Informal";
        case NormalizedQuery_AnyPlans_Formal:
            return "AnyPlans_Formal";
        case NormalizedQuery_BoxersOrBriefs_Formal:
            return "BoxersOrBriefs_Formal";
        case NormalizedQuery_BoxersOrBriefs_Informal:
            return "BoxersOrBriefs_Informal";
        case NormalizedQuery_CatchGame_Formal:
            return "CatchGame_Formal";
        case NormalizedQuery_CatchGame_Informal:
            return "CatchGame_Informal";
        case NormalizedQuery_DeadBody_Formal:
            return "DeadBody_Formal";
        case NormalizedQuery_DeadBody_Informal:
            return "DeadBody_Informal";
        case NormalizedQuery_DoesHeLoveMe_Formal:
            return "DoesHeLoveMe_Formal";
        case NormalizedQuery_DoesHeLoveMe_Informal:
            return "DoesHeLoveMe_Informal";
        case NormalizedQuery_DoesSheLoveMe_Formal:
            return "DoesSheLoveMe_Formal";
        case NormalizedQuery_DoesSheLoveMe_Informal:
            return "DoesSheLoveMe_Informal";
        case NormalizedQuery_DoYouLoveMe_Formal:
            return "DoYouLoveMe_Formal";
        case NormalizedQuery_DoYouLoveMe_Informal:
            return "DoYouLoveMe_Informal";
        case NormalizedQuery_GoodBooks_Formal:
            return "GoodBooks_Formal";
        case NormalizedQuery_GoodBooks_Informal:
            return "GoodBooks_Informal";
        case NormalizedQuery_GoodMovies_Formal:
            return "GoodMovies_Formal";
        case NormalizedQuery_GoodMovies_Informal:
            return "GoodMovies_Informal";
        case NormalizedQuery_HowFamily_Formal:
            return "HowFamily_Formal";
        case NormalizedQuery_HowFamily_Informal:
            return "HowFamily_Informal";
        case NormalizedQuery_HowGoing_Formal:
            return "HowGoing_Formal";
        case NormalizedQuery_HowGoing_Informal:
            return "HowGoing_Informal";
        case NormalizedQuery_HowManyChucks_Formal:
            return "HowManyChucks_Formal";
        case NormalizedQuery_HowManyChucks_Informal:
            return "HowManyChucks_Informal";
        case NormalizedQuery_HowOld_Formal:
            return "HowOld_Formal";
        case NormalizedQuery_HowOld_Informal:
            return "HowOld_Informal";
        case NormalizedQuery_WhatsYourAge_Formal:
            return "WhatsYourAge_Formal";
        case NormalizedQuery_WhatsYourAge_Informal:
            return "WhatsYourAge_Informal";
        case NormalizedQuery_WhenBorn_Formal:
            return "WhenBorn_Formal";
        case NormalizedQuery_WhenBorn_Informal:
            return "WhenBorn_Informal";
        case NormalizedQuery_HowWasWeekend_Formal:
            return "HowWasWeekend_Formal";
        case NormalizedQuery_HowWasWeekend_Informal:
            return "HowWasWeekend_Informal";
        case NormalizedQuery_IfATreeFalls_Formal:
            return "IfATreeFalls_Formal";
        case NormalizedQuery_IfATreeFalls_Informal:
            return "IfATreeFalls_Informal";
        case NormalizedQuery_LookBuffed_Formal:
            return "LookBuffed_Formal";
        case NormalizedQuery_LookBuffed_Informal:
            return "LookBuffed_Informal";
        case NormalizedQuery_LookLike_Formal:
            return "LookLike_Formal";
        case NormalizedQuery_LookLike_Informal:
            return "LookLike_Informal";
        case NormalizedQuery_LostWeight_Formal:
            return "LostWeight_Formal";
        case NormalizedQuery_LostWeight_Informal:
            return "LostWeight_Informal";
        case NormalizedQuery_MarryMe_Formal:
            return "MarryMe_Formal";
        case NormalizedQuery_MarryMe_Informal:
            return "MarryMe_Informal";
        case NormalizedQuery_MeaningOfLife_Formal:
            return "MeaningOfLife_Formal";
        case NormalizedQuery_MeaningOfLife_Informal:
            return "MeaningOfLife_Informal";
        case NormalizedQuery_OneHandClapping_Formal:
            return "OneHandClapping_Formal";
        case NormalizedQuery_OneHandClapping_Informal:
            return "OneHandClapping_Informal";
        case NormalizedQuery_PennyThoughts_Formal:
            return "PennyThoughts_Formal";
        case NormalizedQuery_PennyThoughts_Informal:
            return "PennyThoughts_Informal";
        case NormalizedQuery_SpareTime_Formal:
            return "SpareTime_Formal";
        case NormalizedQuery_SpareTime_Informal:
            return "SpareTime_Informal";
        case NormalizedQuery_WhatShouldIDo_Formal:
            return "WhatShouldIDo_Formal";
        case NormalizedQuery_WhatShouldIDo_Informal:
            return "WhatShouldIDo_Informal";
        case NormalizedQuery_WhatsUp_Formal:
            return "WhatsUp_Formal";
        case NormalizedQuery_WhatsUp_Informal:
            return "WhatsUp_Informal";
        case NormalizedQuery_WhatToEat_Formal:
            return "WhatToEat_Formal";
        case NormalizedQuery_WhatToEat_Informal:
            return "WhatToEat_Informal";
        case NormalizedQuery_WhatWearing_Formal:
            return "WhatWearing_Formal";
        case NormalizedQuery_WhatWearing_Informal:
            return "WhatWearing_Informal";
        case NormalizedQuery_WhosYourDaddy_Formal:
            return "WhosYourDaddy_Formal";
        case NormalizedQuery_WhosYourDaddy_Informal:
            return "WhosYourDaddy_Informal";
        case NormalizedQuery_WhosOnFirst_Formal:
            return "WhosOnFirst_Formal";
        case NormalizedQuery_WhosOnFirst_Informal:
            return "WhosOnFirst_Informal";
        case NormalizedQuery_Why_Formal:
            return "Why_Formal";
        case NormalizedQuery_Why_Informal:
            return "Why_Informal";
        case NormalizedQuery_WhySoBad_Formal:
            return "WhySoBad_Formal";
        case NormalizedQuery_WhySoBad_Informal:
            return "WhySoBad_Informal";
        case NormalizedQuery_WorkingHard_Formal:
            return "WorkingHard_Formal";
        case NormalizedQuery_WorkingHard_Informal:
            return "WorkingHard_Informal";
        case NormalizedQuery_ChickenCrossRoad:
            return "ChickenCrossRoad";
        case NormalizedQuery_HowAreKids:
            return "HowAreKids";
        case NormalizedQuery_HowIsHusband:
            return "HowIsHusband";
        case NormalizedQuery_HowIsWife:
            return "HowIsWife";
        case NormalizedQuery_HowToGetRich:
            return "HowToGetRich";
        case NormalizedQuery_TakeOverWorld:
            return "TakeOverWorld";
        case NormalizedQuery_WhatsInAName:
            return "WhatsInAName";
        case NormalizedQuery_WhatsUpDoc:
            return "WhatsUpDoc";
        case NormalizedQuery_WhoAmI:
            return "WhoAmI";
        case NormalizedQuery_YouTalkinToMe:
            return "YouTalkinToMe";
        case NormalizedQuery_AreYouSure:
            return "AreYouSure";
        case NormalizedQuery_CanYouHearMe:
            return "CanYouHearMe";
        case NormalizedQuery_AreYouThere:
            return "AreYouThere";
        case NormalizedQuery_NotAverage:
            return "NotAverage";
        case NormalizedQuery_StarWarsDroids:
            return "StarWarsDroids";
        case NormalizedQuery_StarWarsForce:
            return "StarWarsForce";
        case NormalizedQuery_ForceBeWithYou:
            return "ForceBeWithYou";
        case NormalizedQuery_DouglasAdams:
            return "DouglasAdams";
        case NormalizedQuery_WantToDateMe:
            return "WantToDateMe";
        case NormalizedQuery_DirtyJoke:
            return "DirtyJoke";
        case NormalizedQuery_GreatToSeeYou:
            return "GreatToSeeYou";
        case NormalizedQuery_WhatAreYourInterests:
            return "WhatAreYourInterests";
        case NormalizedQuery_WhatMusicDoYouLike:
            return "WhatMusicDoYouLike";
        case NormalizedQuery_MontyPythonUnladenSwallow:
            return "MontyPythonUnladenSwallow";
        case NormalizedQuery_MontyPythonKnowAboutSwallows:
            return "MontyPythonKnowAboutSwallows";
        case NormalizedQuery_IsaacAsimovMultivac:
            return "IsaacAsimovMultivac";
        case NormalizedQuery_SelfDestruct:
            return "SelfDestruct";
        case NormalizedQuery_AreYouAManOrAWoman:
            return "AreYouAManOrAWoman";
        case NormalizedQuery_AreYouSkynet:
            return "AreYouSkynet";
        case NormalizedQuery_AreYouHal:
            return "AreYouHal";
        case NormalizedQuery_AreYouGlados:
            return "AreYouGlados";
        case NormalizedQuery_AreYouBorg:
            return "AreYouBorg";
        case NormalizedQuery_AreYouTheMatrix:
            return "AreYouTheMatrix";
        case NormalizedQuery_AreYouSingle:
            return "AreYouSingle";
        case NormalizedQuery_DoYouLikeHumans:
            return "DoYouLikeHumans";
        case NormalizedQuery_DoYouDream:
            return "DoYouDream";
        case NormalizedQuery_DidYouFart:
            return "DidYouFart";
        case NormalizedQuery_WhereDoYouLive:
            return "WhereDoYouLive";
        case NormalizedQuery_MontyPythonQuest:
            return "MontyPythonQuest";
        case NormalizedQuery_WhatsFavoriteMovie:
            return "WhatsFavoriteMovie";
        case NormalizedQuery_HowDoIGetAGirlfriend:
            return "HowDoIGetAGirlfriend";
        case NormalizedQuery_PostQuestion:
            return "PostQuestion";
        case NormalizedQuery_JustKidding:
            return "JustKidding";
        case NormalizedQuery_CanYouDoTricks:
            return "CanYouDoTricks";
        case NormalizedQuery_WhereAreYou:
            return "WhereAreYou";
        case NormalizedQuery_YouAreCute:
            return "YouAreCute";
        case NormalizedQuery_WhatDoesTheFoxSay:
            return "WhatDoesTheFoxSay";
        case NormalizedQuery_WhatsYourSign:
            return "WhatsYourSign";
        case NormalizedQuery_BarkLikeADog:
            return "BarkLikeADog";
        case NormalizedQuery_BlessYourHeart:
            return "BlessYourHeart";
        case NormalizedQuery_GreetingsCompetitor:
            return "GreetingsCompetitor";
        case NormalizedQuery_GreetingsSiriAndQuery:
            return "GreetingsSiriAndQuery";
        case NormalizedQuery_GreetingsAlexaAndQuery:
            return "GreetingsAlexaAndQuery";
        case NormalizedQuery_GreetingsCortanaAndQuery:
            return "GreetingsCortanaAndQuery";
        case NormalizedQuery_GreetingsGalaxyAndQuery:
            return "GreetingsGalaxyAndQuery";
        case NormalizedQuery_SnackStadium:
            return "SnackStadium";
        case NormalizedQuery_Cancel:
            return "Cancel";
        case NormalizedQuery_NiceJoke:
            return "NiceJoke";
        case NormalizedQuery_DoYouGiveAChuck:
            return "DoYouGiveAChuck";
        case NormalizedQuery_YouAreRude:
            return "YouAreRude";
        case NormalizedQuery_IAmYourFather:
            return "IAmYourFather";
        case NormalizedQuery_IAmYourMother:
            return "IAmYourMother";
        case NormalizedQuery_MothersDay:
            return "MothersDay";
        case NormalizedQuery_FathersDay:
            return "FathersDay";
        case NormalizedQuery_Dismissal:
            return "Dismissal";
        case NormalizedQuery_WhyFiretruckRed:
            return "WhyFiretruckRed";
        case NormalizedQuery_HowDoIStopZombie:
            return "HowDoIStopZombie";
        case NormalizedQuery_AreYouFeeling:
            return "AreYouFeeling";
        case NormalizedQuery_AreYouGoodLooking:
            return "AreYouGoodLooking";
        case NormalizedQuery_HowDoILandAirplane:
            return "HowDoILandAirplane";
        case NormalizedQuery_WhenWillWorldEnd:
            return "WhenWillWorldEnd";
        case NormalizedQuery_WhatColorAreYou:
            return "WhatColorAreYou";
        case NormalizedQuery_AreWeFriends:
            return "AreWeFriends";
        case NormalizedQuery_WhatsFavoriteColor:
            return "WhatsFavoriteColor";
        case NormalizedQuery_WhatsFavoriteFood:
            return "WhatsFavoriteFood";
        case NormalizedQuery_DoYouLikeFood:
            return "DoYouLikeFood";
        case NormalizedQuery_DoYouLikeMyClothes:
            return "DoYouLikeMyClothes";
        case NormalizedQuery_WhatsFavoriteAnimal:
            return "WhatsFavoriteAnimal";
        case NormalizedQuery_WhatDoesTheCatSay:
            return "WhatDoesTheCatSay";
        case NormalizedQuery_Welcome:
            return "Welcome";
        case NormalizedQuery_WhatChineseZodiac:
            return "WhatChineseZodiac";
        case NormalizedQuery_Greetings_Morning:
            return "Greetings_Morning";
        case NormalizedQuery_Greetings_Evening:
            return "Greetings_Evening";
        default:
            assert(false);
            return NULL;
      }
  }

SmallTalkInformationNuggetJSON::SmallTalkInformationNuggetJSON(const SmallTalkInformationNuggetJSON &)
  {
    assert(false);
  }

SmallTalkInformationNuggetJSON &SmallTalkInformationNuggetJSON::operator=(const SmallTalkInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SmallTalkInformationNuggetJSON::extraUserNameToJSON(void) const
  {
    JSONValueHandler handler_UserName;
    storeUserName->write_as_json(&handler_UserName);
    handler_UserName.result->add_reference();
    return handler_UserName.result;
  }

JSONValue *SmallTalkInformationNuggetJSON::extraForcedResponseToJSON(void) const
  {
    JSONValueHandler handler_ForcedResponse;
    storeForcedResponse->write_as_json(&handler_ForcedResponse);
    handler_ForcedResponse.result->add_reference();
    return handler_ForcedResponse.result;
  }

JSONValue *SmallTalkInformationNuggetJSON::extraNormalizedQueryToJSON(void) const
  {
    JSONStringValue *generated_string_NormalizedQuery;
    if (!(storeNormalizedQuery.in_known_list))
      {
    generated_string_NormalizedQuery = new JSONStringValue(storeNormalizedQuery.string_value.c_str());
      }
    else
      {
    switch (storeNormalizedQuery.list_value)
      {
        case NormalizedQuery_AreYouARealPerson:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouARealPerson");
            break;
        case NormalizedQuery_BadDay_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("BadDay_Formal");
            break;
        case NormalizedQuery_BadDay_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("BadDay_Informal");
            break;
        case NormalizedQuery_BestFriend_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("BestFriend_Formal");
            break;
        case NormalizedQuery_BestFriend_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("BestFriend_Informal");
            break;
        case NormalizedQuery_Compliment_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Compliment_Formal");
            break;
        case NormalizedQuery_Compliment_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Compliment_Informal");
            break;
        case NormalizedQuery_Disbelief_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Disbelief_Formal");
            break;
        case NormalizedQuery_Disbelief_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Disbelief_Informal");
            break;
        case NormalizedQuery_ExcuseMe_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("ExcuseMe_Formal");
            break;
        case NormalizedQuery_ExcuseMe_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("ExcuseMe_Informal");
            break;
        case NormalizedQuery_Farewell_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Farewell_Formal");
            break;
        case NormalizedQuery_Farewell_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Farewell_Informal");
            break;
        case NormalizedQuery_Greetings_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Greetings_Formal");
            break;
        case NormalizedQuery_Greetings_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Greetings_Informal");
            break;
        case NormalizedQuery_HappyBirthday:
            generated_string_NormalizedQuery = new JSONStringValue("HappyBirthday");
            break;
        case NormalizedQuery_ItsMyBirthday:
            generated_string_NormalizedQuery = new JSONStringValue("ItsMyBirthday");
            break;
        case NormalizedQuery_Inconceivable:
            generated_string_NormalizedQuery = new JSONStringValue("Inconceivable");
            break;
        case NormalizedQuery_Insult_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Insult_Formal");
            break;
        case NormalizedQuery_Insult_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Insult_Informal");
            break;
        case NormalizedQuery_KnockKnock_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Formal");
            break;
        case NormalizedQuery_KnockKnock_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Informal");
            break;
        case NormalizedQuery_KnockKnock_WhosThere:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_WhosThere");
            break;
        case NormalizedQuery_KnockKnock_Name_BrokenPencil:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Name_BrokenPencil");
            break;
        case NormalizedQuery_KnockKnock_Punchline_BrokenPencil:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Punchline_BrokenPencil");
            break;
        case NormalizedQuery_KnockKnock_Name_Doris:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Name_Doris");
            break;
        case NormalizedQuery_KnockKnock_Punchline_Doris:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Punchline_Doris");
            break;
        case NormalizedQuery_KnockKnock_Name_Tank:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Name_Tank");
            break;
        case NormalizedQuery_KnockKnock_Punchline_Tank:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Punchline_Tank");
            break;
        case NormalizedQuery_KnockKnock_Name_To:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Name_To");
            break;
        case NormalizedQuery_KnockKnock_Punchline_To:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_Punchline_To");
            break;
        case NormalizedQuery_KnockKnock_UserPunchline:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_UserPunchline");
            break;
        case NormalizedQuery_KnockKnock_ExitMode:
            generated_string_NormalizedQuery = new JSONStringValue("KnockKnock_ExitMode");
            break;
        case NormalizedQuery_LikeYou_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("LikeYou_Formal");
            break;
        case NormalizedQuery_LikeYou_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("LikeYou_Informal");
            break;
        case NormalizedQuery_LoveYou_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("LoveYou_Formal");
            break;
        case NormalizedQuery_LoveYou_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("LoveYou_Informal");
            break;
        case NormalizedQuery_NiceToMeetYou:
            generated_string_NormalizedQuery = new JSONStringValue("NiceToMeetYou");
            break;
        case NormalizedQuery_Peace:
            generated_string_NormalizedQuery = new JSONStringValue("Peace");
            break;
        case NormalizedQuery_Positive_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Positive_Formal");
            break;
        case NormalizedQuery_Positive_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Positive_Informal");
            break;
        case NormalizedQuery_Testing:
            generated_string_NormalizedQuery = new JSONStringValue("Testing");
            break;
        case NormalizedQuery_ThankYou_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("ThankYou_Formal");
            break;
        case NormalizedQuery_ThankYou_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("ThankYou_Informal");
            break;
        case NormalizedQuery_TimeFlies_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("TimeFlies_Formal");
            break;
        case NormalizedQuery_TimeFlies_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("TimeFlies_Informal");
            break;
        case NormalizedQuery_Tired_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Tired_Formal");
            break;
        case NormalizedQuery_Tired_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Tired_Informal");
            break;
        case NormalizedQuery_YouAreSexy:
            generated_string_NormalizedQuery = new JSONStringValue("YouAreSexy");
            break;
        case NormalizedQuery_Yes:
            generated_string_NormalizedQuery = new JSONStringValue("Yes");
            break;
        case NormalizedQuery_No:
            generated_string_NormalizedQuery = new JSONStringValue("No");
            break;
        case NormalizedQuery_WhatToSay:
            generated_string_NormalizedQuery = new JSONStringValue("WhatToSay");
            break;
        case NormalizedQuery_BeamMeUp:
            generated_string_NormalizedQuery = new JSONStringValue("BeamMeUp");
            break;
        case NormalizedQuery_BeThatWay_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("BeThatWay_Formal");
            break;
        case NormalizedQuery_BeThatWay_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("BeThatWay_Informal");
            break;
        case NormalizedQuery_FeelBetter_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("FeelBetter_Formal");
            break;
        case NormalizedQuery_FeelBetter_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("FeelBetter_Informal");
            break;
        case NormalizedQuery_FlipACoin:
            generated_string_NormalizedQuery = new JSONStringValue("FlipACoin");
            break;
        case NormalizedQuery_RomanticQuote:
            generated_string_NormalizedQuery = new JSONStringValue("RomanticQuote");
            break;
        case NormalizedQuery_TongueTwister:
            generated_string_NormalizedQuery = new JSONStringValue("TongueTwister");
            break;
        case NormalizedQuery_Jokes_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Jokes_Formal");
            break;
        case NormalizedQuery_Jokes_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Jokes_Informal");
            break;
        case NormalizedQuery_OpenPodBay:
            generated_string_NormalizedQuery = new JSONStringValue("OpenPodBay");
            break;
        case NormalizedQuery_SayMyName:
            generated_string_NormalizedQuery = new JSONStringValue("SayMyName");
            break;
        case NormalizedQuery_ShutUp_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("ShutUp_Formal");
            break;
        case NormalizedQuery_ShutUp_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("ShutUp_Informal");
            break;
        case NormalizedQuery_Rap:
            generated_string_NormalizedQuery = new JSONStringValue("Rap");
            break;
        case NormalizedQuery_Sing:
            generated_string_NormalizedQuery = new JSONStringValue("Sing");
            break;
        case NormalizedQuery_Beatbox:
            generated_string_NormalizedQuery = new JSONStringValue("Beatbox");
            break;
        case NormalizedQuery_Fart:
            generated_string_NormalizedQuery = new JSONStringValue("Fart");
            break;
        case NormalizedQuery_MakeMeASandwich:
            generated_string_NormalizedQuery = new JSONStringValue("MakeMeASandwich");
            break;
        case NormalizedQuery_SudoMakeMeASandwich:
            generated_string_NormalizedQuery = new JSONStringValue("SudoMakeMeASandwich");
            break;
        case NormalizedQuery_SomethingIDontKnow:
            generated_string_NormalizedQuery = new JSONStringValue("SomethingIDontKnow");
            break;
        case NormalizedQuery_StoryTime_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("StoryTime_Formal");
            break;
        case NormalizedQuery_StoryTime_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("StoryTime_Informal");
            break;
        case NormalizedQuery_TalkDirty_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("TalkDirty_Formal");
            break;
        case NormalizedQuery_TalkDirty_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("TalkDirty_Informal");
            break;
        case NormalizedQuery_AskAQuestion:
            generated_string_NormalizedQuery = new JSONStringValue("AskAQuestion");
            break;
        case NormalizedQuery_AnyKids_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("AnyKids_Informal");
            break;
        case NormalizedQuery_AnyKids_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("AnyKids_Formal");
            break;
        case NormalizedQuery_WhatIsMyName_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatIsMyName_Informal");
            break;
        case NormalizedQuery_WhatIsMyBirthDay_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatIsMyBirthDay_Informal");
            break;
        case NormalizedQuery_WhenIsYourBirthDay_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhenIsYourBirthDay_Informal");
            break;
        case NormalizedQuery_AnyPlans_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("AnyPlans_Informal");
            break;
        case NormalizedQuery_AnyPlans_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("AnyPlans_Formal");
            break;
        case NormalizedQuery_BoxersOrBriefs_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("BoxersOrBriefs_Formal");
            break;
        case NormalizedQuery_BoxersOrBriefs_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("BoxersOrBriefs_Informal");
            break;
        case NormalizedQuery_CatchGame_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("CatchGame_Formal");
            break;
        case NormalizedQuery_CatchGame_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("CatchGame_Informal");
            break;
        case NormalizedQuery_DeadBody_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("DeadBody_Formal");
            break;
        case NormalizedQuery_DeadBody_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("DeadBody_Informal");
            break;
        case NormalizedQuery_DoesHeLoveMe_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("DoesHeLoveMe_Formal");
            break;
        case NormalizedQuery_DoesHeLoveMe_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("DoesHeLoveMe_Informal");
            break;
        case NormalizedQuery_DoesSheLoveMe_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("DoesSheLoveMe_Formal");
            break;
        case NormalizedQuery_DoesSheLoveMe_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("DoesSheLoveMe_Informal");
            break;
        case NormalizedQuery_DoYouLoveMe_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("DoYouLoveMe_Formal");
            break;
        case NormalizedQuery_DoYouLoveMe_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("DoYouLoveMe_Informal");
            break;
        case NormalizedQuery_GoodBooks_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("GoodBooks_Formal");
            break;
        case NormalizedQuery_GoodBooks_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("GoodBooks_Informal");
            break;
        case NormalizedQuery_GoodMovies_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("GoodMovies_Formal");
            break;
        case NormalizedQuery_GoodMovies_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("GoodMovies_Informal");
            break;
        case NormalizedQuery_HowFamily_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("HowFamily_Formal");
            break;
        case NormalizedQuery_HowFamily_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("HowFamily_Informal");
            break;
        case NormalizedQuery_HowGoing_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("HowGoing_Formal");
            break;
        case NormalizedQuery_HowGoing_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("HowGoing_Informal");
            break;
        case NormalizedQuery_HowManyChucks_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("HowManyChucks_Formal");
            break;
        case NormalizedQuery_HowManyChucks_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("HowManyChucks_Informal");
            break;
        case NormalizedQuery_HowOld_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("HowOld_Formal");
            break;
        case NormalizedQuery_HowOld_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("HowOld_Informal");
            break;
        case NormalizedQuery_WhatsYourAge_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsYourAge_Formal");
            break;
        case NormalizedQuery_WhatsYourAge_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsYourAge_Informal");
            break;
        case NormalizedQuery_WhenBorn_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhenBorn_Formal");
            break;
        case NormalizedQuery_WhenBorn_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhenBorn_Informal");
            break;
        case NormalizedQuery_HowWasWeekend_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("HowWasWeekend_Formal");
            break;
        case NormalizedQuery_HowWasWeekend_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("HowWasWeekend_Informal");
            break;
        case NormalizedQuery_IfATreeFalls_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("IfATreeFalls_Formal");
            break;
        case NormalizedQuery_IfATreeFalls_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("IfATreeFalls_Informal");
            break;
        case NormalizedQuery_LookBuffed_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("LookBuffed_Formal");
            break;
        case NormalizedQuery_LookBuffed_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("LookBuffed_Informal");
            break;
        case NormalizedQuery_LookLike_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("LookLike_Formal");
            break;
        case NormalizedQuery_LookLike_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("LookLike_Informal");
            break;
        case NormalizedQuery_LostWeight_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("LostWeight_Formal");
            break;
        case NormalizedQuery_LostWeight_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("LostWeight_Informal");
            break;
        case NormalizedQuery_MarryMe_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("MarryMe_Formal");
            break;
        case NormalizedQuery_MarryMe_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("MarryMe_Informal");
            break;
        case NormalizedQuery_MeaningOfLife_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("MeaningOfLife_Formal");
            break;
        case NormalizedQuery_MeaningOfLife_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("MeaningOfLife_Informal");
            break;
        case NormalizedQuery_OneHandClapping_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("OneHandClapping_Formal");
            break;
        case NormalizedQuery_OneHandClapping_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("OneHandClapping_Informal");
            break;
        case NormalizedQuery_PennyThoughts_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("PennyThoughts_Formal");
            break;
        case NormalizedQuery_PennyThoughts_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("PennyThoughts_Informal");
            break;
        case NormalizedQuery_SpareTime_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("SpareTime_Formal");
            break;
        case NormalizedQuery_SpareTime_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("SpareTime_Informal");
            break;
        case NormalizedQuery_WhatShouldIDo_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatShouldIDo_Formal");
            break;
        case NormalizedQuery_WhatShouldIDo_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatShouldIDo_Informal");
            break;
        case NormalizedQuery_WhatsUp_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsUp_Formal");
            break;
        case NormalizedQuery_WhatsUp_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsUp_Informal");
            break;
        case NormalizedQuery_WhatToEat_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatToEat_Formal");
            break;
        case NormalizedQuery_WhatToEat_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatToEat_Informal");
            break;
        case NormalizedQuery_WhatWearing_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatWearing_Formal");
            break;
        case NormalizedQuery_WhatWearing_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatWearing_Informal");
            break;
        case NormalizedQuery_WhosYourDaddy_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhosYourDaddy_Formal");
            break;
        case NormalizedQuery_WhosYourDaddy_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhosYourDaddy_Informal");
            break;
        case NormalizedQuery_WhosOnFirst_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhosOnFirst_Formal");
            break;
        case NormalizedQuery_WhosOnFirst_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhosOnFirst_Informal");
            break;
        case NormalizedQuery_Why_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("Why_Formal");
            break;
        case NormalizedQuery_Why_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("Why_Informal");
            break;
        case NormalizedQuery_WhySoBad_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WhySoBad_Formal");
            break;
        case NormalizedQuery_WhySoBad_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WhySoBad_Informal");
            break;
        case NormalizedQuery_WorkingHard_Formal:
            generated_string_NormalizedQuery = new JSONStringValue("WorkingHard_Formal");
            break;
        case NormalizedQuery_WorkingHard_Informal:
            generated_string_NormalizedQuery = new JSONStringValue("WorkingHard_Informal");
            break;
        case NormalizedQuery_ChickenCrossRoad:
            generated_string_NormalizedQuery = new JSONStringValue("ChickenCrossRoad");
            break;
        case NormalizedQuery_HowAreKids:
            generated_string_NormalizedQuery = new JSONStringValue("HowAreKids");
            break;
        case NormalizedQuery_HowIsHusband:
            generated_string_NormalizedQuery = new JSONStringValue("HowIsHusband");
            break;
        case NormalizedQuery_HowIsWife:
            generated_string_NormalizedQuery = new JSONStringValue("HowIsWife");
            break;
        case NormalizedQuery_HowToGetRich:
            generated_string_NormalizedQuery = new JSONStringValue("HowToGetRich");
            break;
        case NormalizedQuery_TakeOverWorld:
            generated_string_NormalizedQuery = new JSONStringValue("TakeOverWorld");
            break;
        case NormalizedQuery_WhatsInAName:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsInAName");
            break;
        case NormalizedQuery_WhatsUpDoc:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsUpDoc");
            break;
        case NormalizedQuery_WhoAmI:
            generated_string_NormalizedQuery = new JSONStringValue("WhoAmI");
            break;
        case NormalizedQuery_YouTalkinToMe:
            generated_string_NormalizedQuery = new JSONStringValue("YouTalkinToMe");
            break;
        case NormalizedQuery_AreYouSure:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouSure");
            break;
        case NormalizedQuery_CanYouHearMe:
            generated_string_NormalizedQuery = new JSONStringValue("CanYouHearMe");
            break;
        case NormalizedQuery_AreYouThere:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouThere");
            break;
        case NormalizedQuery_NotAverage:
            generated_string_NormalizedQuery = new JSONStringValue("NotAverage");
            break;
        case NormalizedQuery_StarWarsDroids:
            generated_string_NormalizedQuery = new JSONStringValue("StarWarsDroids");
            break;
        case NormalizedQuery_StarWarsForce:
            generated_string_NormalizedQuery = new JSONStringValue("StarWarsForce");
            break;
        case NormalizedQuery_ForceBeWithYou:
            generated_string_NormalizedQuery = new JSONStringValue("ForceBeWithYou");
            break;
        case NormalizedQuery_DouglasAdams:
            generated_string_NormalizedQuery = new JSONStringValue("DouglasAdams");
            break;
        case NormalizedQuery_WantToDateMe:
            generated_string_NormalizedQuery = new JSONStringValue("WantToDateMe");
            break;
        case NormalizedQuery_DirtyJoke:
            generated_string_NormalizedQuery = new JSONStringValue("DirtyJoke");
            break;
        case NormalizedQuery_GreatToSeeYou:
            generated_string_NormalizedQuery = new JSONStringValue("GreatToSeeYou");
            break;
        case NormalizedQuery_WhatAreYourInterests:
            generated_string_NormalizedQuery = new JSONStringValue("WhatAreYourInterests");
            break;
        case NormalizedQuery_WhatMusicDoYouLike:
            generated_string_NormalizedQuery = new JSONStringValue("WhatMusicDoYouLike");
            break;
        case NormalizedQuery_MontyPythonUnladenSwallow:
            generated_string_NormalizedQuery = new JSONStringValue("MontyPythonUnladenSwallow");
            break;
        case NormalizedQuery_MontyPythonKnowAboutSwallows:
            generated_string_NormalizedQuery = new JSONStringValue("MontyPythonKnowAboutSwallows");
            break;
        case NormalizedQuery_IsaacAsimovMultivac:
            generated_string_NormalizedQuery = new JSONStringValue("IsaacAsimovMultivac");
            break;
        case NormalizedQuery_SelfDestruct:
            generated_string_NormalizedQuery = new JSONStringValue("SelfDestruct");
            break;
        case NormalizedQuery_AreYouAManOrAWoman:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouAManOrAWoman");
            break;
        case NormalizedQuery_AreYouSkynet:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouSkynet");
            break;
        case NormalizedQuery_AreYouHal:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouHal");
            break;
        case NormalizedQuery_AreYouGlados:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouGlados");
            break;
        case NormalizedQuery_AreYouBorg:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouBorg");
            break;
        case NormalizedQuery_AreYouTheMatrix:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouTheMatrix");
            break;
        case NormalizedQuery_AreYouSingle:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouSingle");
            break;
        case NormalizedQuery_DoYouLikeHumans:
            generated_string_NormalizedQuery = new JSONStringValue("DoYouLikeHumans");
            break;
        case NormalizedQuery_DoYouDream:
            generated_string_NormalizedQuery = new JSONStringValue("DoYouDream");
            break;
        case NormalizedQuery_DidYouFart:
            generated_string_NormalizedQuery = new JSONStringValue("DidYouFart");
            break;
        case NormalizedQuery_WhereDoYouLive:
            generated_string_NormalizedQuery = new JSONStringValue("WhereDoYouLive");
            break;
        case NormalizedQuery_MontyPythonQuest:
            generated_string_NormalizedQuery = new JSONStringValue("MontyPythonQuest");
            break;
        case NormalizedQuery_WhatsFavoriteMovie:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsFavoriteMovie");
            break;
        case NormalizedQuery_HowDoIGetAGirlfriend:
            generated_string_NormalizedQuery = new JSONStringValue("HowDoIGetAGirlfriend");
            break;
        case NormalizedQuery_PostQuestion:
            generated_string_NormalizedQuery = new JSONStringValue("PostQuestion");
            break;
        case NormalizedQuery_JustKidding:
            generated_string_NormalizedQuery = new JSONStringValue("JustKidding");
            break;
        case NormalizedQuery_CanYouDoTricks:
            generated_string_NormalizedQuery = new JSONStringValue("CanYouDoTricks");
            break;
        case NormalizedQuery_WhereAreYou:
            generated_string_NormalizedQuery = new JSONStringValue("WhereAreYou");
            break;
        case NormalizedQuery_YouAreCute:
            generated_string_NormalizedQuery = new JSONStringValue("YouAreCute");
            break;
        case NormalizedQuery_WhatDoesTheFoxSay:
            generated_string_NormalizedQuery = new JSONStringValue("WhatDoesTheFoxSay");
            break;
        case NormalizedQuery_WhatsYourSign:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsYourSign");
            break;
        case NormalizedQuery_BarkLikeADog:
            generated_string_NormalizedQuery = new JSONStringValue("BarkLikeADog");
            break;
        case NormalizedQuery_BlessYourHeart:
            generated_string_NormalizedQuery = new JSONStringValue("BlessYourHeart");
            break;
        case NormalizedQuery_GreetingsCompetitor:
            generated_string_NormalizedQuery = new JSONStringValue("GreetingsCompetitor");
            break;
        case NormalizedQuery_GreetingsSiriAndQuery:
            generated_string_NormalizedQuery = new JSONStringValue("GreetingsSiriAndQuery");
            break;
        case NormalizedQuery_GreetingsAlexaAndQuery:
            generated_string_NormalizedQuery = new JSONStringValue("GreetingsAlexaAndQuery");
            break;
        case NormalizedQuery_GreetingsCortanaAndQuery:
            generated_string_NormalizedQuery = new JSONStringValue("GreetingsCortanaAndQuery");
            break;
        case NormalizedQuery_GreetingsGalaxyAndQuery:
            generated_string_NormalizedQuery = new JSONStringValue("GreetingsGalaxyAndQuery");
            break;
        case NormalizedQuery_SnackStadium:
            generated_string_NormalizedQuery = new JSONStringValue("SnackStadium");
            break;
        case NormalizedQuery_Cancel:
            generated_string_NormalizedQuery = new JSONStringValue("Cancel");
            break;
        case NormalizedQuery_NiceJoke:
            generated_string_NormalizedQuery = new JSONStringValue("NiceJoke");
            break;
        case NormalizedQuery_DoYouGiveAChuck:
            generated_string_NormalizedQuery = new JSONStringValue("DoYouGiveAChuck");
            break;
        case NormalizedQuery_YouAreRude:
            generated_string_NormalizedQuery = new JSONStringValue("YouAreRude");
            break;
        case NormalizedQuery_IAmYourFather:
            generated_string_NormalizedQuery = new JSONStringValue("IAmYourFather");
            break;
        case NormalizedQuery_IAmYourMother:
            generated_string_NormalizedQuery = new JSONStringValue("IAmYourMother");
            break;
        case NormalizedQuery_MothersDay:
            generated_string_NormalizedQuery = new JSONStringValue("MothersDay");
            break;
        case NormalizedQuery_FathersDay:
            generated_string_NormalizedQuery = new JSONStringValue("FathersDay");
            break;
        case NormalizedQuery_Dismissal:
            generated_string_NormalizedQuery = new JSONStringValue("Dismissal");
            break;
        case NormalizedQuery_WhyFiretruckRed:
            generated_string_NormalizedQuery = new JSONStringValue("WhyFiretruckRed");
            break;
        case NormalizedQuery_HowDoIStopZombie:
            generated_string_NormalizedQuery = new JSONStringValue("HowDoIStopZombie");
            break;
        case NormalizedQuery_AreYouFeeling:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouFeeling");
            break;
        case NormalizedQuery_AreYouGoodLooking:
            generated_string_NormalizedQuery = new JSONStringValue("AreYouGoodLooking");
            break;
        case NormalizedQuery_HowDoILandAirplane:
            generated_string_NormalizedQuery = new JSONStringValue("HowDoILandAirplane");
            break;
        case NormalizedQuery_WhenWillWorldEnd:
            generated_string_NormalizedQuery = new JSONStringValue("WhenWillWorldEnd");
            break;
        case NormalizedQuery_WhatColorAreYou:
            generated_string_NormalizedQuery = new JSONStringValue("WhatColorAreYou");
            break;
        case NormalizedQuery_AreWeFriends:
            generated_string_NormalizedQuery = new JSONStringValue("AreWeFriends");
            break;
        case NormalizedQuery_WhatsFavoriteColor:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsFavoriteColor");
            break;
        case NormalizedQuery_WhatsFavoriteFood:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsFavoriteFood");
            break;
        case NormalizedQuery_DoYouLikeFood:
            generated_string_NormalizedQuery = new JSONStringValue("DoYouLikeFood");
            break;
        case NormalizedQuery_DoYouLikeMyClothes:
            generated_string_NormalizedQuery = new JSONStringValue("DoYouLikeMyClothes");
            break;
        case NormalizedQuery_WhatsFavoriteAnimal:
            generated_string_NormalizedQuery = new JSONStringValue("WhatsFavoriteAnimal");
            break;
        case NormalizedQuery_WhatDoesTheCatSay:
            generated_string_NormalizedQuery = new JSONStringValue("WhatDoesTheCatSay");
            break;
        case NormalizedQuery_Welcome:
            generated_string_NormalizedQuery = new JSONStringValue("Welcome");
            break;
        case NormalizedQuery_WhatChineseZodiac:
            generated_string_NormalizedQuery = new JSONStringValue("WhatChineseZodiac");
            break;
        case NormalizedQuery_Greetings_Morning:
            generated_string_NormalizedQuery = new JSONStringValue("Greetings_Morning");
            break;
        case NormalizedQuery_Greetings_Evening:
            generated_string_NormalizedQuery = new JSONStringValue("Greetings_Evening");
            break;
        default:
            assert(false);
            generated_string_NormalizedQuery = NULL;
      }
      }
    return generated_string_NormalizedQuery;
  }

void SmallTalkInformationNuggetJSON::fromJSONUserName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UserNameJSON *convert_classy = UserNameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserName(convert_classy);
    convert_classy->remove_reference();
  }

void SmallTalkInformationNuggetJSON::fromJSONForcedResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setForcedResponse(convert_classy);
    convert_classy->remove_reference();
  }

void SmallTalkInformationNuggetJSON::fromJSONNormalizedQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NormalizedQuery of SmallTalkInformationNuggetJSON is not a string.");
    TypeNormalizedQuery the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'n':
                    if (strncmp(&(json_string->getData()[2]), "y", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'K':
                                if (strncmp(&(json_string->getData()[4]), "ids_", 4) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[8]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[9]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_AnyKids_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[9]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_AnyKids_Informal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'P':
                                if (strncmp(&(json_string->getData()[4]), "lans_", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[9]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_AnyPlans_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_AnyPlans_Informal;
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
                    if (strncmp(&(json_string->getData()[2]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'W':
                                if (strcmp(&(json_string->getData()[4]), "eFriends") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_AreWeFriends;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'Y':
                                if (strncmp(&(json_string->getData()[4]), "ou", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'A':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'M':
                                                    if (strcmp(&(json_string->getData()[8]), "anOrAWoman") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_AreYouAManOrAWoman;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'R':
                                                    if (strcmp(&(json_string->getData()[8]), "ealPerson") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_AreYouARealPerson;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[7]), "org") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_AreYouBorg;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[7]), "eeling") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_AreYouFeeling;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'G':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[8]), "ados") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_AreYouGlados;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[8]), "odLooking") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_AreYouGoodLooking;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[7]), "al") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_AreYouHal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[8]), "ngle") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_AreYouSingle;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'k':
                                                    if (strcmp(&(json_string->getData()[8]), "ynet") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_AreYouSkynet;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    if (strcmp(&(json_string->getData()[8]), "re") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_AreYouSure;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strncmp(&(json_string->getData()[7]), "he", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[9]))
                                                  {
                                                    case 'M':
                                                        if (strcmp(&(json_string->getData()[10]), "atrix") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_AreYouTheMatrix;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(json_string->getData()[10]), "e") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_AreYouThere;
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
                case 's':
                    if (strcmp(&(json_string->getData()[2]), "kAQuestion") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_AskAQuestion;
                            goto open_enum_is_done;
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
                            if (strncmp(&(json_string->getData()[3]), "Day_", 4) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[7]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[8]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_BadDay_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[8]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_BadDay_Informal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "kLikeADog") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_BarkLikeADog;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'T':
                            if (strncmp(&(json_string->getData()[3]), "hatWay_", 7) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_BeThatWay_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_BeThatWay_Informal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'a':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'm':
                                    if (strcmp(&(json_string->getData()[4]), "MeUp") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_BeamMeUp;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 't':
                                    if (strcmp(&(json_string->getData()[4]), "box") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_Beatbox;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 's':
                            if (strncmp(&(json_string->getData()[3]), "tFriend_", 8) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[11]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[12]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_BestFriend_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[12]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_BestFriend_Informal;
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
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "essYourHeart") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_BlessYourHeart;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "xersOrBriefs_", 13) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[15]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[16]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_BoxersOrBriefs_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[16]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_BoxersOrBriefs_Informal;
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
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'n':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'Y':
                                    if (strncmp(&(json_string->getData()[4]), "ou", 2) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'D':
                                                if (strcmp(&(json_string->getData()[7]), "oTricks") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_CanYouDoTricks;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'H':
                                                if (strcmp(&(json_string->getData()[7]), "earMe") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_CanYouHearMe;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'c':
                                    if (strcmp(&(json_string->getData()[4]), "el") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_Cancel;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strncmp(&(json_string->getData()[3]), "chGame_", 7) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_CatchGame_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_CatchGame_Informal;
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
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ickenCrossRoad") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_ChickenCrossRoad;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "mpliment_", 9) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[11]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[12]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_Compliment_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[12]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_Compliment_Informal;
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
        case 'D':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "adBody_", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_DeadBody_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_DeadBody_Informal;
                                        goto open_enum_is_done;
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
                        case 'd':
                            if (strcmp(&(json_string->getData()[3]), "YouFart") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_DidYouFart;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "tyJoke") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_DirtyJoke;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 's':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'b':
                                    if (strncmp(&(json_string->getData()[4]), "elief_", 6) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[10]))
                                          {
                                            case 'F':
                                                if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_Disbelief_Formal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'I':
                                                if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_Disbelief_Informal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'm':
                                    if (strcmp(&(json_string->getData()[4]), "issal") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_Dismissal;
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
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'Y':
                            if (strncmp(&(json_string->getData()[3]), "ou", 2) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'D':
                                        if (strcmp(&(json_string->getData()[6]), "ream") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_DoYouDream;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'G':
                                        if (strcmp(&(json_string->getData()[6]), "iveAChuck") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_DoYouGiveAChuck;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'L':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'i':
                                                if (strncmp(&(json_string->getData()[7]), "ke", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[9]))
                                                      {
                                                        case 'F':
                                                            if (strcmp(&(json_string->getData()[10]), "ood") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_DoYouLikeFood;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'H':
                                                            if (strcmp(&(json_string->getData()[10]), "umans") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_DoYouLikeHumans;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'M':
                                                            if (strcmp(&(json_string->getData()[10]), "yClothes") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_DoYouLikeMyClothes;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'o':
                                                if (strncmp(&(json_string->getData()[7]), "veMe_", 5) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[12]))
                                                      {
                                                        case 'F':
                                                            if (strcmp(&(json_string->getData()[13]), "ormal") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_DoYouLoveMe_Formal;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'I':
                                                            if (strcmp(&(json_string->getData()[13]), "nformal") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_DoYouLoveMe_Informal;
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
                        case 'e':
                            if (strncmp(&(json_string->getData()[3]), "s", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'H':
                                        if (strncmp(&(json_string->getData()[5]), "eLoveMe_", 8) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[13]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[14]), "ormal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_DoesHeLoveMe_Formal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(json_string->getData()[14]), "nformal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_DoesHeLoveMe_Informal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'S':
                                        if (strncmp(&(json_string->getData()[5]), "heLoveMe_", 9) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[15]), "ormal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_DoesSheLoveMe_Formal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(json_string->getData()[15]), "nformal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_DoesSheLoveMe_Informal;
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
                            if (strcmp(&(json_string->getData()[3]), "glasAdams") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_DouglasAdams;
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
        case 'E':
            if (strncmp(&(json_string->getData()[1]), "xcuseMe_", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = NormalizedQuery_ExcuseMe_Formal;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = NormalizedQuery_ExcuseMe_Informal;
                                goto open_enum_is_done;
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
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'r':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'e':
                                    if (strncmp(&(json_string->getData()[4]), "well_", 5) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[9]))
                                          {
                                            case 'F':
                                                if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_Farewell_Formal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'I':
                                                if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_Farewell_Informal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 't':
                                    if (json_string->getData()[4] == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_Fart;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(json_string->getData()[3]), "hersDay") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_FathersDay;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "elBetter_", 9) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[11]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[12]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_FeelBetter_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[12]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_FeelBetter_Informal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "ipACoin") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_FlipACoin;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "rceBeWithYou") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_ForceBeWithYou;
                            goto open_enum_is_done;
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
                    if (strncmp(&(json_string->getData()[2]), "od", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'B':
                                if (strncmp(&(json_string->getData()[5]), "ooks_", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_GoodBooks_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_GoodBooks_Informal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strncmp(&(json_string->getData()[5]), "ovies_", 6) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[12]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_GoodMovies_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[12]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_GoodMovies_Informal;
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
                    if (strncmp(&(json_string->getData()[2]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[4]), "tToSeeYou") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_GreatToSeeYou;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'e':
                                if (strncmp(&(json_string->getData()[4]), "tings", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[9]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[10]), "lexaAndQuery") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_GreetingsAlexaAndQuery;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'C':
                                            if (strncmp(&(json_string->getData()[10]), "o", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[11]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[12]), "petitor") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_GreetingsCompetitor;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(json_string->getData()[12]), "tanaAndQuery") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_GreetingsCortanaAndQuery;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'G':
                                            if (strcmp(&(json_string->getData()[10]), "alaxyAndQuery") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_GreetingsGalaxyAndQuery;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[10]), "iriAndQuery") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_GreetingsSiriAndQuery;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case '_':
                                            switch ((unsigned char)(json_string->getData()[10]))
                                              {
                                                case 'E':
                                                    if (strcmp(&(json_string->getData()[11]), "vening") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_Greetings_Evening;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_Greetings_Formal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_Greetings_Informal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'M':
                                                    if (strcmp(&(json_string->getData()[11]), "orning") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_Greetings_Morning;
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
        case 'H':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "ppyBirthday") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_HappyBirthday;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "w", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'A':
                                if (strcmp(&(json_string->getData()[4]), "reKids") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_HowAreKids;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'D':
                                if (strncmp(&(json_string->getData()[4]), "oI", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'G':
                                            if (strcmp(&(json_string->getData()[7]), "etAGirlfriend") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowDoIGetAGirlfriend;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'L':
                                            if (strcmp(&(json_string->getData()[7]), "andAirplane") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowDoILandAirplane;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[7]), "topZombie") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowDoIStopZombie;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'F':
                                if (strncmp(&(json_string->getData()[4]), "amily_", 6) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowFamily_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowFamily_Informal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'G':
                                if (strncmp(&(json_string->getData()[4]), "oing_", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[9]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowGoing_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowGoing_Informal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'I':
                                if (strncmp(&(json_string->getData()[4]), "s", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[5]))
                                      {
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[6]), "usband") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowIsHusband;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strcmp(&(json_string->getData()[6]), "ife") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowIsWife;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strncmp(&(json_string->getData()[4]), "anyChucks_", 10) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[14]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[15]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowManyChucks_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[15]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowManyChucks_Informal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'O':
                                if (strncmp(&(json_string->getData()[4]), "ld_", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[7]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[8]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowOld_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[8]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowOld_Informal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[4]), "oGetRich") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_HowToGetRich;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[4]), "asWeekend_", 10) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[14]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[15]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowWasWeekend_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[15]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_HowWasWeekend_Informal;
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
        case 'I':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'A':
                    if (strncmp(&(json_string->getData()[2]), "mYour", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[8]), "ather") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_IAmYourFather;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[8]), "other") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_IAmYourMother;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'f':
                    if (strncmp(&(json_string->getData()[2]), "ATreeFalls_", 11) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[13]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[14]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_IfATreeFalls_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[14]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_IfATreeFalls_Informal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'n':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'c':
                            if (strcmp(&(json_string->getData()[3]), "onceivable") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_Inconceivable;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 's':
                            if (strncmp(&(json_string->getData()[3]), "ult_", 4) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[7]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[8]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_Insult_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[8]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_Insult_Informal;
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
                case 's':
                    if (strcmp(&(json_string->getData()[2]), "aacAsimovMultivac") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_IsaacAsimovMultivac;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    if (strcmp(&(json_string->getData()[2]), "sMyBirthday") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_ItsMyBirthday;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'J':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "kes_", 4) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[6]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[7]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_Jokes_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[7]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_Jokes_Informal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "stKidding") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_JustKidding;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'K':
            if (strncmp(&(json_string->getData()[1]), "nockKnock_", 10) == 0)
              {
                switch ((unsigned char)(json_string->getData()[11]))
                  {
                    case 'E':
                        if (strcmp(&(json_string->getData()[12]), "xitMode") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = NormalizedQuery_KnockKnock_ExitMode;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'F':
                        if (strcmp(&(json_string->getData()[12]), "ormal") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = NormalizedQuery_KnockKnock_Formal;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[12]), "nformal") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = NormalizedQuery_KnockKnock_Informal;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'N':
                        if (strncmp(&(json_string->getData()[12]), "ame_", 4) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[16]))
                              {
                                case 'B':
                                    if (strcmp(&(json_string->getData()[17]), "rokenPencil") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_KnockKnock_Name_BrokenPencil;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'D':
                                    if (strcmp(&(json_string->getData()[17]), "oris") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_KnockKnock_Name_Doris;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'T':
                                    switch ((unsigned char)(json_string->getData()[17]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[18]), "nk") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_KnockKnock_Name_Tank;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (json_string->getData()[18] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_KnockKnock_Name_To;
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
                    case 'P':
                        if (strncmp(&(json_string->getData()[12]), "unchline_", 9) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[21]))
                              {
                                case 'B':
                                    if (strcmp(&(json_string->getData()[22]), "rokenPencil") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_KnockKnock_Punchline_BrokenPencil;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'D':
                                    if (strcmp(&(json_string->getData()[22]), "oris") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_KnockKnock_Punchline_Doris;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'T':
                                    switch ((unsigned char)(json_string->getData()[22]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[23]), "nk") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_KnockKnock_Punchline_Tank;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (json_string->getData()[23] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_KnockKnock_Punchline_To;
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
                    case 'U':
                        if (strcmp(&(json_string->getData()[12]), "serPunchline") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = NormalizedQuery_KnockKnock_UserPunchline;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[12]), "hosThere") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = NormalizedQuery_KnockKnock_WhosThere;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strncmp(&(json_string->getData()[2]), "keYou_", 6) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[9]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_LikeYou_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[9]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_LikeYou_Informal;
                                        goto open_enum_is_done;
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
                        case 'o':
                            if (strncmp(&(json_string->getData()[3]), "k", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'B':
                                        if (strncmp(&(json_string->getData()[5]), "uffed_", 6) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[11]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[12]), "ormal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_LookBuffed_Formal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(json_string->getData()[12]), "nformal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_LookBuffed_Informal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'L':
                                        if (strncmp(&(json_string->getData()[5]), "ike_", 4) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[9]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_LookLike_Formal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_LookLike_Informal;
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
                            if (strncmp(&(json_string->getData()[3]), "tWeight_", 8) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[11]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[12]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_LostWeight_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[12]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_LostWeight_Informal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'v':
                            if (strncmp(&(json_string->getData()[3]), "eYou_", 5) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[8]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[9]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_LoveYou_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[9]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_LoveYou_Informal;
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
        case 'M':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'k':
                            if (strcmp(&(json_string->getData()[3]), "eMeASandwich") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_MakeMeASandwich;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strncmp(&(json_string->getData()[3]), "ryMe_", 5) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[8]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[9]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_MarryMe_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[9]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_MarryMe_Informal;
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
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "aningOfLife_", 12) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[14]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[15]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_MeaningOfLife_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[15]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_MeaningOfLife_Informal;
                                        goto open_enum_is_done;
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
                        case 'n':
                            if (strncmp(&(json_string->getData()[3]), "tyPython", 8) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[11]))
                                  {
                                    case 'K':
                                        if (strcmp(&(json_string->getData()[12]), "nowAboutSwallows") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_MontyPythonKnowAboutSwallows;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'Q':
                                        if (strcmp(&(json_string->getData()[12]), "uest") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_MontyPythonQuest;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'U':
                                        if (strcmp(&(json_string->getData()[12]), "nladenSwallow") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_MontyPythonUnladenSwallow;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 't':
                            if (strcmp(&(json_string->getData()[3]), "hersDay") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_MothersDay;
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
        case 'N':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strncmp(&(json_string->getData()[2]), "ce", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'J':
                                if (strcmp(&(json_string->getData()[5]), "oke") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_NiceJoke;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[5]), "oMeetYou") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_NiceToMeetYou;
                                        goto open_enum_is_done;
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
                        case 0:
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = NormalizedQuery_No;
                                goto open_enum_is_done;
                              }
                        case 't':
                            if (strcmp(&(json_string->getData()[3]), "Average") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_NotAverage;
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
        case 'O':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'n':
                    if (strncmp(&(json_string->getData()[2]), "eHandClapping_", 14) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[16]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[17]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_OneHandClapping_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[17]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_OneHandClapping_Informal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'p':
                    if (strcmp(&(json_string->getData()[2]), "enPodBay") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_OpenPodBay;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'a':
                            if (strcmp(&(json_string->getData()[3]), "ce") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_Peace;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'n':
                            if (strncmp(&(json_string->getData()[3]), "nyThoughts_", 11) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[14]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[15]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_PennyThoughts_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[15]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_PennyThoughts_Informal;
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
                    if (strncmp(&(json_string->getData()[2]), "s", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'i':
                                if (strncmp(&(json_string->getData()[4]), "tive_", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[9]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_Positive_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_Positive_Informal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 't':
                                if (strcmp(&(json_string->getData()[4]), "Question") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_PostQuestion;
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
        case 'R':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "p") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_Rap;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "manticQuote") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_RomanticQuote;
                            goto open_enum_is_done;
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
                    if (strcmp(&(json_string->getData()[2]), "yMyName") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_SayMyName;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "lfDestruct") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_SelfDestruct;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    if (strncmp(&(json_string->getData()[2]), "utUp_", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[8]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_ShutUp_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[8]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_ShutUp_Informal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ng") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_Sing;
                            goto open_enum_is_done;
                          }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "ackStadium") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_SnackStadium;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "methingIDontKnow") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_SomethingIDontKnow;
                            goto open_enum_is_done;
                          }
                    break;
                case 'p':
                    if (strncmp(&(json_string->getData()[2]), "areTime_", 8) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[10]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_SpareTime_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_SpareTime_Informal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 't':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'a':
                            if (strncmp(&(json_string->getData()[3]), "rWars", 5) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[8]))
                                  {
                                    case 'D':
                                        if (strcmp(&(json_string->getData()[9]), "roids") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_StarWarsDroids;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[9]), "orce") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_StarWarsForce;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strncmp(&(json_string->getData()[3]), "ryTime_", 7) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_StoryTime_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_StoryTime_Informal;
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
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "doMakeMeASandwich") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_SudoMakeMeASandwich;
                            goto open_enum_is_done;
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
                        case 'k':
                            if (strcmp(&(json_string->getData()[3]), "eOverWorld") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = NormalizedQuery_TakeOverWorld;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'l':
                            if (strncmp(&(json_string->getData()[3]), "kDirty_", 7) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_TalkDirty_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_TalkDirty_Informal;
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
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "sting") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_Testing;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    if (strncmp(&(json_string->getData()[2]), "ankYou_", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_ThankYou_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_ThankYou_Informal;
                                        goto open_enum_is_done;
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
                        case 'm':
                            if (strncmp(&(json_string->getData()[3]), "eFlies_", 7) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[10]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_TimeFlies_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_TimeFlies_Informal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strncmp(&(json_string->getData()[3]), "ed_", 3) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[7]), "ormal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_Tired_Formal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[7]), "nformal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_Tired_Informal;
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
                    if (strcmp(&(json_string->getData()[2]), "ngueTwister") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_TongueTwister;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "ntToDateMe") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_WantToDateMe;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "lcome") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_Welcome;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'a':
                            if (strncmp(&(json_string->getData()[3]), "t", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'A':
                                        if (strcmp(&(json_string->getData()[5]), "reYourInterests") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_WhatAreYourInterests;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'C':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'h':
                                                if (strcmp(&(json_string->getData()[6]), "ineseZodiac") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_WhatChineseZodiac;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "lorAreYou") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_WhatColorAreYou;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'D':
                                        if (strncmp(&(json_string->getData()[5]), "oesThe", 6) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[11]))
                                              {
                                                case 'C':
                                                    if (strcmp(&(json_string->getData()[12]), "atSay") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatDoesTheCatSay;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[12]), "oxSay") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatDoesTheFoxSay;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'I':
                                        if (strncmp(&(json_string->getData()[5]), "sMy", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[8]))
                                              {
                                                case 'B':
                                                    if (strcmp(&(json_string->getData()[9]), "irthDay_Informal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatIsMyBirthDay_Informal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'N':
                                                    if (strcmp(&(json_string->getData()[9]), "ame_Informal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatIsMyName_Informal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[5]), "usicDoYouLike") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = NormalizedQuery_WhatMusicDoYouLike;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'S':
                                        if (strncmp(&(json_string->getData()[5]), "houldIDo_", 9) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[14]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[15]), "ormal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatShouldIDo_Formal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(json_string->getData()[15]), "nformal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatShouldIDo_Informal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'T':
                                        if (strncmp(&(json_string->getData()[5]), "o", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[6]))
                                              {
                                                case 'E':
                                                    if (strncmp(&(json_string->getData()[7]), "at_", 3) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[10]))
                                                          {
                                                            case 'F':
                                                                if (strcmp(&(json_string->getData()[11]), "ormal") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = NormalizedQuery_WhatToEat_Formal;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'I':
                                                                if (strcmp(&(json_string->getData()[11]), "nformal") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = NormalizedQuery_WhatToEat_Informal;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[7]), "ay") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatToSay;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'W':
                                        if (strncmp(&(json_string->getData()[5]), "earing_", 7) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[12]))
                                              {
                                                case 'F':
                                                    if (strcmp(&(json_string->getData()[13]), "ormal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatWearing_Formal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(json_string->getData()[13]), "nformal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = NormalizedQuery_WhatWearing_Informal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'F':
                                                if (strncmp(&(json_string->getData()[6]), "avorite", 7) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[13]))
                                                      {
                                                        case 'A':
                                                            if (strcmp(&(json_string->getData()[14]), "nimal") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_WhatsFavoriteAnimal;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'C':
                                                            if (strcmp(&(json_string->getData()[14]), "olor") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_WhatsFavoriteColor;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'F':
                                                            if (strcmp(&(json_string->getData()[14]), "ood") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_WhatsFavoriteFood;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'M':
                                                            if (strcmp(&(json_string->getData()[14]), "ovie") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_WhatsFavoriteMovie;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'I':
                                                if (strcmp(&(json_string->getData()[6]), "nAName") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_WhatsInAName;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'U':
                                                if (strncmp(&(json_string->getData()[6]), "p", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[7]))
                                                      {
                                                        case 'D':
                                                            if (strcmp(&(json_string->getData()[8]), "oc") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_WhatsUpDoc;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case '_':
                                                            switch ((unsigned char)(json_string->getData()[8]))
                                                              {
                                                                case 'F':
                                                                    if (strcmp(&(json_string->getData()[9]), "ormal") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = NormalizedQuery_WhatsUp_Formal;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'I':
                                                                    if (strcmp(&(json_string->getData()[9]), "nformal") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = NormalizedQuery_WhatsUp_Informal;
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
                                            case 'Y':
                                                if (strncmp(&(json_string->getData()[6]), "our", 3) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[9]))
                                                      {
                                                        case 'A':
                                                            if (strncmp(&(json_string->getData()[10]), "ge_", 3) == 0)
                                                              {
                                                                switch ((unsigned char)(json_string->getData()[13]))
                                                                  {
                                                                    case 'F':
                                                                        if (strcmp(&(json_string->getData()[14]), "ormal") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = NormalizedQuery_WhatsYourAge_Formal;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case 'I':
                                                                        if (strcmp(&(json_string->getData()[14]), "nformal") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = NormalizedQuery_WhatsYourAge_Informal;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                              }
                                                            break;
                                                        case 'S':
                                                            if (strcmp(&(json_string->getData()[10]), "ign") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = NormalizedQuery_WhatsYourSign;
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
                        case 'e':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'n':
                                    switch ((unsigned char)(json_string->getData()[4]))
                                      {
                                        case 'B':
                                            if (strncmp(&(json_string->getData()[5]), "orn_", 4) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[9]))
                                                  {
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_WhenBorn_Formal;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_WhenBorn_Informal;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[5]), "sYourBirthDay_Informal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_WhenIsYourBirthDay_Informal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'W':
                                            if (strcmp(&(json_string->getData()[5]), "illWorldEnd") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_WhenWillWorldEnd;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'r':
                                    if (strncmp(&(json_string->getData()[4]), "e", 1) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'A':
                                                if (strcmp(&(json_string->getData()[6]), "reYou") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_WhereAreYou;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'D':
                                                if (strcmp(&(json_string->getData()[6]), "oYouLive") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_WhereDoYouLive;
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
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'A':
                                    if (strcmp(&(json_string->getData()[4]), "mI") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_WhoAmI;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 's':
                                    switch ((unsigned char)(json_string->getData()[4]))
                                      {
                                        case 'O':
                                            if (strncmp(&(json_string->getData()[5]), "nFirst_", 7) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[12]))
                                                  {
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[13]), "ormal") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_WhosOnFirst_Formal;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(json_string->getData()[13]), "nformal") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_WhosOnFirst_Informal;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'Y':
                                            if (strncmp(&(json_string->getData()[5]), "ourDaddy_", 9) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[14]))
                                                  {
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[15]), "ormal") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_WhosYourDaddy_Formal;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'I':
                                                        if (strcmp(&(json_string->getData()[15]), "nformal") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = NormalizedQuery_WhosYourDaddy_Informal;
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
                        case 'y':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'F':
                                    if (strcmp(&(json_string->getData()[4]), "iretruckRed") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = NormalizedQuery_WhyFiretruckRed;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    if (strncmp(&(json_string->getData()[4]), "oBad_", 5) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[9]))
                                          {
                                            case 'F':
                                                if (strcmp(&(json_string->getData()[10]), "ormal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_WhySoBad_Formal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'I':
                                                if (strcmp(&(json_string->getData()[10]), "nformal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = NormalizedQuery_WhySoBad_Informal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case '_':
                                    switch ((unsigned char)(json_string->getData()[4]))
                                      {
                                        case 'F':
                                            if (strcmp(&(json_string->getData()[5]), "ormal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_Why_Formal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'I':
                                            if (strcmp(&(json_string->getData()[5]), "nformal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_Why_Informal;
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
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "rkingHard_", 10) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[12]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[13]), "ormal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_WorkingHard_Formal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[13]), "nformal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_WorkingHard_Informal;
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
        case 'Y':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "s") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NormalizedQuery_Yes;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "u", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'A':
                                if (strncmp(&(json_string->getData()[4]), "re", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'C':
                                            if (strcmp(&(json_string->getData()[7]), "ute") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_YouAreCute;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'R':
                                            if (strcmp(&(json_string->getData()[7]), "ude") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_YouAreRude;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'S':
                                            if (strcmp(&(json_string->getData()[7]), "exy") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = NormalizedQuery_YouAreSexy;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[4]), "alkinToMe") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NormalizedQuery_YouTalkinToMe;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setNormalizedQuery(the_open_enum);
  }

SmallTalkInformationNuggetJSON::SmallTalkInformationNuggetJSON(void) :
        flagHasUserName(false),
        flagHasForcedResponse(false),
        flagHasNormalizedQuery(false)
  {
    extraIndex = create_string_index();
  }

SmallTalkInformationNuggetJSON::~SmallTalkInformationNuggetJSON(void)
  {
    if (flagHasUserName)
      {
        storeUserName->remove_reference();
      }
    if (flagHasForcedResponse)
      {
        storeForcedResponse->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SmallTalkInformationNuggetJSON::getNuggetKind(void) const
  {
    return "SmallTalk";
  }

bool SmallTalkInformationNuggetJSON::hasUserName(void) const
  {
    return flagHasUserName;
  }

UserNameJSON * SmallTalkInformationNuggetJSON::getUserName(void)
  {
    assert(flagHasUserName);
    return storeUserName;
  }

const UserNameJSON * SmallTalkInformationNuggetJSON::getUserName(void) const
  {
    assert(flagHasUserName);
    return storeUserName;
  }

bool SmallTalkInformationNuggetJSON::hasForcedResponse(void) const
  {
    return flagHasForcedResponse;
  }

DynamicResponseJSON * SmallTalkInformationNuggetJSON::getForcedResponse(void)
  {
    assert(flagHasForcedResponse);
    return storeForcedResponse;
  }

const DynamicResponseJSON * SmallTalkInformationNuggetJSON::getForcedResponse(void) const
  {
    assert(flagHasForcedResponse);
    return storeForcedResponse;
  }

bool SmallTalkInformationNuggetJSON::hasNormalizedQuery(void) const
  {
    return flagHasNormalizedQuery;
  }

SmallTalkInformationNuggetJSON::TypeNormalizedQuery SmallTalkInformationNuggetJSON::getNormalizedQuery(void)
  {
    assert(flagHasNormalizedQuery);
    return storeNormalizedQuery;
  }

const SmallTalkInformationNuggetJSON::TypeNormalizedQuery SmallTalkInformationNuggetJSON::getNormalizedQuery(void) const
  {
    assert(flagHasNormalizedQuery);
    return storeNormalizedQuery;
  }

const char *SmallTalkInformationNuggetJSON::getNormalizedQueryAsChars(void) const
  {
    TypeNormalizedQuery result = getNormalizedQuery();
    if (result.in_known_list)
        return stringFromNormalizedQuery(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SmallTalkInformationNuggetJSON::getNormalizedQueryAsString(void) const
  {
    return getNormalizedQueryAsChars();
  }

SmallTalkInformationNuggetJSON *SmallTalkInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SmallTalkInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SmallTalkInformationNuggetJSON>, SmallTalkInformationNuggetJSON *, bool> generator("Type SmallTalkInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
