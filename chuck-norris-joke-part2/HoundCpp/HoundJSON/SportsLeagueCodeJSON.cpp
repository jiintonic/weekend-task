/* file "SportsLeagueCodeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueCodeJSON.h"

#include "SportsLeagueCodeJSON.h"


SportsLeagueCodeJSON::TypeValue::TypeValue(void)
  {
  }

SportsLeagueCodeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsLeagueCodeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsLeagueCodeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsLeagueCodeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsLeagueCodeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsLeagueCodeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsLeagueCodeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsLeagueCodeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsLeagueCodeJSON::TypeValueKnownValues SportsLeagueCodeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'F':
                    if (strcmp(&(chars[2]), "L") == 0)
                        return Value_CFL;
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "icketI", 6) == 0)
                      {
                        switch ((unsigned char)(chars[8]))
                          {
                            case 'C':
                                if (strcmp(&(chars[9]), "C") == 0)
                                    return Value_CricketICC;
                                break;
                            case 'P':
                                if (strcmp(&(chars[9]), "L") == 0)
                                    return Value_CricketIPL;
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
                            return Value_MLB;
                        break;
                    case 'S':
                        if (chars[3] == 0)
                            return Value_MLS;
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
                        return Value_NBA;
                    break;
                case 'C':
                    if (strncmp(&(chars[2]), "AA", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'F':
                                if (strcmp(&(chars[5]), "B") == 0)
                                    return Value_NCAAFB;
                                break;
                            case 'M':
                                if (strcmp(&(chars[5]), "B") == 0)
                                    return Value_NCAAMB;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(chars[2]), "L") == 0)
                        return Value_NFL;
                    break;
                case 'H':
                    if (strcmp(&(chars[2]), "L") == 0)
                        return Value_NHL;
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
                                    return Value_SoccerBrasileiroSerieA;
                                break;
                            case 'u':
                                if (strcmp(&(chars[8]), "ndesliga") == 0)
                                    return Value_SoccerBundesliga;
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
                                    return Value_SoccerEredivisie;
                                break;
                            case 'u':
                                if (strcmp(&(chars[8]), "ropaLeague") == 0)
                                    return Value_SoccerEuropaLeague;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'F':
                        if (strcmp(&(chars[7]), "irstDivisionA") == 0)
                            return Value_SoccerFirstDivisionA;
                        break;
                    case 'I':
                        if (strcmp(&(chars[7]), "nternational") == 0)
                            return Value_SoccerInternational;
                        break;
                    case 'L':
                        if (strcmp(&(chars[7]), "igue1") == 0)
                            return Value_SoccerLigue1;
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
                                                return Value_SoccerPremierLeague;
                                            case 'R':
                                                if (strcmp(&(chars[20]), "US") == 0)
                                                    return Value_SoccerPremierLeagueRUS;
                                                break;
                                            case 'U':
                                                if (strcmp(&(chars[20]), "KR") == 0)
                                                    return Value_SoccerPremierLeagueUKR;
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
                                                    return Value_SoccerPrimeiraLiga;
                                                break;
                                            case 'r':
                                                if (strncmp(&(chars[12]), "aDivision", 9) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[21]))
                                                      {
                                                        case 0:
                                                            return Value_SoccerPrimeraDivision;
                                                        case 'A':
                                                            if (strcmp(&(chars[22]), "RG") == 0)
                                                                return Value_SoccerPrimeraDivisionARG;
                                                            break;
                                                        case 'M':
                                                            if (strcmp(&(chars[22]), "EX") == 0)
                                                                return Value_SoccerPrimeraDivisionMEX;
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
                                    return Value_SoccerSerieA;
                                break;
                            case 'u':
                                if (strncmp(&(chars[8]), "perL", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[12]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[13]), "ague") == 0)
                                                return Value_SoccerSuperLeague;
                                            break;
                                        case 'i':
                                            if (strcmp(&(chars[13]), "g") == 0)
                                                return Value_SoccerSuperLig;
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
                                        return Value_SoccerUEFAChampionsLeague;
                                    break;
                                case 'S':
                                    if (strcmp(&(chars[11]), "uperCup") == 0)
                                        return Value_SoccerUEFASuperCup;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Y':
                        if (strcmp(&(chars[7]), "outhLeague") == 0)
                            return Value_SoccerYouthLeague;
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

const char *SportsLeagueCodeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_MLB:
            return "MLB";
        case Value_NBA:
            return "NBA";
        case Value_NFL:
            return "NFL";
        case Value_NHL:
            return "NHL";
        case Value_NCAAMB:
            return "NCAAMB";
        case Value_NCAAFB:
            return "NCAAFB";
        case Value_MLS:
            return "MLS";
        case Value_CFL:
            return "CFL";
        case Value_SoccerUEFAChampionsLeague:
            return "SoccerUEFAChampionsLeague";
        case Value_SoccerPrimeraDivision:
            return "SoccerPrimeraDivision";
        case Value_SoccerPremierLeague:
            return "SoccerPremierLeague";
        case Value_SoccerSerieA:
            return "SoccerSerieA";
        case Value_SoccerLigue1:
            return "SoccerLigue1";
        case Value_SoccerBundesliga:
            return "SoccerBundesliga";
        case Value_SoccerEredivisie:
            return "SoccerEredivisie";
        case Value_SoccerFirstDivisionA:
            return "SoccerFirstDivisionA";
        case Value_SoccerSuperLig:
            return "SoccerSuperLig";
        case Value_SoccerSuperLeague:
            return "SoccerSuperLeague";
        case Value_SoccerPremierLeagueRUS:
            return "SoccerPremierLeagueRUS";
        case Value_SoccerPremierLeagueUKR:
            return "SoccerPremierLeagueUKR";
        case Value_SoccerPrimeiraLiga:
            return "SoccerPrimeiraLiga";
        case Value_SoccerUEFASuperCup:
            return "SoccerUEFASuperCup";
        case Value_SoccerEuropaLeague:
            return "SoccerEuropaLeague";
        case Value_SoccerYouthLeague:
            return "SoccerYouthLeague";
        case Value_CricketICC:
            return "CricketICC";
        case Value_CricketIPL:
            return "CricketIPL";
        case Value_SoccerPrimeraDivisionARG:
            return "SoccerPrimeraDivisionARG";
        case Value_SoccerPrimeraDivisionMEX:
            return "SoccerPrimeraDivisionMEX";
        case Value_SoccerBrasileiroSerieA:
            return "SoccerBrasileiroSerieA";
        case Value_SoccerInternational:
            return "SoccerInternational";
        default:
            assert(false);
            return NULL;
      }
  }

SportsLeagueCodeJSON::SportsLeagueCodeJSON(const SportsLeagueCodeJSON &)
  {
    assert(false);
  }

SportsLeagueCodeJSON &SportsLeagueCodeJSON::operator=(const SportsLeagueCodeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueCodeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsLeagueCodeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'F':
                    if (strcmp(&(json_string->getData()[2]), "L") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_CFL;
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
                                        the_open_enum.list_value = Value_CricketICC;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'P':
                                if (strcmp(&(json_string->getData()[9]), "L") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_CricketIPL;
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
                                the_open_enum.list_value = Value_MLB;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'S':
                        if (json_string->getData()[3] == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_MLS;
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
                            the_open_enum.list_value = Value_NBA;
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
                                        the_open_enum.list_value = Value_NCAAFB;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[5]), "B") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_NCAAMB;
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
                            the_open_enum.list_value = Value_NFL;
                            goto open_enum_is_done;
                          }
                    break;
                case 'H':
                    if (strcmp(&(json_string->getData()[2]), "L") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_NHL;
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
                                        the_open_enum.list_value = Value_SoccerBrasileiroSerieA;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'u':
                                if (strcmp(&(json_string->getData()[8]), "ndesliga") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SoccerBundesliga;
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
                                        the_open_enum.list_value = Value_SoccerEredivisie;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'u':
                                if (strcmp(&(json_string->getData()[8]), "ropaLeague") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SoccerEuropaLeague;
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
                                the_open_enum.list_value = Value_SoccerFirstDivisionA;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[7]), "nternational") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_SoccerInternational;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[7]), "igue1") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_SoccerLigue1;
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
                                                    the_open_enum.list_value = Value_SoccerPremierLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            case 'R':
                                                if (strcmp(&(json_string->getData()[20]), "US") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_SoccerPremierLeagueRUS;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'U':
                                                if (strcmp(&(json_string->getData()[20]), "KR") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_SoccerPremierLeagueUKR;
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
                                                        the_open_enum.list_value = Value_SoccerPrimeiraLiga;
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
                                                                the_open_enum.list_value = Value_SoccerPrimeraDivision;
                                                                goto open_enum_is_done;
                                                              }
                                                        case 'A':
                                                            if (strcmp(&(json_string->getData()[22]), "RG") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_SoccerPrimeraDivisionARG;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'M':
                                                            if (strcmp(&(json_string->getData()[22]), "EX") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_SoccerPrimeraDivisionMEX;
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
                                        the_open_enum.list_value = Value_SoccerSerieA;
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
                                                    the_open_enum.list_value = Value_SoccerSuperLeague;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            if (strcmp(&(json_string->getData()[13]), "g") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SoccerSuperLig;
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
                                            the_open_enum.list_value = Value_SoccerUEFAChampionsLeague;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    if (strcmp(&(json_string->getData()[11]), "uperCup") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_SoccerUEFASuperCup;
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
                                the_open_enum.list_value = Value_SoccerYouthLeague;
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

SportsLeagueCodeJSON::SportsLeagueCodeJSON(void) :
        flagHasValue(false)
  {
  }

SportsLeagueCodeJSON::SportsLeagueCodeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsLeagueCodeJSON::SportsLeagueCodeJSON(const char *init_value) :
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

SportsLeagueCodeJSON::SportsLeagueCodeJSON(std::string init_value) :
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

SportsLeagueCodeJSON::SportsLeagueCodeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsLeagueCodeJSON::~SportsLeagueCodeJSON(void)
  {
  }

bool SportsLeagueCodeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsLeagueCodeJSON::TypeValue SportsLeagueCodeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsLeagueCodeJSON::TypeValue SportsLeagueCodeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsLeagueCodeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsLeagueCodeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsLeagueCodeJSON *SportsLeagueCodeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueCodeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool> generator("Type SportsLeagueCode", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
