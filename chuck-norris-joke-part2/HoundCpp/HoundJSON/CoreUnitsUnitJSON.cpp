/* file "CoreUnitsUnitJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CoreUnitsUnitJSON.h"

#include "CoreUnitsUnitJSON.h"


CoreUnitsUnitJSON::TypeTag::TypeTag(void)
  {
  }

CoreUnitsUnitJSON::TypeTag::TypeTag(const TypeTag &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

CoreUnitsUnitJSON::TypeTag::TypeTag(TypeTagKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool CoreUnitsUnitJSON::TypeTag::operator==(const TypeTag &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool CoreUnitsUnitJSON::TypeTag::operator!=(const TypeTag &other) const
  {
    return !(operator==(other));
  }

bool CoreUnitsUnitJSON::TypeTag::operator<(const TypeTag &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool CoreUnitsUnitJSON::TypeTag::operator>(const TypeTag &other) const
  {
    return other.operator<(*this);
  }

bool CoreUnitsUnitJSON::TypeTag::operator>=(const TypeTag &other) const
  {
    return !(operator<(other));
  }

bool CoreUnitsUnitJSON::TypeTag::operator<=(const TypeTag &other) const
  {
    return !(other.operator<(*this));
  }

CoreUnitsUnitJSON::TypeTagKnownValues CoreUnitsUnitJSON::stringToTag(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strcmp(&(chars[1]), "lanck_time") == 0)
                return Tag_Planck_time;
            break;
        case 'a':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strcmp(&(chars[2]), "re") == 0)
                        return Tag_acre;
                    break;
                case 'm':
                    if (strcmp(&(chars[2]), "pere") == 0)
                        return Tag_ampere;
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "gstrom") == 0)
                        return Tag_angstrom;
                    break;
                case 's':
                    if (strcmp(&(chars[2]), "tronomical_unit") == 0)
                        return Tag_astronomical_unit;
                    break;
                case 't':
                    if (strncmp(&(chars[2]), "to", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "mpere") == 0)
                                    return Tag_attoampere;
                                break;
                            case 'b':
                                if (strcmp(&(chars[5]), "ecquerel") == 0)
                                    return Tag_attobecquerel;
                                break;
                            case 'c':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "ndela") == 0)
                                            return Tag_attocandela;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "ulomb") == 0)
                                            return Tag_attocoulomb;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                    return Tag_attodegree_celsius;
                                break;
                            case 'f':
                                if (strcmp(&(chars[5]), "arad") == 0)
                                    return Tag_attofarad;
                                break;
                            case 'g':
                                if (strncmp(&(chars[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[7]))
                                      {
                                        case 'm':
                                            if (chars[8] == 0)
                                                return Tag_attogram;
                                            break;
                                        case 'y':
                                            if (chars[8] == 0)
                                                return Tag_attogray;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(chars[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(chars[7]), "ry") == 0)
                                                return Tag_attohenry;
                                            break;
                                        case 'r':
                                            if (strcmp(&(chars[7]), "tz") == 0)
                                                return Tag_attohertz;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(chars[5]), "oule") == 0)
                                    return Tag_attojoule;
                                break;
                            case 'k':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tal") == 0)
                                            return Tag_attokatal;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "lvin") == 0)
                                            return Tag_attokelvin;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_attoliter;
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(chars[7]), "en") == 0)
                                                    return Tag_attolumen;
                                                break;
                                            case 'x':
                                                if (chars[7] == 0)
                                                    return Tag_attolux;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'm':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_attometer;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "le") == 0)
                                            return Tag_attomole;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(chars[5]), "ewton") == 0)
                                    return Tag_attonewton;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "hm") == 0)
                                    return Tag_attoohm;
                                break;
                            case 'p':
                                if (strcmp(&(chars[5]), "ascal") == 0)
                                    return Tag_attopascal;
                                break;
                            case 'r':
                                if (strcmp(&(chars[5]), "adian") == 0)
                                    return Tag_attoradian;
                                break;
                            case 's':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "cond") == 0)
                                            return Tag_attosecond;
                                        break;
                                    case 'i':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(chars[8]), "ens") == 0)
                                                        return Tag_attosiemens;
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(chars[8]), "ert") == 0)
                                                        return Tag_attosievert;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(chars[6]), "eradian") == 0)
                                            return Tag_attosteradian;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "sla") == 0)
                                            return Tag_attotesla;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "nne") == 0)
                                            return Tag_attotonne;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(chars[5]), "olt") == 0)
                                    return Tag_attovolt;
                                break;
                            case 'w':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tt") == 0)
                                            return Tag_attowatt;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ber") == 0)
                                            return Tag_attoweber;
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
                case 'u':
                    if (strcmp(&(chars[2]), "stralian_tablespoon") == 0)
                        return Tag_australian_tablespoon;
                    break;
                default:
                    break;
              }
            break;
        case 'b':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "rleycorn") == 0)
                        return Tag_barleycorn;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "cquerel") == 0)
                        return Tag_becquerel;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "ennium") == 0)
                        return Tag_biennium;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "itish_thermal_unit") == 0)
                        return Tag_british_thermal_unit;
                    break;
                default:
                    break;
              }
            break;
        case 'c':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'b':
                            if (strcmp(&(chars[3]), "le") == 0)
                                return Tag_cable;
                            break;
                        case 'l':
                            if (strcmp(&(chars[3]), "orie") == 0)
                                return Tag_calorie;
                            break;
                        case 'n':
                            if (strcmp(&(chars[3]), "dela") == 0)
                                return Tag_candela;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strncmp(&(chars[2]), "nt", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'i':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "mpere") == 0)
                                            return Tag_centiampere;
                                        break;
                                    case 'b':
                                        if (strcmp(&(chars[6]), "ecquerel") == 0)
                                            return Tag_centibecquerel;
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "ndela") == 0)
                                                    return Tag_centicandela;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "ulomb") == 0)
                                                    return Tag_centicoulomb;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                            return Tag_centidegree_celsius;
                                        break;
                                    case 'f':
                                        if (strcmp(&(chars[6]), "arad") == 0)
                                            return Tag_centifarad;
                                        break;
                                    case 'g':
                                        if (strncmp(&(chars[6]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[8]))
                                              {
                                                case 'm':
                                                    if (chars[9] == 0)
                                                        return Tag_centigram;
                                                    break;
                                                case 'y':
                                                    if (chars[9] == 0)
                                                        return Tag_centigray;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(chars[8]), "ry") == 0)
                                                        return Tag_centihenry;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(chars[8]), "tz") == 0)
                                                        return Tag_centihertz;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(chars[6]), "oule") == 0)
                                            return Tag_centijoule;
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "tal") == 0)
                                                    return Tag_centikatal;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[7]), "lvin") == 0)
                                                    return Tag_centikelvin;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[7]), "ter") == 0)
                                                    return Tag_centiliter;
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(chars[7]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[8]), "en") == 0)
                                                            return Tag_centilumen;
                                                        break;
                                                    case 'x':
                                                        if (chars[8] == 0)
                                                            return Tag_centilux;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'm':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "ter") == 0)
                                                    return Tag_centimeter;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "le") == 0)
                                                    return Tag_centimole;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(chars[6]), "ewton") == 0)
                                            return Tag_centinewton;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "hm") == 0)
                                            return Tag_centiohm;
                                        break;
                                    case 'p':
                                        if (strcmp(&(chars[6]), "ascal") == 0)
                                            return Tag_centipascal;
                                        break;
                                    case 'r':
                                        if (strcmp(&(chars[6]), "adian") == 0)
                                            return Tag_centiradian;
                                        break;
                                    case 's':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "cond") == 0)
                                                    return Tag_centisecond;
                                                break;
                                            case 'i':
                                                if (strncmp(&(chars[7]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[9]), "ens") == 0)
                                                                return Tag_centisiemens;
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(chars[9]), "ert") == 0)
                                                                return Tag_centisievert;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(chars[7]), "eradian") == 0)
                                                    return Tag_centisteradian;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "sla") == 0)
                                                    return Tag_centitesla;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "nne") == 0)
                                                    return Tag_centitonne;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(chars[6]), "olt") == 0)
                                            return Tag_centivolt;
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "tt") == 0)
                                                    return Tag_centiwatt;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[7]), "ber") == 0)
                                                    return Tag_centiweber;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'u':
                                if (strcmp(&(chars[5]), "ry") == 0)
                                    return Tag_century;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "ain") == 0)
                        return Tag_chain;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ulomb") == 0)
                        return Tag_coulomb;
                    break;
                default:
                    break;
              }
            break;
        case 'd':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "y") == 0)
                        return Tag_day;
                    break;
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'c':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'a':
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[5]), "mpere") == 0)
                                                return Tag_decaampere;
                                            break;
                                        case 'b':
                                            if (strcmp(&(chars[5]), "ecquerel") == 0)
                                                return Tag_decabecquerel;
                                            break;
                                        case 'c':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[6]), "ndela") == 0)
                                                        return Tag_decacandela;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[6]), "ulomb") == 0)
                                                        return Tag_decacoulomb;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'd':
                                            if (strncmp(&(chars[5]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 0:
                                                        return Tag_decade;
                                                    case 'g':
                                                        if (strcmp(&(chars[7]), "ree_celsius") == 0)
                                                            return Tag_decadegree_celsius;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'f':
                                            if (strcmp(&(chars[5]), "arad") == 0)
                                                return Tag_decafarad;
                                            break;
                                        case 'g':
                                            if (strncmp(&(chars[5]), "ra", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[7]))
                                                  {
                                                    case 'm':
                                                        if (chars[8] == 0)
                                                            return Tag_decagram;
                                                        break;
                                                    case 'y':
                                                        if (chars[8] == 0)
                                                            return Tag_decagray;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'h':
                                            if (strncmp(&(chars[5]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'n':
                                                        if (strcmp(&(chars[7]), "ry") == 0)
                                                            return Tag_decahenry;
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(chars[7]), "tz") == 0)
                                                            return Tag_decahertz;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'j':
                                            if (strcmp(&(chars[5]), "oule") == 0)
                                                return Tag_decajoule;
                                            break;
                                        case 'k':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[6]), "tal") == 0)
                                                        return Tag_decakatal;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "lvin") == 0)
                                                        return Tag_decakelvin;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'l':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'i':
                                                    if (strcmp(&(chars[6]), "ter") == 0)
                                                        return Tag_decaliter;
                                                    break;
                                                case 'u':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[7]), "en") == 0)
                                                                return Tag_decalumen;
                                                            break;
                                                        case 'x':
                                                            if (chars[7] == 0)
                                                                return Tag_decalux;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'm':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "ter") == 0)
                                                        return Tag_decameter;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[6]), "le") == 0)
                                                        return Tag_decamole;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'n':
                                            if (strcmp(&(chars[5]), "ewton") == 0)
                                                return Tag_decanewton;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[5]), "hm") == 0)
                                                return Tag_decaohm;
                                            break;
                                        case 'p':
                                            if (strcmp(&(chars[5]), "ascal") == 0)
                                                return Tag_decapascal;
                                            break;
                                        case 'r':
                                            if (strcmp(&(chars[5]), "adian") == 0)
                                                return Tag_decaradian;
                                            break;
                                        case 's':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "cond") == 0)
                                                        return Tag_decasecond;
                                                    break;
                                                case 'i':
                                                    if (strncmp(&(chars[6]), "e", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[7]))
                                                          {
                                                            case 'm':
                                                                if (strcmp(&(chars[8]), "ens") == 0)
                                                                    return Tag_decasiemens;
                                                                break;
                                                            case 'v':
                                                                if (strcmp(&(chars[8]), "ert") == 0)
                                                                    return Tag_decasievert;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 't':
                                                    if (strcmp(&(chars[6]), "eradian") == 0)
                                                        return Tag_decasteradian;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 't':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "sla") == 0)
                                                        return Tag_decatesla;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[6]), "nne") == 0)
                                                        return Tag_decatonne;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'v':
                                            if (strcmp(&(chars[5]), "olt") == 0)
                                                return Tag_decavolt;
                                            break;
                                        case 'w':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[6]), "tt") == 0)
                                                        return Tag_decawatt;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "ber") == 0)
                                                        return Tag_decaweber;
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
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[5]), "mpere") == 0)
                                                return Tag_deciampere;
                                            break;
                                        case 'b':
                                            if (strcmp(&(chars[5]), "ecquerel") == 0)
                                                return Tag_decibecquerel;
                                            break;
                                        case 'c':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[6]), "ndela") == 0)
                                                        return Tag_decicandela;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[6]), "ulomb") == 0)
                                                        return Tag_decicoulomb;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'd':
                                            if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                                return Tag_decidegree_celsius;
                                            break;
                                        case 'f':
                                            if (strcmp(&(chars[5]), "arad") == 0)
                                                return Tag_decifarad;
                                            break;
                                        case 'g':
                                            if (strncmp(&(chars[5]), "ra", 2) == 0)
                                              {
                                                switch ((unsigned char)(chars[7]))
                                                  {
                                                    case 'm':
                                                        if (chars[8] == 0)
                                                            return Tag_decigram;
                                                        break;
                                                    case 'y':
                                                        if (chars[8] == 0)
                                                            return Tag_decigray;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'h':
                                            if (strncmp(&(chars[5]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'n':
                                                        if (strcmp(&(chars[7]), "ry") == 0)
                                                            return Tag_decihenry;
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(chars[7]), "tz") == 0)
                                                            return Tag_decihertz;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'j':
                                            if (strcmp(&(chars[5]), "oule") == 0)
                                                return Tag_decijoule;
                                            break;
                                        case 'k':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[6]), "tal") == 0)
                                                        return Tag_decikatal;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "lvin") == 0)
                                                        return Tag_decikelvin;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'l':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'i':
                                                    if (strcmp(&(chars[6]), "ter") == 0)
                                                        return Tag_deciliter;
                                                    break;
                                                case 'u':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[7]), "en") == 0)
                                                                return Tag_decilumen;
                                                            break;
                                                        case 'x':
                                                            if (chars[7] == 0)
                                                                return Tag_decilux;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'm':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "ter") == 0)
                                                        return Tag_decimeter;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[6]), "le") == 0)
                                                        return Tag_decimole;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'n':
                                            if (strcmp(&(chars[5]), "ewton") == 0)
                                                return Tag_decinewton;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[5]), "hm") == 0)
                                                return Tag_deciohm;
                                            break;
                                        case 'p':
                                            if (strcmp(&(chars[5]), "ascal") == 0)
                                                return Tag_decipascal;
                                            break;
                                        case 'r':
                                            if (strcmp(&(chars[5]), "adian") == 0)
                                                return Tag_deciradian;
                                            break;
                                        case 's':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "cond") == 0)
                                                        return Tag_decisecond;
                                                    break;
                                                case 'i':
                                                    if (strncmp(&(chars[6]), "e", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[7]))
                                                          {
                                                            case 'm':
                                                                if (strcmp(&(chars[8]), "ens") == 0)
                                                                    return Tag_decisiemens;
                                                                break;
                                                            case 'v':
                                                                if (strcmp(&(chars[8]), "ert") == 0)
                                                                    return Tag_decisievert;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 't':
                                                    if (strcmp(&(chars[6]), "eradian") == 0)
                                                        return Tag_decisteradian;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 't':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "sla") == 0)
                                                        return Tag_decitesla;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[6]), "nne") == 0)
                                                        return Tag_decitonne;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'v':
                                            if (strcmp(&(chars[5]), "olt") == 0)
                                                return Tag_decivolt;
                                            break;
                                        case 'w':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[6]), "tt") == 0)
                                                        return Tag_deciwatt;
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(chars[6]), "ber") == 0)
                                                        return Tag_deciweber;
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
                        case 'g':
                            if (strncmp(&(chars[3]), "ree_", 4) == 0)
                              {
                                switch ((unsigned char)(chars[7]))
                                  {
                                    case 'c':
                                        if (strcmp(&(chars[8]), "elsius") == 0)
                                            return Tag_degree_celsius;
                                        break;
                                    case 'f':
                                        if (strcmp(&(chars[8]), "ahrenheit") == 0)
                                            return Tag_degree_fahrenheit;
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
                case 'r':
                    if (strcmp(&(chars[2]), "am") == 0)
                        return Tag_dram;
                    break;
                default:
                    break;
              }
            break;
        case 'e':
            if (strncmp(&(chars[1]), "xa", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'a':
                        if (strcmp(&(chars[4]), "mpere") == 0)
                            return Tag_exaampere;
                        break;
                    case 'b':
                        if (strcmp(&(chars[4]), "ecquerel") == 0)
                            return Tag_exabecquerel;
                        break;
                    case 'c':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "ndela") == 0)
                                    return Tag_exacandela;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "ulomb") == 0)
                                    return Tag_exacoulomb;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'd':
                        if (strcmp(&(chars[4]), "egree_celsius") == 0)
                            return Tag_exadegree_celsius;
                        break;
                    case 'f':
                        if (strcmp(&(chars[4]), "arad") == 0)
                            return Tag_exafarad;
                        break;
                    case 'g':
                        if (strncmp(&(chars[4]), "ra", 2) == 0)
                          {
                            switch ((unsigned char)(chars[6]))
                              {
                                case 'm':
                                    if (chars[7] == 0)
                                        return Tag_exagram;
                                    break;
                                case 'y':
                                    if (chars[7] == 0)
                                        return Tag_exagray;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'h':
                        if (strncmp(&(chars[4]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(chars[5]))
                              {
                                case 'n':
                                    if (strcmp(&(chars[6]), "ry") == 0)
                                        return Tag_exahenry;
                                    break;
                                case 'r':
                                    if (strcmp(&(chars[6]), "tz") == 0)
                                        return Tag_exahertz;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'j':
                        if (strcmp(&(chars[4]), "oule") == 0)
                            return Tag_exajoule;
                        break;
                    case 'k':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "tal") == 0)
                                    return Tag_exakatal;
                                break;
                            case 'e':
                                if (strcmp(&(chars[5]), "lvin") == 0)
                                    return Tag_exakelvin;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'l':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'i':
                                if (strcmp(&(chars[5]), "ter") == 0)
                                    return Tag_exaliter;
                                break;
                            case 'u':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'm':
                                        if (strcmp(&(chars[6]), "en") == 0)
                                            return Tag_exalumen;
                                        break;
                                    case 'x':
                                        if (chars[6] == 0)
                                            return Tag_exalux;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'm':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'e':
                                if (strcmp(&(chars[5]), "ter") == 0)
                                    return Tag_exameter;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "le") == 0)
                                    return Tag_examole;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'n':
                        if (strcmp(&(chars[4]), "ewton") == 0)
                            return Tag_exanewton;
                        break;
                    case 'o':
                        if (strcmp(&(chars[4]), "hm") == 0)
                            return Tag_exaohm;
                        break;
                    case 'p':
                        if (strcmp(&(chars[4]), "ascal") == 0)
                            return Tag_exapascal;
                        break;
                    case 'r':
                        if (strcmp(&(chars[4]), "adian") == 0)
                            return Tag_exaradian;
                        break;
                    case 's':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'e':
                                if (strcmp(&(chars[5]), "cond") == 0)
                                    return Tag_exasecond;
                                break;
                            case 'i':
                                if (strncmp(&(chars[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'm':
                                            if (strcmp(&(chars[7]), "ens") == 0)
                                                return Tag_exasiemens;
                                            break;
                                        case 'v':
                                            if (strcmp(&(chars[7]), "ert") == 0)
                                                return Tag_exasievert;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 't':
                                if (strcmp(&(chars[5]), "eradian") == 0)
                                    return Tag_exasteradian;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'e':
                                if (strcmp(&(chars[5]), "sla") == 0)
                                    return Tag_exatesla;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "nne") == 0)
                                    return Tag_exatonne;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'v':
                        if (strcmp(&(chars[4]), "olt") == 0)
                            return Tag_exavolt;
                        break;
                    case 'w':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "tt") == 0)
                                    return Tag_exawatt;
                                break;
                            case 'e':
                                if (strcmp(&(chars[5]), "ber") == 0)
                                    return Tag_exaweber;
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
        case 'f':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'r':
                            if (strcmp(&(chars[3]), "ad") == 0)
                                return Tag_farad;
                            break;
                        case 't':
                            if (strcmp(&(chars[3]), "hom") == 0)
                                return Tag_fathom;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strncmp(&(chars[2]), "mto", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'a':
                                if (strcmp(&(chars[6]), "mpere") == 0)
                                    return Tag_femtoampere;
                                break;
                            case 'b':
                                if (strcmp(&(chars[6]), "ecquerel") == 0)
                                    return Tag_femtobecquerel;
                                break;
                            case 'c':
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[7]), "ndela") == 0)
                                            return Tag_femtocandela;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[7]), "ulomb") == 0)
                                            return Tag_femtocoulomb;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                    return Tag_femtodegree_celsius;
                                break;
                            case 'f':
                                if (strcmp(&(chars[6]), "arad") == 0)
                                    return Tag_femtofarad;
                                break;
                            case 'g':
                                if (strncmp(&(chars[6]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[8]))
                                      {
                                        case 'm':
                                            if (chars[9] == 0)
                                                return Tag_femtogram;
                                            break;
                                        case 'y':
                                            if (chars[9] == 0)
                                                return Tag_femtogray;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(chars[6]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[7]))
                                      {
                                        case 'n':
                                            if (strcmp(&(chars[8]), "ry") == 0)
                                                return Tag_femtohenry;
                                            break;
                                        case 'r':
                                            if (strcmp(&(chars[8]), "tz") == 0)
                                                return Tag_femtohertz;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(chars[6]), "oule") == 0)
                                    return Tag_femtojoule;
                                break;
                            case 'k':
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[7]), "tal") == 0)
                                            return Tag_femtokatal;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[7]), "lvin") == 0)
                                            return Tag_femtokelvin;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[7]), "ter") == 0)
                                            return Tag_femtoliter;
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(chars[7]))
                                          {
                                            case 'm':
                                                if (strcmp(&(chars[8]), "en") == 0)
                                                    return Tag_femtolumen;
                                                break;
                                            case 'x':
                                                if (chars[8] == 0)
                                                    return Tag_femtolux;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'm':
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[7]), "ter") == 0)
                                            return Tag_femtometer;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[7]), "le") == 0)
                                            return Tag_femtomole;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(chars[6]), "ewton") == 0)
                                    return Tag_femtonewton;
                                break;
                            case 'o':
                                if (strcmp(&(chars[6]), "hm") == 0)
                                    return Tag_femtoohm;
                                break;
                            case 'p':
                                if (strcmp(&(chars[6]), "ascal") == 0)
                                    return Tag_femtopascal;
                                break;
                            case 'r':
                                if (strcmp(&(chars[6]), "adian") == 0)
                                    return Tag_femtoradian;
                                break;
                            case 's':
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[7]), "cond") == 0)
                                            return Tag_femtosecond;
                                        break;
                                    case 'i':
                                        if (strncmp(&(chars[7]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[8]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(chars[9]), "ens") == 0)
                                                        return Tag_femtosiemens;
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(chars[9]), "ert") == 0)
                                                        return Tag_femtosievert;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(chars[7]), "eradian") == 0)
                                            return Tag_femtosteradian;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[7]), "sla") == 0)
                                            return Tag_femtotesla;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[7]), "nne") == 0)
                                            return Tag_femtotonne;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(chars[6]), "olt") == 0)
                                    return Tag_femtovolt;
                                break;
                            case 'w':
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[7]), "tt") == 0)
                                            return Tag_femtowatt;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[7]), "ber") == 0)
                                            return Tag_femtoweber;
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
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'o':
                            if (strcmp(&(chars[3]), "t") == 0)
                                return Tag_foot;
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "tnight") == 0)
                                return Tag_fortnight;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "rlong") == 0)
                        return Tag_furlong;
                    break;
                default:
                    break;
              }
            break;
        case 'g':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strncmp(&(chars[2]), "ga", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "mpere") == 0)
                                    return Tag_gigaampere;
                                break;
                            case 'b':
                                if (strcmp(&(chars[5]), "ecquerel") == 0)
                                    return Tag_gigabecquerel;
                                break;
                            case 'c':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "ndela") == 0)
                                            return Tag_gigacandela;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "ulomb") == 0)
                                            return Tag_gigacoulomb;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                    return Tag_gigadegree_celsius;
                                break;
                            case 'f':
                                if (strcmp(&(chars[5]), "arad") == 0)
                                    return Tag_gigafarad;
                                break;
                            case 'g':
                                if (strncmp(&(chars[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[7]))
                                      {
                                        case 'm':
                                            if (chars[8] == 0)
                                                return Tag_gigagram;
                                            break;
                                        case 'y':
                                            if (chars[8] == 0)
                                                return Tag_gigagray;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(chars[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(chars[7]), "ry") == 0)
                                                return Tag_gigahenry;
                                            break;
                                        case 'r':
                                            if (strcmp(&(chars[7]), "tz") == 0)
                                                return Tag_gigahertz;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(chars[5]), "oule") == 0)
                                    return Tag_gigajoule;
                                break;
                            case 'k':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tal") == 0)
                                            return Tag_gigakatal;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "lvin") == 0)
                                            return Tag_gigakelvin;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_gigaliter;
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(chars[7]), "en") == 0)
                                                    return Tag_gigalumen;
                                                break;
                                            case 'x':
                                                if (chars[7] == 0)
                                                    return Tag_gigalux;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'm':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_gigameter;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "le") == 0)
                                            return Tag_gigamole;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(chars[5]), "ewton") == 0)
                                    return Tag_giganewton;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "hm") == 0)
                                    return Tag_gigaohm;
                                break;
                            case 'p':
                                if (strcmp(&(chars[5]), "ascal") == 0)
                                    return Tag_gigapascal;
                                break;
                            case 'r':
                                if (strcmp(&(chars[5]), "adian") == 0)
                                    return Tag_gigaradian;
                                break;
                            case 's':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "cond") == 0)
                                            return Tag_gigasecond;
                                        break;
                                    case 'i':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(chars[8]), "ens") == 0)
                                                        return Tag_gigasiemens;
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(chars[8]), "ert") == 0)
                                                        return Tag_gigasievert;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(chars[6]), "eradian") == 0)
                                            return Tag_gigasteradian;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "sla") == 0)
                                            return Tag_gigatesla;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "nne") == 0)
                                            return Tag_gigatonne;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(chars[5]), "olt") == 0)
                                    return Tag_gigavolt;
                                break;
                            case 'w':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tt") == 0)
                                            return Tag_gigawatt;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ber") == 0)
                                            return Tag_gigaweber;
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
                case 'r':
                    if (strncmp(&(chars[2]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'i':
                                if (strcmp(&(chars[4]), "n") == 0)
                                    return Tag_grain;
                                break;
                            case 'm':
                                if (chars[4] == 0)
                                    return Tag_gram;
                                break;
                            case 'y':
                                if (chars[4] == 0)
                                    return Tag_gray;
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
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "nd") == 0)
                        return Tag_hand;
                    break;
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'c':
                            if (strncmp(&(chars[3]), "t", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[5]), "re") == 0)
                                            return Tag_hectare;
                                        break;
                                    case 'o':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "mpere") == 0)
                                                    return Tag_hectoampere;
                                                break;
                                            case 'b':
                                                if (strcmp(&(chars[6]), "ecquerel") == 0)
                                                    return Tag_hectobecquerel;
                                                break;
                                            case 'c':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'a':
                                                        if (strcmp(&(chars[7]), "ndela") == 0)
                                                            return Tag_hectocandela;
                                                        break;
                                                    case 'o':
                                                        if (strcmp(&(chars[7]), "ulomb") == 0)
                                                            return Tag_hectocoulomb;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'd':
                                                if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                                    return Tag_hectodegree_celsius;
                                                break;
                                            case 'f':
                                                if (strcmp(&(chars[6]), "arad") == 0)
                                                    return Tag_hectofarad;
                                                break;
                                            case 'g':
                                                if (strncmp(&(chars[6]), "ra", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'm':
                                                            if (chars[9] == 0)
                                                                return Tag_hectogram;
                                                            break;
                                                        case 'y':
                                                            if (chars[9] == 0)
                                                                return Tag_hectogray;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'h':
                                                if (strncmp(&(chars[6]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[7]))
                                                      {
                                                        case 'n':
                                                            if (strcmp(&(chars[8]), "ry") == 0)
                                                                return Tag_hectohenry;
                                                            break;
                                                        case 'r':
                                                            if (strcmp(&(chars[8]), "tz") == 0)
                                                                return Tag_hectohertz;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'j':
                                                if (strcmp(&(chars[6]), "oule") == 0)
                                                    return Tag_hectojoule;
                                                break;
                                            case 'k':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'a':
                                                        if (strcmp(&(chars[7]), "tal") == 0)
                                                            return Tag_hectokatal;
                                                        break;
                                                    case 'e':
                                                        if (strcmp(&(chars[7]), "lvin") == 0)
                                                            return Tag_hectokelvin;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'l':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'i':
                                                        if (strcmp(&(chars[7]), "ter") == 0)
                                                            return Tag_hectoliter;
                                                        break;
                                                    case 'u':
                                                        switch ((unsigned char)(chars[7]))
                                                          {
                                                            case 'm':
                                                                if (strcmp(&(chars[8]), "en") == 0)
                                                                    return Tag_hectolumen;
                                                                break;
                                                            case 'x':
                                                                if (chars[8] == 0)
                                                                    return Tag_hectolux;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'm':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'e':
                                                        if (strcmp(&(chars[7]), "ter") == 0)
                                                            return Tag_hectometer;
                                                        break;
                                                    case 'o':
                                                        if (strcmp(&(chars[7]), "le") == 0)
                                                            return Tag_hectomole;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'n':
                                                if (strcmp(&(chars[6]), "ewton") == 0)
                                                    return Tag_hectonewton;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "hm") == 0)
                                                    return Tag_hectoohm;
                                                break;
                                            case 'p':
                                                if (strcmp(&(chars[6]), "ascal") == 0)
                                                    return Tag_hectopascal;
                                                break;
                                            case 'r':
                                                if (strcmp(&(chars[6]), "adian") == 0)
                                                    return Tag_hectoradian;
                                                break;
                                            case 's':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'e':
                                                        if (strcmp(&(chars[7]), "cond") == 0)
                                                            return Tag_hectosecond;
                                                        break;
                                                    case 'i':
                                                        if (strncmp(&(chars[7]), "e", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(chars[8]))
                                                              {
                                                                case 'm':
                                                                    if (strcmp(&(chars[9]), "ens") == 0)
                                                                        return Tag_hectosiemens;
                                                                    break;
                                                                case 'v':
                                                                    if (strcmp(&(chars[9]), "ert") == 0)
                                                                        return Tag_hectosievert;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 't':
                                                        if (strcmp(&(chars[7]), "eradian") == 0)
                                                            return Tag_hectosteradian;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 't':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'e':
                                                        if (strcmp(&(chars[7]), "sla") == 0)
                                                            return Tag_hectotesla;
                                                        break;
                                                    case 'o':
                                                        if (strcmp(&(chars[7]), "nne") == 0)
                                                            return Tag_hectotonne;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'v':
                                                if (strcmp(&(chars[6]), "olt") == 0)
                                                    return Tag_hectovolt;
                                                break;
                                            case 'w':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'a':
                                                        if (strcmp(&(chars[7]), "tt") == 0)
                                                            return Tag_hectowatt;
                                                        break;
                                                    case 'e':
                                                        if (strcmp(&(chars[7]), "ber") == 0)
                                                            return Tag_hectoweber;
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
                              }
                            break;
                        case 'l':
                            if (strcmp(&(chars[3]), "ek") == 0)
                                return Tag_helek;
                            break;
                        case 'n':
                            if (strcmp(&(chars[3]), "ry") == 0)
                                return Tag_henry;
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "tz") == 0)
                                return Tag_hertz;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ur") == 0)
                        return Tag_hour;
                    break;
                default:
                    break;
              }
            break;
        case 'i':
            switch ((unsigned char)(chars[1]))
              {
                case 'm':
                    if (strncmp(&(chars[2]), "perial_", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'c':
                                if (strcmp(&(chars[10]), "up") == 0)
                                    return Tag_imperial_cup;
                                break;
                            case 'f':
                                if (strncmp(&(chars[10]), "luid_", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[15]))
                                      {
                                        case 'd':
                                            if (strcmp(&(chars[16]), "ram") == 0)
                                                return Tag_imperial_fluid_dram;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[16]), "unce") == 0)
                                                return Tag_imperial_fluid_ounce;
                                            break;
                                        case 's':
                                            if (strcmp(&(chars[16]), "cruple") == 0)
                                                return Tag_imperial_fluid_scruple;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'g':
                                switch ((unsigned char)(chars[10]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[11]), "llon") == 0)
                                            return Tag_imperial_gallon;
                                        break;
                                    case 'i':
                                        if (strcmp(&(chars[11]), "ll") == 0)
                                            return Tag_imperial_gill;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'm':
                                if (strcmp(&(chars[10]), "inim") == 0)
                                    return Tag_imperial_minim;
                                break;
                            case 'p':
                                if (strcmp(&(chars[10]), "int") == 0)
                                    return Tag_imperial_pint;
                                break;
                            case 'q':
                                if (strcmp(&(chars[10]), "uart") == 0)
                                    return Tag_imperial_quart;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "ch") == 0)
                        return Tag_inch;
                    break;
                default:
                    break;
              }
            break;
        case 'j':
            if (strcmp(&(chars[1]), "oule") == 0)
                return Tag_joule;
            break;
        case 'k':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "tal") == 0)
                        return Tag_katal;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "lvin") == 0)
                        return Tag_kelvin;
                    break;
                case 'i':
                    if (strncmp(&(chars[2]), "lo", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "mpere") == 0)
                                    return Tag_kiloampere;
                                break;
                            case 'b':
                                if (strcmp(&(chars[5]), "ecquerel") == 0)
                                    return Tag_kilobecquerel;
                                break;
                            case 'c':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'l':
                                                if (strcmp(&(chars[7]), "orie") == 0)
                                                    return Tag_kilocalorie;
                                                break;
                                            case 'n':
                                                if (strcmp(&(chars[7]), "dela") == 0)
                                                    return Tag_kilocandela;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "ulomb") == 0)
                                            return Tag_kilocoulomb;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                    return Tag_kilodegree_celsius;
                                break;
                            case 'f':
                                if (strcmp(&(chars[5]), "arad") == 0)
                                    return Tag_kilofarad;
                                break;
                            case 'g':
                                if (strncmp(&(chars[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[7]))
                                      {
                                        case 'm':
                                            if (chars[8] == 0)
                                                return Tag_kilogram;
                                            break;
                                        case 'y':
                                            if (chars[8] == 0)
                                                return Tag_kilogray;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(chars[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(chars[7]), "ry") == 0)
                                                return Tag_kilohenry;
                                            break;
                                        case 'r':
                                            if (strcmp(&(chars[7]), "tz") == 0)
                                                return Tag_kilohertz;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(chars[5]), "oule") == 0)
                                    return Tag_kilojoule;
                                break;
                            case 'k':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tal") == 0)
                                            return Tag_kilokatal;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "lvin") == 0)
                                            return Tag_kilokelvin;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_kiloliter;
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(chars[7]), "en") == 0)
                                                    return Tag_kilolumen;
                                                break;
                                            case 'x':
                                                if (chars[7] == 0)
                                                    return Tag_kilolux;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'm':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_kilometer;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "le") == 0)
                                            return Tag_kilomole;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(chars[5]), "ewton") == 0)
                                    return Tag_kilonewton;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "hm") == 0)
                                    return Tag_kiloohm;
                                break;
                            case 'p':
                                if (strcmp(&(chars[5]), "ascal") == 0)
                                    return Tag_kilopascal;
                                break;
                            case 'r':
                                if (strcmp(&(chars[5]), "adian") == 0)
                                    return Tag_kiloradian;
                                break;
                            case 's':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "cond") == 0)
                                            return Tag_kilosecond;
                                        break;
                                    case 'i':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(chars[8]), "ens") == 0)
                                                        return Tag_kilosiemens;
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(chars[8]), "ert") == 0)
                                                        return Tag_kilosievert;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(chars[6]), "eradian") == 0)
                                            return Tag_kilosteradian;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "sla") == 0)
                                            return Tag_kilotesla;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "nne") == 0)
                                            return Tag_kilotonne;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(chars[5]), "olt") == 0)
                                    return Tag_kilovolt;
                                break;
                            case 'w':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tt") == 0)
                                            return Tag_kilowatt;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ber") == 0)
                                            return Tag_kiloweber;
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
            break;
        case 'l':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ague") == 0)
                        return Tag_league;
                    break;
                case 'i':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'n':
                            if (strcmp(&(chars[3]), "k") == 0)
                                return Tag_link;
                            break;
                        case 't':
                            if (strcmp(&(chars[3]), "er") == 0)
                                return Tag_liter;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strncmp(&(chars[2]), "ng_", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'h':
                                if (strcmp(&(chars[6]), "undredweight") == 0)
                                    return Tag_long_hundredweight;
                                break;
                            case 't':
                                if (strcmp(&(chars[6]), "on") == 0)
                                    return Tag_long_ton;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'm':
                            if (strcmp(&(chars[3]), "en") == 0)
                                return Tag_lumen;
                            break;
                        case 's':
                            if (strcmp(&(chars[3]), "trum") == 0)
                                return Tag_lustrum;
                            break;
                        case 'x':
                            if (chars[3] == 0)
                                return Tag_lux;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'm':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'c':
                            if (strcmp(&(chars[3]), "hanical_horsepower") == 0)
                                return Tag_mechanical_horsepower;
                            break;
                        case 'g':
                            if (strncmp(&(chars[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[5]), "mpere") == 0)
                                            return Tag_megaampere;
                                        break;
                                    case 'b':
                                        if (strcmp(&(chars[5]), "ecquerel") == 0)
                                            return Tag_megabecquerel;
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "ndela") == 0)
                                                    return Tag_megacandela;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "ulomb") == 0)
                                                    return Tag_megacoulomb;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                            return Tag_megadegree_celsius;
                                        break;
                                    case 'f':
                                        if (strcmp(&(chars[5]), "arad") == 0)
                                            return Tag_megafarad;
                                        break;
                                    case 'g':
                                        if (strncmp(&(chars[5]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (chars[8] == 0)
                                                        return Tag_megagram;
                                                    break;
                                                case 'y':
                                                    if (chars[8] == 0)
                                                        return Tag_megagray;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(chars[5]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[6]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(chars[7]), "ry") == 0)
                                                        return Tag_megahenry;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(chars[7]), "tz") == 0)
                                                        return Tag_megahertz;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(chars[5]), "oule") == 0)
                                            return Tag_megajoule;
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "tal") == 0)
                                                    return Tag_megakatal;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[6]), "lvin") == 0)
                                                    return Tag_megakelvin;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[6]), "ter") == 0)
                                                    return Tag_megaliter;
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[7]), "en") == 0)
                                                            return Tag_megalumen;
                                                        break;
                                                    case 'x':
                                                        if (chars[7] == 0)
                                                            return Tag_megalux;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'm':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "ter") == 0)
                                                    return Tag_megameter;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "le") == 0)
                                                    return Tag_megamole;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(chars[5]), "ewton") == 0)
                                            return Tag_meganewton;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[5]), "hm") == 0)
                                            return Tag_megaohm;
                                        break;
                                    case 'p':
                                        if (strcmp(&(chars[5]), "ascal") == 0)
                                            return Tag_megapascal;
                                        break;
                                    case 'r':
                                        if (strcmp(&(chars[5]), "adian") == 0)
                                            return Tag_megaradian;
                                        break;
                                    case 's':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "cond") == 0)
                                                    return Tag_megasecond;
                                                break;
                                            case 'i':
                                                if (strncmp(&(chars[6]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[7]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[8]), "ens") == 0)
                                                                return Tag_megasiemens;
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(chars[8]), "ert") == 0)
                                                                return Tag_megasievert;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(chars[6]), "eradian") == 0)
                                                    return Tag_megasteradian;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "sla") == 0)
                                                    return Tag_megatesla;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "nne") == 0)
                                                    return Tag_megatonne;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(chars[5]), "olt") == 0)
                                            return Tag_megavolt;
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "tt") == 0)
                                                    return Tag_megawatt;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[6]), "ber") == 0)
                                                    return Tag_megaweber;
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
                        case 't':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'e':
                                    if (strcmp(&(chars[4]), "r") == 0)
                                        return Tag_meter;
                                    break;
                                case 'r':
                                    if (strncmp(&(chars[4]), "ic_", 3) == 0)
                                      {
                                        switch ((unsigned char)(chars[7]))
                                          {
                                            case 'c':
                                                if (strcmp(&(chars[8]), "up") == 0)
                                                    return Tag_metric_cup;
                                                break;
                                            case 'h':
                                                if (strcmp(&(chars[8]), "orsepower") == 0)
                                                    return Tag_metric_horsepower;
                                                break;
                                            case 't':
                                                if (strcmp(&(chars[8]), "easpoon") == 0)
                                                    return Tag_metric_teaspoon;
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
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'c':
                            if (strncmp(&(chars[3]), "ro", 2) == 0)
                              {
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "mpere") == 0)
                                            return Tag_microampere;
                                        break;
                                    case 'b':
                                        if (strcmp(&(chars[6]), "ecquerel") == 0)
                                            return Tag_microbecquerel;
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "ndela") == 0)
                                                    return Tag_microcandela;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "ulomb") == 0)
                                                    return Tag_microcoulomb;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                            return Tag_microdegree_celsius;
                                        break;
                                    case 'f':
                                        if (strcmp(&(chars[6]), "arad") == 0)
                                            return Tag_microfarad;
                                        break;
                                    case 'g':
                                        if (strncmp(&(chars[6]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[8]))
                                              {
                                                case 'm':
                                                    if (chars[9] == 0)
                                                        return Tag_microgram;
                                                    break;
                                                case 'y':
                                                    if (chars[9] == 0)
                                                        return Tag_microgray;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(chars[8]), "ry") == 0)
                                                        return Tag_microhenry;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(chars[8]), "tz") == 0)
                                                        return Tag_microhertz;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(chars[6]), "oule") == 0)
                                            return Tag_microjoule;
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "tal") == 0)
                                                    return Tag_microkatal;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[7]), "lvin") == 0)
                                                    return Tag_microkelvin;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[7]), "ter") == 0)
                                                    return Tag_microliter;
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(chars[7]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[8]), "en") == 0)
                                                            return Tag_microlumen;
                                                        break;
                                                    case 'x':
                                                        if (chars[8] == 0)
                                                            return Tag_microlux;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'm':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "ter") == 0)
                                                    return Tag_micrometer;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "le") == 0)
                                                    return Tag_micromole;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(chars[6]), "ewton") == 0)
                                            return Tag_micronewton;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "hm") == 0)
                                            return Tag_microohm;
                                        break;
                                    case 'p':
                                        if (strcmp(&(chars[6]), "ascal") == 0)
                                            return Tag_micropascal;
                                        break;
                                    case 'r':
                                        if (strcmp(&(chars[6]), "adian") == 0)
                                            return Tag_microradian;
                                        break;
                                    case 's':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "cond") == 0)
                                                    return Tag_microsecond;
                                                break;
                                            case 'i':
                                                if (strncmp(&(chars[7]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[9]), "ens") == 0)
                                                                return Tag_microsiemens;
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(chars[9]), "ert") == 0)
                                                                return Tag_microsievert;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(chars[7]), "eradian") == 0)
                                                    return Tag_microsteradian;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "sla") == 0)
                                                    return Tag_microtesla;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "nne") == 0)
                                                    return Tag_microtonne;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(chars[6]), "olt") == 0)
                                            return Tag_microvolt;
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "tt") == 0)
                                                    return Tag_microwatt;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[7]), "ber") == 0)
                                                    return Tag_microweber;
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
                        case 'l':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'e':
                                    if (chars[4] == 0)
                                        return Tag_mile;
                                    break;
                                case 'l':
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[5]), "nnium") == 0)
                                                return Tag_millennium;
                                            break;
                                        case 'i':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(chars[6]), "mpere") == 0)
                                                        return Tag_milliampere;
                                                    break;
                                                case 'b':
                                                    if (strcmp(&(chars[6]), "ecquerel") == 0)
                                                        return Tag_millibecquerel;
                                                    break;
                                                case 'c':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(chars[7]), "ndela") == 0)
                                                                return Tag_millicandela;
                                                            break;
                                                        case 'o':
                                                            if (strcmp(&(chars[7]), "ulomb") == 0)
                                                                return Tag_millicoulomb;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'd':
                                                    if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                                        return Tag_millidegree_celsius;
                                                    break;
                                                case 'f':
                                                    if (strcmp(&(chars[6]), "arad") == 0)
                                                        return Tag_millifarad;
                                                    break;
                                                case 'g':
                                                    if (strncmp(&(chars[6]), "ra", 2) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[8]))
                                                          {
                                                            case 'm':
                                                                if (chars[9] == 0)
                                                                    return Tag_milligram;
                                                                break;
                                                            case 'y':
                                                                if (chars[9] == 0)
                                                                    return Tag_milligray;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'h':
                                                    if (strncmp(&(chars[6]), "e", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(chars[7]))
                                                          {
                                                            case 'n':
                                                                if (strcmp(&(chars[8]), "ry") == 0)
                                                                    return Tag_millihenry;
                                                                break;
                                                            case 'r':
                                                                if (strcmp(&(chars[8]), "tz") == 0)
                                                                    return Tag_millihertz;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'j':
                                                    if (strcmp(&(chars[6]), "oule") == 0)
                                                        return Tag_millijoule;
                                                    break;
                                                case 'k':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(chars[7]), "tal") == 0)
                                                                return Tag_millikatal;
                                                            break;
                                                        case 'e':
                                                            if (strcmp(&(chars[7]), "lvin") == 0)
                                                                return Tag_millikelvin;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'l':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'i':
                                                            if (strcmp(&(chars[7]), "ter") == 0)
                                                                return Tag_milliliter;
                                                            break;
                                                        case 'u':
                                                            switch ((unsigned char)(chars[7]))
                                                              {
                                                                case 'm':
                                                                    if (strcmp(&(chars[8]), "en") == 0)
                                                                        return Tag_millilumen;
                                                                    break;
                                                                case 'x':
                                                                    if (chars[8] == 0)
                                                                        return Tag_millilux;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'm':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(chars[7]), "ter") == 0)
                                                                return Tag_millimeter;
                                                            break;
                                                        case 'o':
                                                            if (strcmp(&(chars[7]), "le") == 0)
                                                                return Tag_millimole;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'n':
                                                    if (strcmp(&(chars[6]), "ewton") == 0)
                                                        return Tag_millinewton;
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(chars[6]), "hm") == 0)
                                                        return Tag_milliohm;
                                                    break;
                                                case 'p':
                                                    if (strcmp(&(chars[6]), "ascal") == 0)
                                                        return Tag_millipascal;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(chars[6]), "adian") == 0)
                                                        return Tag_milliradian;
                                                    break;
                                                case 's':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(chars[7]), "cond") == 0)
                                                                return Tag_millisecond;
                                                            break;
                                                        case 'i':
                                                            if (strncmp(&(chars[7]), "e", 1) == 0)
                                                              {
                                                                switch ((unsigned char)(chars[8]))
                                                                  {
                                                                    case 'm':
                                                                        if (strcmp(&(chars[9]), "ens") == 0)
                                                                            return Tag_millisiemens;
                                                                        break;
                                                                    case 'v':
                                                                        if (strcmp(&(chars[9]), "ert") == 0)
                                                                            return Tag_millisievert;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                              }
                                                            break;
                                                        case 't':
                                                            if (strcmp(&(chars[7]), "eradian") == 0)
                                                                return Tag_millisteradian;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 't':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(chars[7]), "sla") == 0)
                                                                return Tag_millitesla;
                                                            break;
                                                        case 'o':
                                                            if (strcmp(&(chars[7]), "nne") == 0)
                                                                return Tag_millitonne;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(chars[6]), "olt") == 0)
                                                        return Tag_millivolt;
                                                    break;
                                                case 'w':
                                                    switch ((unsigned char)(chars[6]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(chars[7]), "tt") == 0)
                                                                return Tag_milliwatt;
                                                            break;
                                                        case 'e':
                                                            if (strcmp(&(chars[7]), "ber") == 0)
                                                                return Tag_milliweber;
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
                                default:
                                    break;
                              }
                            break;
                        case 'n':
                            if (strcmp(&(chars[3]), "ute") == 0)
                                return Tag_minute;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'l':
                            if (strcmp(&(chars[3]), "e") == 0)
                                return Tag_mole;
                            break;
                        case 'n':
                            if (strcmp(&(chars[3]), "th") == 0)
                                return Tag_month;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'n':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'n':
                            if (strncmp(&(chars[3]), "o", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[5]), "mpere") == 0)
                                            return Tag_nanoampere;
                                        break;
                                    case 'b':
                                        if (strcmp(&(chars[5]), "ecquerel") == 0)
                                            return Tag_nanobecquerel;
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "ndela") == 0)
                                                    return Tag_nanocandela;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "ulomb") == 0)
                                                    return Tag_nanocoulomb;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                            return Tag_nanodegree_celsius;
                                        break;
                                    case 'f':
                                        if (strcmp(&(chars[5]), "arad") == 0)
                                            return Tag_nanofarad;
                                        break;
                                    case 'g':
                                        if (strncmp(&(chars[5]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (chars[8] == 0)
                                                        return Tag_nanogram;
                                                    break;
                                                case 'y':
                                                    if (chars[8] == 0)
                                                        return Tag_nanogray;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(chars[5]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[6]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(chars[7]), "ry") == 0)
                                                        return Tag_nanohenry;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(chars[7]), "tz") == 0)
                                                        return Tag_nanohertz;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(chars[5]), "oule") == 0)
                                            return Tag_nanojoule;
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "tal") == 0)
                                                    return Tag_nanokatal;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[6]), "lvin") == 0)
                                                    return Tag_nanokelvin;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[6]), "ter") == 0)
                                                    return Tag_nanoliter;
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[7]), "en") == 0)
                                                            return Tag_nanolumen;
                                                        break;
                                                    case 'x':
                                                        if (chars[7] == 0)
                                                            return Tag_nanolux;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'm':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "ter") == 0)
                                                    return Tag_nanometer;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "le") == 0)
                                                    return Tag_nanomole;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(chars[5]), "ewton") == 0)
                                            return Tag_nanonewton;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[5]), "hm") == 0)
                                            return Tag_nanoohm;
                                        break;
                                    case 'p':
                                        if (strcmp(&(chars[5]), "ascal") == 0)
                                            return Tag_nanopascal;
                                        break;
                                    case 'r':
                                        if (strcmp(&(chars[5]), "adian") == 0)
                                            return Tag_nanoradian;
                                        break;
                                    case 's':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "cond") == 0)
                                                    return Tag_nanosecond;
                                                break;
                                            case 'i':
                                                if (strncmp(&(chars[6]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[7]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[8]), "ens") == 0)
                                                                return Tag_nanosiemens;
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(chars[8]), "ert") == 0)
                                                                return Tag_nanosievert;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(chars[6]), "eradian") == 0)
                                                    return Tag_nanosteradian;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "sla") == 0)
                                                    return Tag_nanotesla;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "nne") == 0)
                                                    return Tag_nanotonne;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(chars[5]), "olt") == 0)
                                            return Tag_nanovolt;
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "tt") == 0)
                                                    return Tag_nanowatt;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[6]), "ber") == 0)
                                                    return Tag_nanoweber;
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
                        case 'u':
                            if (strcmp(&(chars[3]), "tical_mile") == 0)
                                return Tag_nautical_mile;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "wton") == 0)
                        return Tag_newton;
                    break;
                default:
                    break;
              }
            break;
        case 'o':
            switch ((unsigned char)(chars[1]))
              {
                case 'h':
                    if (strcmp(&(chars[2]), "m") == 0)
                        return Tag_ohm;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "l_barrel") == 0)
                        return Tag_oil_barrel;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "nce") == 0)
                        return Tag_ounce;
                    break;
                default:
                    break;
              }
            break;
        case 'p':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'r':
                            if (strcmp(&(chars[3]), "sec") == 0)
                                return Tag_parsec;
                            break;
                        case 's':
                            if (strcmp(&(chars[3]), "cal") == 0)
                                return Tag_pascal;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strncmp(&(chars[2]), "ta", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "mpere") == 0)
                                    return Tag_petaampere;
                                break;
                            case 'b':
                                if (strcmp(&(chars[5]), "ecquerel") == 0)
                                    return Tag_petabecquerel;
                                break;
                            case 'c':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "ndela") == 0)
                                            return Tag_petacandela;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "ulomb") == 0)
                                            return Tag_petacoulomb;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                    return Tag_petadegree_celsius;
                                break;
                            case 'f':
                                if (strcmp(&(chars[5]), "arad") == 0)
                                    return Tag_petafarad;
                                break;
                            case 'g':
                                if (strncmp(&(chars[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[7]))
                                      {
                                        case 'm':
                                            if (chars[8] == 0)
                                                return Tag_petagram;
                                            break;
                                        case 'y':
                                            if (chars[8] == 0)
                                                return Tag_petagray;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(chars[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(chars[7]), "ry") == 0)
                                                return Tag_petahenry;
                                            break;
                                        case 'r':
                                            if (strcmp(&(chars[7]), "tz") == 0)
                                                return Tag_petahertz;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(chars[5]), "oule") == 0)
                                    return Tag_petajoule;
                                break;
                            case 'k':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tal") == 0)
                                            return Tag_petakatal;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "lvin") == 0)
                                            return Tag_petakelvin;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_petaliter;
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(chars[7]), "en") == 0)
                                                    return Tag_petalumen;
                                                break;
                                            case 'x':
                                                if (chars[7] == 0)
                                                    return Tag_petalux;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'm':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_petameter;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "le") == 0)
                                            return Tag_petamole;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(chars[5]), "ewton") == 0)
                                    return Tag_petanewton;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "hm") == 0)
                                    return Tag_petaohm;
                                break;
                            case 'p':
                                if (strcmp(&(chars[5]), "ascal") == 0)
                                    return Tag_petapascal;
                                break;
                            case 'r':
                                if (strcmp(&(chars[5]), "adian") == 0)
                                    return Tag_petaradian;
                                break;
                            case 's':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "cond") == 0)
                                            return Tag_petasecond;
                                        break;
                                    case 'i':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(chars[8]), "ens") == 0)
                                                        return Tag_petasiemens;
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(chars[8]), "ert") == 0)
                                                        return Tag_petasievert;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(chars[6]), "eradian") == 0)
                                            return Tag_petasteradian;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "sla") == 0)
                                            return Tag_petatesla;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "nne") == 0)
                                            return Tag_petatonne;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(chars[5]), "olt") == 0)
                                    return Tag_petavolt;
                                break;
                            case 'w':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tt") == 0)
                                            return Tag_petawatt;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ber") == 0)
                                            return Tag_petaweber;
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
                    if (strncmp(&(chars[2]), "co", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "mpere") == 0)
                                    return Tag_picoampere;
                                break;
                            case 'b':
                                if (strcmp(&(chars[5]), "ecquerel") == 0)
                                    return Tag_picobecquerel;
                                break;
                            case 'c':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "ndela") == 0)
                                            return Tag_picocandela;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "ulomb") == 0)
                                            return Tag_picocoulomb;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                    return Tag_picodegree_celsius;
                                break;
                            case 'f':
                                if (strcmp(&(chars[5]), "arad") == 0)
                                    return Tag_picofarad;
                                break;
                            case 'g':
                                if (strncmp(&(chars[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[7]))
                                      {
                                        case 'm':
                                            if (chars[8] == 0)
                                                return Tag_picogram;
                                            break;
                                        case 'y':
                                            if (chars[8] == 0)
                                                return Tag_picogray;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(chars[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(chars[7]), "ry") == 0)
                                                return Tag_picohenry;
                                            break;
                                        case 'r':
                                            if (strcmp(&(chars[7]), "tz") == 0)
                                                return Tag_picohertz;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(chars[5]), "oule") == 0)
                                    return Tag_picojoule;
                                break;
                            case 'k':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tal") == 0)
                                            return Tag_picokatal;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "lvin") == 0)
                                            return Tag_picokelvin;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_picoliter;
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(chars[7]), "en") == 0)
                                                    return Tag_picolumen;
                                                break;
                                            case 'x':
                                                if (chars[7] == 0)
                                                    return Tag_picolux;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'm':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ter") == 0)
                                            return Tag_picometer;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "le") == 0)
                                            return Tag_picomole;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(chars[5]), "ewton") == 0)
                                    return Tag_piconewton;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "hm") == 0)
                                    return Tag_picoohm;
                                break;
                            case 'p':
                                if (strcmp(&(chars[5]), "ascal") == 0)
                                    return Tag_picopascal;
                                break;
                            case 'r':
                                if (strcmp(&(chars[5]), "adian") == 0)
                                    return Tag_picoradian;
                                break;
                            case 's':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "cond") == 0)
                                            return Tag_picosecond;
                                        break;
                                    case 'i':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(chars[8]), "ens") == 0)
                                                        return Tag_picosiemens;
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(chars[8]), "ert") == 0)
                                                        return Tag_picosievert;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(chars[6]), "eradian") == 0)
                                            return Tag_picosteradian;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[6]), "sla") == 0)
                                            return Tag_picotesla;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "nne") == 0)
                                            return Tag_picotonne;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(chars[5]), "olt") == 0)
                                    return Tag_picovolt;
                                break;
                            case 'w':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "tt") == 0)
                                            return Tag_picowatt;
                                        break;
                                    case 'e':
                                        if (strcmp(&(chars[6]), "ber") == 0)
                                            return Tag_picoweber;
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
                case 'o':
                    if (strcmp(&(chars[2]), "und") == 0)
                        return Tag_pound;
                    break;
                default:
                    break;
              }
            break;
        case 'q':
            if (strcmp(&(chars[1]), "uadrennium") == 0)
                return Tag_quadrennium;
            break;
        case 'r':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "dian") == 0)
                        return Tag_radian;
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'd':
                            if (chars[3] == 0)
                                return Tag_rod;
                            break;
                        case 'o':
                            if (strcmp(&(chars[3]), "d") == 0)
                                return Tag_rood;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 's':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "cond") == 0)
                        return Tag_second;
                    break;
                case 'h':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'a':
                            if (strcmp(&(chars[3]), "ke") == 0)
                                return Tag_shake;
                            break;
                        case 'o':
                            if (strncmp(&(chars[3]), "rt_", 3) == 0)
                              {
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 'h':
                                        if (strcmp(&(chars[7]), "undredweight") == 0)
                                            return Tag_short_hundredweight;
                                        break;
                                    case 't':
                                        if (strcmp(&(chars[7]), "on") == 0)
                                            return Tag_short_ton;
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
                case 'i':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'd':
                            if (strncmp(&(chars[3]), "ereal_", 6) == 0)
                              {
                                switch ((unsigned char)(chars[9]))
                                  {
                                    case 'd':
                                        if (strcmp(&(chars[10]), "ay") == 0)
                                            return Tag_sidereal_day;
                                        break;
                                    case 'y':
                                        if (strcmp(&(chars[10]), "ear") == 0)
                                            return Tag_sidereal_year;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'm':
                                    if (strcmp(&(chars[4]), "ens") == 0)
                                        return Tag_siemens;
                                    break;
                                case 'v':
                                    if (strcmp(&(chars[4]), "ert") == 0)
                                        return Tag_sievert;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 't':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'e':
                            if (strcmp(&(chars[3]), "radian") == 0)
                                return Tag_steradian;
                            break;
                        case 'o':
                            if (strcmp(&(chars[3]), "ne") == 0)
                                return Tag_stone;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'v':
                    if (strcmp(&(chars[2]), "edberg") == 0)
                        return Tag_svedberg;
                    break;
                default:
                    break;
              }
            break;
        case 't':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'r':
                            if (strncmp(&(chars[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[5]), "mpere") == 0)
                                            return Tag_teraampere;
                                        break;
                                    case 'b':
                                        if (strcmp(&(chars[5]), "ecquerel") == 0)
                                            return Tag_terabecquerel;
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "ndela") == 0)
                                                    return Tag_teracandela;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "ulomb") == 0)
                                                    return Tag_teracoulomb;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(chars[5]), "egree_celsius") == 0)
                                            return Tag_teradegree_celsius;
                                        break;
                                    case 'f':
                                        if (strcmp(&(chars[5]), "arad") == 0)
                                            return Tag_terafarad;
                                        break;
                                    case 'g':
                                        if (strncmp(&(chars[5]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (chars[8] == 0)
                                                        return Tag_teragram;
                                                    break;
                                                case 'y':
                                                    if (chars[8] == 0)
                                                        return Tag_teragray;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(chars[5]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[6]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(chars[7]), "ry") == 0)
                                                        return Tag_terahenry;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(chars[7]), "tz") == 0)
                                                        return Tag_terahertz;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(chars[5]), "oule") == 0)
                                            return Tag_terajoule;
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "tal") == 0)
                                                    return Tag_terakatal;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[6]), "lvin") == 0)
                                                    return Tag_terakelvin;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[6]), "ter") == 0)
                                                    return Tag_teraliter;
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(chars[6]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[7]), "en") == 0)
                                                            return Tag_teralumen;
                                                        break;
                                                    case 'x':
                                                        if (chars[7] == 0)
                                                            return Tag_teralux;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'm':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "ter") == 0)
                                                    return Tag_terameter;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "le") == 0)
                                                    return Tag_teramole;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(chars[5]), "ewton") == 0)
                                            return Tag_teranewton;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[5]), "hm") == 0)
                                            return Tag_teraohm;
                                        break;
                                    case 'p':
                                        if (strcmp(&(chars[5]), "ascal") == 0)
                                            return Tag_terapascal;
                                        break;
                                    case 'r':
                                        if (strcmp(&(chars[5]), "adian") == 0)
                                            return Tag_teraradian;
                                        break;
                                    case 's':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "cond") == 0)
                                                    return Tag_terasecond;
                                                break;
                                            case 'i':
                                                if (strncmp(&(chars[6]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[7]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[8]), "ens") == 0)
                                                                return Tag_terasiemens;
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(chars[8]), "ert") == 0)
                                                                return Tag_terasievert;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(chars[6]), "eradian") == 0)
                                                    return Tag_terasteradian;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[6]), "sla") == 0)
                                                    return Tag_teratesla;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "nne") == 0)
                                                    return Tag_teratonne;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(chars[5]), "olt") == 0)
                                            return Tag_teravolt;
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[6]), "tt") == 0)
                                                    return Tag_terawatt;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[6]), "ber") == 0)
                                                    return Tag_teraweber;
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
                        case 's':
                            if (strcmp(&(chars[3]), "la") == 0)
                                return Tag_tesla;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "ou") == 0)
                        return Tag_thou;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "nne") == 0)
                        return Tag_tonne;
                    break;
                case 'r':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'i':
                            if (strcmp(&(chars[3]), "ennium") == 0)
                                return Tag_triennium;
                            break;
                        case 'o':
                            if (strcmp(&(chars[3]), "y_ounce") == 0)
                                return Tag_troy_ounce;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'u':
            if (strncmp(&(chars[1]), "s_", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'b':
                        if (strcmp(&(chars[4]), "ushel") == 0)
                            return Tag_us_bushel;
                        break;
                    case 'c':
                        if (strncmp(&(chars[4]), "ustomary_", 9) == 0)
                          {
                            switch ((unsigned char)(chars[13]))
                              {
                                case 'c':
                                    if (strcmp(&(chars[14]), "up") == 0)
                                        return Tag_us_customary_cup;
                                    break;
                                case 't':
                                    switch ((unsigned char)(chars[14]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[15]), "blespoon") == 0)
                                                return Tag_us_customary_tablespoon;
                                            break;
                                        case 'e':
                                            if (strcmp(&(chars[15]), "aspoon") == 0)
                                                return Tag_us_customary_teaspoon;
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
                    case 'd':
                        if (strncmp(&(chars[4]), "ry_", 3) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 'g':
                                    if (strcmp(&(chars[8]), "allon") == 0)
                                        return Tag_us_dry_gallon;
                                    break;
                                case 'p':
                                    if (strcmp(&(chars[8]), "int") == 0)
                                        return Tag_us_dry_pint;
                                    break;
                                case 'q':
                                    if (strcmp(&(chars[8]), "uart") == 0)
                                        return Tag_us_dry_quart;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'f':
                        if (strncmp(&(chars[4]), "luid_", 5) == 0)
                          {
                            switch ((unsigned char)(chars[9]))
                              {
                                case 'd':
                                    if (strcmp(&(chars[10]), "ram") == 0)
                                        return Tag_us_fluid_dram;
                                    break;
                                case 'o':
                                    if (strcmp(&(chars[10]), "unce") == 0)
                                        return Tag_us_fluid_ounce;
                                    break;
                                case 's':
                                    if (strcmp(&(chars[10]), "cruple") == 0)
                                        return Tag_us_fluid_scruple;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'g':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'a':
                                if (strcmp(&(chars[5]), "llon") == 0)
                                    return Tag_us_gallon;
                                break;
                            case 'i':
                                if (strcmp(&(chars[5]), "ll") == 0)
                                    return Tag_us_gill;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'l':
                        if (strncmp(&(chars[4]), "egal_", 5) == 0)
                          {
                            switch ((unsigned char)(chars[9]))
                              {
                                case 'c':
                                    if (strcmp(&(chars[10]), "up") == 0)
                                        return Tag_us_legal_cup;
                                    break;
                                case 't':
                                    if (strcmp(&(chars[10]), "ablespoon") == 0)
                                        return Tag_us_legal_tablespoon;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'm':
                        if (strcmp(&(chars[4]), "inim") == 0)
                            return Tag_us_minim;
                        break;
                    case 'p':
                        if (strcmp(&(chars[4]), "int") == 0)
                            return Tag_us_pint;
                        break;
                    case 'q':
                        if (strcmp(&(chars[4]), "uart") == 0)
                            return Tag_us_quart;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'v':
            if (strcmp(&(chars[1]), "olt") == 0)
                return Tag_volt;
            break;
        case 'w':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "tt") == 0)
                        return Tag_watt;
                    break;
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'b':
                            if (strcmp(&(chars[3]), "er") == 0)
                                return Tag_weber;
                            break;
                        case 'e':
                            if (strcmp(&(chars[3]), "k") == 0)
                                return Tag_week;
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
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "rd") == 0)
                        return Tag_yard;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "ar") == 0)
                        return Tag_year;
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'c':
                            if (strncmp(&(chars[3]), "to", 2) == 0)
                              {
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "mpere") == 0)
                                            return Tag_yoctoampere;
                                        break;
                                    case 'b':
                                        if (strcmp(&(chars[6]), "ecquerel") == 0)
                                            return Tag_yoctobecquerel;
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "ndela") == 0)
                                                    return Tag_yoctocandela;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "ulomb") == 0)
                                                    return Tag_yoctocoulomb;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                            return Tag_yoctodegree_celsius;
                                        break;
                                    case 'f':
                                        if (strcmp(&(chars[6]), "arad") == 0)
                                            return Tag_yoctofarad;
                                        break;
                                    case 'g':
                                        if (strncmp(&(chars[6]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[8]))
                                              {
                                                case 'm':
                                                    if (chars[9] == 0)
                                                        return Tag_yoctogram;
                                                    break;
                                                case 'y':
                                                    if (chars[9] == 0)
                                                        return Tag_yoctogray;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(chars[8]), "ry") == 0)
                                                        return Tag_yoctohenry;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(chars[8]), "tz") == 0)
                                                        return Tag_yoctohertz;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(chars[6]), "oule") == 0)
                                            return Tag_yoctojoule;
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "tal") == 0)
                                                    return Tag_yoctokatal;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[7]), "lvin") == 0)
                                                    return Tag_yoctokelvin;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[7]), "ter") == 0)
                                                    return Tag_yoctoliter;
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(chars[7]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[8]), "en") == 0)
                                                            return Tag_yoctolumen;
                                                        break;
                                                    case 'x':
                                                        if (chars[8] == 0)
                                                            return Tag_yoctolux;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'm':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "ter") == 0)
                                                    return Tag_yoctometer;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "le") == 0)
                                                    return Tag_yoctomole;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(chars[6]), "ewton") == 0)
                                            return Tag_yoctonewton;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "hm") == 0)
                                            return Tag_yoctoohm;
                                        break;
                                    case 'p':
                                        if (strcmp(&(chars[6]), "ascal") == 0)
                                            return Tag_yoctopascal;
                                        break;
                                    case 'r':
                                        if (strcmp(&(chars[6]), "adian") == 0)
                                            return Tag_yoctoradian;
                                        break;
                                    case 's':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "cond") == 0)
                                                    return Tag_yoctosecond;
                                                break;
                                            case 'i':
                                                if (strncmp(&(chars[7]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[9]), "ens") == 0)
                                                                return Tag_yoctosiemens;
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(chars[9]), "ert") == 0)
                                                                return Tag_yoctosievert;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(chars[7]), "eradian") == 0)
                                                    return Tag_yoctosteradian;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "sla") == 0)
                                                    return Tag_yoctotesla;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "nne") == 0)
                                                    return Tag_yoctotonne;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(chars[6]), "olt") == 0)
                                            return Tag_yoctovolt;
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "tt") == 0)
                                                    return Tag_yoctowatt;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[7]), "ber") == 0)
                                                    return Tag_yoctoweber;
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
                        case 't':
                            if (strncmp(&(chars[3]), "ta", 2) == 0)
                              {
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "mpere") == 0)
                                            return Tag_yottaampere;
                                        break;
                                    case 'b':
                                        if (strcmp(&(chars[6]), "ecquerel") == 0)
                                            return Tag_yottabecquerel;
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "ndela") == 0)
                                                    return Tag_yottacandela;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "ulomb") == 0)
                                                    return Tag_yottacoulomb;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                            return Tag_yottadegree_celsius;
                                        break;
                                    case 'f':
                                        if (strcmp(&(chars[6]), "arad") == 0)
                                            return Tag_yottafarad;
                                        break;
                                    case 'g':
                                        if (strncmp(&(chars[6]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(chars[8]))
                                              {
                                                case 'm':
                                                    if (chars[9] == 0)
                                                        return Tag_yottagram;
                                                    break;
                                                case 'y':
                                                    if (chars[9] == 0)
                                                        return Tag_yottagray;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(chars[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(chars[8]), "ry") == 0)
                                                        return Tag_yottahenry;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(chars[8]), "tz") == 0)
                                                        return Tag_yottahertz;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(chars[6]), "oule") == 0)
                                            return Tag_yottajoule;
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "tal") == 0)
                                                    return Tag_yottakatal;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[7]), "lvin") == 0)
                                                    return Tag_yottakelvin;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[7]), "ter") == 0)
                                                    return Tag_yottaliter;
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(chars[7]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[8]), "en") == 0)
                                                            return Tag_yottalumen;
                                                        break;
                                                    case 'x':
                                                        if (chars[8] == 0)
                                                            return Tag_yottalux;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'm':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "ter") == 0)
                                                    return Tag_yottameter;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "le") == 0)
                                                    return Tag_yottamole;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(chars[6]), "ewton") == 0)
                                            return Tag_yottanewton;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "hm") == 0)
                                            return Tag_yottaohm;
                                        break;
                                    case 'p':
                                        if (strcmp(&(chars[6]), "ascal") == 0)
                                            return Tag_yottapascal;
                                        break;
                                    case 'r':
                                        if (strcmp(&(chars[6]), "adian") == 0)
                                            return Tag_yottaradian;
                                        break;
                                    case 's':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "cond") == 0)
                                                    return Tag_yottasecond;
                                                break;
                                            case 'i':
                                                if (strncmp(&(chars[7]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[8]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(chars[9]), "ens") == 0)
                                                                return Tag_yottasiemens;
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(chars[9]), "ert") == 0)
                                                                return Tag_yottasievert;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(chars[7]), "eradian") == 0)
                                                    return Tag_yottasteradian;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(chars[7]), "sla") == 0)
                                                    return Tag_yottatesla;
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[7]), "nne") == 0)
                                                    return Tag_yottatonne;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(chars[6]), "olt") == 0)
                                            return Tag_yottavolt;
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(chars[7]), "tt") == 0)
                                                    return Tag_yottawatt;
                                                break;
                                            case 'e':
                                                if (strcmp(&(chars[7]), "ber") == 0)
                                                    return Tag_yottaweber;
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
                    break;
                default:
                    break;
              }
            break;
        case 'z':
            if (strncmp(&(chars[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'p':
                        if (strncmp(&(chars[3]), "to", 2) == 0)
                          {
                            switch ((unsigned char)(chars[5]))
                              {
                                case 'a':
                                    if (strcmp(&(chars[6]), "mpere") == 0)
                                        return Tag_zeptoampere;
                                    break;
                                case 'b':
                                    if (strcmp(&(chars[6]), "ecquerel") == 0)
                                        return Tag_zeptobecquerel;
                                    break;
                                case 'c':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[7]), "ndela") == 0)
                                                return Tag_zeptocandela;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[7]), "ulomb") == 0)
                                                return Tag_zeptocoulomb;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'd':
                                    if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                        return Tag_zeptodegree_celsius;
                                    break;
                                case 'f':
                                    if (strcmp(&(chars[6]), "arad") == 0)
                                        return Tag_zeptofarad;
                                    break;
                                case 'g':
                                    if (strncmp(&(chars[6]), "ra", 2) == 0)
                                      {
                                        switch ((unsigned char)(chars[8]))
                                          {
                                            case 'm':
                                                if (chars[9] == 0)
                                                    return Tag_zeptogram;
                                                break;
                                            case 'y':
                                                if (chars[9] == 0)
                                                    return Tag_zeptogray;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'h':
                                    if (strncmp(&(chars[6]), "e", 1) == 0)
                                      {
                                        switch ((unsigned char)(chars[7]))
                                          {
                                            case 'n':
                                                if (strcmp(&(chars[8]), "ry") == 0)
                                                    return Tag_zeptohenry;
                                                break;
                                            case 'r':
                                                if (strcmp(&(chars[8]), "tz") == 0)
                                                    return Tag_zeptohertz;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'j':
                                    if (strcmp(&(chars[6]), "oule") == 0)
                                        return Tag_zeptojoule;
                                    break;
                                case 'k':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[7]), "tal") == 0)
                                                return Tag_zeptokatal;
                                            break;
                                        case 'e':
                                            if (strcmp(&(chars[7]), "lvin") == 0)
                                                return Tag_zeptokelvin;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'l':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'i':
                                            if (strcmp(&(chars[7]), "ter") == 0)
                                                return Tag_zeptoliter;
                                            break;
                                        case 'u':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(chars[8]), "en") == 0)
                                                        return Tag_zeptolumen;
                                                    break;
                                                case 'x':
                                                    if (chars[8] == 0)
                                                        return Tag_zeptolux;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'm':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[7]), "ter") == 0)
                                                return Tag_zeptometer;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[7]), "le") == 0)
                                                return Tag_zeptomole;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'n':
                                    if (strcmp(&(chars[6]), "ewton") == 0)
                                        return Tag_zeptonewton;
                                    break;
                                case 'o':
                                    if (strcmp(&(chars[6]), "hm") == 0)
                                        return Tag_zeptoohm;
                                    break;
                                case 'p':
                                    if (strcmp(&(chars[6]), "ascal") == 0)
                                        return Tag_zeptopascal;
                                    break;
                                case 'r':
                                    if (strcmp(&(chars[6]), "adian") == 0)
                                        return Tag_zeptoradian;
                                    break;
                                case 's':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[7]), "cond") == 0)
                                                return Tag_zeptosecond;
                                            break;
                                        case 'i':
                                            if (strncmp(&(chars[7]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[8]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[9]), "ens") == 0)
                                                            return Tag_zeptosiemens;
                                                        break;
                                                    case 'v':
                                                        if (strcmp(&(chars[9]), "ert") == 0)
                                                            return Tag_zeptosievert;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 't':
                                            if (strcmp(&(chars[7]), "eradian") == 0)
                                                return Tag_zeptosteradian;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 't':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[7]), "sla") == 0)
                                                return Tag_zeptotesla;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[7]), "nne") == 0)
                                                return Tag_zeptotonne;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'v':
                                    if (strcmp(&(chars[6]), "olt") == 0)
                                        return Tag_zeptovolt;
                                    break;
                                case 'w':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[7]), "tt") == 0)
                                                return Tag_zeptowatt;
                                            break;
                                        case 'e':
                                            if (strcmp(&(chars[7]), "ber") == 0)
                                                return Tag_zeptoweber;
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
                    case 't':
                        if (strncmp(&(chars[3]), "ta", 2) == 0)
                          {
                            switch ((unsigned char)(chars[5]))
                              {
                                case 'a':
                                    if (strcmp(&(chars[6]), "mpere") == 0)
                                        return Tag_zettaampere;
                                    break;
                                case 'b':
                                    if (strcmp(&(chars[6]), "ecquerel") == 0)
                                        return Tag_zettabecquerel;
                                    break;
                                case 'c':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[7]), "ndela") == 0)
                                                return Tag_zettacandela;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[7]), "ulomb") == 0)
                                                return Tag_zettacoulomb;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'd':
                                    if (strcmp(&(chars[6]), "egree_celsius") == 0)
                                        return Tag_zettadegree_celsius;
                                    break;
                                case 'f':
                                    if (strcmp(&(chars[6]), "arad") == 0)
                                        return Tag_zettafarad;
                                    break;
                                case 'g':
                                    if (strncmp(&(chars[6]), "ra", 2) == 0)
                                      {
                                        switch ((unsigned char)(chars[8]))
                                          {
                                            case 'm':
                                                if (chars[9] == 0)
                                                    return Tag_zettagram;
                                                break;
                                            case 'y':
                                                if (chars[9] == 0)
                                                    return Tag_zettagray;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'h':
                                    if (strncmp(&(chars[6]), "e", 1) == 0)
                                      {
                                        switch ((unsigned char)(chars[7]))
                                          {
                                            case 'n':
                                                if (strcmp(&(chars[8]), "ry") == 0)
                                                    return Tag_zettahenry;
                                                break;
                                            case 'r':
                                                if (strcmp(&(chars[8]), "tz") == 0)
                                                    return Tag_zettahertz;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'j':
                                    if (strcmp(&(chars[6]), "oule") == 0)
                                        return Tag_zettajoule;
                                    break;
                                case 'k':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[7]), "tal") == 0)
                                                return Tag_zettakatal;
                                            break;
                                        case 'e':
                                            if (strcmp(&(chars[7]), "lvin") == 0)
                                                return Tag_zettakelvin;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'l':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'i':
                                            if (strcmp(&(chars[7]), "ter") == 0)
                                                return Tag_zettaliter;
                                            break;
                                        case 'u':
                                            switch ((unsigned char)(chars[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(chars[8]), "en") == 0)
                                                        return Tag_zettalumen;
                                                    break;
                                                case 'x':
                                                    if (chars[8] == 0)
                                                        return Tag_zettalux;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'm':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[7]), "ter") == 0)
                                                return Tag_zettameter;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[7]), "le") == 0)
                                                return Tag_zettamole;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'n':
                                    if (strcmp(&(chars[6]), "ewton") == 0)
                                        return Tag_zettanewton;
                                    break;
                                case 'o':
                                    if (strcmp(&(chars[6]), "hm") == 0)
                                        return Tag_zettaohm;
                                    break;
                                case 'p':
                                    if (strcmp(&(chars[6]), "ascal") == 0)
                                        return Tag_zettapascal;
                                    break;
                                case 'r':
                                    if (strcmp(&(chars[6]), "adian") == 0)
                                        return Tag_zettaradian;
                                    break;
                                case 's':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[7]), "cond") == 0)
                                                return Tag_zettasecond;
                                            break;
                                        case 'i':
                                            if (strncmp(&(chars[7]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[8]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(chars[9]), "ens") == 0)
                                                            return Tag_zettasiemens;
                                                        break;
                                                    case 'v':
                                                        if (strcmp(&(chars[9]), "ert") == 0)
                                                            return Tag_zettasievert;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 't':
                                            if (strcmp(&(chars[7]), "eradian") == 0)
                                                return Tag_zettasteradian;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 't':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[7]), "sla") == 0)
                                                return Tag_zettatesla;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[7]), "nne") == 0)
                                                return Tag_zettatonne;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'v':
                                    if (strcmp(&(chars[6]), "olt") == 0)
                                        return Tag_zettavolt;
                                    break;
                                case 'w':
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[7]), "tt") == 0)
                                                return Tag_zettawatt;
                                            break;
                                        case 'e':
                                            if (strcmp(&(chars[7]), "ber") == 0)
                                                return Tag_zettaweber;
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
    return Tag__none;
  }

const char *CoreUnitsUnitJSON::stringFromTag(TypeTagKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Tag_inch:
            return "inch";
        case Tag_thou:
            return "thou";
        case Tag_barleycorn:
            return "barleycorn";
        case Tag_hand:
            return "hand";
        case Tag_foot:
            return "foot";
        case Tag_yard:
            return "yard";
        case Tag_rod:
            return "rod";
        case Tag_link:
            return "link";
        case Tag_chain:
            return "chain";
        case Tag_furlong:
            return "furlong";
        case Tag_mile:
            return "mile";
        case Tag_league:
            return "league";
        case Tag_nautical_mile:
            return "nautical_mile";
        case Tag_cable:
            return "cable";
        case Tag_fathom:
            return "fathom";
        case Tag_acre:
            return "acre";
        case Tag_rood:
            return "rood";
        case Tag_us_gallon:
            return "us_gallon";
        case Tag_imperial_gallon:
            return "imperial_gallon";
        case Tag_us_dry_gallon:
            return "us_dry_gallon";
        case Tag_us_quart:
            return "us_quart";
        case Tag_imperial_quart:
            return "imperial_quart";
        case Tag_us_dry_quart:
            return "us_dry_quart";
        case Tag_us_pint:
            return "us_pint";
        case Tag_imperial_pint:
            return "imperial_pint";
        case Tag_us_dry_pint:
            return "us_dry_pint";
        case Tag_us_gill:
            return "us_gill";
        case Tag_imperial_gill:
            return "imperial_gill";
        case Tag_us_customary_cup:
            return "us_customary_cup";
        case Tag_us_legal_cup:
            return "us_legal_cup";
        case Tag_metric_cup:
            return "metric_cup";
        case Tag_imperial_cup:
            return "imperial_cup";
        case Tag_us_fluid_ounce:
            return "us_fluid_ounce";
        case Tag_imperial_fluid_ounce:
            return "imperial_fluid_ounce";
        case Tag_us_fluid_dram:
            return "us_fluid_dram";
        case Tag_imperial_fluid_dram:
            return "imperial_fluid_dram";
        case Tag_us_fluid_scruple:
            return "us_fluid_scruple";
        case Tag_imperial_fluid_scruple:
            return "imperial_fluid_scruple";
        case Tag_us_minim:
            return "us_minim";
        case Tag_imperial_minim:
            return "imperial_minim";
        case Tag_us_customary_tablespoon:
            return "us_customary_tablespoon";
        case Tag_us_legal_tablespoon:
            return "us_legal_tablespoon";
        case Tag_australian_tablespoon:
            return "australian_tablespoon";
        case Tag_us_customary_teaspoon:
            return "us_customary_teaspoon";
        case Tag_metric_teaspoon:
            return "metric_teaspoon";
        case Tag_pound:
            return "pound";
        case Tag_ounce:
            return "ounce";
        case Tag_troy_ounce:
            return "troy_ounce";
        case Tag_dram:
            return "dram";
        case Tag_grain:
            return "grain";
        case Tag_stone:
            return "stone";
        case Tag_short_hundredweight:
            return "short_hundredweight";
        case Tag_long_hundredweight:
            return "long_hundredweight";
        case Tag_short_ton:
            return "short_ton";
        case Tag_long_ton:
            return "long_ton";
        case Tag_oil_barrel:
            return "oil_barrel";
        case Tag_degree_fahrenheit:
            return "degree_fahrenheit";
        case Tag_british_thermal_unit:
            return "british_thermal_unit";
        case Tag_calorie:
            return "calorie";
        case Tag_kilocalorie:
            return "kilocalorie";
        case Tag_mechanical_horsepower:
            return "mechanical_horsepower";
        case Tag_metric_horsepower:
            return "metric_horsepower";
        case Tag_us_bushel:
            return "us_bushel";
        case Tag_meter:
            return "meter";
        case Tag_yoctometer:
            return "yoctometer";
        case Tag_zeptometer:
            return "zeptometer";
        case Tag_attometer:
            return "attometer";
        case Tag_femtometer:
            return "femtometer";
        case Tag_picometer:
            return "picometer";
        case Tag_nanometer:
            return "nanometer";
        case Tag_micrometer:
            return "micrometer";
        case Tag_millimeter:
            return "millimeter";
        case Tag_centimeter:
            return "centimeter";
        case Tag_decimeter:
            return "decimeter";
        case Tag_decameter:
            return "decameter";
        case Tag_hectometer:
            return "hectometer";
        case Tag_kilometer:
            return "kilometer";
        case Tag_megameter:
            return "megameter";
        case Tag_gigameter:
            return "gigameter";
        case Tag_terameter:
            return "terameter";
        case Tag_petameter:
            return "petameter";
        case Tag_exameter:
            return "exameter";
        case Tag_zettameter:
            return "zettameter";
        case Tag_yottameter:
            return "yottameter";
        case Tag_gram:
            return "gram";
        case Tag_yoctogram:
            return "yoctogram";
        case Tag_zeptogram:
            return "zeptogram";
        case Tag_attogram:
            return "attogram";
        case Tag_femtogram:
            return "femtogram";
        case Tag_picogram:
            return "picogram";
        case Tag_nanogram:
            return "nanogram";
        case Tag_microgram:
            return "microgram";
        case Tag_milligram:
            return "milligram";
        case Tag_centigram:
            return "centigram";
        case Tag_decigram:
            return "decigram";
        case Tag_decagram:
            return "decagram";
        case Tag_hectogram:
            return "hectogram";
        case Tag_kilogram:
            return "kilogram";
        case Tag_megagram:
            return "megagram";
        case Tag_gigagram:
            return "gigagram";
        case Tag_teragram:
            return "teragram";
        case Tag_petagram:
            return "petagram";
        case Tag_exagram:
            return "exagram";
        case Tag_zettagram:
            return "zettagram";
        case Tag_yottagram:
            return "yottagram";
        case Tag_second:
            return "second";
        case Tag_yoctosecond:
            return "yoctosecond";
        case Tag_zeptosecond:
            return "zeptosecond";
        case Tag_attosecond:
            return "attosecond";
        case Tag_femtosecond:
            return "femtosecond";
        case Tag_picosecond:
            return "picosecond";
        case Tag_nanosecond:
            return "nanosecond";
        case Tag_microsecond:
            return "microsecond";
        case Tag_millisecond:
            return "millisecond";
        case Tag_centisecond:
            return "centisecond";
        case Tag_decisecond:
            return "decisecond";
        case Tag_decasecond:
            return "decasecond";
        case Tag_hectosecond:
            return "hectosecond";
        case Tag_kilosecond:
            return "kilosecond";
        case Tag_megasecond:
            return "megasecond";
        case Tag_gigasecond:
            return "gigasecond";
        case Tag_terasecond:
            return "terasecond";
        case Tag_petasecond:
            return "petasecond";
        case Tag_exasecond:
            return "exasecond";
        case Tag_zettasecond:
            return "zettasecond";
        case Tag_yottasecond:
            return "yottasecond";
        case Tag_ampere:
            return "ampere";
        case Tag_yoctoampere:
            return "yoctoampere";
        case Tag_zeptoampere:
            return "zeptoampere";
        case Tag_attoampere:
            return "attoampere";
        case Tag_femtoampere:
            return "femtoampere";
        case Tag_picoampere:
            return "picoampere";
        case Tag_nanoampere:
            return "nanoampere";
        case Tag_microampere:
            return "microampere";
        case Tag_milliampere:
            return "milliampere";
        case Tag_centiampere:
            return "centiampere";
        case Tag_deciampere:
            return "deciampere";
        case Tag_decaampere:
            return "decaampere";
        case Tag_hectoampere:
            return "hectoampere";
        case Tag_kiloampere:
            return "kiloampere";
        case Tag_megaampere:
            return "megaampere";
        case Tag_gigaampere:
            return "gigaampere";
        case Tag_teraampere:
            return "teraampere";
        case Tag_petaampere:
            return "petaampere";
        case Tag_exaampere:
            return "exaampere";
        case Tag_zettaampere:
            return "zettaampere";
        case Tag_yottaampere:
            return "yottaampere";
        case Tag_kelvin:
            return "kelvin";
        case Tag_yoctokelvin:
            return "yoctokelvin";
        case Tag_zeptokelvin:
            return "zeptokelvin";
        case Tag_attokelvin:
            return "attokelvin";
        case Tag_femtokelvin:
            return "femtokelvin";
        case Tag_picokelvin:
            return "picokelvin";
        case Tag_nanokelvin:
            return "nanokelvin";
        case Tag_microkelvin:
            return "microkelvin";
        case Tag_millikelvin:
            return "millikelvin";
        case Tag_centikelvin:
            return "centikelvin";
        case Tag_decikelvin:
            return "decikelvin";
        case Tag_decakelvin:
            return "decakelvin";
        case Tag_hectokelvin:
            return "hectokelvin";
        case Tag_kilokelvin:
            return "kilokelvin";
        case Tag_megakelvin:
            return "megakelvin";
        case Tag_gigakelvin:
            return "gigakelvin";
        case Tag_terakelvin:
            return "terakelvin";
        case Tag_petakelvin:
            return "petakelvin";
        case Tag_exakelvin:
            return "exakelvin";
        case Tag_zettakelvin:
            return "zettakelvin";
        case Tag_yottakelvin:
            return "yottakelvin";
        case Tag_mole:
            return "mole";
        case Tag_yoctomole:
            return "yoctomole";
        case Tag_zeptomole:
            return "zeptomole";
        case Tag_attomole:
            return "attomole";
        case Tag_femtomole:
            return "femtomole";
        case Tag_picomole:
            return "picomole";
        case Tag_nanomole:
            return "nanomole";
        case Tag_micromole:
            return "micromole";
        case Tag_millimole:
            return "millimole";
        case Tag_centimole:
            return "centimole";
        case Tag_decimole:
            return "decimole";
        case Tag_decamole:
            return "decamole";
        case Tag_hectomole:
            return "hectomole";
        case Tag_kilomole:
            return "kilomole";
        case Tag_megamole:
            return "megamole";
        case Tag_gigamole:
            return "gigamole";
        case Tag_teramole:
            return "teramole";
        case Tag_petamole:
            return "petamole";
        case Tag_examole:
            return "examole";
        case Tag_zettamole:
            return "zettamole";
        case Tag_yottamole:
            return "yottamole";
        case Tag_candela:
            return "candela";
        case Tag_yoctocandela:
            return "yoctocandela";
        case Tag_zeptocandela:
            return "zeptocandela";
        case Tag_attocandela:
            return "attocandela";
        case Tag_femtocandela:
            return "femtocandela";
        case Tag_picocandela:
            return "picocandela";
        case Tag_nanocandela:
            return "nanocandela";
        case Tag_microcandela:
            return "microcandela";
        case Tag_millicandela:
            return "millicandela";
        case Tag_centicandela:
            return "centicandela";
        case Tag_decicandela:
            return "decicandela";
        case Tag_decacandela:
            return "decacandela";
        case Tag_hectocandela:
            return "hectocandela";
        case Tag_kilocandela:
            return "kilocandela";
        case Tag_megacandela:
            return "megacandela";
        case Tag_gigacandela:
            return "gigacandela";
        case Tag_teracandela:
            return "teracandela";
        case Tag_petacandela:
            return "petacandela";
        case Tag_exacandela:
            return "exacandela";
        case Tag_zettacandela:
            return "zettacandela";
        case Tag_yottacandela:
            return "yottacandela";
        case Tag_radian:
            return "radian";
        case Tag_yoctoradian:
            return "yoctoradian";
        case Tag_zeptoradian:
            return "zeptoradian";
        case Tag_attoradian:
            return "attoradian";
        case Tag_femtoradian:
            return "femtoradian";
        case Tag_picoradian:
            return "picoradian";
        case Tag_nanoradian:
            return "nanoradian";
        case Tag_microradian:
            return "microradian";
        case Tag_milliradian:
            return "milliradian";
        case Tag_centiradian:
            return "centiradian";
        case Tag_deciradian:
            return "deciradian";
        case Tag_decaradian:
            return "decaradian";
        case Tag_hectoradian:
            return "hectoradian";
        case Tag_kiloradian:
            return "kiloradian";
        case Tag_megaradian:
            return "megaradian";
        case Tag_gigaradian:
            return "gigaradian";
        case Tag_teraradian:
            return "teraradian";
        case Tag_petaradian:
            return "petaradian";
        case Tag_exaradian:
            return "exaradian";
        case Tag_zettaradian:
            return "zettaradian";
        case Tag_yottaradian:
            return "yottaradian";
        case Tag_steradian:
            return "steradian";
        case Tag_yoctosteradian:
            return "yoctosteradian";
        case Tag_zeptosteradian:
            return "zeptosteradian";
        case Tag_attosteradian:
            return "attosteradian";
        case Tag_femtosteradian:
            return "femtosteradian";
        case Tag_picosteradian:
            return "picosteradian";
        case Tag_nanosteradian:
            return "nanosteradian";
        case Tag_microsteradian:
            return "microsteradian";
        case Tag_millisteradian:
            return "millisteradian";
        case Tag_centisteradian:
            return "centisteradian";
        case Tag_decisteradian:
            return "decisteradian";
        case Tag_decasteradian:
            return "decasteradian";
        case Tag_hectosteradian:
            return "hectosteradian";
        case Tag_kilosteradian:
            return "kilosteradian";
        case Tag_megasteradian:
            return "megasteradian";
        case Tag_gigasteradian:
            return "gigasteradian";
        case Tag_terasteradian:
            return "terasteradian";
        case Tag_petasteradian:
            return "petasteradian";
        case Tag_exasteradian:
            return "exasteradian";
        case Tag_zettasteradian:
            return "zettasteradian";
        case Tag_yottasteradian:
            return "yottasteradian";
        case Tag_hertz:
            return "hertz";
        case Tag_yoctohertz:
            return "yoctohertz";
        case Tag_zeptohertz:
            return "zeptohertz";
        case Tag_attohertz:
            return "attohertz";
        case Tag_femtohertz:
            return "femtohertz";
        case Tag_picohertz:
            return "picohertz";
        case Tag_nanohertz:
            return "nanohertz";
        case Tag_microhertz:
            return "microhertz";
        case Tag_millihertz:
            return "millihertz";
        case Tag_centihertz:
            return "centihertz";
        case Tag_decihertz:
            return "decihertz";
        case Tag_decahertz:
            return "decahertz";
        case Tag_hectohertz:
            return "hectohertz";
        case Tag_kilohertz:
            return "kilohertz";
        case Tag_megahertz:
            return "megahertz";
        case Tag_gigahertz:
            return "gigahertz";
        case Tag_terahertz:
            return "terahertz";
        case Tag_petahertz:
            return "petahertz";
        case Tag_exahertz:
            return "exahertz";
        case Tag_zettahertz:
            return "zettahertz";
        case Tag_yottahertz:
            return "yottahertz";
        case Tag_newton:
            return "newton";
        case Tag_yoctonewton:
            return "yoctonewton";
        case Tag_zeptonewton:
            return "zeptonewton";
        case Tag_attonewton:
            return "attonewton";
        case Tag_femtonewton:
            return "femtonewton";
        case Tag_piconewton:
            return "piconewton";
        case Tag_nanonewton:
            return "nanonewton";
        case Tag_micronewton:
            return "micronewton";
        case Tag_millinewton:
            return "millinewton";
        case Tag_centinewton:
            return "centinewton";
        case Tag_decinewton:
            return "decinewton";
        case Tag_decanewton:
            return "decanewton";
        case Tag_hectonewton:
            return "hectonewton";
        case Tag_kilonewton:
            return "kilonewton";
        case Tag_meganewton:
            return "meganewton";
        case Tag_giganewton:
            return "giganewton";
        case Tag_teranewton:
            return "teranewton";
        case Tag_petanewton:
            return "petanewton";
        case Tag_exanewton:
            return "exanewton";
        case Tag_zettanewton:
            return "zettanewton";
        case Tag_yottanewton:
            return "yottanewton";
        case Tag_pascal:
            return "pascal";
        case Tag_yoctopascal:
            return "yoctopascal";
        case Tag_zeptopascal:
            return "zeptopascal";
        case Tag_attopascal:
            return "attopascal";
        case Tag_femtopascal:
            return "femtopascal";
        case Tag_picopascal:
            return "picopascal";
        case Tag_nanopascal:
            return "nanopascal";
        case Tag_micropascal:
            return "micropascal";
        case Tag_millipascal:
            return "millipascal";
        case Tag_centipascal:
            return "centipascal";
        case Tag_decipascal:
            return "decipascal";
        case Tag_decapascal:
            return "decapascal";
        case Tag_hectopascal:
            return "hectopascal";
        case Tag_kilopascal:
            return "kilopascal";
        case Tag_megapascal:
            return "megapascal";
        case Tag_gigapascal:
            return "gigapascal";
        case Tag_terapascal:
            return "terapascal";
        case Tag_petapascal:
            return "petapascal";
        case Tag_exapascal:
            return "exapascal";
        case Tag_zettapascal:
            return "zettapascal";
        case Tag_yottapascal:
            return "yottapascal";
        case Tag_joule:
            return "joule";
        case Tag_yoctojoule:
            return "yoctojoule";
        case Tag_zeptojoule:
            return "zeptojoule";
        case Tag_attojoule:
            return "attojoule";
        case Tag_femtojoule:
            return "femtojoule";
        case Tag_picojoule:
            return "picojoule";
        case Tag_nanojoule:
            return "nanojoule";
        case Tag_microjoule:
            return "microjoule";
        case Tag_millijoule:
            return "millijoule";
        case Tag_centijoule:
            return "centijoule";
        case Tag_decijoule:
            return "decijoule";
        case Tag_decajoule:
            return "decajoule";
        case Tag_hectojoule:
            return "hectojoule";
        case Tag_kilojoule:
            return "kilojoule";
        case Tag_megajoule:
            return "megajoule";
        case Tag_gigajoule:
            return "gigajoule";
        case Tag_terajoule:
            return "terajoule";
        case Tag_petajoule:
            return "petajoule";
        case Tag_exajoule:
            return "exajoule";
        case Tag_zettajoule:
            return "zettajoule";
        case Tag_yottajoule:
            return "yottajoule";
        case Tag_watt:
            return "watt";
        case Tag_yoctowatt:
            return "yoctowatt";
        case Tag_zeptowatt:
            return "zeptowatt";
        case Tag_attowatt:
            return "attowatt";
        case Tag_femtowatt:
            return "femtowatt";
        case Tag_picowatt:
            return "picowatt";
        case Tag_nanowatt:
            return "nanowatt";
        case Tag_microwatt:
            return "microwatt";
        case Tag_milliwatt:
            return "milliwatt";
        case Tag_centiwatt:
            return "centiwatt";
        case Tag_deciwatt:
            return "deciwatt";
        case Tag_decawatt:
            return "decawatt";
        case Tag_hectowatt:
            return "hectowatt";
        case Tag_kilowatt:
            return "kilowatt";
        case Tag_megawatt:
            return "megawatt";
        case Tag_gigawatt:
            return "gigawatt";
        case Tag_terawatt:
            return "terawatt";
        case Tag_petawatt:
            return "petawatt";
        case Tag_exawatt:
            return "exawatt";
        case Tag_zettawatt:
            return "zettawatt";
        case Tag_yottawatt:
            return "yottawatt";
        case Tag_coulomb:
            return "coulomb";
        case Tag_yoctocoulomb:
            return "yoctocoulomb";
        case Tag_zeptocoulomb:
            return "zeptocoulomb";
        case Tag_attocoulomb:
            return "attocoulomb";
        case Tag_femtocoulomb:
            return "femtocoulomb";
        case Tag_picocoulomb:
            return "picocoulomb";
        case Tag_nanocoulomb:
            return "nanocoulomb";
        case Tag_microcoulomb:
            return "microcoulomb";
        case Tag_millicoulomb:
            return "millicoulomb";
        case Tag_centicoulomb:
            return "centicoulomb";
        case Tag_decicoulomb:
            return "decicoulomb";
        case Tag_decacoulomb:
            return "decacoulomb";
        case Tag_hectocoulomb:
            return "hectocoulomb";
        case Tag_kilocoulomb:
            return "kilocoulomb";
        case Tag_megacoulomb:
            return "megacoulomb";
        case Tag_gigacoulomb:
            return "gigacoulomb";
        case Tag_teracoulomb:
            return "teracoulomb";
        case Tag_petacoulomb:
            return "petacoulomb";
        case Tag_exacoulomb:
            return "exacoulomb";
        case Tag_zettacoulomb:
            return "zettacoulomb";
        case Tag_yottacoulomb:
            return "yottacoulomb";
        case Tag_volt:
            return "volt";
        case Tag_yoctovolt:
            return "yoctovolt";
        case Tag_zeptovolt:
            return "zeptovolt";
        case Tag_attovolt:
            return "attovolt";
        case Tag_femtovolt:
            return "femtovolt";
        case Tag_picovolt:
            return "picovolt";
        case Tag_nanovolt:
            return "nanovolt";
        case Tag_microvolt:
            return "microvolt";
        case Tag_millivolt:
            return "millivolt";
        case Tag_centivolt:
            return "centivolt";
        case Tag_decivolt:
            return "decivolt";
        case Tag_decavolt:
            return "decavolt";
        case Tag_hectovolt:
            return "hectovolt";
        case Tag_kilovolt:
            return "kilovolt";
        case Tag_megavolt:
            return "megavolt";
        case Tag_gigavolt:
            return "gigavolt";
        case Tag_teravolt:
            return "teravolt";
        case Tag_petavolt:
            return "petavolt";
        case Tag_exavolt:
            return "exavolt";
        case Tag_zettavolt:
            return "zettavolt";
        case Tag_yottavolt:
            return "yottavolt";
        case Tag_farad:
            return "farad";
        case Tag_yoctofarad:
            return "yoctofarad";
        case Tag_zeptofarad:
            return "zeptofarad";
        case Tag_attofarad:
            return "attofarad";
        case Tag_femtofarad:
            return "femtofarad";
        case Tag_picofarad:
            return "picofarad";
        case Tag_nanofarad:
            return "nanofarad";
        case Tag_microfarad:
            return "microfarad";
        case Tag_millifarad:
            return "millifarad";
        case Tag_centifarad:
            return "centifarad";
        case Tag_decifarad:
            return "decifarad";
        case Tag_decafarad:
            return "decafarad";
        case Tag_hectofarad:
            return "hectofarad";
        case Tag_kilofarad:
            return "kilofarad";
        case Tag_megafarad:
            return "megafarad";
        case Tag_gigafarad:
            return "gigafarad";
        case Tag_terafarad:
            return "terafarad";
        case Tag_petafarad:
            return "petafarad";
        case Tag_exafarad:
            return "exafarad";
        case Tag_zettafarad:
            return "zettafarad";
        case Tag_yottafarad:
            return "yottafarad";
        case Tag_ohm:
            return "ohm";
        case Tag_yoctoohm:
            return "yoctoohm";
        case Tag_zeptoohm:
            return "zeptoohm";
        case Tag_attoohm:
            return "attoohm";
        case Tag_femtoohm:
            return "femtoohm";
        case Tag_picoohm:
            return "picoohm";
        case Tag_nanoohm:
            return "nanoohm";
        case Tag_microohm:
            return "microohm";
        case Tag_milliohm:
            return "milliohm";
        case Tag_centiohm:
            return "centiohm";
        case Tag_deciohm:
            return "deciohm";
        case Tag_decaohm:
            return "decaohm";
        case Tag_hectoohm:
            return "hectoohm";
        case Tag_kiloohm:
            return "kiloohm";
        case Tag_megaohm:
            return "megaohm";
        case Tag_gigaohm:
            return "gigaohm";
        case Tag_teraohm:
            return "teraohm";
        case Tag_petaohm:
            return "petaohm";
        case Tag_exaohm:
            return "exaohm";
        case Tag_zettaohm:
            return "zettaohm";
        case Tag_yottaohm:
            return "yottaohm";
        case Tag_siemens:
            return "siemens";
        case Tag_yoctosiemens:
            return "yoctosiemens";
        case Tag_zeptosiemens:
            return "zeptosiemens";
        case Tag_attosiemens:
            return "attosiemens";
        case Tag_femtosiemens:
            return "femtosiemens";
        case Tag_picosiemens:
            return "picosiemens";
        case Tag_nanosiemens:
            return "nanosiemens";
        case Tag_microsiemens:
            return "microsiemens";
        case Tag_millisiemens:
            return "millisiemens";
        case Tag_centisiemens:
            return "centisiemens";
        case Tag_decisiemens:
            return "decisiemens";
        case Tag_decasiemens:
            return "decasiemens";
        case Tag_hectosiemens:
            return "hectosiemens";
        case Tag_kilosiemens:
            return "kilosiemens";
        case Tag_megasiemens:
            return "megasiemens";
        case Tag_gigasiemens:
            return "gigasiemens";
        case Tag_terasiemens:
            return "terasiemens";
        case Tag_petasiemens:
            return "petasiemens";
        case Tag_exasiemens:
            return "exasiemens";
        case Tag_zettasiemens:
            return "zettasiemens";
        case Tag_yottasiemens:
            return "yottasiemens";
        case Tag_weber:
            return "weber";
        case Tag_yoctoweber:
            return "yoctoweber";
        case Tag_zeptoweber:
            return "zeptoweber";
        case Tag_attoweber:
            return "attoweber";
        case Tag_femtoweber:
            return "femtoweber";
        case Tag_picoweber:
            return "picoweber";
        case Tag_nanoweber:
            return "nanoweber";
        case Tag_microweber:
            return "microweber";
        case Tag_milliweber:
            return "milliweber";
        case Tag_centiweber:
            return "centiweber";
        case Tag_deciweber:
            return "deciweber";
        case Tag_decaweber:
            return "decaweber";
        case Tag_hectoweber:
            return "hectoweber";
        case Tag_kiloweber:
            return "kiloweber";
        case Tag_megaweber:
            return "megaweber";
        case Tag_gigaweber:
            return "gigaweber";
        case Tag_teraweber:
            return "teraweber";
        case Tag_petaweber:
            return "petaweber";
        case Tag_exaweber:
            return "exaweber";
        case Tag_zettaweber:
            return "zettaweber";
        case Tag_yottaweber:
            return "yottaweber";
        case Tag_tesla:
            return "tesla";
        case Tag_yoctotesla:
            return "yoctotesla";
        case Tag_zeptotesla:
            return "zeptotesla";
        case Tag_attotesla:
            return "attotesla";
        case Tag_femtotesla:
            return "femtotesla";
        case Tag_picotesla:
            return "picotesla";
        case Tag_nanotesla:
            return "nanotesla";
        case Tag_microtesla:
            return "microtesla";
        case Tag_millitesla:
            return "millitesla";
        case Tag_centitesla:
            return "centitesla";
        case Tag_decitesla:
            return "decitesla";
        case Tag_decatesla:
            return "decatesla";
        case Tag_hectotesla:
            return "hectotesla";
        case Tag_kilotesla:
            return "kilotesla";
        case Tag_megatesla:
            return "megatesla";
        case Tag_gigatesla:
            return "gigatesla";
        case Tag_teratesla:
            return "teratesla";
        case Tag_petatesla:
            return "petatesla";
        case Tag_exatesla:
            return "exatesla";
        case Tag_zettatesla:
            return "zettatesla";
        case Tag_yottatesla:
            return "yottatesla";
        case Tag_henry:
            return "henry";
        case Tag_yoctohenry:
            return "yoctohenry";
        case Tag_zeptohenry:
            return "zeptohenry";
        case Tag_attohenry:
            return "attohenry";
        case Tag_femtohenry:
            return "femtohenry";
        case Tag_picohenry:
            return "picohenry";
        case Tag_nanohenry:
            return "nanohenry";
        case Tag_microhenry:
            return "microhenry";
        case Tag_millihenry:
            return "millihenry";
        case Tag_centihenry:
            return "centihenry";
        case Tag_decihenry:
            return "decihenry";
        case Tag_decahenry:
            return "decahenry";
        case Tag_hectohenry:
            return "hectohenry";
        case Tag_kilohenry:
            return "kilohenry";
        case Tag_megahenry:
            return "megahenry";
        case Tag_gigahenry:
            return "gigahenry";
        case Tag_terahenry:
            return "terahenry";
        case Tag_petahenry:
            return "petahenry";
        case Tag_exahenry:
            return "exahenry";
        case Tag_zettahenry:
            return "zettahenry";
        case Tag_yottahenry:
            return "yottahenry";
        case Tag_degree_celsius:
            return "degree_celsius";
        case Tag_yoctodegree_celsius:
            return "yoctodegree_celsius";
        case Tag_zeptodegree_celsius:
            return "zeptodegree_celsius";
        case Tag_attodegree_celsius:
            return "attodegree_celsius";
        case Tag_femtodegree_celsius:
            return "femtodegree_celsius";
        case Tag_picodegree_celsius:
            return "picodegree_celsius";
        case Tag_nanodegree_celsius:
            return "nanodegree_celsius";
        case Tag_microdegree_celsius:
            return "microdegree_celsius";
        case Tag_millidegree_celsius:
            return "millidegree_celsius";
        case Tag_centidegree_celsius:
            return "centidegree_celsius";
        case Tag_decidegree_celsius:
            return "decidegree_celsius";
        case Tag_decadegree_celsius:
            return "decadegree_celsius";
        case Tag_hectodegree_celsius:
            return "hectodegree_celsius";
        case Tag_kilodegree_celsius:
            return "kilodegree_celsius";
        case Tag_megadegree_celsius:
            return "megadegree_celsius";
        case Tag_gigadegree_celsius:
            return "gigadegree_celsius";
        case Tag_teradegree_celsius:
            return "teradegree_celsius";
        case Tag_petadegree_celsius:
            return "petadegree_celsius";
        case Tag_exadegree_celsius:
            return "exadegree_celsius";
        case Tag_zettadegree_celsius:
            return "zettadegree_celsius";
        case Tag_yottadegree_celsius:
            return "yottadegree_celsius";
        case Tag_lumen:
            return "lumen";
        case Tag_yoctolumen:
            return "yoctolumen";
        case Tag_zeptolumen:
            return "zeptolumen";
        case Tag_attolumen:
            return "attolumen";
        case Tag_femtolumen:
            return "femtolumen";
        case Tag_picolumen:
            return "picolumen";
        case Tag_nanolumen:
            return "nanolumen";
        case Tag_microlumen:
            return "microlumen";
        case Tag_millilumen:
            return "millilumen";
        case Tag_centilumen:
            return "centilumen";
        case Tag_decilumen:
            return "decilumen";
        case Tag_decalumen:
            return "decalumen";
        case Tag_hectolumen:
            return "hectolumen";
        case Tag_kilolumen:
            return "kilolumen";
        case Tag_megalumen:
            return "megalumen";
        case Tag_gigalumen:
            return "gigalumen";
        case Tag_teralumen:
            return "teralumen";
        case Tag_petalumen:
            return "petalumen";
        case Tag_exalumen:
            return "exalumen";
        case Tag_zettalumen:
            return "zettalumen";
        case Tag_yottalumen:
            return "yottalumen";
        case Tag_lux:
            return "lux";
        case Tag_yoctolux:
            return "yoctolux";
        case Tag_zeptolux:
            return "zeptolux";
        case Tag_attolux:
            return "attolux";
        case Tag_femtolux:
            return "femtolux";
        case Tag_picolux:
            return "picolux";
        case Tag_nanolux:
            return "nanolux";
        case Tag_microlux:
            return "microlux";
        case Tag_millilux:
            return "millilux";
        case Tag_centilux:
            return "centilux";
        case Tag_decilux:
            return "decilux";
        case Tag_decalux:
            return "decalux";
        case Tag_hectolux:
            return "hectolux";
        case Tag_kilolux:
            return "kilolux";
        case Tag_megalux:
            return "megalux";
        case Tag_gigalux:
            return "gigalux";
        case Tag_teralux:
            return "teralux";
        case Tag_petalux:
            return "petalux";
        case Tag_exalux:
            return "exalux";
        case Tag_zettalux:
            return "zettalux";
        case Tag_yottalux:
            return "yottalux";
        case Tag_becquerel:
            return "becquerel";
        case Tag_yoctobecquerel:
            return "yoctobecquerel";
        case Tag_zeptobecquerel:
            return "zeptobecquerel";
        case Tag_attobecquerel:
            return "attobecquerel";
        case Tag_femtobecquerel:
            return "femtobecquerel";
        case Tag_picobecquerel:
            return "picobecquerel";
        case Tag_nanobecquerel:
            return "nanobecquerel";
        case Tag_microbecquerel:
            return "microbecquerel";
        case Tag_millibecquerel:
            return "millibecquerel";
        case Tag_centibecquerel:
            return "centibecquerel";
        case Tag_decibecquerel:
            return "decibecquerel";
        case Tag_decabecquerel:
            return "decabecquerel";
        case Tag_hectobecquerel:
            return "hectobecquerel";
        case Tag_kilobecquerel:
            return "kilobecquerel";
        case Tag_megabecquerel:
            return "megabecquerel";
        case Tag_gigabecquerel:
            return "gigabecquerel";
        case Tag_terabecquerel:
            return "terabecquerel";
        case Tag_petabecquerel:
            return "petabecquerel";
        case Tag_exabecquerel:
            return "exabecquerel";
        case Tag_zettabecquerel:
            return "zettabecquerel";
        case Tag_yottabecquerel:
            return "yottabecquerel";
        case Tag_gray:
            return "gray";
        case Tag_yoctogray:
            return "yoctogray";
        case Tag_zeptogray:
            return "zeptogray";
        case Tag_attogray:
            return "attogray";
        case Tag_femtogray:
            return "femtogray";
        case Tag_picogray:
            return "picogray";
        case Tag_nanogray:
            return "nanogray";
        case Tag_microgray:
            return "microgray";
        case Tag_milligray:
            return "milligray";
        case Tag_centigray:
            return "centigray";
        case Tag_decigray:
            return "decigray";
        case Tag_decagray:
            return "decagray";
        case Tag_hectogray:
            return "hectogray";
        case Tag_kilogray:
            return "kilogray";
        case Tag_megagray:
            return "megagray";
        case Tag_gigagray:
            return "gigagray";
        case Tag_teragray:
            return "teragray";
        case Tag_petagray:
            return "petagray";
        case Tag_exagray:
            return "exagray";
        case Tag_zettagray:
            return "zettagray";
        case Tag_yottagray:
            return "yottagray";
        case Tag_sievert:
            return "sievert";
        case Tag_yoctosievert:
            return "yoctosievert";
        case Tag_zeptosievert:
            return "zeptosievert";
        case Tag_attosievert:
            return "attosievert";
        case Tag_femtosievert:
            return "femtosievert";
        case Tag_picosievert:
            return "picosievert";
        case Tag_nanosievert:
            return "nanosievert";
        case Tag_microsievert:
            return "microsievert";
        case Tag_millisievert:
            return "millisievert";
        case Tag_centisievert:
            return "centisievert";
        case Tag_decisievert:
            return "decisievert";
        case Tag_decasievert:
            return "decasievert";
        case Tag_hectosievert:
            return "hectosievert";
        case Tag_kilosievert:
            return "kilosievert";
        case Tag_megasievert:
            return "megasievert";
        case Tag_gigasievert:
            return "gigasievert";
        case Tag_terasievert:
            return "terasievert";
        case Tag_petasievert:
            return "petasievert";
        case Tag_exasievert:
            return "exasievert";
        case Tag_zettasievert:
            return "zettasievert";
        case Tag_yottasievert:
            return "yottasievert";
        case Tag_katal:
            return "katal";
        case Tag_yoctokatal:
            return "yoctokatal";
        case Tag_zeptokatal:
            return "zeptokatal";
        case Tag_attokatal:
            return "attokatal";
        case Tag_femtokatal:
            return "femtokatal";
        case Tag_picokatal:
            return "picokatal";
        case Tag_nanokatal:
            return "nanokatal";
        case Tag_microkatal:
            return "microkatal";
        case Tag_millikatal:
            return "millikatal";
        case Tag_centikatal:
            return "centikatal";
        case Tag_decikatal:
            return "decikatal";
        case Tag_decakatal:
            return "decakatal";
        case Tag_hectokatal:
            return "hectokatal";
        case Tag_kilokatal:
            return "kilokatal";
        case Tag_megakatal:
            return "megakatal";
        case Tag_gigakatal:
            return "gigakatal";
        case Tag_terakatal:
            return "terakatal";
        case Tag_petakatal:
            return "petakatal";
        case Tag_exakatal:
            return "exakatal";
        case Tag_zettakatal:
            return "zettakatal";
        case Tag_yottakatal:
            return "yottakatal";
        case Tag_hectare:
            return "hectare";
        case Tag_liter:
            return "liter";
        case Tag_yoctoliter:
            return "yoctoliter";
        case Tag_zeptoliter:
            return "zeptoliter";
        case Tag_attoliter:
            return "attoliter";
        case Tag_femtoliter:
            return "femtoliter";
        case Tag_picoliter:
            return "picoliter";
        case Tag_nanoliter:
            return "nanoliter";
        case Tag_microliter:
            return "microliter";
        case Tag_milliliter:
            return "milliliter";
        case Tag_centiliter:
            return "centiliter";
        case Tag_deciliter:
            return "deciliter";
        case Tag_decaliter:
            return "decaliter";
        case Tag_hectoliter:
            return "hectoliter";
        case Tag_kiloliter:
            return "kiloliter";
        case Tag_megaliter:
            return "megaliter";
        case Tag_gigaliter:
            return "gigaliter";
        case Tag_teraliter:
            return "teraliter";
        case Tag_petaliter:
            return "petaliter";
        case Tag_exaliter:
            return "exaliter";
        case Tag_zettaliter:
            return "zettaliter";
        case Tag_yottaliter:
            return "yottaliter";
        case Tag_tonne:
            return "tonne";
        case Tag_yoctotonne:
            return "yoctotonne";
        case Tag_zeptotonne:
            return "zeptotonne";
        case Tag_attotonne:
            return "attotonne";
        case Tag_femtotonne:
            return "femtotonne";
        case Tag_picotonne:
            return "picotonne";
        case Tag_nanotonne:
            return "nanotonne";
        case Tag_microtonne:
            return "microtonne";
        case Tag_millitonne:
            return "millitonne";
        case Tag_centitonne:
            return "centitonne";
        case Tag_decitonne:
            return "decitonne";
        case Tag_decatonne:
            return "decatonne";
        case Tag_hectotonne:
            return "hectotonne";
        case Tag_kilotonne:
            return "kilotonne";
        case Tag_megatonne:
            return "megatonne";
        case Tag_gigatonne:
            return "gigatonne";
        case Tag_teratonne:
            return "teratonne";
        case Tag_petatonne:
            return "petatonne";
        case Tag_exatonne:
            return "exatonne";
        case Tag_zettatonne:
            return "zettatonne";
        case Tag_yottatonne:
            return "yottatonne";
        case Tag_astronomical_unit:
            return "astronomical_unit";
        case Tag_angstrom:
            return "angstrom";
        case Tag_minute:
            return "minute";
        case Tag_hour:
            return "hour";
        case Tag_day:
            return "day";
        case Tag_week:
            return "week";
        case Tag_fortnight:
            return "fortnight";
        case Tag_month:
            return "month";
        case Tag_year:
            return "year";
        case Tag_biennium:
            return "biennium";
        case Tag_triennium:
            return "triennium";
        case Tag_quadrennium:
            return "quadrennium";
        case Tag_lustrum:
            return "lustrum";
        case Tag_decade:
            return "decade";
        case Tag_century:
            return "century";
        case Tag_millennium:
            return "millennium";
        case Tag_sidereal_day:
            return "sidereal_day";
        case Tag_sidereal_year:
            return "sidereal_year";
        case Tag_helek:
            return "helek";
        case Tag_Planck_time:
            return "Planck_time";
        case Tag_shake:
            return "shake";
        case Tag_svedberg:
            return "svedberg";
        case Tag_parsec:
            return "parsec";
        default:
            assert(false);
            return NULL;
      }
  }

CoreUnitsUnitJSON::CoreUnitsUnitJSON(const CoreUnitsUnitJSON &)
  {
    assert(false);
  }

CoreUnitsUnitJSON &CoreUnitsUnitJSON::operator=(const CoreUnitsUnitJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CoreUnitsUnitJSON::extraTagToJSON(void) const
  {
    JSONStringValue *generated_string_Tag;
    if (!(storeTag.in_known_list))
      {
    generated_string_Tag = new JSONStringValue(storeTag.string_value.c_str());
      }
    else
      {
    switch (storeTag.list_value)
      {
        case Tag_inch:
            generated_string_Tag = new JSONStringValue("inch");
            break;
        case Tag_thou:
            generated_string_Tag = new JSONStringValue("thou");
            break;
        case Tag_barleycorn:
            generated_string_Tag = new JSONStringValue("barleycorn");
            break;
        case Tag_hand:
            generated_string_Tag = new JSONStringValue("hand");
            break;
        case Tag_foot:
            generated_string_Tag = new JSONStringValue("foot");
            break;
        case Tag_yard:
            generated_string_Tag = new JSONStringValue("yard");
            break;
        case Tag_rod:
            generated_string_Tag = new JSONStringValue("rod");
            break;
        case Tag_link:
            generated_string_Tag = new JSONStringValue("link");
            break;
        case Tag_chain:
            generated_string_Tag = new JSONStringValue("chain");
            break;
        case Tag_furlong:
            generated_string_Tag = new JSONStringValue("furlong");
            break;
        case Tag_mile:
            generated_string_Tag = new JSONStringValue("mile");
            break;
        case Tag_league:
            generated_string_Tag = new JSONStringValue("league");
            break;
        case Tag_nautical_mile:
            generated_string_Tag = new JSONStringValue("nautical_mile");
            break;
        case Tag_cable:
            generated_string_Tag = new JSONStringValue("cable");
            break;
        case Tag_fathom:
            generated_string_Tag = new JSONStringValue("fathom");
            break;
        case Tag_acre:
            generated_string_Tag = new JSONStringValue("acre");
            break;
        case Tag_rood:
            generated_string_Tag = new JSONStringValue("rood");
            break;
        case Tag_us_gallon:
            generated_string_Tag = new JSONStringValue("us_gallon");
            break;
        case Tag_imperial_gallon:
            generated_string_Tag = new JSONStringValue("imperial_gallon");
            break;
        case Tag_us_dry_gallon:
            generated_string_Tag = new JSONStringValue("us_dry_gallon");
            break;
        case Tag_us_quart:
            generated_string_Tag = new JSONStringValue("us_quart");
            break;
        case Tag_imperial_quart:
            generated_string_Tag = new JSONStringValue("imperial_quart");
            break;
        case Tag_us_dry_quart:
            generated_string_Tag = new JSONStringValue("us_dry_quart");
            break;
        case Tag_us_pint:
            generated_string_Tag = new JSONStringValue("us_pint");
            break;
        case Tag_imperial_pint:
            generated_string_Tag = new JSONStringValue("imperial_pint");
            break;
        case Tag_us_dry_pint:
            generated_string_Tag = new JSONStringValue("us_dry_pint");
            break;
        case Tag_us_gill:
            generated_string_Tag = new JSONStringValue("us_gill");
            break;
        case Tag_imperial_gill:
            generated_string_Tag = new JSONStringValue("imperial_gill");
            break;
        case Tag_us_customary_cup:
            generated_string_Tag = new JSONStringValue("us_customary_cup");
            break;
        case Tag_us_legal_cup:
            generated_string_Tag = new JSONStringValue("us_legal_cup");
            break;
        case Tag_metric_cup:
            generated_string_Tag = new JSONStringValue("metric_cup");
            break;
        case Tag_imperial_cup:
            generated_string_Tag = new JSONStringValue("imperial_cup");
            break;
        case Tag_us_fluid_ounce:
            generated_string_Tag = new JSONStringValue("us_fluid_ounce");
            break;
        case Tag_imperial_fluid_ounce:
            generated_string_Tag = new JSONStringValue("imperial_fluid_ounce");
            break;
        case Tag_us_fluid_dram:
            generated_string_Tag = new JSONStringValue("us_fluid_dram");
            break;
        case Tag_imperial_fluid_dram:
            generated_string_Tag = new JSONStringValue("imperial_fluid_dram");
            break;
        case Tag_us_fluid_scruple:
            generated_string_Tag = new JSONStringValue("us_fluid_scruple");
            break;
        case Tag_imperial_fluid_scruple:
            generated_string_Tag = new JSONStringValue("imperial_fluid_scruple");
            break;
        case Tag_us_minim:
            generated_string_Tag = new JSONStringValue("us_minim");
            break;
        case Tag_imperial_minim:
            generated_string_Tag = new JSONStringValue("imperial_minim");
            break;
        case Tag_us_customary_tablespoon:
            generated_string_Tag = new JSONStringValue("us_customary_tablespoon");
            break;
        case Tag_us_legal_tablespoon:
            generated_string_Tag = new JSONStringValue("us_legal_tablespoon");
            break;
        case Tag_australian_tablespoon:
            generated_string_Tag = new JSONStringValue("australian_tablespoon");
            break;
        case Tag_us_customary_teaspoon:
            generated_string_Tag = new JSONStringValue("us_customary_teaspoon");
            break;
        case Tag_metric_teaspoon:
            generated_string_Tag = new JSONStringValue("metric_teaspoon");
            break;
        case Tag_pound:
            generated_string_Tag = new JSONStringValue("pound");
            break;
        case Tag_ounce:
            generated_string_Tag = new JSONStringValue("ounce");
            break;
        case Tag_troy_ounce:
            generated_string_Tag = new JSONStringValue("troy_ounce");
            break;
        case Tag_dram:
            generated_string_Tag = new JSONStringValue("dram");
            break;
        case Tag_grain:
            generated_string_Tag = new JSONStringValue("grain");
            break;
        case Tag_stone:
            generated_string_Tag = new JSONStringValue("stone");
            break;
        case Tag_short_hundredweight:
            generated_string_Tag = new JSONStringValue("short_hundredweight");
            break;
        case Tag_long_hundredweight:
            generated_string_Tag = new JSONStringValue("long_hundredweight");
            break;
        case Tag_short_ton:
            generated_string_Tag = new JSONStringValue("short_ton");
            break;
        case Tag_long_ton:
            generated_string_Tag = new JSONStringValue("long_ton");
            break;
        case Tag_oil_barrel:
            generated_string_Tag = new JSONStringValue("oil_barrel");
            break;
        case Tag_degree_fahrenheit:
            generated_string_Tag = new JSONStringValue("degree_fahrenheit");
            break;
        case Tag_british_thermal_unit:
            generated_string_Tag = new JSONStringValue("british_thermal_unit");
            break;
        case Tag_calorie:
            generated_string_Tag = new JSONStringValue("calorie");
            break;
        case Tag_kilocalorie:
            generated_string_Tag = new JSONStringValue("kilocalorie");
            break;
        case Tag_mechanical_horsepower:
            generated_string_Tag = new JSONStringValue("mechanical_horsepower");
            break;
        case Tag_metric_horsepower:
            generated_string_Tag = new JSONStringValue("metric_horsepower");
            break;
        case Tag_us_bushel:
            generated_string_Tag = new JSONStringValue("us_bushel");
            break;
        case Tag_meter:
            generated_string_Tag = new JSONStringValue("meter");
            break;
        case Tag_yoctometer:
            generated_string_Tag = new JSONStringValue("yoctometer");
            break;
        case Tag_zeptometer:
            generated_string_Tag = new JSONStringValue("zeptometer");
            break;
        case Tag_attometer:
            generated_string_Tag = new JSONStringValue("attometer");
            break;
        case Tag_femtometer:
            generated_string_Tag = new JSONStringValue("femtometer");
            break;
        case Tag_picometer:
            generated_string_Tag = new JSONStringValue("picometer");
            break;
        case Tag_nanometer:
            generated_string_Tag = new JSONStringValue("nanometer");
            break;
        case Tag_micrometer:
            generated_string_Tag = new JSONStringValue("micrometer");
            break;
        case Tag_millimeter:
            generated_string_Tag = new JSONStringValue("millimeter");
            break;
        case Tag_centimeter:
            generated_string_Tag = new JSONStringValue("centimeter");
            break;
        case Tag_decimeter:
            generated_string_Tag = new JSONStringValue("decimeter");
            break;
        case Tag_decameter:
            generated_string_Tag = new JSONStringValue("decameter");
            break;
        case Tag_hectometer:
            generated_string_Tag = new JSONStringValue("hectometer");
            break;
        case Tag_kilometer:
            generated_string_Tag = new JSONStringValue("kilometer");
            break;
        case Tag_megameter:
            generated_string_Tag = new JSONStringValue("megameter");
            break;
        case Tag_gigameter:
            generated_string_Tag = new JSONStringValue("gigameter");
            break;
        case Tag_terameter:
            generated_string_Tag = new JSONStringValue("terameter");
            break;
        case Tag_petameter:
            generated_string_Tag = new JSONStringValue("petameter");
            break;
        case Tag_exameter:
            generated_string_Tag = new JSONStringValue("exameter");
            break;
        case Tag_zettameter:
            generated_string_Tag = new JSONStringValue("zettameter");
            break;
        case Tag_yottameter:
            generated_string_Tag = new JSONStringValue("yottameter");
            break;
        case Tag_gram:
            generated_string_Tag = new JSONStringValue("gram");
            break;
        case Tag_yoctogram:
            generated_string_Tag = new JSONStringValue("yoctogram");
            break;
        case Tag_zeptogram:
            generated_string_Tag = new JSONStringValue("zeptogram");
            break;
        case Tag_attogram:
            generated_string_Tag = new JSONStringValue("attogram");
            break;
        case Tag_femtogram:
            generated_string_Tag = new JSONStringValue("femtogram");
            break;
        case Tag_picogram:
            generated_string_Tag = new JSONStringValue("picogram");
            break;
        case Tag_nanogram:
            generated_string_Tag = new JSONStringValue("nanogram");
            break;
        case Tag_microgram:
            generated_string_Tag = new JSONStringValue("microgram");
            break;
        case Tag_milligram:
            generated_string_Tag = new JSONStringValue("milligram");
            break;
        case Tag_centigram:
            generated_string_Tag = new JSONStringValue("centigram");
            break;
        case Tag_decigram:
            generated_string_Tag = new JSONStringValue("decigram");
            break;
        case Tag_decagram:
            generated_string_Tag = new JSONStringValue("decagram");
            break;
        case Tag_hectogram:
            generated_string_Tag = new JSONStringValue("hectogram");
            break;
        case Tag_kilogram:
            generated_string_Tag = new JSONStringValue("kilogram");
            break;
        case Tag_megagram:
            generated_string_Tag = new JSONStringValue("megagram");
            break;
        case Tag_gigagram:
            generated_string_Tag = new JSONStringValue("gigagram");
            break;
        case Tag_teragram:
            generated_string_Tag = new JSONStringValue("teragram");
            break;
        case Tag_petagram:
            generated_string_Tag = new JSONStringValue("petagram");
            break;
        case Tag_exagram:
            generated_string_Tag = new JSONStringValue("exagram");
            break;
        case Tag_zettagram:
            generated_string_Tag = new JSONStringValue("zettagram");
            break;
        case Tag_yottagram:
            generated_string_Tag = new JSONStringValue("yottagram");
            break;
        case Tag_second:
            generated_string_Tag = new JSONStringValue("second");
            break;
        case Tag_yoctosecond:
            generated_string_Tag = new JSONStringValue("yoctosecond");
            break;
        case Tag_zeptosecond:
            generated_string_Tag = new JSONStringValue("zeptosecond");
            break;
        case Tag_attosecond:
            generated_string_Tag = new JSONStringValue("attosecond");
            break;
        case Tag_femtosecond:
            generated_string_Tag = new JSONStringValue("femtosecond");
            break;
        case Tag_picosecond:
            generated_string_Tag = new JSONStringValue("picosecond");
            break;
        case Tag_nanosecond:
            generated_string_Tag = new JSONStringValue("nanosecond");
            break;
        case Tag_microsecond:
            generated_string_Tag = new JSONStringValue("microsecond");
            break;
        case Tag_millisecond:
            generated_string_Tag = new JSONStringValue("millisecond");
            break;
        case Tag_centisecond:
            generated_string_Tag = new JSONStringValue("centisecond");
            break;
        case Tag_decisecond:
            generated_string_Tag = new JSONStringValue("decisecond");
            break;
        case Tag_decasecond:
            generated_string_Tag = new JSONStringValue("decasecond");
            break;
        case Tag_hectosecond:
            generated_string_Tag = new JSONStringValue("hectosecond");
            break;
        case Tag_kilosecond:
            generated_string_Tag = new JSONStringValue("kilosecond");
            break;
        case Tag_megasecond:
            generated_string_Tag = new JSONStringValue("megasecond");
            break;
        case Tag_gigasecond:
            generated_string_Tag = new JSONStringValue("gigasecond");
            break;
        case Tag_terasecond:
            generated_string_Tag = new JSONStringValue("terasecond");
            break;
        case Tag_petasecond:
            generated_string_Tag = new JSONStringValue("petasecond");
            break;
        case Tag_exasecond:
            generated_string_Tag = new JSONStringValue("exasecond");
            break;
        case Tag_zettasecond:
            generated_string_Tag = new JSONStringValue("zettasecond");
            break;
        case Tag_yottasecond:
            generated_string_Tag = new JSONStringValue("yottasecond");
            break;
        case Tag_ampere:
            generated_string_Tag = new JSONStringValue("ampere");
            break;
        case Tag_yoctoampere:
            generated_string_Tag = new JSONStringValue("yoctoampere");
            break;
        case Tag_zeptoampere:
            generated_string_Tag = new JSONStringValue("zeptoampere");
            break;
        case Tag_attoampere:
            generated_string_Tag = new JSONStringValue("attoampere");
            break;
        case Tag_femtoampere:
            generated_string_Tag = new JSONStringValue("femtoampere");
            break;
        case Tag_picoampere:
            generated_string_Tag = new JSONStringValue("picoampere");
            break;
        case Tag_nanoampere:
            generated_string_Tag = new JSONStringValue("nanoampere");
            break;
        case Tag_microampere:
            generated_string_Tag = new JSONStringValue("microampere");
            break;
        case Tag_milliampere:
            generated_string_Tag = new JSONStringValue("milliampere");
            break;
        case Tag_centiampere:
            generated_string_Tag = new JSONStringValue("centiampere");
            break;
        case Tag_deciampere:
            generated_string_Tag = new JSONStringValue("deciampere");
            break;
        case Tag_decaampere:
            generated_string_Tag = new JSONStringValue("decaampere");
            break;
        case Tag_hectoampere:
            generated_string_Tag = new JSONStringValue("hectoampere");
            break;
        case Tag_kiloampere:
            generated_string_Tag = new JSONStringValue("kiloampere");
            break;
        case Tag_megaampere:
            generated_string_Tag = new JSONStringValue("megaampere");
            break;
        case Tag_gigaampere:
            generated_string_Tag = new JSONStringValue("gigaampere");
            break;
        case Tag_teraampere:
            generated_string_Tag = new JSONStringValue("teraampere");
            break;
        case Tag_petaampere:
            generated_string_Tag = new JSONStringValue("petaampere");
            break;
        case Tag_exaampere:
            generated_string_Tag = new JSONStringValue("exaampere");
            break;
        case Tag_zettaampere:
            generated_string_Tag = new JSONStringValue("zettaampere");
            break;
        case Tag_yottaampere:
            generated_string_Tag = new JSONStringValue("yottaampere");
            break;
        case Tag_kelvin:
            generated_string_Tag = new JSONStringValue("kelvin");
            break;
        case Tag_yoctokelvin:
            generated_string_Tag = new JSONStringValue("yoctokelvin");
            break;
        case Tag_zeptokelvin:
            generated_string_Tag = new JSONStringValue("zeptokelvin");
            break;
        case Tag_attokelvin:
            generated_string_Tag = new JSONStringValue("attokelvin");
            break;
        case Tag_femtokelvin:
            generated_string_Tag = new JSONStringValue("femtokelvin");
            break;
        case Tag_picokelvin:
            generated_string_Tag = new JSONStringValue("picokelvin");
            break;
        case Tag_nanokelvin:
            generated_string_Tag = new JSONStringValue("nanokelvin");
            break;
        case Tag_microkelvin:
            generated_string_Tag = new JSONStringValue("microkelvin");
            break;
        case Tag_millikelvin:
            generated_string_Tag = new JSONStringValue("millikelvin");
            break;
        case Tag_centikelvin:
            generated_string_Tag = new JSONStringValue("centikelvin");
            break;
        case Tag_decikelvin:
            generated_string_Tag = new JSONStringValue("decikelvin");
            break;
        case Tag_decakelvin:
            generated_string_Tag = new JSONStringValue("decakelvin");
            break;
        case Tag_hectokelvin:
            generated_string_Tag = new JSONStringValue("hectokelvin");
            break;
        case Tag_kilokelvin:
            generated_string_Tag = new JSONStringValue("kilokelvin");
            break;
        case Tag_megakelvin:
            generated_string_Tag = new JSONStringValue("megakelvin");
            break;
        case Tag_gigakelvin:
            generated_string_Tag = new JSONStringValue("gigakelvin");
            break;
        case Tag_terakelvin:
            generated_string_Tag = new JSONStringValue("terakelvin");
            break;
        case Tag_petakelvin:
            generated_string_Tag = new JSONStringValue("petakelvin");
            break;
        case Tag_exakelvin:
            generated_string_Tag = new JSONStringValue("exakelvin");
            break;
        case Tag_zettakelvin:
            generated_string_Tag = new JSONStringValue("zettakelvin");
            break;
        case Tag_yottakelvin:
            generated_string_Tag = new JSONStringValue("yottakelvin");
            break;
        case Tag_mole:
            generated_string_Tag = new JSONStringValue("mole");
            break;
        case Tag_yoctomole:
            generated_string_Tag = new JSONStringValue("yoctomole");
            break;
        case Tag_zeptomole:
            generated_string_Tag = new JSONStringValue("zeptomole");
            break;
        case Tag_attomole:
            generated_string_Tag = new JSONStringValue("attomole");
            break;
        case Tag_femtomole:
            generated_string_Tag = new JSONStringValue("femtomole");
            break;
        case Tag_picomole:
            generated_string_Tag = new JSONStringValue("picomole");
            break;
        case Tag_nanomole:
            generated_string_Tag = new JSONStringValue("nanomole");
            break;
        case Tag_micromole:
            generated_string_Tag = new JSONStringValue("micromole");
            break;
        case Tag_millimole:
            generated_string_Tag = new JSONStringValue("millimole");
            break;
        case Tag_centimole:
            generated_string_Tag = new JSONStringValue("centimole");
            break;
        case Tag_decimole:
            generated_string_Tag = new JSONStringValue("decimole");
            break;
        case Tag_decamole:
            generated_string_Tag = new JSONStringValue("decamole");
            break;
        case Tag_hectomole:
            generated_string_Tag = new JSONStringValue("hectomole");
            break;
        case Tag_kilomole:
            generated_string_Tag = new JSONStringValue("kilomole");
            break;
        case Tag_megamole:
            generated_string_Tag = new JSONStringValue("megamole");
            break;
        case Tag_gigamole:
            generated_string_Tag = new JSONStringValue("gigamole");
            break;
        case Tag_teramole:
            generated_string_Tag = new JSONStringValue("teramole");
            break;
        case Tag_petamole:
            generated_string_Tag = new JSONStringValue("petamole");
            break;
        case Tag_examole:
            generated_string_Tag = new JSONStringValue("examole");
            break;
        case Tag_zettamole:
            generated_string_Tag = new JSONStringValue("zettamole");
            break;
        case Tag_yottamole:
            generated_string_Tag = new JSONStringValue("yottamole");
            break;
        case Tag_candela:
            generated_string_Tag = new JSONStringValue("candela");
            break;
        case Tag_yoctocandela:
            generated_string_Tag = new JSONStringValue("yoctocandela");
            break;
        case Tag_zeptocandela:
            generated_string_Tag = new JSONStringValue("zeptocandela");
            break;
        case Tag_attocandela:
            generated_string_Tag = new JSONStringValue("attocandela");
            break;
        case Tag_femtocandela:
            generated_string_Tag = new JSONStringValue("femtocandela");
            break;
        case Tag_picocandela:
            generated_string_Tag = new JSONStringValue("picocandela");
            break;
        case Tag_nanocandela:
            generated_string_Tag = new JSONStringValue("nanocandela");
            break;
        case Tag_microcandela:
            generated_string_Tag = new JSONStringValue("microcandela");
            break;
        case Tag_millicandela:
            generated_string_Tag = new JSONStringValue("millicandela");
            break;
        case Tag_centicandela:
            generated_string_Tag = new JSONStringValue("centicandela");
            break;
        case Tag_decicandela:
            generated_string_Tag = new JSONStringValue("decicandela");
            break;
        case Tag_decacandela:
            generated_string_Tag = new JSONStringValue("decacandela");
            break;
        case Tag_hectocandela:
            generated_string_Tag = new JSONStringValue("hectocandela");
            break;
        case Tag_kilocandela:
            generated_string_Tag = new JSONStringValue("kilocandela");
            break;
        case Tag_megacandela:
            generated_string_Tag = new JSONStringValue("megacandela");
            break;
        case Tag_gigacandela:
            generated_string_Tag = new JSONStringValue("gigacandela");
            break;
        case Tag_teracandela:
            generated_string_Tag = new JSONStringValue("teracandela");
            break;
        case Tag_petacandela:
            generated_string_Tag = new JSONStringValue("petacandela");
            break;
        case Tag_exacandela:
            generated_string_Tag = new JSONStringValue("exacandela");
            break;
        case Tag_zettacandela:
            generated_string_Tag = new JSONStringValue("zettacandela");
            break;
        case Tag_yottacandela:
            generated_string_Tag = new JSONStringValue("yottacandela");
            break;
        case Tag_radian:
            generated_string_Tag = new JSONStringValue("radian");
            break;
        case Tag_yoctoradian:
            generated_string_Tag = new JSONStringValue("yoctoradian");
            break;
        case Tag_zeptoradian:
            generated_string_Tag = new JSONStringValue("zeptoradian");
            break;
        case Tag_attoradian:
            generated_string_Tag = new JSONStringValue("attoradian");
            break;
        case Tag_femtoradian:
            generated_string_Tag = new JSONStringValue("femtoradian");
            break;
        case Tag_picoradian:
            generated_string_Tag = new JSONStringValue("picoradian");
            break;
        case Tag_nanoradian:
            generated_string_Tag = new JSONStringValue("nanoradian");
            break;
        case Tag_microradian:
            generated_string_Tag = new JSONStringValue("microradian");
            break;
        case Tag_milliradian:
            generated_string_Tag = new JSONStringValue("milliradian");
            break;
        case Tag_centiradian:
            generated_string_Tag = new JSONStringValue("centiradian");
            break;
        case Tag_deciradian:
            generated_string_Tag = new JSONStringValue("deciradian");
            break;
        case Tag_decaradian:
            generated_string_Tag = new JSONStringValue("decaradian");
            break;
        case Tag_hectoradian:
            generated_string_Tag = new JSONStringValue("hectoradian");
            break;
        case Tag_kiloradian:
            generated_string_Tag = new JSONStringValue("kiloradian");
            break;
        case Tag_megaradian:
            generated_string_Tag = new JSONStringValue("megaradian");
            break;
        case Tag_gigaradian:
            generated_string_Tag = new JSONStringValue("gigaradian");
            break;
        case Tag_teraradian:
            generated_string_Tag = new JSONStringValue("teraradian");
            break;
        case Tag_petaradian:
            generated_string_Tag = new JSONStringValue("petaradian");
            break;
        case Tag_exaradian:
            generated_string_Tag = new JSONStringValue("exaradian");
            break;
        case Tag_zettaradian:
            generated_string_Tag = new JSONStringValue("zettaradian");
            break;
        case Tag_yottaradian:
            generated_string_Tag = new JSONStringValue("yottaradian");
            break;
        case Tag_steradian:
            generated_string_Tag = new JSONStringValue("steradian");
            break;
        case Tag_yoctosteradian:
            generated_string_Tag = new JSONStringValue("yoctosteradian");
            break;
        case Tag_zeptosteradian:
            generated_string_Tag = new JSONStringValue("zeptosteradian");
            break;
        case Tag_attosteradian:
            generated_string_Tag = new JSONStringValue("attosteradian");
            break;
        case Tag_femtosteradian:
            generated_string_Tag = new JSONStringValue("femtosteradian");
            break;
        case Tag_picosteradian:
            generated_string_Tag = new JSONStringValue("picosteradian");
            break;
        case Tag_nanosteradian:
            generated_string_Tag = new JSONStringValue("nanosteradian");
            break;
        case Tag_microsteradian:
            generated_string_Tag = new JSONStringValue("microsteradian");
            break;
        case Tag_millisteradian:
            generated_string_Tag = new JSONStringValue("millisteradian");
            break;
        case Tag_centisteradian:
            generated_string_Tag = new JSONStringValue("centisteradian");
            break;
        case Tag_decisteradian:
            generated_string_Tag = new JSONStringValue("decisteradian");
            break;
        case Tag_decasteradian:
            generated_string_Tag = new JSONStringValue("decasteradian");
            break;
        case Tag_hectosteradian:
            generated_string_Tag = new JSONStringValue("hectosteradian");
            break;
        case Tag_kilosteradian:
            generated_string_Tag = new JSONStringValue("kilosteradian");
            break;
        case Tag_megasteradian:
            generated_string_Tag = new JSONStringValue("megasteradian");
            break;
        case Tag_gigasteradian:
            generated_string_Tag = new JSONStringValue("gigasteradian");
            break;
        case Tag_terasteradian:
            generated_string_Tag = new JSONStringValue("terasteradian");
            break;
        case Tag_petasteradian:
            generated_string_Tag = new JSONStringValue("petasteradian");
            break;
        case Tag_exasteradian:
            generated_string_Tag = new JSONStringValue("exasteradian");
            break;
        case Tag_zettasteradian:
            generated_string_Tag = new JSONStringValue("zettasteradian");
            break;
        case Tag_yottasteradian:
            generated_string_Tag = new JSONStringValue("yottasteradian");
            break;
        case Tag_hertz:
            generated_string_Tag = new JSONStringValue("hertz");
            break;
        case Tag_yoctohertz:
            generated_string_Tag = new JSONStringValue("yoctohertz");
            break;
        case Tag_zeptohertz:
            generated_string_Tag = new JSONStringValue("zeptohertz");
            break;
        case Tag_attohertz:
            generated_string_Tag = new JSONStringValue("attohertz");
            break;
        case Tag_femtohertz:
            generated_string_Tag = new JSONStringValue("femtohertz");
            break;
        case Tag_picohertz:
            generated_string_Tag = new JSONStringValue("picohertz");
            break;
        case Tag_nanohertz:
            generated_string_Tag = new JSONStringValue("nanohertz");
            break;
        case Tag_microhertz:
            generated_string_Tag = new JSONStringValue("microhertz");
            break;
        case Tag_millihertz:
            generated_string_Tag = new JSONStringValue("millihertz");
            break;
        case Tag_centihertz:
            generated_string_Tag = new JSONStringValue("centihertz");
            break;
        case Tag_decihertz:
            generated_string_Tag = new JSONStringValue("decihertz");
            break;
        case Tag_decahertz:
            generated_string_Tag = new JSONStringValue("decahertz");
            break;
        case Tag_hectohertz:
            generated_string_Tag = new JSONStringValue("hectohertz");
            break;
        case Tag_kilohertz:
            generated_string_Tag = new JSONStringValue("kilohertz");
            break;
        case Tag_megahertz:
            generated_string_Tag = new JSONStringValue("megahertz");
            break;
        case Tag_gigahertz:
            generated_string_Tag = new JSONStringValue("gigahertz");
            break;
        case Tag_terahertz:
            generated_string_Tag = new JSONStringValue("terahertz");
            break;
        case Tag_petahertz:
            generated_string_Tag = new JSONStringValue("petahertz");
            break;
        case Tag_exahertz:
            generated_string_Tag = new JSONStringValue("exahertz");
            break;
        case Tag_zettahertz:
            generated_string_Tag = new JSONStringValue("zettahertz");
            break;
        case Tag_yottahertz:
            generated_string_Tag = new JSONStringValue("yottahertz");
            break;
        case Tag_newton:
            generated_string_Tag = new JSONStringValue("newton");
            break;
        case Tag_yoctonewton:
            generated_string_Tag = new JSONStringValue("yoctonewton");
            break;
        case Tag_zeptonewton:
            generated_string_Tag = new JSONStringValue("zeptonewton");
            break;
        case Tag_attonewton:
            generated_string_Tag = new JSONStringValue("attonewton");
            break;
        case Tag_femtonewton:
            generated_string_Tag = new JSONStringValue("femtonewton");
            break;
        case Tag_piconewton:
            generated_string_Tag = new JSONStringValue("piconewton");
            break;
        case Tag_nanonewton:
            generated_string_Tag = new JSONStringValue("nanonewton");
            break;
        case Tag_micronewton:
            generated_string_Tag = new JSONStringValue("micronewton");
            break;
        case Tag_millinewton:
            generated_string_Tag = new JSONStringValue("millinewton");
            break;
        case Tag_centinewton:
            generated_string_Tag = new JSONStringValue("centinewton");
            break;
        case Tag_decinewton:
            generated_string_Tag = new JSONStringValue("decinewton");
            break;
        case Tag_decanewton:
            generated_string_Tag = new JSONStringValue("decanewton");
            break;
        case Tag_hectonewton:
            generated_string_Tag = new JSONStringValue("hectonewton");
            break;
        case Tag_kilonewton:
            generated_string_Tag = new JSONStringValue("kilonewton");
            break;
        case Tag_meganewton:
            generated_string_Tag = new JSONStringValue("meganewton");
            break;
        case Tag_giganewton:
            generated_string_Tag = new JSONStringValue("giganewton");
            break;
        case Tag_teranewton:
            generated_string_Tag = new JSONStringValue("teranewton");
            break;
        case Tag_petanewton:
            generated_string_Tag = new JSONStringValue("petanewton");
            break;
        case Tag_exanewton:
            generated_string_Tag = new JSONStringValue("exanewton");
            break;
        case Tag_zettanewton:
            generated_string_Tag = new JSONStringValue("zettanewton");
            break;
        case Tag_yottanewton:
            generated_string_Tag = new JSONStringValue("yottanewton");
            break;
        case Tag_pascal:
            generated_string_Tag = new JSONStringValue("pascal");
            break;
        case Tag_yoctopascal:
            generated_string_Tag = new JSONStringValue("yoctopascal");
            break;
        case Tag_zeptopascal:
            generated_string_Tag = new JSONStringValue("zeptopascal");
            break;
        case Tag_attopascal:
            generated_string_Tag = new JSONStringValue("attopascal");
            break;
        case Tag_femtopascal:
            generated_string_Tag = new JSONStringValue("femtopascal");
            break;
        case Tag_picopascal:
            generated_string_Tag = new JSONStringValue("picopascal");
            break;
        case Tag_nanopascal:
            generated_string_Tag = new JSONStringValue("nanopascal");
            break;
        case Tag_micropascal:
            generated_string_Tag = new JSONStringValue("micropascal");
            break;
        case Tag_millipascal:
            generated_string_Tag = new JSONStringValue("millipascal");
            break;
        case Tag_centipascal:
            generated_string_Tag = new JSONStringValue("centipascal");
            break;
        case Tag_decipascal:
            generated_string_Tag = new JSONStringValue("decipascal");
            break;
        case Tag_decapascal:
            generated_string_Tag = new JSONStringValue("decapascal");
            break;
        case Tag_hectopascal:
            generated_string_Tag = new JSONStringValue("hectopascal");
            break;
        case Tag_kilopascal:
            generated_string_Tag = new JSONStringValue("kilopascal");
            break;
        case Tag_megapascal:
            generated_string_Tag = new JSONStringValue("megapascal");
            break;
        case Tag_gigapascal:
            generated_string_Tag = new JSONStringValue("gigapascal");
            break;
        case Tag_terapascal:
            generated_string_Tag = new JSONStringValue("terapascal");
            break;
        case Tag_petapascal:
            generated_string_Tag = new JSONStringValue("petapascal");
            break;
        case Tag_exapascal:
            generated_string_Tag = new JSONStringValue("exapascal");
            break;
        case Tag_zettapascal:
            generated_string_Tag = new JSONStringValue("zettapascal");
            break;
        case Tag_yottapascal:
            generated_string_Tag = new JSONStringValue("yottapascal");
            break;
        case Tag_joule:
            generated_string_Tag = new JSONStringValue("joule");
            break;
        case Tag_yoctojoule:
            generated_string_Tag = new JSONStringValue("yoctojoule");
            break;
        case Tag_zeptojoule:
            generated_string_Tag = new JSONStringValue("zeptojoule");
            break;
        case Tag_attojoule:
            generated_string_Tag = new JSONStringValue("attojoule");
            break;
        case Tag_femtojoule:
            generated_string_Tag = new JSONStringValue("femtojoule");
            break;
        case Tag_picojoule:
            generated_string_Tag = new JSONStringValue("picojoule");
            break;
        case Tag_nanojoule:
            generated_string_Tag = new JSONStringValue("nanojoule");
            break;
        case Tag_microjoule:
            generated_string_Tag = new JSONStringValue("microjoule");
            break;
        case Tag_millijoule:
            generated_string_Tag = new JSONStringValue("millijoule");
            break;
        case Tag_centijoule:
            generated_string_Tag = new JSONStringValue("centijoule");
            break;
        case Tag_decijoule:
            generated_string_Tag = new JSONStringValue("decijoule");
            break;
        case Tag_decajoule:
            generated_string_Tag = new JSONStringValue("decajoule");
            break;
        case Tag_hectojoule:
            generated_string_Tag = new JSONStringValue("hectojoule");
            break;
        case Tag_kilojoule:
            generated_string_Tag = new JSONStringValue("kilojoule");
            break;
        case Tag_megajoule:
            generated_string_Tag = new JSONStringValue("megajoule");
            break;
        case Tag_gigajoule:
            generated_string_Tag = new JSONStringValue("gigajoule");
            break;
        case Tag_terajoule:
            generated_string_Tag = new JSONStringValue("terajoule");
            break;
        case Tag_petajoule:
            generated_string_Tag = new JSONStringValue("petajoule");
            break;
        case Tag_exajoule:
            generated_string_Tag = new JSONStringValue("exajoule");
            break;
        case Tag_zettajoule:
            generated_string_Tag = new JSONStringValue("zettajoule");
            break;
        case Tag_yottajoule:
            generated_string_Tag = new JSONStringValue("yottajoule");
            break;
        case Tag_watt:
            generated_string_Tag = new JSONStringValue("watt");
            break;
        case Tag_yoctowatt:
            generated_string_Tag = new JSONStringValue("yoctowatt");
            break;
        case Tag_zeptowatt:
            generated_string_Tag = new JSONStringValue("zeptowatt");
            break;
        case Tag_attowatt:
            generated_string_Tag = new JSONStringValue("attowatt");
            break;
        case Tag_femtowatt:
            generated_string_Tag = new JSONStringValue("femtowatt");
            break;
        case Tag_picowatt:
            generated_string_Tag = new JSONStringValue("picowatt");
            break;
        case Tag_nanowatt:
            generated_string_Tag = new JSONStringValue("nanowatt");
            break;
        case Tag_microwatt:
            generated_string_Tag = new JSONStringValue("microwatt");
            break;
        case Tag_milliwatt:
            generated_string_Tag = new JSONStringValue("milliwatt");
            break;
        case Tag_centiwatt:
            generated_string_Tag = new JSONStringValue("centiwatt");
            break;
        case Tag_deciwatt:
            generated_string_Tag = new JSONStringValue("deciwatt");
            break;
        case Tag_decawatt:
            generated_string_Tag = new JSONStringValue("decawatt");
            break;
        case Tag_hectowatt:
            generated_string_Tag = new JSONStringValue("hectowatt");
            break;
        case Tag_kilowatt:
            generated_string_Tag = new JSONStringValue("kilowatt");
            break;
        case Tag_megawatt:
            generated_string_Tag = new JSONStringValue("megawatt");
            break;
        case Tag_gigawatt:
            generated_string_Tag = new JSONStringValue("gigawatt");
            break;
        case Tag_terawatt:
            generated_string_Tag = new JSONStringValue("terawatt");
            break;
        case Tag_petawatt:
            generated_string_Tag = new JSONStringValue("petawatt");
            break;
        case Tag_exawatt:
            generated_string_Tag = new JSONStringValue("exawatt");
            break;
        case Tag_zettawatt:
            generated_string_Tag = new JSONStringValue("zettawatt");
            break;
        case Tag_yottawatt:
            generated_string_Tag = new JSONStringValue("yottawatt");
            break;
        case Tag_coulomb:
            generated_string_Tag = new JSONStringValue("coulomb");
            break;
        case Tag_yoctocoulomb:
            generated_string_Tag = new JSONStringValue("yoctocoulomb");
            break;
        case Tag_zeptocoulomb:
            generated_string_Tag = new JSONStringValue("zeptocoulomb");
            break;
        case Tag_attocoulomb:
            generated_string_Tag = new JSONStringValue("attocoulomb");
            break;
        case Tag_femtocoulomb:
            generated_string_Tag = new JSONStringValue("femtocoulomb");
            break;
        case Tag_picocoulomb:
            generated_string_Tag = new JSONStringValue("picocoulomb");
            break;
        case Tag_nanocoulomb:
            generated_string_Tag = new JSONStringValue("nanocoulomb");
            break;
        case Tag_microcoulomb:
            generated_string_Tag = new JSONStringValue("microcoulomb");
            break;
        case Tag_millicoulomb:
            generated_string_Tag = new JSONStringValue("millicoulomb");
            break;
        case Tag_centicoulomb:
            generated_string_Tag = new JSONStringValue("centicoulomb");
            break;
        case Tag_decicoulomb:
            generated_string_Tag = new JSONStringValue("decicoulomb");
            break;
        case Tag_decacoulomb:
            generated_string_Tag = new JSONStringValue("decacoulomb");
            break;
        case Tag_hectocoulomb:
            generated_string_Tag = new JSONStringValue("hectocoulomb");
            break;
        case Tag_kilocoulomb:
            generated_string_Tag = new JSONStringValue("kilocoulomb");
            break;
        case Tag_megacoulomb:
            generated_string_Tag = new JSONStringValue("megacoulomb");
            break;
        case Tag_gigacoulomb:
            generated_string_Tag = new JSONStringValue("gigacoulomb");
            break;
        case Tag_teracoulomb:
            generated_string_Tag = new JSONStringValue("teracoulomb");
            break;
        case Tag_petacoulomb:
            generated_string_Tag = new JSONStringValue("petacoulomb");
            break;
        case Tag_exacoulomb:
            generated_string_Tag = new JSONStringValue("exacoulomb");
            break;
        case Tag_zettacoulomb:
            generated_string_Tag = new JSONStringValue("zettacoulomb");
            break;
        case Tag_yottacoulomb:
            generated_string_Tag = new JSONStringValue("yottacoulomb");
            break;
        case Tag_volt:
            generated_string_Tag = new JSONStringValue("volt");
            break;
        case Tag_yoctovolt:
            generated_string_Tag = new JSONStringValue("yoctovolt");
            break;
        case Tag_zeptovolt:
            generated_string_Tag = new JSONStringValue("zeptovolt");
            break;
        case Tag_attovolt:
            generated_string_Tag = new JSONStringValue("attovolt");
            break;
        case Tag_femtovolt:
            generated_string_Tag = new JSONStringValue("femtovolt");
            break;
        case Tag_picovolt:
            generated_string_Tag = new JSONStringValue("picovolt");
            break;
        case Tag_nanovolt:
            generated_string_Tag = new JSONStringValue("nanovolt");
            break;
        case Tag_microvolt:
            generated_string_Tag = new JSONStringValue("microvolt");
            break;
        case Tag_millivolt:
            generated_string_Tag = new JSONStringValue("millivolt");
            break;
        case Tag_centivolt:
            generated_string_Tag = new JSONStringValue("centivolt");
            break;
        case Tag_decivolt:
            generated_string_Tag = new JSONStringValue("decivolt");
            break;
        case Tag_decavolt:
            generated_string_Tag = new JSONStringValue("decavolt");
            break;
        case Tag_hectovolt:
            generated_string_Tag = new JSONStringValue("hectovolt");
            break;
        case Tag_kilovolt:
            generated_string_Tag = new JSONStringValue("kilovolt");
            break;
        case Tag_megavolt:
            generated_string_Tag = new JSONStringValue("megavolt");
            break;
        case Tag_gigavolt:
            generated_string_Tag = new JSONStringValue("gigavolt");
            break;
        case Tag_teravolt:
            generated_string_Tag = new JSONStringValue("teravolt");
            break;
        case Tag_petavolt:
            generated_string_Tag = new JSONStringValue("petavolt");
            break;
        case Tag_exavolt:
            generated_string_Tag = new JSONStringValue("exavolt");
            break;
        case Tag_zettavolt:
            generated_string_Tag = new JSONStringValue("zettavolt");
            break;
        case Tag_yottavolt:
            generated_string_Tag = new JSONStringValue("yottavolt");
            break;
        case Tag_farad:
            generated_string_Tag = new JSONStringValue("farad");
            break;
        case Tag_yoctofarad:
            generated_string_Tag = new JSONStringValue("yoctofarad");
            break;
        case Tag_zeptofarad:
            generated_string_Tag = new JSONStringValue("zeptofarad");
            break;
        case Tag_attofarad:
            generated_string_Tag = new JSONStringValue("attofarad");
            break;
        case Tag_femtofarad:
            generated_string_Tag = new JSONStringValue("femtofarad");
            break;
        case Tag_picofarad:
            generated_string_Tag = new JSONStringValue("picofarad");
            break;
        case Tag_nanofarad:
            generated_string_Tag = new JSONStringValue("nanofarad");
            break;
        case Tag_microfarad:
            generated_string_Tag = new JSONStringValue("microfarad");
            break;
        case Tag_millifarad:
            generated_string_Tag = new JSONStringValue("millifarad");
            break;
        case Tag_centifarad:
            generated_string_Tag = new JSONStringValue("centifarad");
            break;
        case Tag_decifarad:
            generated_string_Tag = new JSONStringValue("decifarad");
            break;
        case Tag_decafarad:
            generated_string_Tag = new JSONStringValue("decafarad");
            break;
        case Tag_hectofarad:
            generated_string_Tag = new JSONStringValue("hectofarad");
            break;
        case Tag_kilofarad:
            generated_string_Tag = new JSONStringValue("kilofarad");
            break;
        case Tag_megafarad:
            generated_string_Tag = new JSONStringValue("megafarad");
            break;
        case Tag_gigafarad:
            generated_string_Tag = new JSONStringValue("gigafarad");
            break;
        case Tag_terafarad:
            generated_string_Tag = new JSONStringValue("terafarad");
            break;
        case Tag_petafarad:
            generated_string_Tag = new JSONStringValue("petafarad");
            break;
        case Tag_exafarad:
            generated_string_Tag = new JSONStringValue("exafarad");
            break;
        case Tag_zettafarad:
            generated_string_Tag = new JSONStringValue("zettafarad");
            break;
        case Tag_yottafarad:
            generated_string_Tag = new JSONStringValue("yottafarad");
            break;
        case Tag_ohm:
            generated_string_Tag = new JSONStringValue("ohm");
            break;
        case Tag_yoctoohm:
            generated_string_Tag = new JSONStringValue("yoctoohm");
            break;
        case Tag_zeptoohm:
            generated_string_Tag = new JSONStringValue("zeptoohm");
            break;
        case Tag_attoohm:
            generated_string_Tag = new JSONStringValue("attoohm");
            break;
        case Tag_femtoohm:
            generated_string_Tag = new JSONStringValue("femtoohm");
            break;
        case Tag_picoohm:
            generated_string_Tag = new JSONStringValue("picoohm");
            break;
        case Tag_nanoohm:
            generated_string_Tag = new JSONStringValue("nanoohm");
            break;
        case Tag_microohm:
            generated_string_Tag = new JSONStringValue("microohm");
            break;
        case Tag_milliohm:
            generated_string_Tag = new JSONStringValue("milliohm");
            break;
        case Tag_centiohm:
            generated_string_Tag = new JSONStringValue("centiohm");
            break;
        case Tag_deciohm:
            generated_string_Tag = new JSONStringValue("deciohm");
            break;
        case Tag_decaohm:
            generated_string_Tag = new JSONStringValue("decaohm");
            break;
        case Tag_hectoohm:
            generated_string_Tag = new JSONStringValue("hectoohm");
            break;
        case Tag_kiloohm:
            generated_string_Tag = new JSONStringValue("kiloohm");
            break;
        case Tag_megaohm:
            generated_string_Tag = new JSONStringValue("megaohm");
            break;
        case Tag_gigaohm:
            generated_string_Tag = new JSONStringValue("gigaohm");
            break;
        case Tag_teraohm:
            generated_string_Tag = new JSONStringValue("teraohm");
            break;
        case Tag_petaohm:
            generated_string_Tag = new JSONStringValue("petaohm");
            break;
        case Tag_exaohm:
            generated_string_Tag = new JSONStringValue("exaohm");
            break;
        case Tag_zettaohm:
            generated_string_Tag = new JSONStringValue("zettaohm");
            break;
        case Tag_yottaohm:
            generated_string_Tag = new JSONStringValue("yottaohm");
            break;
        case Tag_siemens:
            generated_string_Tag = new JSONStringValue("siemens");
            break;
        case Tag_yoctosiemens:
            generated_string_Tag = new JSONStringValue("yoctosiemens");
            break;
        case Tag_zeptosiemens:
            generated_string_Tag = new JSONStringValue("zeptosiemens");
            break;
        case Tag_attosiemens:
            generated_string_Tag = new JSONStringValue("attosiemens");
            break;
        case Tag_femtosiemens:
            generated_string_Tag = new JSONStringValue("femtosiemens");
            break;
        case Tag_picosiemens:
            generated_string_Tag = new JSONStringValue("picosiemens");
            break;
        case Tag_nanosiemens:
            generated_string_Tag = new JSONStringValue("nanosiemens");
            break;
        case Tag_microsiemens:
            generated_string_Tag = new JSONStringValue("microsiemens");
            break;
        case Tag_millisiemens:
            generated_string_Tag = new JSONStringValue("millisiemens");
            break;
        case Tag_centisiemens:
            generated_string_Tag = new JSONStringValue("centisiemens");
            break;
        case Tag_decisiemens:
            generated_string_Tag = new JSONStringValue("decisiemens");
            break;
        case Tag_decasiemens:
            generated_string_Tag = new JSONStringValue("decasiemens");
            break;
        case Tag_hectosiemens:
            generated_string_Tag = new JSONStringValue("hectosiemens");
            break;
        case Tag_kilosiemens:
            generated_string_Tag = new JSONStringValue("kilosiemens");
            break;
        case Tag_megasiemens:
            generated_string_Tag = new JSONStringValue("megasiemens");
            break;
        case Tag_gigasiemens:
            generated_string_Tag = new JSONStringValue("gigasiemens");
            break;
        case Tag_terasiemens:
            generated_string_Tag = new JSONStringValue("terasiemens");
            break;
        case Tag_petasiemens:
            generated_string_Tag = new JSONStringValue("petasiemens");
            break;
        case Tag_exasiemens:
            generated_string_Tag = new JSONStringValue("exasiemens");
            break;
        case Tag_zettasiemens:
            generated_string_Tag = new JSONStringValue("zettasiemens");
            break;
        case Tag_yottasiemens:
            generated_string_Tag = new JSONStringValue("yottasiemens");
            break;
        case Tag_weber:
            generated_string_Tag = new JSONStringValue("weber");
            break;
        case Tag_yoctoweber:
            generated_string_Tag = new JSONStringValue("yoctoweber");
            break;
        case Tag_zeptoweber:
            generated_string_Tag = new JSONStringValue("zeptoweber");
            break;
        case Tag_attoweber:
            generated_string_Tag = new JSONStringValue("attoweber");
            break;
        case Tag_femtoweber:
            generated_string_Tag = new JSONStringValue("femtoweber");
            break;
        case Tag_picoweber:
            generated_string_Tag = new JSONStringValue("picoweber");
            break;
        case Tag_nanoweber:
            generated_string_Tag = new JSONStringValue("nanoweber");
            break;
        case Tag_microweber:
            generated_string_Tag = new JSONStringValue("microweber");
            break;
        case Tag_milliweber:
            generated_string_Tag = new JSONStringValue("milliweber");
            break;
        case Tag_centiweber:
            generated_string_Tag = new JSONStringValue("centiweber");
            break;
        case Tag_deciweber:
            generated_string_Tag = new JSONStringValue("deciweber");
            break;
        case Tag_decaweber:
            generated_string_Tag = new JSONStringValue("decaweber");
            break;
        case Tag_hectoweber:
            generated_string_Tag = new JSONStringValue("hectoweber");
            break;
        case Tag_kiloweber:
            generated_string_Tag = new JSONStringValue("kiloweber");
            break;
        case Tag_megaweber:
            generated_string_Tag = new JSONStringValue("megaweber");
            break;
        case Tag_gigaweber:
            generated_string_Tag = new JSONStringValue("gigaweber");
            break;
        case Tag_teraweber:
            generated_string_Tag = new JSONStringValue("teraweber");
            break;
        case Tag_petaweber:
            generated_string_Tag = new JSONStringValue("petaweber");
            break;
        case Tag_exaweber:
            generated_string_Tag = new JSONStringValue("exaweber");
            break;
        case Tag_zettaweber:
            generated_string_Tag = new JSONStringValue("zettaweber");
            break;
        case Tag_yottaweber:
            generated_string_Tag = new JSONStringValue("yottaweber");
            break;
        case Tag_tesla:
            generated_string_Tag = new JSONStringValue("tesla");
            break;
        case Tag_yoctotesla:
            generated_string_Tag = new JSONStringValue("yoctotesla");
            break;
        case Tag_zeptotesla:
            generated_string_Tag = new JSONStringValue("zeptotesla");
            break;
        case Tag_attotesla:
            generated_string_Tag = new JSONStringValue("attotesla");
            break;
        case Tag_femtotesla:
            generated_string_Tag = new JSONStringValue("femtotesla");
            break;
        case Tag_picotesla:
            generated_string_Tag = new JSONStringValue("picotesla");
            break;
        case Tag_nanotesla:
            generated_string_Tag = new JSONStringValue("nanotesla");
            break;
        case Tag_microtesla:
            generated_string_Tag = new JSONStringValue("microtesla");
            break;
        case Tag_millitesla:
            generated_string_Tag = new JSONStringValue("millitesla");
            break;
        case Tag_centitesla:
            generated_string_Tag = new JSONStringValue("centitesla");
            break;
        case Tag_decitesla:
            generated_string_Tag = new JSONStringValue("decitesla");
            break;
        case Tag_decatesla:
            generated_string_Tag = new JSONStringValue("decatesla");
            break;
        case Tag_hectotesla:
            generated_string_Tag = new JSONStringValue("hectotesla");
            break;
        case Tag_kilotesla:
            generated_string_Tag = new JSONStringValue("kilotesla");
            break;
        case Tag_megatesla:
            generated_string_Tag = new JSONStringValue("megatesla");
            break;
        case Tag_gigatesla:
            generated_string_Tag = new JSONStringValue("gigatesla");
            break;
        case Tag_teratesla:
            generated_string_Tag = new JSONStringValue("teratesla");
            break;
        case Tag_petatesla:
            generated_string_Tag = new JSONStringValue("petatesla");
            break;
        case Tag_exatesla:
            generated_string_Tag = new JSONStringValue("exatesla");
            break;
        case Tag_zettatesla:
            generated_string_Tag = new JSONStringValue("zettatesla");
            break;
        case Tag_yottatesla:
            generated_string_Tag = new JSONStringValue("yottatesla");
            break;
        case Tag_henry:
            generated_string_Tag = new JSONStringValue("henry");
            break;
        case Tag_yoctohenry:
            generated_string_Tag = new JSONStringValue("yoctohenry");
            break;
        case Tag_zeptohenry:
            generated_string_Tag = new JSONStringValue("zeptohenry");
            break;
        case Tag_attohenry:
            generated_string_Tag = new JSONStringValue("attohenry");
            break;
        case Tag_femtohenry:
            generated_string_Tag = new JSONStringValue("femtohenry");
            break;
        case Tag_picohenry:
            generated_string_Tag = new JSONStringValue("picohenry");
            break;
        case Tag_nanohenry:
            generated_string_Tag = new JSONStringValue("nanohenry");
            break;
        case Tag_microhenry:
            generated_string_Tag = new JSONStringValue("microhenry");
            break;
        case Tag_millihenry:
            generated_string_Tag = new JSONStringValue("millihenry");
            break;
        case Tag_centihenry:
            generated_string_Tag = new JSONStringValue("centihenry");
            break;
        case Tag_decihenry:
            generated_string_Tag = new JSONStringValue("decihenry");
            break;
        case Tag_decahenry:
            generated_string_Tag = new JSONStringValue("decahenry");
            break;
        case Tag_hectohenry:
            generated_string_Tag = new JSONStringValue("hectohenry");
            break;
        case Tag_kilohenry:
            generated_string_Tag = new JSONStringValue("kilohenry");
            break;
        case Tag_megahenry:
            generated_string_Tag = new JSONStringValue("megahenry");
            break;
        case Tag_gigahenry:
            generated_string_Tag = new JSONStringValue("gigahenry");
            break;
        case Tag_terahenry:
            generated_string_Tag = new JSONStringValue("terahenry");
            break;
        case Tag_petahenry:
            generated_string_Tag = new JSONStringValue("petahenry");
            break;
        case Tag_exahenry:
            generated_string_Tag = new JSONStringValue("exahenry");
            break;
        case Tag_zettahenry:
            generated_string_Tag = new JSONStringValue("zettahenry");
            break;
        case Tag_yottahenry:
            generated_string_Tag = new JSONStringValue("yottahenry");
            break;
        case Tag_degree_celsius:
            generated_string_Tag = new JSONStringValue("degree_celsius");
            break;
        case Tag_yoctodegree_celsius:
            generated_string_Tag = new JSONStringValue("yoctodegree_celsius");
            break;
        case Tag_zeptodegree_celsius:
            generated_string_Tag = new JSONStringValue("zeptodegree_celsius");
            break;
        case Tag_attodegree_celsius:
            generated_string_Tag = new JSONStringValue("attodegree_celsius");
            break;
        case Tag_femtodegree_celsius:
            generated_string_Tag = new JSONStringValue("femtodegree_celsius");
            break;
        case Tag_picodegree_celsius:
            generated_string_Tag = new JSONStringValue("picodegree_celsius");
            break;
        case Tag_nanodegree_celsius:
            generated_string_Tag = new JSONStringValue("nanodegree_celsius");
            break;
        case Tag_microdegree_celsius:
            generated_string_Tag = new JSONStringValue("microdegree_celsius");
            break;
        case Tag_millidegree_celsius:
            generated_string_Tag = new JSONStringValue("millidegree_celsius");
            break;
        case Tag_centidegree_celsius:
            generated_string_Tag = new JSONStringValue("centidegree_celsius");
            break;
        case Tag_decidegree_celsius:
            generated_string_Tag = new JSONStringValue("decidegree_celsius");
            break;
        case Tag_decadegree_celsius:
            generated_string_Tag = new JSONStringValue("decadegree_celsius");
            break;
        case Tag_hectodegree_celsius:
            generated_string_Tag = new JSONStringValue("hectodegree_celsius");
            break;
        case Tag_kilodegree_celsius:
            generated_string_Tag = new JSONStringValue("kilodegree_celsius");
            break;
        case Tag_megadegree_celsius:
            generated_string_Tag = new JSONStringValue("megadegree_celsius");
            break;
        case Tag_gigadegree_celsius:
            generated_string_Tag = new JSONStringValue("gigadegree_celsius");
            break;
        case Tag_teradegree_celsius:
            generated_string_Tag = new JSONStringValue("teradegree_celsius");
            break;
        case Tag_petadegree_celsius:
            generated_string_Tag = new JSONStringValue("petadegree_celsius");
            break;
        case Tag_exadegree_celsius:
            generated_string_Tag = new JSONStringValue("exadegree_celsius");
            break;
        case Tag_zettadegree_celsius:
            generated_string_Tag = new JSONStringValue("zettadegree_celsius");
            break;
        case Tag_yottadegree_celsius:
            generated_string_Tag = new JSONStringValue("yottadegree_celsius");
            break;
        case Tag_lumen:
            generated_string_Tag = new JSONStringValue("lumen");
            break;
        case Tag_yoctolumen:
            generated_string_Tag = new JSONStringValue("yoctolumen");
            break;
        case Tag_zeptolumen:
            generated_string_Tag = new JSONStringValue("zeptolumen");
            break;
        case Tag_attolumen:
            generated_string_Tag = new JSONStringValue("attolumen");
            break;
        case Tag_femtolumen:
            generated_string_Tag = new JSONStringValue("femtolumen");
            break;
        case Tag_picolumen:
            generated_string_Tag = new JSONStringValue("picolumen");
            break;
        case Tag_nanolumen:
            generated_string_Tag = new JSONStringValue("nanolumen");
            break;
        case Tag_microlumen:
            generated_string_Tag = new JSONStringValue("microlumen");
            break;
        case Tag_millilumen:
            generated_string_Tag = new JSONStringValue("millilumen");
            break;
        case Tag_centilumen:
            generated_string_Tag = new JSONStringValue("centilumen");
            break;
        case Tag_decilumen:
            generated_string_Tag = new JSONStringValue("decilumen");
            break;
        case Tag_decalumen:
            generated_string_Tag = new JSONStringValue("decalumen");
            break;
        case Tag_hectolumen:
            generated_string_Tag = new JSONStringValue("hectolumen");
            break;
        case Tag_kilolumen:
            generated_string_Tag = new JSONStringValue("kilolumen");
            break;
        case Tag_megalumen:
            generated_string_Tag = new JSONStringValue("megalumen");
            break;
        case Tag_gigalumen:
            generated_string_Tag = new JSONStringValue("gigalumen");
            break;
        case Tag_teralumen:
            generated_string_Tag = new JSONStringValue("teralumen");
            break;
        case Tag_petalumen:
            generated_string_Tag = new JSONStringValue("petalumen");
            break;
        case Tag_exalumen:
            generated_string_Tag = new JSONStringValue("exalumen");
            break;
        case Tag_zettalumen:
            generated_string_Tag = new JSONStringValue("zettalumen");
            break;
        case Tag_yottalumen:
            generated_string_Tag = new JSONStringValue("yottalumen");
            break;
        case Tag_lux:
            generated_string_Tag = new JSONStringValue("lux");
            break;
        case Tag_yoctolux:
            generated_string_Tag = new JSONStringValue("yoctolux");
            break;
        case Tag_zeptolux:
            generated_string_Tag = new JSONStringValue("zeptolux");
            break;
        case Tag_attolux:
            generated_string_Tag = new JSONStringValue("attolux");
            break;
        case Tag_femtolux:
            generated_string_Tag = new JSONStringValue("femtolux");
            break;
        case Tag_picolux:
            generated_string_Tag = new JSONStringValue("picolux");
            break;
        case Tag_nanolux:
            generated_string_Tag = new JSONStringValue("nanolux");
            break;
        case Tag_microlux:
            generated_string_Tag = new JSONStringValue("microlux");
            break;
        case Tag_millilux:
            generated_string_Tag = new JSONStringValue("millilux");
            break;
        case Tag_centilux:
            generated_string_Tag = new JSONStringValue("centilux");
            break;
        case Tag_decilux:
            generated_string_Tag = new JSONStringValue("decilux");
            break;
        case Tag_decalux:
            generated_string_Tag = new JSONStringValue("decalux");
            break;
        case Tag_hectolux:
            generated_string_Tag = new JSONStringValue("hectolux");
            break;
        case Tag_kilolux:
            generated_string_Tag = new JSONStringValue("kilolux");
            break;
        case Tag_megalux:
            generated_string_Tag = new JSONStringValue("megalux");
            break;
        case Tag_gigalux:
            generated_string_Tag = new JSONStringValue("gigalux");
            break;
        case Tag_teralux:
            generated_string_Tag = new JSONStringValue("teralux");
            break;
        case Tag_petalux:
            generated_string_Tag = new JSONStringValue("petalux");
            break;
        case Tag_exalux:
            generated_string_Tag = new JSONStringValue("exalux");
            break;
        case Tag_zettalux:
            generated_string_Tag = new JSONStringValue("zettalux");
            break;
        case Tag_yottalux:
            generated_string_Tag = new JSONStringValue("yottalux");
            break;
        case Tag_becquerel:
            generated_string_Tag = new JSONStringValue("becquerel");
            break;
        case Tag_yoctobecquerel:
            generated_string_Tag = new JSONStringValue("yoctobecquerel");
            break;
        case Tag_zeptobecquerel:
            generated_string_Tag = new JSONStringValue("zeptobecquerel");
            break;
        case Tag_attobecquerel:
            generated_string_Tag = new JSONStringValue("attobecquerel");
            break;
        case Tag_femtobecquerel:
            generated_string_Tag = new JSONStringValue("femtobecquerel");
            break;
        case Tag_picobecquerel:
            generated_string_Tag = new JSONStringValue("picobecquerel");
            break;
        case Tag_nanobecquerel:
            generated_string_Tag = new JSONStringValue("nanobecquerel");
            break;
        case Tag_microbecquerel:
            generated_string_Tag = new JSONStringValue("microbecquerel");
            break;
        case Tag_millibecquerel:
            generated_string_Tag = new JSONStringValue("millibecquerel");
            break;
        case Tag_centibecquerel:
            generated_string_Tag = new JSONStringValue("centibecquerel");
            break;
        case Tag_decibecquerel:
            generated_string_Tag = new JSONStringValue("decibecquerel");
            break;
        case Tag_decabecquerel:
            generated_string_Tag = new JSONStringValue("decabecquerel");
            break;
        case Tag_hectobecquerel:
            generated_string_Tag = new JSONStringValue("hectobecquerel");
            break;
        case Tag_kilobecquerel:
            generated_string_Tag = new JSONStringValue("kilobecquerel");
            break;
        case Tag_megabecquerel:
            generated_string_Tag = new JSONStringValue("megabecquerel");
            break;
        case Tag_gigabecquerel:
            generated_string_Tag = new JSONStringValue("gigabecquerel");
            break;
        case Tag_terabecquerel:
            generated_string_Tag = new JSONStringValue("terabecquerel");
            break;
        case Tag_petabecquerel:
            generated_string_Tag = new JSONStringValue("petabecquerel");
            break;
        case Tag_exabecquerel:
            generated_string_Tag = new JSONStringValue("exabecquerel");
            break;
        case Tag_zettabecquerel:
            generated_string_Tag = new JSONStringValue("zettabecquerel");
            break;
        case Tag_yottabecquerel:
            generated_string_Tag = new JSONStringValue("yottabecquerel");
            break;
        case Tag_gray:
            generated_string_Tag = new JSONStringValue("gray");
            break;
        case Tag_yoctogray:
            generated_string_Tag = new JSONStringValue("yoctogray");
            break;
        case Tag_zeptogray:
            generated_string_Tag = new JSONStringValue("zeptogray");
            break;
        case Tag_attogray:
            generated_string_Tag = new JSONStringValue("attogray");
            break;
        case Tag_femtogray:
            generated_string_Tag = new JSONStringValue("femtogray");
            break;
        case Tag_picogray:
            generated_string_Tag = new JSONStringValue("picogray");
            break;
        case Tag_nanogray:
            generated_string_Tag = new JSONStringValue("nanogray");
            break;
        case Tag_microgray:
            generated_string_Tag = new JSONStringValue("microgray");
            break;
        case Tag_milligray:
            generated_string_Tag = new JSONStringValue("milligray");
            break;
        case Tag_centigray:
            generated_string_Tag = new JSONStringValue("centigray");
            break;
        case Tag_decigray:
            generated_string_Tag = new JSONStringValue("decigray");
            break;
        case Tag_decagray:
            generated_string_Tag = new JSONStringValue("decagray");
            break;
        case Tag_hectogray:
            generated_string_Tag = new JSONStringValue("hectogray");
            break;
        case Tag_kilogray:
            generated_string_Tag = new JSONStringValue("kilogray");
            break;
        case Tag_megagray:
            generated_string_Tag = new JSONStringValue("megagray");
            break;
        case Tag_gigagray:
            generated_string_Tag = new JSONStringValue("gigagray");
            break;
        case Tag_teragray:
            generated_string_Tag = new JSONStringValue("teragray");
            break;
        case Tag_petagray:
            generated_string_Tag = new JSONStringValue("petagray");
            break;
        case Tag_exagray:
            generated_string_Tag = new JSONStringValue("exagray");
            break;
        case Tag_zettagray:
            generated_string_Tag = new JSONStringValue("zettagray");
            break;
        case Tag_yottagray:
            generated_string_Tag = new JSONStringValue("yottagray");
            break;
        case Tag_sievert:
            generated_string_Tag = new JSONStringValue("sievert");
            break;
        case Tag_yoctosievert:
            generated_string_Tag = new JSONStringValue("yoctosievert");
            break;
        case Tag_zeptosievert:
            generated_string_Tag = new JSONStringValue("zeptosievert");
            break;
        case Tag_attosievert:
            generated_string_Tag = new JSONStringValue("attosievert");
            break;
        case Tag_femtosievert:
            generated_string_Tag = new JSONStringValue("femtosievert");
            break;
        case Tag_picosievert:
            generated_string_Tag = new JSONStringValue("picosievert");
            break;
        case Tag_nanosievert:
            generated_string_Tag = new JSONStringValue("nanosievert");
            break;
        case Tag_microsievert:
            generated_string_Tag = new JSONStringValue("microsievert");
            break;
        case Tag_millisievert:
            generated_string_Tag = new JSONStringValue("millisievert");
            break;
        case Tag_centisievert:
            generated_string_Tag = new JSONStringValue("centisievert");
            break;
        case Tag_decisievert:
            generated_string_Tag = new JSONStringValue("decisievert");
            break;
        case Tag_decasievert:
            generated_string_Tag = new JSONStringValue("decasievert");
            break;
        case Tag_hectosievert:
            generated_string_Tag = new JSONStringValue("hectosievert");
            break;
        case Tag_kilosievert:
            generated_string_Tag = new JSONStringValue("kilosievert");
            break;
        case Tag_megasievert:
            generated_string_Tag = new JSONStringValue("megasievert");
            break;
        case Tag_gigasievert:
            generated_string_Tag = new JSONStringValue("gigasievert");
            break;
        case Tag_terasievert:
            generated_string_Tag = new JSONStringValue("terasievert");
            break;
        case Tag_petasievert:
            generated_string_Tag = new JSONStringValue("petasievert");
            break;
        case Tag_exasievert:
            generated_string_Tag = new JSONStringValue("exasievert");
            break;
        case Tag_zettasievert:
            generated_string_Tag = new JSONStringValue("zettasievert");
            break;
        case Tag_yottasievert:
            generated_string_Tag = new JSONStringValue("yottasievert");
            break;
        case Tag_katal:
            generated_string_Tag = new JSONStringValue("katal");
            break;
        case Tag_yoctokatal:
            generated_string_Tag = new JSONStringValue("yoctokatal");
            break;
        case Tag_zeptokatal:
            generated_string_Tag = new JSONStringValue("zeptokatal");
            break;
        case Tag_attokatal:
            generated_string_Tag = new JSONStringValue("attokatal");
            break;
        case Tag_femtokatal:
            generated_string_Tag = new JSONStringValue("femtokatal");
            break;
        case Tag_picokatal:
            generated_string_Tag = new JSONStringValue("picokatal");
            break;
        case Tag_nanokatal:
            generated_string_Tag = new JSONStringValue("nanokatal");
            break;
        case Tag_microkatal:
            generated_string_Tag = new JSONStringValue("microkatal");
            break;
        case Tag_millikatal:
            generated_string_Tag = new JSONStringValue("millikatal");
            break;
        case Tag_centikatal:
            generated_string_Tag = new JSONStringValue("centikatal");
            break;
        case Tag_decikatal:
            generated_string_Tag = new JSONStringValue("decikatal");
            break;
        case Tag_decakatal:
            generated_string_Tag = new JSONStringValue("decakatal");
            break;
        case Tag_hectokatal:
            generated_string_Tag = new JSONStringValue("hectokatal");
            break;
        case Tag_kilokatal:
            generated_string_Tag = new JSONStringValue("kilokatal");
            break;
        case Tag_megakatal:
            generated_string_Tag = new JSONStringValue("megakatal");
            break;
        case Tag_gigakatal:
            generated_string_Tag = new JSONStringValue("gigakatal");
            break;
        case Tag_terakatal:
            generated_string_Tag = new JSONStringValue("terakatal");
            break;
        case Tag_petakatal:
            generated_string_Tag = new JSONStringValue("petakatal");
            break;
        case Tag_exakatal:
            generated_string_Tag = new JSONStringValue("exakatal");
            break;
        case Tag_zettakatal:
            generated_string_Tag = new JSONStringValue("zettakatal");
            break;
        case Tag_yottakatal:
            generated_string_Tag = new JSONStringValue("yottakatal");
            break;
        case Tag_hectare:
            generated_string_Tag = new JSONStringValue("hectare");
            break;
        case Tag_liter:
            generated_string_Tag = new JSONStringValue("liter");
            break;
        case Tag_yoctoliter:
            generated_string_Tag = new JSONStringValue("yoctoliter");
            break;
        case Tag_zeptoliter:
            generated_string_Tag = new JSONStringValue("zeptoliter");
            break;
        case Tag_attoliter:
            generated_string_Tag = new JSONStringValue("attoliter");
            break;
        case Tag_femtoliter:
            generated_string_Tag = new JSONStringValue("femtoliter");
            break;
        case Tag_picoliter:
            generated_string_Tag = new JSONStringValue("picoliter");
            break;
        case Tag_nanoliter:
            generated_string_Tag = new JSONStringValue("nanoliter");
            break;
        case Tag_microliter:
            generated_string_Tag = new JSONStringValue("microliter");
            break;
        case Tag_milliliter:
            generated_string_Tag = new JSONStringValue("milliliter");
            break;
        case Tag_centiliter:
            generated_string_Tag = new JSONStringValue("centiliter");
            break;
        case Tag_deciliter:
            generated_string_Tag = new JSONStringValue("deciliter");
            break;
        case Tag_decaliter:
            generated_string_Tag = new JSONStringValue("decaliter");
            break;
        case Tag_hectoliter:
            generated_string_Tag = new JSONStringValue("hectoliter");
            break;
        case Tag_kiloliter:
            generated_string_Tag = new JSONStringValue("kiloliter");
            break;
        case Tag_megaliter:
            generated_string_Tag = new JSONStringValue("megaliter");
            break;
        case Tag_gigaliter:
            generated_string_Tag = new JSONStringValue("gigaliter");
            break;
        case Tag_teraliter:
            generated_string_Tag = new JSONStringValue("teraliter");
            break;
        case Tag_petaliter:
            generated_string_Tag = new JSONStringValue("petaliter");
            break;
        case Tag_exaliter:
            generated_string_Tag = new JSONStringValue("exaliter");
            break;
        case Tag_zettaliter:
            generated_string_Tag = new JSONStringValue("zettaliter");
            break;
        case Tag_yottaliter:
            generated_string_Tag = new JSONStringValue("yottaliter");
            break;
        case Tag_tonne:
            generated_string_Tag = new JSONStringValue("tonne");
            break;
        case Tag_yoctotonne:
            generated_string_Tag = new JSONStringValue("yoctotonne");
            break;
        case Tag_zeptotonne:
            generated_string_Tag = new JSONStringValue("zeptotonne");
            break;
        case Tag_attotonne:
            generated_string_Tag = new JSONStringValue("attotonne");
            break;
        case Tag_femtotonne:
            generated_string_Tag = new JSONStringValue("femtotonne");
            break;
        case Tag_picotonne:
            generated_string_Tag = new JSONStringValue("picotonne");
            break;
        case Tag_nanotonne:
            generated_string_Tag = new JSONStringValue("nanotonne");
            break;
        case Tag_microtonne:
            generated_string_Tag = new JSONStringValue("microtonne");
            break;
        case Tag_millitonne:
            generated_string_Tag = new JSONStringValue("millitonne");
            break;
        case Tag_centitonne:
            generated_string_Tag = new JSONStringValue("centitonne");
            break;
        case Tag_decitonne:
            generated_string_Tag = new JSONStringValue("decitonne");
            break;
        case Tag_decatonne:
            generated_string_Tag = new JSONStringValue("decatonne");
            break;
        case Tag_hectotonne:
            generated_string_Tag = new JSONStringValue("hectotonne");
            break;
        case Tag_kilotonne:
            generated_string_Tag = new JSONStringValue("kilotonne");
            break;
        case Tag_megatonne:
            generated_string_Tag = new JSONStringValue("megatonne");
            break;
        case Tag_gigatonne:
            generated_string_Tag = new JSONStringValue("gigatonne");
            break;
        case Tag_teratonne:
            generated_string_Tag = new JSONStringValue("teratonne");
            break;
        case Tag_petatonne:
            generated_string_Tag = new JSONStringValue("petatonne");
            break;
        case Tag_exatonne:
            generated_string_Tag = new JSONStringValue("exatonne");
            break;
        case Tag_zettatonne:
            generated_string_Tag = new JSONStringValue("zettatonne");
            break;
        case Tag_yottatonne:
            generated_string_Tag = new JSONStringValue("yottatonne");
            break;
        case Tag_astronomical_unit:
            generated_string_Tag = new JSONStringValue("astronomical_unit");
            break;
        case Tag_angstrom:
            generated_string_Tag = new JSONStringValue("angstrom");
            break;
        case Tag_minute:
            generated_string_Tag = new JSONStringValue("minute");
            break;
        case Tag_hour:
            generated_string_Tag = new JSONStringValue("hour");
            break;
        case Tag_day:
            generated_string_Tag = new JSONStringValue("day");
            break;
        case Tag_week:
            generated_string_Tag = new JSONStringValue("week");
            break;
        case Tag_fortnight:
            generated_string_Tag = new JSONStringValue("fortnight");
            break;
        case Tag_month:
            generated_string_Tag = new JSONStringValue("month");
            break;
        case Tag_year:
            generated_string_Tag = new JSONStringValue("year");
            break;
        case Tag_biennium:
            generated_string_Tag = new JSONStringValue("biennium");
            break;
        case Tag_triennium:
            generated_string_Tag = new JSONStringValue("triennium");
            break;
        case Tag_quadrennium:
            generated_string_Tag = new JSONStringValue("quadrennium");
            break;
        case Tag_lustrum:
            generated_string_Tag = new JSONStringValue("lustrum");
            break;
        case Tag_decade:
            generated_string_Tag = new JSONStringValue("decade");
            break;
        case Tag_century:
            generated_string_Tag = new JSONStringValue("century");
            break;
        case Tag_millennium:
            generated_string_Tag = new JSONStringValue("millennium");
            break;
        case Tag_sidereal_day:
            generated_string_Tag = new JSONStringValue("sidereal_day");
            break;
        case Tag_sidereal_year:
            generated_string_Tag = new JSONStringValue("sidereal_year");
            break;
        case Tag_helek:
            generated_string_Tag = new JSONStringValue("helek");
            break;
        case Tag_Planck_time:
            generated_string_Tag = new JSONStringValue("Planck_time");
            break;
        case Tag_shake:
            generated_string_Tag = new JSONStringValue("shake");
            break;
        case Tag_svedberg:
            generated_string_Tag = new JSONStringValue("svedberg");
            break;
        case Tag_parsec:
            generated_string_Tag = new JSONStringValue("parsec");
            break;
        default:
            assert(false);
            generated_string_Tag = NULL;
      }
      }
    return generated_string_Tag;
  }

void CoreUnitsUnitJSON::fromJSONTag(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Tag of CoreUnitsUnitJSON is not a string.");
    TypeTag the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "lanck_time") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Tag_Planck_time;
                    goto open_enum_is_done;
                  }
            break;
        case 'a':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strcmp(&(json_string->getData()[2]), "re") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_acre;
                            goto open_enum_is_done;
                          }
                    break;
                case 'm':
                    if (strcmp(&(json_string->getData()[2]), "pere") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_ampere;
                            goto open_enum_is_done;
                          }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "gstrom") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_angstrom;
                            goto open_enum_is_done;
                          }
                    break;
                case 's':
                    if (strcmp(&(json_string->getData()[2]), "tronomical_unit") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_astronomical_unit;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    if (strncmp(&(json_string->getData()[2]), "to", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attoampere;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'b':
                                if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attobecquerel;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'c':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attocandela;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attocoulomb;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attodegree_celsius;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'f':
                                if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attofarad;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'g':
                                if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[7]))
                                      {
                                        case 'm':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_attogram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'y':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_attogray;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_attohenry;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'r':
                                            if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_attohertz;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attojoule;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'k':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attokatal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attokelvin;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attoliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_attolumen;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'x':
                                                if (json_string->getData()[7] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_attolux;
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
                            case 'm':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attometer;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attomole;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attonewton;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attoohm;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attopascal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attoradian;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 's':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attosecond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_attosiemens;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_attosievert;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attosteradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attotesla;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attotonne;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_attovolt;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'w':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attowatt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_attoweber;
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
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "stralian_tablespoon") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_australian_tablespoon;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'b':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "rleycorn") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_barleycorn;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "cquerel") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_becquerel;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ennium") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_biennium;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "itish_thermal_unit") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_british_thermal_unit;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'c':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'b':
                            if (strcmp(&(json_string->getData()[3]), "le") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_cable;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'l':
                            if (strcmp(&(json_string->getData()[3]), "orie") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_calorie;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "dela") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_candela;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "nt", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'i':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centiampere;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'b':
                                        if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centibecquerel;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centicandela;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centicoulomb;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centidegree_celsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'f':
                                        if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centifarad;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'g':
                                        if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[8]))
                                              {
                                                case 'm':
                                                    if (json_string->getData()[9] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_centigram;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'y':
                                                    if (json_string->getData()[9] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_centigray;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_centihenry;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_centihertz;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centijoule;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centikatal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centikelvin;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centiliter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(json_string->getData()[7]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_centilumen;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'x':
                                                        if (json_string->getData()[8] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_centilux;
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
                                    case 'm':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centimeter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centimole;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centinewton;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centiohm;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'p':
                                        if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centipascal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centiradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centisecond;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'i':
                                                if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_centisiemens;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_centisievert;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centisteradian;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centitesla;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centitonne;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_centivolt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centiwatt;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_centiweber;
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
                            case 'u':
                                if (strcmp(&(json_string->getData()[5]), "ry") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_century;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ain") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_chain;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ulomb") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_coulomb;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'd':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "y") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_day;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'c':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'a':
                                    switch ((unsigned char)(json_string->getData()[4]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decaampere;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'b':
                                            if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decabecquerel;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'c':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decacandela;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decacoulomb;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'd':
                                            if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 0:
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decade;
                                                            goto open_enum_is_done;
                                                          }
                                                    case 'g':
                                                        if (strcmp(&(json_string->getData()[7]), "ree_celsius") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decadegree_celsius;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'f':
                                            if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decafarad;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'g':
                                            if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[7]))
                                                  {
                                                    case 'm':
                                                        if (json_string->getData()[8] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decagram;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'y':
                                                        if (json_string->getData()[8] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decagray;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'h':
                                            if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'n':
                                                        if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decahenry;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decahertz;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'j':
                                            if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decajoule;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'k':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decakatal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decakelvin;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'l':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decaliter;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_decalumen;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'x':
                                                            if (json_string->getData()[7] == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_decalux;
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
                                        case 'm':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decameter;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decamole;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'n':
                                            if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decanewton;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decaohm;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'p':
                                            if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decapascal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'r':
                                            if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decaradian;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 's':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decasecond;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[7]))
                                                          {
                                                            case 'm':
                                                                if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_decasiemens;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'v':
                                                                if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_decasievert;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 't':
                                                    if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decasteradian;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 't':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decatesla;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decatonne;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'v':
                                            if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decavolt;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'w':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decawatt;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decaweber;
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
                                case 'i':
                                    switch ((unsigned char)(json_string->getData()[4]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_deciampere;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'b':
                                            if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decibecquerel;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'c':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decicandela;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decicoulomb;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'd':
                                            if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decidegree_celsius;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'f':
                                            if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decifarad;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'g':
                                            if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[7]))
                                                  {
                                                    case 'm':
                                                        if (json_string->getData()[8] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decigram;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'y':
                                                        if (json_string->getData()[8] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decigray;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'h':
                                            if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'n':
                                                        if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decihenry;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'r':
                                                        if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_decihertz;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'j':
                                            if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decijoule;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'k':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decikatal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decikelvin;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'l':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'i':
                                                    if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_deciliter;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'u':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_decilumen;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'x':
                                                            if (json_string->getData()[7] == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_decilux;
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
                                        case 'm':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decimeter;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decimole;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'n':
                                            if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decinewton;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_deciohm;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'p':
                                            if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decipascal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'r':
                                            if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_deciradian;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 's':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decisecond;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'i':
                                                    if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[7]))
                                                          {
                                                            case 'm':
                                                                if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_decisiemens;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'v':
                                                                if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_decisievert;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 't':
                                                    if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decisteradian;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 't':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decitesla;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_decitonne;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'v':
                                            if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_decivolt;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'w':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_deciwatt;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'e':
                                                    if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_deciweber;
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
                        case 'g':
                            if (strncmp(&(json_string->getData()[3]), "ree_", 4) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[7]))
                                  {
                                    case 'c':
                                        if (strcmp(&(json_string->getData()[8]), "elsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_degree_celsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'f':
                                        if (strcmp(&(json_string->getData()[8]), "ahrenheit") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_degree_fahrenheit;
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
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "am") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_dram;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'e':
            if (strncmp(&(json_string->getData()[1]), "xa", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'a':
                        if (strcmp(&(json_string->getData()[4]), "mpere") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exaampere;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'b':
                        if (strcmp(&(json_string->getData()[4]), "ecquerel") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exabecquerel;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'c':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "ndela") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exacandela;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "ulomb") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exacoulomb;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'd':
                        if (strcmp(&(json_string->getData()[4]), "egree_celsius") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exadegree_celsius;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'f':
                        if (strcmp(&(json_string->getData()[4]), "arad") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exafarad;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'g':
                        if (strncmp(&(json_string->getData()[4]), "ra", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[6]))
                              {
                                case 'm':
                                    if (json_string->getData()[7] == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_exagram;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'y':
                                    if (json_string->getData()[7] == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_exagray;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'h':
                        if (strncmp(&(json_string->getData()[4]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[5]))
                              {
                                case 'n':
                                    if (strcmp(&(json_string->getData()[6]), "ry") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_exahenry;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'r':
                                    if (strcmp(&(json_string->getData()[6]), "tz") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_exahertz;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'j':
                        if (strcmp(&(json_string->getData()[4]), "oule") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exajoule;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'k':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "tal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exakatal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "lvin") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exakelvin;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'l':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'i':
                                if (strcmp(&(json_string->getData()[5]), "ter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exaliter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'u':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[6]), "en") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_exalumen;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'x':
                                        if (json_string->getData()[6] == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_exalux;
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
                    case 'm':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "ter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exameter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "le") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_examole;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'n':
                        if (strcmp(&(json_string->getData()[4]), "ewton") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exanewton;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'o':
                        if (strcmp(&(json_string->getData()[4]), "hm") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exaohm;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'p':
                        if (strcmp(&(json_string->getData()[4]), "ascal") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exapascal;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'r':
                        if (strcmp(&(json_string->getData()[4]), "adian") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exaradian;
                                goto open_enum_is_done;
                              }
                        break;
                    case 's':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "cond") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exasecond;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'i':
                                if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'm':
                                            if (strcmp(&(json_string->getData()[7]), "ens") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_exasiemens;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'v':
                                            if (strcmp(&(json_string->getData()[7]), "ert") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_exasievert;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 't':
                                if (strcmp(&(json_string->getData()[5]), "eradian") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exasteradian;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "sla") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exatesla;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "nne") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exatonne;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'v':
                        if (strcmp(&(json_string->getData()[4]), "olt") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_exavolt;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'w':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "tt") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exawatt;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "ber") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_exaweber;
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
        case 'f':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "ad") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_farad;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 't':
                            if (strcmp(&(json_string->getData()[3]), "hom") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_fathom;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "mto", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtoampere;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'b':
                                if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtobecquerel;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'c':
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtocandela;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtocoulomb;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtodegree_celsius;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'f':
                                if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtofarad;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'g':
                                if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[8]))
                                      {
                                        case 'm':
                                            if (json_string->getData()[9] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_femtogram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'y':
                                            if (json_string->getData()[9] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_femtogray;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[7]))
                                      {
                                        case 'n':
                                            if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_femtohenry;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'r':
                                            if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_femtohertz;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtojoule;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'k':
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtokatal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtokelvin;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtoliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(json_string->getData()[7]))
                                          {
                                            case 'm':
                                                if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_femtolumen;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'x':
                                                if (json_string->getData()[8] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_femtolux;
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
                            case 'm':
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtometer;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtomole;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtonewton;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtoohm;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtopascal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtoradian;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 's':
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtosecond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[8]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_femtosiemens;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_femtosievert;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtosteradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtotesla;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtotonne;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_femtovolt;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'w':
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtowatt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_femtoweber;
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
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'o':
                            if (strcmp(&(json_string->getData()[3]), "t") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_foot;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "tnight") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_fortnight;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "rlong") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_furlong;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'g':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strncmp(&(json_string->getData()[2]), "ga", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigaampere;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'b':
                                if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigabecquerel;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'c':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigacandela;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigacoulomb;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigadegree_celsius;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'f':
                                if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigafarad;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'g':
                                if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[7]))
                                      {
                                        case 'm':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_gigagram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'y':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_gigagray;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_gigahenry;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'r':
                                            if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_gigahertz;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigajoule;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'k':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigakatal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigakelvin;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigaliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_gigalumen;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'x':
                                                if (json_string->getData()[7] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_gigalux;
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
                            case 'm':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigameter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigamole;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_giganewton;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigaohm;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigapascal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigaradian;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 's':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigasecond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_gigasiemens;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_gigasievert;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigasteradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigatesla;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigatonne;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gigavolt;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'w':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigawatt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_gigaweber;
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
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'i':
                                if (strcmp(&(json_string->getData()[4]), "n") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_grain;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'm':
                                if (json_string->getData()[4] == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gram;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'y':
                                if (json_string->getData()[4] == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_gray;
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
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "nd") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_hand;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'c':
                            if (strncmp(&(json_string->getData()[3]), "t", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[5]), "re") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_hectare;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectoampere;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'b':
                                                if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectobecquerel;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'c':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'a':
                                                        if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectocandela;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'o':
                                                        if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectocoulomb;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'd':
                                                if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectodegree_celsius;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'f':
                                                if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectofarad;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'g':
                                                if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'm':
                                                            if (json_string->getData()[9] == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_hectogram;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'y':
                                                            if (json_string->getData()[9] == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_hectogray;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'h':
                                                if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[7]))
                                                      {
                                                        case 'n':
                                                            if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_hectohenry;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'r':
                                                            if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_hectohertz;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'j':
                                                if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectojoule;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'k':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'a':
                                                        if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectokatal;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'e':
                                                        if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectokelvin;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'l':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'i':
                                                        if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectoliter;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'u':
                                                        switch ((unsigned char)(json_string->getData()[7]))
                                                          {
                                                            case 'm':
                                                                if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_hectolumen;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'x':
                                                                if (json_string->getData()[8] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_hectolux;
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
                                            case 'm':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'e':
                                                        if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectometer;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'o':
                                                        if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectomole;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'n':
                                                if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectonewton;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectoohm;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'p':
                                                if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectopascal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'r':
                                                if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectoradian;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 's':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'e':
                                                        if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectosecond;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'i':
                                                        if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                                          {
                                                            switch ((unsigned char)(json_string->getData()[8]))
                                                              {
                                                                case 'm':
                                                                    if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Tag_hectosiemens;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'v':
                                                                    if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Tag_hectosievert;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 't':
                                                        if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectosteradian;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 't':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'e':
                                                        if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectotesla;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'o':
                                                        if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectotonne;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'v':
                                                if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_hectovolt;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'w':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'a':
                                                        if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectowatt;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'e':
                                                        if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_hectoweber;
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
                              }
                            break;
                        case 'l':
                            if (strcmp(&(json_string->getData()[3]), "ek") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_helek;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "ry") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_henry;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "tz") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_hertz;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ur") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_hour;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'i':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'm':
                    if (strncmp(&(json_string->getData()[2]), "perial_", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'c':
                                if (strcmp(&(json_string->getData()[10]), "up") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_imperial_cup;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'f':
                                if (strncmp(&(json_string->getData()[10]), "luid_", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[15]))
                                      {
                                        case 'd':
                                            if (strcmp(&(json_string->getData()[16]), "ram") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_imperial_fluid_dram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[16]), "unce") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_imperial_fluid_ounce;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 's':
                                            if (strcmp(&(json_string->getData()[16]), "cruple") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_imperial_fluid_scruple;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'g':
                                switch ((unsigned char)(json_string->getData()[10]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[11]), "llon") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_imperial_gallon;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[11]), "ll") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_imperial_gill;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'm':
                                if (strcmp(&(json_string->getData()[10]), "inim") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_imperial_minim;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[10]), "int") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_imperial_pint;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'q':
                                if (strcmp(&(json_string->getData()[10]), "uart") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_imperial_quart;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "ch") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_inch;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'j':
            if (strcmp(&(json_string->getData()[1]), "oule") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Tag_joule;
                    goto open_enum_is_done;
                  }
            break;
        case 'k':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "tal") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_katal;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "lvin") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_kelvin;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strncmp(&(json_string->getData()[2]), "lo", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kiloampere;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'b':
                                if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kilobecquerel;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'c':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'l':
                                                if (strcmp(&(json_string->getData()[7]), "orie") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_kilocalorie;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'n':
                                                if (strcmp(&(json_string->getData()[7]), "dela") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_kilocandela;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilocoulomb;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kilodegree_celsius;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'f':
                                if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kilofarad;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'g':
                                if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[7]))
                                      {
                                        case 'm':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_kilogram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'y':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_kilogray;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_kilohenry;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'r':
                                            if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_kilohertz;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kilojoule;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'k':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilokatal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilokelvin;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kiloliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_kilolumen;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'x':
                                                if (json_string->getData()[7] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_kilolux;
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
                            case 'm':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilometer;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilomole;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kilonewton;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kiloohm;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kilopascal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kiloradian;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 's':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilosecond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_kilosiemens;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_kilosievert;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilosteradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilotesla;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilotonne;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_kilovolt;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'w':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kilowatt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_kiloweber;
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
            break;
        case 'l':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ague") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_league;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "k") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_link;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 't':
                            if (strcmp(&(json_string->getData()[3]), "er") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_liter;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "ng_", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'h':
                                if (strcmp(&(json_string->getData()[6]), "undredweight") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_long_hundredweight;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 't':
                                if (strcmp(&(json_string->getData()[6]), "on") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_long_ton;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'm':
                            if (strcmp(&(json_string->getData()[3]), "en") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_lumen;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 's':
                            if (strcmp(&(json_string->getData()[3]), "trum") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_lustrum;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'x':
                            if (json_string->getData()[3] == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_lux;
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
        case 'm':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'c':
                            if (strcmp(&(json_string->getData()[3]), "hanical_horsepower") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_mechanical_horsepower;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'g':
                            if (strncmp(&(json_string->getData()[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megaampere;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'b':
                                        if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megabecquerel;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megacandela;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megacoulomb;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megadegree_celsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'f':
                                        if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megafarad;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'g':
                                        if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (json_string->getData()[8] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_megagram;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'y':
                                                    if (json_string->getData()[8] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_megagray;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[6]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_megahenry;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_megahertz;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megajoule;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megakatal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megakelvin;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megaliter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_megalumen;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'x':
                                                        if (json_string->getData()[7] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_megalux;
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
                                    case 'm':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megameter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megamole;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_meganewton;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megaohm;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'p':
                                        if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megapascal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megaradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megasecond;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'i':
                                                if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[7]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_megasiemens;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_megasievert;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megasteradian;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megatesla;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megatonne;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_megavolt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megawatt;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_megaweber;
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
                        case 't':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'e':
                                    if (strcmp(&(json_string->getData()[4]), "r") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_meter;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'r':
                                    if (strncmp(&(json_string->getData()[4]), "ic_", 3) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[7]))
                                          {
                                            case 'c':
                                                if (strcmp(&(json_string->getData()[8]), "up") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_metric_cup;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'h':
                                                if (strcmp(&(json_string->getData()[8]), "orsepower") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_metric_horsepower;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 't':
                                                if (strcmp(&(json_string->getData()[8]), "easpoon") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_metric_teaspoon;
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
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'c':
                            if (strncmp(&(json_string->getData()[3]), "ro", 2) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_microampere;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'b':
                                        if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_microbecquerel;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microcandela;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microcoulomb;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_microdegree_celsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'f':
                                        if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_microfarad;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'g':
                                        if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[8]))
                                              {
                                                case 'm':
                                                    if (json_string->getData()[9] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_microgram;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'y':
                                                    if (json_string->getData()[9] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_microgray;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_microhenry;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_microhertz;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_microjoule;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microkatal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microkelvin;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microliter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(json_string->getData()[7]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_microlumen;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'x':
                                                        if (json_string->getData()[8] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_microlux;
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
                                    case 'm':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_micrometer;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_micromole;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_micronewton;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_microohm;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'p':
                                        if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_micropascal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_microradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microsecond;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'i':
                                                if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_microsiemens;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_microsievert;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microsteradian;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microtesla;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microtonne;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_microvolt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microwatt;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_microweber;
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
                        case 'l':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'e':
                                    if (json_string->getData()[4] == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_mile;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'l':
                                    switch ((unsigned char)(json_string->getData()[4]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[5]), "nnium") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_millennium;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'a':
                                                    if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_milliampere;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'b':
                                                    if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_millibecquerel;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'c':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millicandela;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'o':
                                                            if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millicoulomb;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'd':
                                                    if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_millidegree_celsius;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'f':
                                                    if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_millifarad;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'g':
                                                    if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[8]))
                                                          {
                                                            case 'm':
                                                                if (json_string->getData()[9] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_milligram;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'y':
                                                                if (json_string->getData()[9] == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_milligray;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'h':
                                                    if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                                      {
                                                        switch ((unsigned char)(json_string->getData()[7]))
                                                          {
                                                            case 'n':
                                                                if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_millihenry;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            case 'r':
                                                                if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                                      {
                                                                        the_open_enum.in_known_list = true;
                                                                        the_open_enum.list_value = Tag_millihertz;
                                                                        goto open_enum_is_done;
                                                                      }
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'j':
                                                    if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_millijoule;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'k':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millikatal;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'e':
                                                            if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millikelvin;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'l':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'i':
                                                            if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_milliliter;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'u':
                                                            switch ((unsigned char)(json_string->getData()[7]))
                                                              {
                                                                case 'm':
                                                                    if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Tag_millilumen;
                                                                            goto open_enum_is_done;
                                                                          }
                                                                    break;
                                                                case 'x':
                                                                    if (json_string->getData()[8] == 0)
                                                                          {
                                                                            the_open_enum.in_known_list = true;
                                                                            the_open_enum.list_value = Tag_millilux;
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
                                                case 'm':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millimeter;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'o':
                                                            if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millimole;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_millinewton;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'o':
                                                    if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_milliohm;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'p':
                                                    if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_millipascal;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_milliradian;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 's':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millisecond;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'i':
                                                            if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                                              {
                                                                switch ((unsigned char)(json_string->getData()[8]))
                                                                  {
                                                                    case 'm':
                                                                        if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Tag_millisiemens;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    case 'v':
                                                                        if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                                              {
                                                                                the_open_enum.in_known_list = true;
                                                                                the_open_enum.list_value = Tag_millisievert;
                                                                                goto open_enum_is_done;
                                                                              }
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                              }
                                                            break;
                                                        case 't':
                                                            if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millisteradian;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 't':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'e':
                                                            if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millitesla;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'o':
                                                            if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_millitonne;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_millivolt;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'w':
                                                    switch ((unsigned char)(json_string->getData()[6]))
                                                      {
                                                        case 'a':
                                                            if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_milliwatt;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'e':
                                                            if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_milliweber;
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
                                default:
                                    break;
                              }
                            break;
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "ute") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_minute;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'l':
                            if (strcmp(&(json_string->getData()[3]), "e") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_mole;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "th") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_month;
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
        case 'n':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'n':
                            if (strncmp(&(json_string->getData()[3]), "o", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanoampere;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'b':
                                        if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanobecquerel;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanocandela;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanocoulomb;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanodegree_celsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'f':
                                        if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanofarad;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'g':
                                        if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (json_string->getData()[8] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_nanogram;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'y':
                                                    if (json_string->getData()[8] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_nanogray;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[6]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_nanohenry;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_nanohertz;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanojoule;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanokatal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanokelvin;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanoliter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_nanolumen;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'x':
                                                        if (json_string->getData()[7] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_nanolux;
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
                                    case 'm':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanometer;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanomole;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanonewton;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanoohm;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'p':
                                        if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanopascal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanoradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanosecond;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'i':
                                                if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[7]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_nanosiemens;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_nanosievert;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanosteradian;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanotesla;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanotonne;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_nanovolt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanowatt;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_nanoweber;
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
                        case 'u':
                            if (strcmp(&(json_string->getData()[3]), "tical_mile") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_nautical_mile;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "wton") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_newton;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'o':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "m") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_ohm;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "l_barrel") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_oil_barrel;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "nce") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_ounce;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'p':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "sec") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_parsec;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 's':
                            if (strcmp(&(json_string->getData()[3]), "cal") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_pascal;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "ta", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petaampere;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'b':
                                if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petabecquerel;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'c':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petacandela;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petacoulomb;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petadegree_celsius;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'f':
                                if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petafarad;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'g':
                                if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[7]))
                                      {
                                        case 'm':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_petagram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'y':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_petagray;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_petahenry;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'r':
                                            if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_petahertz;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petajoule;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'k':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petakatal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petakelvin;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petaliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_petalumen;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'x':
                                                if (json_string->getData()[7] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_petalux;
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
                            case 'm':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petameter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petamole;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petanewton;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petaohm;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petapascal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petaradian;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 's':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petasecond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_petasiemens;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_petasievert;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petasteradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petatesla;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petatonne;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_petavolt;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'w':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petawatt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_petaweber;
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
                    if (strncmp(&(json_string->getData()[2]), "co", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picoampere;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'b':
                                if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picobecquerel;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'c':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picocandela;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picocoulomb;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'd':
                                if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picodegree_celsius;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'f':
                                if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picofarad;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'g':
                                if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[7]))
                                      {
                                        case 'm':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_picogram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'y':
                                            if (json_string->getData()[8] == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_picogray;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'h':
                                if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'n':
                                            if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_picohenry;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'r':
                                            if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_picohertz;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'j':
                                if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picojoule;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'k':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picokatal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picokelvin;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'l':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picoliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'u':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'm':
                                                if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_picolumen;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'x':
                                                if (json_string->getData()[7] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_picolux;
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
                            case 'm':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picometer;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picomole;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_piconewton;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picoohm;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picopascal;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picoradian;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 's':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picosecond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_picosiemens;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'v':
                                                    if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_picosievert;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 't':
                                        if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picosteradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picotesla;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picotonne;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_picovolt;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'w':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picowatt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_picoweber;
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
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "und") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_pound;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'q':
            if (strcmp(&(json_string->getData()[1]), "uadrennium") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Tag_quadrennium;
                    goto open_enum_is_done;
                  }
            break;
        case 'r':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "dian") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_radian;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'd':
                            if (json_string->getData()[3] == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_rod;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'o':
                            if (strcmp(&(json_string->getData()[3]), "d") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_rood;
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
        case 's':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "cond") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_second;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'a':
                            if (strcmp(&(json_string->getData()[3]), "ke") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_shake;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'o':
                            if (strncmp(&(json_string->getData()[3]), "rt_", 3) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[7]), "undredweight") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_short_hundredweight;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 't':
                                        if (strcmp(&(json_string->getData()[7]), "on") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_short_ton;
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
                case 'i':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'd':
                            if (strncmp(&(json_string->getData()[3]), "ereal_", 6) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[9]))
                                  {
                                    case 'd':
                                        if (strcmp(&(json_string->getData()[10]), "ay") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_sidereal_day;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'y':
                                        if (strcmp(&(json_string->getData()[10]), "ear") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_sidereal_year;
                                                goto open_enum_is_done;
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
                                case 'm':
                                    if (strcmp(&(json_string->getData()[4]), "ens") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_siemens;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'v':
                                    if (strcmp(&(json_string->getData()[4]), "ert") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_sievert;
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
                case 't':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'e':
                            if (strcmp(&(json_string->getData()[3]), "radian") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_steradian;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'o':
                            if (strcmp(&(json_string->getData()[3]), "ne") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_stone;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'v':
                    if (strcmp(&(json_string->getData()[2]), "edberg") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_svedberg;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 't':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'r':
                            if (strncmp(&(json_string->getData()[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[5]), "mpere") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_teraampere;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'b':
                                        if (strcmp(&(json_string->getData()[5]), "ecquerel") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_terabecquerel;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "ndela") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_teracandela;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "ulomb") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_teracoulomb;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(json_string->getData()[5]), "egree_celsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_teradegree_celsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'f':
                                        if (strcmp(&(json_string->getData()[5]), "arad") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_terafarad;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'g':
                                        if (strncmp(&(json_string->getData()[5]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (json_string->getData()[8] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_teragram;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'y':
                                                    if (json_string->getData()[8] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_teragray;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[6]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[7]), "ry") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_terahenry;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[7]), "tz") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_terahertz;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_terajoule;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "tal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_terakatal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "lvin") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_terakelvin;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_teraliter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(json_string->getData()[6]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[7]), "en") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_teralumen;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'x':
                                                        if (json_string->getData()[7] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_teralux;
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
                                    case 'm':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_terameter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "le") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_teramole;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_teranewton;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[5]), "hm") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_teraohm;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'p':
                                        if (strcmp(&(json_string->getData()[5]), "ascal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_terapascal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[5]), "adian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_teraradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "cond") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_terasecond;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'i':
                                                if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[7]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[8]), "ens") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_terasiemens;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(json_string->getData()[8]), "ert") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_terasievert;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(json_string->getData()[6]), "eradian") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_terasteradian;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "sla") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_teratesla;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "nne") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_teratonne;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(json_string->getData()[5]), "olt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_teravolt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[6]), "tt") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_terawatt;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[6]), "ber") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_teraweber;
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
                        case 's':
                            if (strcmp(&(json_string->getData()[3]), "la") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_tesla;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ou") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_thou;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "nne") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_tonne;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'i':
                            if (strcmp(&(json_string->getData()[3]), "ennium") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_triennium;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'o':
                            if (strcmp(&(json_string->getData()[3]), "y_ounce") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_troy_ounce;
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
        case 'u':
            if (strncmp(&(json_string->getData()[1]), "s_", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'b':
                        if (strcmp(&(json_string->getData()[4]), "ushel") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_us_bushel;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'c':
                        if (strncmp(&(json_string->getData()[4]), "ustomary_", 9) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[13]))
                              {
                                case 'c':
                                    if (strcmp(&(json_string->getData()[14]), "up") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_customary_cup;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 't':
                                    switch ((unsigned char)(json_string->getData()[14]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[15]), "blespoon") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_us_customary_tablespoon;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[15]), "aspoon") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_us_customary_teaspoon;
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
                    case 'd':
                        if (strncmp(&(json_string->getData()[4]), "ry_", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 'g':
                                    if (strcmp(&(json_string->getData()[8]), "allon") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_dry_gallon;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'p':
                                    if (strcmp(&(json_string->getData()[8]), "int") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_dry_pint;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'q':
                                    if (strcmp(&(json_string->getData()[8]), "uart") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_dry_quart;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'f':
                        if (strncmp(&(json_string->getData()[4]), "luid_", 5) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[9]))
                              {
                                case 'd':
                                    if (strcmp(&(json_string->getData()[10]), "ram") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_fluid_dram;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'o':
                                    if (strcmp(&(json_string->getData()[10]), "unce") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_fluid_ounce;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 's':
                                    if (strcmp(&(json_string->getData()[10]), "cruple") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_fluid_scruple;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'g':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[5]), "llon") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_us_gallon;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'i':
                                if (strcmp(&(json_string->getData()[5]), "ll") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Tag_us_gill;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'l':
                        if (strncmp(&(json_string->getData()[4]), "egal_", 5) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[9]))
                              {
                                case 'c':
                                    if (strcmp(&(json_string->getData()[10]), "up") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_legal_cup;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 't':
                                    if (strcmp(&(json_string->getData()[10]), "ablespoon") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_us_legal_tablespoon;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'm':
                        if (strcmp(&(json_string->getData()[4]), "inim") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_us_minim;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'p':
                        if (strcmp(&(json_string->getData()[4]), "int") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_us_pint;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'q':
                        if (strcmp(&(json_string->getData()[4]), "uart") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tag_us_quart;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'v':
            if (strcmp(&(json_string->getData()[1]), "olt") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Tag_volt;
                    goto open_enum_is_done;
                  }
            break;
        case 'w':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "tt") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_watt;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'b':
                            if (strcmp(&(json_string->getData()[3]), "er") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_weber;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'e':
                            if (strcmp(&(json_string->getData()[3]), "k") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Tag_week;
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
        case 'y':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "rd") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_yard;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ar") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Tag_year;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'c':
                            if (strncmp(&(json_string->getData()[3]), "to", 2) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctoampere;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'b':
                                        if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctobecquerel;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctocandela;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctocoulomb;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctodegree_celsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'f':
                                        if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctofarad;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'g':
                                        if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[8]))
                                              {
                                                case 'm':
                                                    if (json_string->getData()[9] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_yoctogram;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'y':
                                                    if (json_string->getData()[9] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_yoctogray;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_yoctohenry;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_yoctohertz;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctojoule;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctokatal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctokelvin;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctoliter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(json_string->getData()[7]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_yoctolumen;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'x':
                                                        if (json_string->getData()[8] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_yoctolux;
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
                                    case 'm':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctometer;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctomole;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctonewton;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctoohm;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'p':
                                        if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctopascal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctoradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctosecond;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'i':
                                                if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_yoctosiemens;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_yoctosievert;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctosteradian;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctotesla;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctotonne;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yoctovolt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctowatt;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yoctoweber;
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
                        case 't':
                            if (strncmp(&(json_string->getData()[3]), "ta", 2) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottaampere;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'b':
                                        if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottabecquerel;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'c':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottacandela;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottacoulomb;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'd':
                                        if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottadegree_celsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'f':
                                        if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottafarad;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'g':
                                        if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[8]))
                                              {
                                                case 'm':
                                                    if (json_string->getData()[9] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_yottagram;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'y':
                                                    if (json_string->getData()[9] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_yottagray;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'h':
                                        if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_yottahenry;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_yottahertz;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'j':
                                        if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottajoule;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'k':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottakatal;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottakelvin;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'l':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottaliter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'u':
                                                switch ((unsigned char)(json_string->getData()[7]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_yottalumen;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'x':
                                                        if (json_string->getData()[8] == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_yottalux;
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
                                    case 'm':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottameter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottamole;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'n':
                                        if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottanewton;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottaohm;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'p':
                                        if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottapascal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'r':
                                        if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottaradian;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottasecond;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'i':
                                                if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[8]))
                                                      {
                                                        case 'm':
                                                            if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_yottasiemens;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'v':
                                                            if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Tag_yottasievert;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 't':
                                                if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottasteradian;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottatesla;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottatonne;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'v':
                                        if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Tag_yottavolt;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'w':
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'a':
                                                if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottawatt;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'e':
                                                if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_yottaweber;
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
                    break;
                default:
                    break;
              }
            break;
        case 'z':
            if (strncmp(&(json_string->getData()[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'p':
                        if (strncmp(&(json_string->getData()[3]), "to", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[5]))
                              {
                                case 'a':
                                    if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptoampere;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'b':
                                    if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptobecquerel;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'c':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptocandela;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptocoulomb;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'd':
                                    if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptodegree_celsius;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'f':
                                    if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptofarad;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'g':
                                    if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[8]))
                                          {
                                            case 'm':
                                                if (json_string->getData()[9] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_zeptogram;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'y':
                                                if (json_string->getData()[9] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_zeptogray;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'h':
                                    if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[7]))
                                          {
                                            case 'n':
                                                if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_zeptohenry;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'r':
                                                if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_zeptohertz;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'j':
                                    if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptojoule;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'k':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptokatal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptokelvin;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'l':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'i':
                                            if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptoliter;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'u':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_zeptolumen;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'x':
                                                    if (json_string->getData()[8] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_zeptolux;
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
                                case 'm':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptometer;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptomole;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'n':
                                    if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptonewton;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'o':
                                    if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptoohm;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'p':
                                    if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptopascal;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'r':
                                    if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptoradian;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 's':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptosecond;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[8]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_zeptosiemens;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'v':
                                                        if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_zeptosievert;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 't':
                                            if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptosteradian;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 't':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptotesla;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptotonne;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'v':
                                    if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zeptovolt;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'w':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptowatt;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zeptoweber;
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
                    case 't':
                        if (strncmp(&(json_string->getData()[3]), "ta", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[5]))
                              {
                                case 'a':
                                    if (strcmp(&(json_string->getData()[6]), "mpere") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettaampere;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'b':
                                    if (strcmp(&(json_string->getData()[6]), "ecquerel") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettabecquerel;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'c':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[7]), "ndela") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettacandela;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[7]), "ulomb") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettacoulomb;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'd':
                                    if (strcmp(&(json_string->getData()[6]), "egree_celsius") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettadegree_celsius;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'f':
                                    if (strcmp(&(json_string->getData()[6]), "arad") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettafarad;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'g':
                                    if (strncmp(&(json_string->getData()[6]), "ra", 2) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[8]))
                                          {
                                            case 'm':
                                                if (json_string->getData()[9] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_zettagram;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'y':
                                                if (json_string->getData()[9] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_zettagray;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'h':
                                    if (strncmp(&(json_string->getData()[6]), "e", 1) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[7]))
                                          {
                                            case 'n':
                                                if (strcmp(&(json_string->getData()[8]), "ry") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_zettahenry;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'r':
                                                if (strcmp(&(json_string->getData()[8]), "tz") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Tag_zettahertz;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'j':
                                    if (strcmp(&(json_string->getData()[6]), "oule") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettajoule;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'k':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[7]), "tal") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettakatal;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "lvin") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettakelvin;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'l':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'i':
                                            if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettaliter;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'u':
                                            switch ((unsigned char)(json_string->getData()[7]))
                                              {
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[8]), "en") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_zettalumen;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'x':
                                                    if (json_string->getData()[8] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Tag_zettalux;
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
                                case 'm':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "ter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettameter;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[7]), "le") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettamole;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'n':
                                    if (strcmp(&(json_string->getData()[6]), "ewton") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettanewton;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'o':
                                    if (strcmp(&(json_string->getData()[6]), "hm") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettaohm;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'p':
                                    if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettapascal;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'r':
                                    if (strcmp(&(json_string->getData()[6]), "adian") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettaradian;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 's':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "cond") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettasecond;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            if (strncmp(&(json_string->getData()[7]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[8]))
                                                  {
                                                    case 'm':
                                                        if (strcmp(&(json_string->getData()[9]), "ens") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_zettasiemens;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    case 'v':
                                                        if (strcmp(&(json_string->getData()[9]), "ert") == 0)
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Tag_zettasievert;
                                                                goto open_enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 't':
                                            if (strcmp(&(json_string->getData()[7]), "eradian") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettasteradian;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 't':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "sla") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettatesla;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[7]), "nne") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettatonne;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'v':
                                    if (strcmp(&(json_string->getData()[6]), "olt") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Tag_zettavolt;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'w':
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[7]), "tt") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettawatt;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[7]), "ber") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Tag_zettaweber;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setTag(the_open_enum);
  }

CoreUnitsUnitJSON::CoreUnitsUnitJSON(void) :
        flagHasTag(false)
  {
    extraIndex = create_string_index();
  }

CoreUnitsUnitJSON::~CoreUnitsUnitJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CoreUnitsUnitJSON::getUnitKind(void) const
  {
    return "Core";
  }

bool CoreUnitsUnitJSON::hasTag(void) const
  {
    return flagHasTag;
  }

CoreUnitsUnitJSON::TypeTag CoreUnitsUnitJSON::getTag(void)
  {
    assert(flagHasTag);
    return storeTag;
  }

const CoreUnitsUnitJSON::TypeTag CoreUnitsUnitJSON::getTag(void) const
  {
    assert(flagHasTag);
    return storeTag;
  }

const char *CoreUnitsUnitJSON::getTagAsChars(void) const
  {
    TypeTag result = getTag();
    if (result.in_known_list)
        return stringFromTag(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string CoreUnitsUnitJSON::getTagAsString(void) const
  {
    return getTagAsChars();
  }

CoreUnitsUnitJSON *CoreUnitsUnitJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CoreUnitsUnitJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CoreUnitsUnitJSON>, CoreUnitsUnitJSON *, bool> generator("Type CoreUnitsUnit", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
