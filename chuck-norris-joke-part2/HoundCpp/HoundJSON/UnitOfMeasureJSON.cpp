/* file "UnitOfMeasureJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitOfMeasureJSON.h"

#include "UnitOfMeasureJSON.h"


UnitOfMeasureJSON::TypeValue::TypeValue(void)
  {
  }

UnitOfMeasureJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UnitOfMeasureJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UnitOfMeasureJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UnitOfMeasureJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool UnitOfMeasureJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UnitOfMeasureJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool UnitOfMeasureJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool UnitOfMeasureJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

UnitOfMeasureJSON::TypeValueKnownValues UnitOfMeasureJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strcmp(&(chars[2]), "re") == 0)
                        return Value_Acre;
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "gstrom") == 0)
                        return Value_Angstrom;
                    break;
                case 's':
                    if (strcmp(&(chars[2]), "tronomicalUnit") == 0)
                        return Value_AstronomicalUnit;
                    break;
                case 't':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'm':
                            if (strcmp(&(chars[3]), "osphere") == 0)
                                return Value_Atmosphere;
                            break;
                        case 't':
                            if (strncmp(&(chars[3]), "o", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'g':
                                        if (strcmp(&(chars[5]), "ram") == 0)
                                            return Value_Attogram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[5]), "ertz") == 0)
                                            return Value_Attohertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[5]), "iter") == 0)
                                            return Value_Attoliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[5]), "eter") == 0)
                                            return Value_Attometer;
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
        case 'B':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "r") == 0)
                        return Value_Bar;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "t") == 0)
                        return Value_Bit;
                    break;
                case 't':
                    if (strcmp(&(chars[2]), "u") == 0)
                        return Value_Btu;
                    break;
                case 'y':
                    if (strcmp(&(chars[2]), "te") == 0)
                        return Value_Byte;
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
                        case 'l':
                            if (strncmp(&(chars[3]), "orie", 4) == 0)
                              {
                                switch ((unsigned char)(chars[7]))
                                  {
                                    case 0:
                                        return Value_Calorie;
                                    case 's':
                                        if (strcmp(&(chars[8]), "PerSecond") == 0)
                                            return Value_CaloriesPerSecond;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "at") == 0)
                                return Value_Carat;
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
                                    case 'g':
                                        if (strcmp(&(chars[6]), "ram") == 0)
                                            return Value_Centigram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[6]), "ertz") == 0)
                                            return Value_Centihertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[6]), "iter") == 0)
                                            return Value_Centiliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[6]), "eter") == 0)
                                            return Value_Centimeter;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'u':
                                if (strcmp(&(chars[5]), "ry") == 0)
                                    return Value_Century;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "ain") == 0)
                        return Value_Chain;
                    break;
                case 'u':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'b':
                            if (strncmp(&(chars[3]), "i", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'c':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'C':
                                                if (strcmp(&(chars[6]), "entimeter") == 0)
                                                    return Value_CubicCentimeter;
                                                break;
                                            case 'F':
                                                if (strcmp(&(chars[6]), "oot") == 0)
                                                    return Value_CubicFoot;
                                                break;
                                            case 'I':
                                                if (strcmp(&(chars[6]), "nch") == 0)
                                                    return Value_CubicInch;
                                                break;
                                            case 'M':
                                                if (strcmp(&(chars[6]), "eter") == 0)
                                                    return Value_CubicMeter;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        if (chars[5] == 0)
                                            return Value_Cubit;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'p':
                            if (chars[3] == 0)
                                return Value_Cup;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "y") == 0)
                        return Value_Day;
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
                                        case 'd':
                                            if (strcmp(&(chars[5]), "e") == 0)
                                                return Value_Decade;
                                            break;
                                        case 'g':
                                            if (strcmp(&(chars[5]), "ram") == 0)
                                                return Value_Decagram;
                                            break;
                                        case 'h':
                                            if (strcmp(&(chars[5]), "ertz") == 0)
                                                return Value_Decahertz;
                                            break;
                                        case 'l':
                                            if (strcmp(&(chars[5]), "iter") == 0)
                                                return Value_Decaliter;
                                            break;
                                        case 'm':
                                            if (strcmp(&(chars[5]), "eter") == 0)
                                                return Value_Decameter;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'i':
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 'g':
                                            if (strcmp(&(chars[5]), "ram") == 0)
                                                return Value_Decigram;
                                            break;
                                        case 'h':
                                            if (strcmp(&(chars[5]), "ertz") == 0)
                                                return Value_Decihertz;
                                            break;
                                        case 'l':
                                            if (strcmp(&(chars[5]), "iter") == 0)
                                                return Value_Deciliter;
                                            break;
                                        case 'm':
                                            if (strcmp(&(chars[5]), "eter") == 0)
                                                return Value_Decimeter;
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
                            if (strncmp(&(chars[3]), "ree", 3) == 0)
                              {
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 0:
                                        return Value_Degree;
                                    case 'C':
                                        if (strcmp(&(chars[7]), "elsius") == 0)
                                            return Value_DegreeCelsius;
                                        break;
                                    case 'F':
                                        if (strcmp(&(chars[7]), "ahrenheit") == 0)
                                            return Value_DegreeFahrenheit;
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
                case 'y':
                    if (strcmp(&(chars[2]), "ne") == 0)
                        return Value_Dyne;
                    break;
                default:
                    break;
              }
            break;
        case 'E':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "l") == 0)
                        return Value_Ell;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "gPerSecond") == 0)
                        return Value_ErgPerSecond;
                    break;
                case 'x':
                    if (strncmp(&(chars[2]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'g':
                                if (strcmp(&(chars[4]), "ram") == 0)
                                    return Value_Exagram;
                                break;
                            case 'h':
                                if (strcmp(&(chars[4]), "ertz") == 0)
                                    return Value_Exahertz;
                                break;
                            case 'l':
                                if (strcmp(&(chars[4]), "iter") == 0)
                                    return Value_Exaliter;
                                break;
                            case 'm':
                                if (strcmp(&(chars[4]), "eter") == 0)
                                    return Value_Exameter;
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
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "thom") == 0)
                        return Value_Fathom;
                    break;
                case 'e':
                    if (strncmp(&(chars[2]), "mto", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'g':
                                if (strcmp(&(chars[6]), "ram") == 0)
                                    return Value_Femtogram;
                                break;
                            case 'h':
                                if (strcmp(&(chars[6]), "ertz") == 0)
                                    return Value_Femtohertz;
                                break;
                            case 'l':
                                if (strcmp(&(chars[6]), "iter") == 0)
                                    return Value_Femtoliter;
                                break;
                            case 'm':
                                if (strcmp(&(chars[6]), "eter") == 0)
                                    return Value_Femtometer;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "veKRun") == 0)
                        return Value_FiveKRun;
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'o':
                            if (strncmp(&(chars[3]), "t", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 0:
                                        return Value_Foot;
                                    case 'P':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'e':
                                                if (strncmp(&(chars[6]), "rSecond", 7) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[13]))
                                                      {
                                                        case 0:
                                                            return Value_FootPerSecond;
                                                        case 'S':
                                                            if (strcmp(&(chars[14]), "quared") == 0)
                                                                return Value_FootPerSecondSquared;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'o':
                                                if (strcmp(&(chars[6]), "undPerMinute") == 0)
                                                    return Value_FootPoundPerMinute;
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
                            if (strcmp(&(chars[3]), "tnight") == 0)
                                return Value_Fortnight;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "rlong") == 0)
                        return Value_Furlong;
                    break;
                default:
                    break;
              }
            break;
        case 'G':
            switch ((unsigned char)(chars[1]))
              {
                case 0:
                    return Value_G;
                case 'a':
                    if (strcmp(&(chars[2]), "lileo") == 0)
                        return Value_Galileo;
                    break;
                case 'i':
                    if (strncmp(&(chars[2]), "ga", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'b':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[6]), "t") == 0)
                                            return Value_Gigabit;
                                        break;
                                    case 'y':
                                        if (strcmp(&(chars[6]), "te") == 0)
                                            return Value_Gigabyte;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'g':
                                if (strcmp(&(chars[5]), "ram") == 0)
                                    return Value_Gigagram;
                                break;
                            case 'h':
                                if (strcmp(&(chars[5]), "ertz") == 0)
                                    return Value_Gigahertz;
                                break;
                            case 'l':
                                if (strcmp(&(chars[5]), "iter") == 0)
                                    return Value_Gigaliter;
                                break;
                            case 'm':
                                if (strcmp(&(chars[5]), "eter") == 0)
                                    return Value_Gigameter;
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
                                    return Value_Grain;
                                break;
                            case 'm':
                                if (chars[4] == 0)
                                    return Value_Gram;
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
                    if (strcmp(&(chars[2]), "lfMarathon") == 0)
                        return Value_HalfMarathon;
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
                                            return Value_Hectare;
                                        break;
                                    case 'o':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'g':
                                                if (strcmp(&(chars[6]), "ram") == 0)
                                                    return Value_Hectogram;
                                                break;
                                            case 'h':
                                                if (strcmp(&(chars[6]), "ertz") == 0)
                                                    return Value_Hectohertz;
                                                break;
                                            case 'l':
                                                if (strcmp(&(chars[6]), "iter") == 0)
                                                    return Value_Hectoliter;
                                                break;
                                            case 'm':
                                                if (strcmp(&(chars[6]), "eter") == 0)
                                                    return Value_Hectometer;
                                                break;
                                            case 'p':
                                                if (strcmp(&(chars[6]), "ascal") == 0)
                                                    return Value_Hectopascal;
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
                            if (strcmp(&(chars[3]), "tz") == 0)
                                return Value_Hertz;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'r':
                            if (strcmp(&(chars[3]), "sepower") == 0)
                                return Value_Horsepower;
                            break;
                        case 'u':
                            if (strcmp(&(chars[3]), "r") == 0)
                                return Value_Hour;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'I':
            if (strncmp(&(chars[1]), "nch", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 0:
                        return Value_Inch;
                    case 'O':
                        if (strcmp(&(chars[5]), "fMercury") == 0)
                            return Value_InchOfMercury;
                        break;
                    case 'P':
                        if (strcmp(&(chars[5]), "erSecondSquared") == 0)
                            return Value_InchPerSecondSquared;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'J':
            if (strcmp(&(chars[1]), "oule") == 0)
                return Value_Joule;
            break;
        case 'K':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "lvin") == 0)
                        return Value_Kelvin;
                    break;
                case 'i':
                    if (strncmp(&(chars[2]), "lo", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'b':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(chars[6]), "t") == 0)
                                            return Value_Kilobit;
                                        break;
                                    case 'y':
                                        if (strcmp(&(chars[6]), "te") == 0)
                                            return Value_Kilobyte;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'c':
                                if (strcmp(&(chars[5]), "alorie") == 0)
                                    return Value_Kilocalorie;
                                break;
                            case 'g':
                                if (strcmp(&(chars[5]), "ram") == 0)
                                    return Value_Kilogram;
                                break;
                            case 'h':
                                if (strcmp(&(chars[5]), "ertz") == 0)
                                    return Value_Kilohertz;
                                break;
                            case 'j':
                                if (strcmp(&(chars[5]), "oule") == 0)
                                    return Value_Kilojoule;
                                break;
                            case 'l':
                                if (strcmp(&(chars[5]), "iter") == 0)
                                    return Value_Kiloliter;
                                break;
                            case 'm':
                                if (strncmp(&(chars[5]), "eter", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[9]))
                                      {
                                        case 0:
                                            return Value_Kilometer;
                                        case 'P':
                                            if (strcmp(&(chars[10]), "erHour") == 0)
                                                return Value_KilometerPerHour;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(chars[5]), "ewton") == 0)
                                    return Value_Kilonewton;
                                break;
                            case 'p':
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[6]), "scal") == 0)
                                            return Value_Kilopascal;
                                        break;
                                    case 'o':
                                        if (strcmp(&(chars[6]), "nd") == 0)
                                            return Value_Kilopond;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'w':
                                if (strncmp(&(chars[5]), "att", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[8]))
                                      {
                                        case 0:
                                            return Value_Kilowatt;
                                        case 'H':
                                            if (strcmp(&(chars[9]), "our") == 0)
                                                return Value_KilowattHour;
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
                case 'n':
                    if (strcmp(&(chars[2]), "ot") == 0)
                        return Value_Knot;
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ague") == 0)
                        return Value_League;
                    break;
                case 'i':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'g':
                            if (strcmp(&(chars[3]), "htYear") == 0)
                                return Value_LightYear;
                            break;
                        case 't':
                            if (strcmp(&(chars[3]), "er") == 0)
                                return Value_Liter;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ngTon") == 0)
                        return Value_LongTon;
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
                        case 'c':
                            if (strcmp(&(chars[3]), "h") == 0)
                                return Value_Mach;
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "athon") == 0)
                                return Value_Marathon;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'g':
                            if (strncmp(&(chars[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'b':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[6]), "t") == 0)
                                                    return Value_Megabit;
                                                break;
                                            case 'y':
                                                if (strcmp(&(chars[6]), "te") == 0)
                                                    return Value_Megabyte;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'g':
                                        if (strcmp(&(chars[5]), "ram") == 0)
                                            return Value_Megagram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[5]), "ertz") == 0)
                                            return Value_Megahertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[5]), "iter") == 0)
                                            return Value_Megaliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[5]), "eter") == 0)
                                            return Value_Megameter;
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
                                    if (strncmp(&(chars[4]), "r", 1) == 0)
                                      {
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 0:
                                                return Value_Meter;
                                            case 'P':
                                                if (strncmp(&(chars[6]), "erSecond", 8) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[14]))
                                                      {
                                                        case 0:
                                                            return Value_MeterPerSecond;
                                                        case 'S':
                                                            if (strcmp(&(chars[15]), "quared") == 0)
                                                                return Value_MeterPerSecondSquared;
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
                                    if (strncmp(&(chars[4]), "ic", 2) == 0)
                                      {
                                        switch ((unsigned char)(chars[6]))
                                          {
                                            case 'H':
                                                if (strcmp(&(chars[7]), "orsepower") == 0)
                                                    return Value_MetricHorsepower;
                                                break;
                                            case 'T':
                                                if (strcmp(&(chars[7]), "on") == 0)
                                                    return Value_MetricTon;
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
                                    case 'g':
                                        if (strcmp(&(chars[6]), "ram") == 0)
                                            return Value_Microgram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[6]), "ertz") == 0)
                                            return Value_Microhertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[6]), "iter") == 0)
                                            return Value_Microliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[6]), "eter") == 0)
                                            return Value_Micrometer;
                                        break;
                                    case 's':
                                        if (strcmp(&(chars[6]), "econd") == 0)
                                            return Value_Microsecond;
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
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 0:
                                            return Value_Mile;
                                        case 'P':
                                            if (strcmp(&(chars[5]), "erHour") == 0)
                                                return Value_MilePerHour;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'l':
                                    switch ((unsigned char)(chars[4]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[5]), "nium") == 0)
                                                return Value_Millenium;
                                            break;
                                        case 'i':
                                            switch ((unsigned char)(chars[5]))
                                              {
                                                case 'b':
                                                    if (strcmp(&(chars[6]), "ar") == 0)
                                                        return Value_Millibar;
                                                    break;
                                                case 'g':
                                                    if (strcmp(&(chars[6]), "ram") == 0)
                                                        return Value_Milligram;
                                                    break;
                                                case 'h':
                                                    if (strcmp(&(chars[6]), "ertz") == 0)
                                                        return Value_Millihertz;
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(chars[6]), "iter") == 0)
                                                        return Value_Milliliter;
                                                    break;
                                                case 'm':
                                                    if (strcmp(&(chars[6]), "eter") == 0)
                                                        return Value_Millimeter;
                                                    break;
                                                case 's':
                                                    if (strcmp(&(chars[6]), "econd") == 0)
                                                        return Value_Millisecond;
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
                            if (strncmp(&(chars[3]), "ute", 3) == 0)
                              {
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 0:
                                        return Value_Minute;
                                    case 'O':
                                        if (strcmp(&(chars[7]), "fArc") == 0)
                                            return Value_MinuteOfArc;
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
                    if (strcmp(&(chars[2]), "nth") == 0)
                        return Value_Month;
                    break;
                default:
                    break;
              }
            break;
        case 'N':
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
                                    case 'g':
                                        if (strcmp(&(chars[5]), "ram") == 0)
                                            return Value_Nanogram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[5]), "ertz") == 0)
                                            return Value_Nanohertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[5]), "iter") == 0)
                                            return Value_Nanoliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[5]), "eter") == 0)
                                            return Value_Nanometer;
                                        break;
                                    case 's':
                                        if (strcmp(&(chars[5]), "econd") == 0)
                                            return Value_Nanosecond;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strcmp(&(chars[3]), "ticalMile") == 0)
                                return Value_NauticalMile;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "wton") == 0)
                        return Value_Newton;
                    break;
                default:
                    break;
              }
            break;
        case 'O':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "ympicPoolLap") == 0)
                        return Value_OlympicPoolLap;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "nce", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'F':
                                if (strcmp(&(chars[6]), "orce") == 0)
                                    return Value_OunceForce;
                                break;
                            case 'W':
                                if (strcmp(&(chars[6]), "eight") == 0)
                                    return Value_OunceWeight;
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
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'r':
                            if (strcmp(&(chars[3]), "sec") == 0)
                                return Value_Parsec;
                            break;
                        case 's':
                            if (strcmp(&(chars[3]), "cal") == 0)
                                return Value_Pascal;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'n':
                            if (strcmp(&(chars[3]), "nyWeight") == 0)
                                return Value_PennyWeight;
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "ch") == 0)
                                return Value_Perch;
                            break;
                        case 't':
                            if (strncmp(&(chars[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'b':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[6]), "t") == 0)
                                                    return Value_Petabit;
                                                break;
                                            case 'y':
                                                if (strcmp(&(chars[6]), "te") == 0)
                                                    return Value_Petabyte;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'g':
                                        if (strcmp(&(chars[5]), "ram") == 0)
                                            return Value_Petagram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[5]), "ertz") == 0)
                                            return Value_Petahertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[5]), "iter") == 0)
                                            return Value_Petaliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[5]), "eter") == 0)
                                            return Value_Petameter;
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
                    if (strncmp(&(chars[2]), "co", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'g':
                                if (strcmp(&(chars[5]), "ram") == 0)
                                    return Value_Picogram;
                                break;
                            case 'h':
                                if (strcmp(&(chars[5]), "ertz") == 0)
                                    return Value_Picohertz;
                                break;
                            case 'l':
                                if (strcmp(&(chars[5]), "iter") == 0)
                                    return Value_Picoliter;
                                break;
                            case 'm':
                                if (strcmp(&(chars[5]), "eter") == 0)
                                    return Value_Picometer;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'l':
                            if (strcmp(&(chars[3]), "e") == 0)
                                return Value_Pole;
                            break;
                        case 'n':
                            if (strcmp(&(chars[3]), "d") == 0)
                                return Value_Pond;
                            break;
                        case 'u':
                            if (strncmp(&(chars[3]), "nd", 2) == 0)
                              {
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 0:
                                        return Value_Pound;
                                    case 'F':
                                        if (strcmp(&(chars[6]), "orce") == 0)
                                            return Value_PoundForce;
                                        break;
                                    case 'P':
                                        if (strcmp(&(chars[6]), "erSquareInch") == 0)
                                            return Value_PoundPerSquareInch;
                                        break;
                                    case 'a':
                                        if (strcmp(&(chars[6]), "l") == 0)
                                            return Value_Poundal;
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
        case 'Q':
            if (strncmp(&(chars[1]), "ua", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'd':
                        if (strcmp(&(chars[4]), "rant") == 0)
                            return Value_Quadrant;
                        break;
                    case 'r':
                        if (strcmp(&(chars[4]), "ter") == 0)
                            return Value_Quarter;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "dian") == 0)
                        return Value_Radian;
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'd':
                            if (chars[3] == 0)
                                return Value_Rod;
                            break;
                        case 'p':
                            if (strcmp(&(chars[3]), "e") == 0)
                                return Value_Rope;
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
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'c':
                            if (strncmp(&(chars[3]), "ond", 3) == 0)
                              {
                                switch ((unsigned char)(chars[6]))
                                  {
                                    case 0:
                                        return Value_Second;
                                    case 'O':
                                        if (strcmp(&(chars[7]), "fArc") == 0)
                                            return Value_SecondOfArc;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'x':
                            if (strcmp(&(chars[3]), "tant") == 0)
                                return Value_Sextant;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "ot") == 0)
                        return Value_Shot;
                    break;
                case 'q':
                    if (strncmp(&(chars[2]), "uare", 4) == 0)
                      {
                        switch ((unsigned char)(chars[6]))
                          {
                            case 'C':
                                if (strcmp(&(chars[7]), "entimeter") == 0)
                                    return Value_SquareCentimeter;
                                break;
                            case 'F':
                                if (strcmp(&(chars[7]), "oot") == 0)
                                    return Value_SquareFoot;
                                break;
                            case 'I':
                                if (strcmp(&(chars[7]), "nch") == 0)
                                    return Value_SquareInch;
                                break;
                            case 'K':
                                if (strcmp(&(chars[7]), "ilometer") == 0)
                                    return Value_SquareKilometer;
                                break;
                            case 'M':
                                switch ((unsigned char)(chars[7]))
                                  {
                                    case 'e':
                                        if (strcmp(&(chars[8]), "ter") == 0)
                                            return Value_SquareMeter;
                                        break;
                                    case 'i':
                                        if (strncmp(&(chars[8]), "l", 1) == 0)
                                          {
                                            switch ((unsigned char)(chars[9]))
                                              {
                                                case 'e':
                                                    if (chars[10] == 0)
                                                        return Value_SquareMile;
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(chars[10]), "imeter") == 0)
                                                        return Value_SquareMillimeter;
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
                                if (strcmp(&(chars[7]), "ard") == 0)
                                    return Value_SquareYard;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 't':
                    if (strcmp(&(chars[2]), "one") == 0)
                        return Value_Stone;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'n':
                            if (strcmp(&(chars[3]), "KRun") == 0)
                                return Value_TenKRun;
                            break;
                        case 'r':
                            if (strncmp(&(chars[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'b':
                                        switch ((unsigned char)(chars[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(chars[6]), "t") == 0)
                                                    return Value_Terabit;
                                                break;
                                            case 'y':
                                                if (strcmp(&(chars[6]), "te") == 0)
                                                    return Value_Terabyte;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'g':
                                        if (strcmp(&(chars[5]), "ram") == 0)
                                            return Value_Teragram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[5]), "ertz") == 0)
                                            return Value_Terahertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[5]), "iter") == 0)
                                            return Value_Teraliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[5]), "eter") == 0)
                                            return Value_Terameter;
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
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'n':
                            if (chars[3] == 0)
                                return Value_Ton;
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "r") == 0)
                                return Value_Torr;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "oy", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'O':
                                if (strcmp(&(chars[5]), "unce") == 0)
                                    return Value_TroyOunce;
                                break;
                            case 'P':
                                if (strcmp(&(chars[5]), "ound") == 0)
                                    return Value_TroyPound;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "rn") == 0)
                        return Value_Turn;
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            switch ((unsigned char)(chars[1]))
              {
                case 'K':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'B':
                            if (strcmp(&(chars[3]), "ushel") == 0)
                                return Value_UKBushel;
                            break;
                        case 'G':
                            if (strcmp(&(chars[3]), "allon") == 0)
                                return Value_UKGallon;
                            break;
                        case 'O':
                            if (strcmp(&(chars[3]), "unceVolume") == 0)
                                return Value_UKOunceVolume;
                            break;
                        case 'P':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'e':
                                    if (strcmp(&(chars[4]), "ck") == 0)
                                        return Value_UKPeck;
                                    break;
                                case 'i':
                                    if (strcmp(&(chars[4]), "nt") == 0)
                                        return Value_UKPint;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'Q':
                            if (strcmp(&(chars[3]), "uart") == 0)
                                return Value_UKQuart;
                            break;
                        case 'T':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'a':
                                    if (strcmp(&(chars[4]), "blespoon") == 0)
                                        return Value_UKTablespoon;
                                    break;
                                case 'e':
                                    if (strcmp(&(chars[4]), "aspoon") == 0)
                                        return Value_UKTeaspoon;
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
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'B':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'a':
                                    if (strcmp(&(chars[4]), "rrel") == 0)
                                        return Value_USBarrel;
                                    break;
                                case 'u':
                                    if (strcmp(&(chars[4]), "shel") == 0)
                                        return Value_USBushel;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'D':
                            if (strcmp(&(chars[3]), "ryQuart") == 0)
                                return Value_USDryQuart;
                            break;
                        case 'G':
                            if (strcmp(&(chars[3]), "allon") == 0)
                                return Value_USGallon;
                            break;
                        case 'H':
                            if (strcmp(&(chars[3]), "ogshead") == 0)
                                return Value_USHogshead;
                            break;
                        case 'L':
                            if (strcmp(&(chars[3]), "iquidQuart") == 0)
                                return Value_USLiquidQuart;
                            break;
                        case 'O':
                            if (strcmp(&(chars[3]), "unceVolume") == 0)
                                return Value_USOunceVolume;
                            break;
                        case 'P':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'e':
                                    if (strcmp(&(chars[4]), "ck") == 0)
                                        return Value_USPeck;
                                    break;
                                case 'i':
                                    if (strcmp(&(chars[4]), "nt") == 0)
                                        return Value_USPint;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'T':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'a':
                                    if (strcmp(&(chars[4]), "blespoon") == 0)
                                        return Value_USTablespoon;
                                    break;
                                case 'e':
                                    if (strcmp(&(chars[4]), "aspoon") == 0)
                                        return Value_USTeaspoon;
                                    break;
                                case 'i':
                                    if (strcmp(&(chars[4]), "erce") == 0)
                                        return Value_USTierce;
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
                    if (strcmp(&(chars[2]), "known") == 0)
                        return Value_Unknown;
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "tt") == 0)
                        return Value_Watt;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "ek") == 0)
                        return Value_Week;
                    break;
                default:
                    break;
              }
            break;
        case 'Y':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "rd") == 0)
                        return Value_Yard;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "ar") == 0)
                        return Value_Year;
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'c':
                            if (strncmp(&(chars[3]), "to", 2) == 0)
                              {
                                switch ((unsigned char)(chars[5]))
                                  {
                                    case 'g':
                                        if (strcmp(&(chars[6]), "ram") == 0)
                                            return Value_Yoctogram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[6]), "ertz") == 0)
                                            return Value_Yoctohertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[6]), "iter") == 0)
                                            return Value_Yoctoliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[6]), "eter") == 0)
                                            return Value_Yoctometer;
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
                                    case 'g':
                                        if (strcmp(&(chars[6]), "ram") == 0)
                                            return Value_Yottagram;
                                        break;
                                    case 'h':
                                        if (strcmp(&(chars[6]), "ertz") == 0)
                                            return Value_Yottahertz;
                                        break;
                                    case 'l':
                                        if (strcmp(&(chars[6]), "iter") == 0)
                                            return Value_Yottaliter;
                                        break;
                                    case 'm':
                                        if (strcmp(&(chars[6]), "eter") == 0)
                                            return Value_Yottameter;
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
        case 'Z':
            if (strncmp(&(chars[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'p':
                        if (strncmp(&(chars[3]), "to", 2) == 0)
                          {
                            switch ((unsigned char)(chars[5]))
                              {
                                case 'g':
                                    if (strcmp(&(chars[6]), "ram") == 0)
                                        return Value_Zeptogram;
                                    break;
                                case 'h':
                                    if (strcmp(&(chars[6]), "ertz") == 0)
                                        return Value_Zeptohertz;
                                    break;
                                case 'l':
                                    if (strcmp(&(chars[6]), "iter") == 0)
                                        return Value_Zeptoliter;
                                    break;
                                case 'm':
                                    if (strcmp(&(chars[6]), "eter") == 0)
                                        return Value_Zeptometer;
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
                                case 'g':
                                    if (strcmp(&(chars[6]), "ram") == 0)
                                        return Value_Zettagram;
                                    break;
                                case 'h':
                                    if (strcmp(&(chars[6]), "ertz") == 0)
                                        return Value_Zettahertz;
                                    break;
                                case 'l':
                                    if (strcmp(&(chars[6]), "iter") == 0)
                                        return Value_Zettaliter;
                                    break;
                                case 'm':
                                    if (strcmp(&(chars[6]), "eter") == 0)
                                        return Value_Zettameter;
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
    return Value__none;
  }

const char *UnitOfMeasureJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Unknown:
            return "Unknown";
        case Value_Fathom:
            return "Fathom";
        case Value_League:
            return "League";
        case Value_LightYear:
            return "LightYear";
        case Value_AstronomicalUnit:
            return "AstronomicalUnit";
        case Value_Parsec:
            return "Parsec";
        case Value_Angstrom:
            return "Angstrom";
        case Value_Rope:
            return "Rope";
        case Value_Perch:
            return "Perch";
        case Value_Cubit:
            return "Cubit";
        case Value_Pole:
            return "Pole";
        case Value_Ell:
            return "Ell";
        case Value_Furlong:
            return "Furlong";
        case Value_Chain:
            return "Chain";
        case Value_Rod:
            return "Rod";
        case Value_Inch:
            return "Inch";
        case Value_Foot:
            return "Foot";
        case Value_Yard:
            return "Yard";
        case Value_Mile:
            return "Mile";
        case Value_NauticalMile:
            return "NauticalMile";
        case Value_Yoctometer:
            return "Yoctometer";
        case Value_Zeptometer:
            return "Zeptometer";
        case Value_Attometer:
            return "Attometer";
        case Value_Femtometer:
            return "Femtometer";
        case Value_Picometer:
            return "Picometer";
        case Value_Nanometer:
            return "Nanometer";
        case Value_Micrometer:
            return "Micrometer";
        case Value_Millimeter:
            return "Millimeter";
        case Value_Centimeter:
            return "Centimeter";
        case Value_Decimeter:
            return "Decimeter";
        case Value_Meter:
            return "Meter";
        case Value_Decameter:
            return "Decameter";
        case Value_Hectometer:
            return "Hectometer";
        case Value_Kilometer:
            return "Kilometer";
        case Value_Megameter:
            return "Megameter";
        case Value_Gigameter:
            return "Gigameter";
        case Value_Terameter:
            return "Terameter";
        case Value_Petameter:
            return "Petameter";
        case Value_Exameter:
            return "Exameter";
        case Value_Zettameter:
            return "Zettameter";
        case Value_Yottameter:
            return "Yottameter";
        case Value_Marathon:
            return "Marathon";
        case Value_HalfMarathon:
            return "HalfMarathon";
        case Value_TenKRun:
            return "TenKRun";
        case Value_FiveKRun:
            return "FiveKRun";
        case Value_OlympicPoolLap:
            return "OlympicPoolLap";
        case Value_DegreeFahrenheit:
            return "DegreeFahrenheit";
        case Value_DegreeCelsius:
            return "DegreeCelsius";
        case Value_Kelvin:
            return "Kelvin";
        case Value_Pascal:
            return "Pascal";
        case Value_Kilopascal:
            return "Kilopascal";
        case Value_Hectopascal:
            return "Hectopascal";
        case Value_Bar:
            return "Bar";
        case Value_Millibar:
            return "Millibar";
        case Value_PoundPerSquareInch:
            return "PoundPerSquareInch";
        case Value_InchOfMercury:
            return "InchOfMercury";
        case Value_Atmosphere:
            return "Atmosphere";
        case Value_Torr:
            return "Torr";
        case Value_Bit:
            return "Bit";
        case Value_Byte:
            return "Byte";
        case Value_Kilobit:
            return "Kilobit";
        case Value_Kilobyte:
            return "Kilobyte";
        case Value_Megabit:
            return "Megabit";
        case Value_Megabyte:
            return "Megabyte";
        case Value_Gigabit:
            return "Gigabit";
        case Value_Gigabyte:
            return "Gigabyte";
        case Value_Terabit:
            return "Terabit";
        case Value_Terabyte:
            return "Terabyte";
        case Value_Petabit:
            return "Petabit";
        case Value_Petabyte:
            return "Petabyte";
        case Value_Nanosecond:
            return "Nanosecond";
        case Value_Millisecond:
            return "Millisecond";
        case Value_Microsecond:
            return "Microsecond";
        case Value_Second:
            return "Second";
        case Value_Minute:
            return "Minute";
        case Value_Hour:
            return "Hour";
        case Value_Day:
            return "Day";
        case Value_Week:
            return "Week";
        case Value_Fortnight:
            return "Fortnight";
        case Value_Month:
            return "Month";
        case Value_Year:
            return "Year";
        case Value_Decade:
            return "Decade";
        case Value_Century:
            return "Century";
        case Value_Millenium:
            return "Millenium";
        case Value_SquareInch:
            return "SquareInch";
        case Value_SquareFoot:
            return "SquareFoot";
        case Value_SquareYard:
            return "SquareYard";
        case Value_SquareMile:
            return "SquareMile";
        case Value_SquareMillimeter:
            return "SquareMillimeter";
        case Value_SquareCentimeter:
            return "SquareCentimeter";
        case Value_SquareMeter:
            return "SquareMeter";
        case Value_SquareKilometer:
            return "SquareKilometer";
        case Value_Hectare:
            return "Hectare";
        case Value_Acre:
            return "Acre";
        case Value_Yoctogram:
            return "Yoctogram";
        case Value_Zeptogram:
            return "Zeptogram";
        case Value_Attogram:
            return "Attogram";
        case Value_Femtogram:
            return "Femtogram";
        case Value_Picogram:
            return "Picogram";
        case Value_Nanogram:
            return "Nanogram";
        case Value_Microgram:
            return "Microgram";
        case Value_Milligram:
            return "Milligram";
        case Value_Centigram:
            return "Centigram";
        case Value_Decigram:
            return "Decigram";
        case Value_Gram:
            return "Gram";
        case Value_Decagram:
            return "Decagram";
        case Value_Hectogram:
            return "Hectogram";
        case Value_Kilogram:
            return "Kilogram";
        case Value_Megagram:
            return "Megagram";
        case Value_Gigagram:
            return "Gigagram";
        case Value_Teragram:
            return "Teragram";
        case Value_Petagram:
            return "Petagram";
        case Value_Exagram:
            return "Exagram";
        case Value_Zettagram:
            return "Zettagram";
        case Value_Yottagram:
            return "Yottagram";
        case Value_MetricTon:
            return "MetricTon";
        case Value_OunceWeight:
            return "OunceWeight";
        case Value_Pound:
            return "Pound";
        case Value_Grain:
            return "Grain";
        case Value_Carat:
            return "Carat";
        case Value_TroyPound:
            return "TroyPound";
        case Value_TroyOunce:
            return "TroyOunce";
        case Value_PennyWeight:
            return "PennyWeight";
        case Value_Quarter:
            return "Quarter";
        case Value_Stone:
            return "Stone";
        case Value_Ton:
            return "Ton";
        case Value_LongTon:
            return "LongTon";
        case Value_CubicInch:
            return "CubicInch";
        case Value_CubicFoot:
            return "CubicFoot";
        case Value_CubicMeter:
            return "CubicMeter";
        case Value_USTeaspoon:
            return "USTeaspoon";
        case Value_UKTeaspoon:
            return "UKTeaspoon";
        case Value_USTablespoon:
            return "USTablespoon";
        case Value_UKTablespoon:
            return "UKTablespoon";
        case Value_USOunceVolume:
            return "USOunceVolume";
        case Value_UKOunceVolume:
            return "UKOunceVolume";
        case Value_Cup:
            return "Cup";
        case Value_Shot:
            return "Shot";
        case Value_USPint:
            return "USPint";
        case Value_USLiquidQuart:
            return "USLiquidQuart";
        case Value_USDryQuart:
            return "USDryQuart";
        case Value_USGallon:
            return "USGallon";
        case Value_UKPint:
            return "UKPint";
        case Value_UKQuart:
            return "UKQuart";
        case Value_UKGallon:
            return "UKGallon";
        case Value_Milliliter:
            return "Milliliter";
        case Value_CubicCentimeter:
            return "CubicCentimeter";
        case Value_Liter:
            return "Liter";
        case Value_Yoctoliter:
            return "Yoctoliter";
        case Value_Zeptoliter:
            return "Zeptoliter";
        case Value_Attoliter:
            return "Attoliter";
        case Value_Femtoliter:
            return "Femtoliter";
        case Value_Picoliter:
            return "Picoliter";
        case Value_Nanoliter:
            return "Nanoliter";
        case Value_Microliter:
            return "Microliter";
        case Value_Centiliter:
            return "Centiliter";
        case Value_Deciliter:
            return "Deciliter";
        case Value_Decaliter:
            return "Decaliter";
        case Value_Hectoliter:
            return "Hectoliter";
        case Value_Kiloliter:
            return "Kiloliter";
        case Value_Megaliter:
            return "Megaliter";
        case Value_Gigaliter:
            return "Gigaliter";
        case Value_Teraliter:
            return "Teraliter";
        case Value_Petaliter:
            return "Petaliter";
        case Value_Exaliter:
            return "Exaliter";
        case Value_Zettaliter:
            return "Zettaliter";
        case Value_Yottaliter:
            return "Yottaliter";
        case Value_USBushel:
            return "USBushel";
        case Value_UKBushel:
            return "UKBushel";
        case Value_USPeck:
            return "USPeck";
        case Value_UKPeck:
            return "UKPeck";
        case Value_USHogshead:
            return "USHogshead";
        case Value_USBarrel:
            return "USBarrel";
        case Value_USTierce:
            return "USTierce";
        case Value_Newton:
            return "Newton";
        case Value_Kilonewton:
            return "Kilonewton";
        case Value_Dyne:
            return "Dyne";
        case Value_Poundal:
            return "Poundal";
        case Value_Pond:
            return "Pond";
        case Value_Kilopond:
            return "Kilopond";
        case Value_OunceForce:
            return "OunceForce";
        case Value_PoundForce:
            return "PoundForce";
        case Value_Joule:
            return "Joule";
        case Value_Kilojoule:
            return "Kilojoule";
        case Value_Calorie:
            return "Calorie";
        case Value_Kilocalorie:
            return "Kilocalorie";
        case Value_KilowattHour:
            return "KilowattHour";
        case Value_Btu:
            return "Btu";
        case Value_Watt:
            return "Watt";
        case Value_Kilowatt:
            return "Kilowatt";
        case Value_Horsepower:
            return "Horsepower";
        case Value_MetricHorsepower:
            return "MetricHorsepower";
        case Value_FootPoundPerMinute:
            return "FootPoundPerMinute";
        case Value_ErgPerSecond:
            return "ErgPerSecond";
        case Value_CaloriesPerSecond:
            return "CaloriesPerSecond";
        case Value_MeterPerSecondSquared:
            return "MeterPerSecondSquared";
        case Value_InchPerSecondSquared:
            return "InchPerSecondSquared";
        case Value_FootPerSecondSquared:
            return "FootPerSecondSquared";
        case Value_Galileo:
            return "Galileo";
        case Value_G:
            return "G";
        case Value_KilometerPerHour:
            return "KilometerPerHour";
        case Value_MilePerHour:
            return "MilePerHour";
        case Value_FootPerSecond:
            return "FootPerSecond";
        case Value_MeterPerSecond:
            return "MeterPerSecond";
        case Value_Knot:
            return "Knot";
        case Value_Mach:
            return "Mach";
        case Value_Yoctohertz:
            return "Yoctohertz";
        case Value_Zeptohertz:
            return "Zeptohertz";
        case Value_Attohertz:
            return "Attohertz";
        case Value_Femtohertz:
            return "Femtohertz";
        case Value_Picohertz:
            return "Picohertz";
        case Value_Nanohertz:
            return "Nanohertz";
        case Value_Microhertz:
            return "Microhertz";
        case Value_Millihertz:
            return "Millihertz";
        case Value_Centihertz:
            return "Centihertz";
        case Value_Decihertz:
            return "Decihertz";
        case Value_Hertz:
            return "Hertz";
        case Value_Decahertz:
            return "Decahertz";
        case Value_Hectohertz:
            return "Hectohertz";
        case Value_Kilohertz:
            return "Kilohertz";
        case Value_Megahertz:
            return "Megahertz";
        case Value_Gigahertz:
            return "Gigahertz";
        case Value_Terahertz:
            return "Terahertz";
        case Value_Petahertz:
            return "Petahertz";
        case Value_Exahertz:
            return "Exahertz";
        case Value_Zettahertz:
            return "Zettahertz";
        case Value_Yottahertz:
            return "Yottahertz";
        case Value_Radian:
            return "Radian";
        case Value_Degree:
            return "Degree";
        case Value_Turn:
            return "Turn";
        case Value_Quadrant:
            return "Quadrant";
        case Value_Sextant:
            return "Sextant";
        case Value_MinuteOfArc:
            return "MinuteOfArc";
        case Value_SecondOfArc:
            return "SecondOfArc";
        default:
            assert(false);
            return NULL;
      }
  }

UnitOfMeasureJSON::UnitOfMeasureJSON(const UnitOfMeasureJSON &)
  {
    assert(false);
  }

UnitOfMeasureJSON &UnitOfMeasureJSON::operator=(const UnitOfMeasureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitOfMeasureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of UnitOfMeasureJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strcmp(&(json_string->getData()[2]), "re") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Acre;
                            goto open_enum_is_done;
                          }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "gstrom") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Angstrom;
                            goto open_enum_is_done;
                          }
                    break;
                case 's':
                    if (strcmp(&(json_string->getData()[2]), "tronomicalUnit") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_AstronomicalUnit;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'm':
                            if (strcmp(&(json_string->getData()[3]), "osphere") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Atmosphere;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 't':
                            if (strncmp(&(json_string->getData()[3]), "o", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Attogram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Attohertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Attoliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Attometer;
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
        case 'B':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "r") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Bar;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "t") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Bit;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    if (strcmp(&(json_string->getData()[2]), "u") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Btu;
                            goto open_enum_is_done;
                          }
                    break;
                case 'y':
                    if (strcmp(&(json_string->getData()[2]), "te") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Byte;
                            goto open_enum_is_done;
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
                        case 'l':
                            if (strncmp(&(json_string->getData()[3]), "orie", 4) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[7]))
                                  {
                                    case 0:
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Calorie;
                                            goto open_enum_is_done;
                                          }
                                    case 's':
                                        if (strcmp(&(json_string->getData()[8]), "PerSecond") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_CaloriesPerSecond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "at") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Carat;
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
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Centigram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Centihertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Centiliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Centimeter;
                                                goto open_enum_is_done;
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
                                        the_open_enum.list_value = Value_Century;
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
                            the_open_enum.list_value = Value_Chain;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'b':
                            if (strncmp(&(json_string->getData()[3]), "i", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'c':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'C':
                                                if (strcmp(&(json_string->getData()[6]), "entimeter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_CubicCentimeter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'F':
                                                if (strcmp(&(json_string->getData()[6]), "oot") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_CubicFoot;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'I':
                                                if (strcmp(&(json_string->getData()[6]), "nch") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_CubicInch;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'M':
                                                if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_CubicMeter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 't':
                                        if (json_string->getData()[5] == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Cubit;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'p':
                            if (json_string->getData()[3] == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Cup;
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
        case 'D':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "y") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Day;
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
                                        case 'd':
                                            if (strcmp(&(json_string->getData()[5]), "e") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Decade;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'g':
                                            if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Decagram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'h':
                                            if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Decahertz;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'l':
                                            if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Decaliter;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'm':
                                            if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Decameter;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'i':
                                    switch ((unsigned char)(json_string->getData()[4]))
                                      {
                                        case 'g':
                                            if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Decigram;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'h':
                                            if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Decihertz;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'l':
                                            if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Deciliter;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'm':
                                            if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Decimeter;
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
                        case 'g':
                            if (strncmp(&(json_string->getData()[3]), "ree", 3) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 0:
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Degree;
                                            goto open_enum_is_done;
                                          }
                                    case 'C':
                                        if (strcmp(&(json_string->getData()[7]), "elsius") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_DegreeCelsius;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[7]), "ahrenheit") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_DegreeFahrenheit;
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
                case 'y':
                    if (strcmp(&(json_string->getData()[2]), "ne") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Dyne;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'E':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "l") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Ell;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "gPerSecond") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_ErgPerSecond;
                            goto open_enum_is_done;
                          }
                    break;
                case 'x':
                    if (strncmp(&(json_string->getData()[2]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'g':
                                if (strcmp(&(json_string->getData()[4]), "ram") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Exagram;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'h':
                                if (strcmp(&(json_string->getData()[4]), "ertz") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Exahertz;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'l':
                                if (strcmp(&(json_string->getData()[4]), "iter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Exaliter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'm':
                                if (strcmp(&(json_string->getData()[4]), "eter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Exameter;
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
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "thom") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Fathom;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "mto", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'g':
                                if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Femtogram;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'h':
                                if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Femtohertz;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'l':
                                if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Femtoliter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'm':
                                if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Femtometer;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "veKRun") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_FiveKRun;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'o':
                            if (strncmp(&(json_string->getData()[3]), "t", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 0:
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Foot;
                                            goto open_enum_is_done;
                                          }
                                    case 'P':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'e':
                                                if (strncmp(&(json_string->getData()[6]), "rSecond", 7) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[13]))
                                                      {
                                                        case 0:
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_FootPerSecond;
                                                                goto open_enum_is_done;
                                                              }
                                                        case 'S':
                                                            if (strcmp(&(json_string->getData()[14]), "quared") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_FootPerSecondSquared;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[6]), "undPerMinute") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_FootPoundPerMinute;
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
                            if (strcmp(&(json_string->getData()[3]), "tnight") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Fortnight;
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
                            the_open_enum.list_value = Value_Furlong;
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
                case 0:
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Value_G;
                        goto open_enum_is_done;
                      }
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "lileo") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Galileo;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strncmp(&(json_string->getData()[2]), "ga", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'b':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[6]), "t") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Gigabit;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'y':
                                        if (strcmp(&(json_string->getData()[6]), "te") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Gigabyte;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'g':
                                if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Gigagram;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'h':
                                if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Gigahertz;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'l':
                                if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Gigaliter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'm':
                                if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Gigameter;
                                        goto open_enum_is_done;
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
                                        the_open_enum.list_value = Value_Grain;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'm':
                                if (json_string->getData()[4] == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Gram;
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
        case 'H':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "lfMarathon") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_HalfMarathon;
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
                                                the_open_enum.list_value = Value_Hectare;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'g':
                                                if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Hectogram;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'h':
                                                if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Hectohertz;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'l':
                                                if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Hectoliter;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'm':
                                                if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Hectometer;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'p':
                                                if (strcmp(&(json_string->getData()[6]), "ascal") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Hectopascal;
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
                            if (strcmp(&(json_string->getData()[3]), "tz") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Hertz;
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
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "sepower") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Horsepower;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'u':
                            if (strcmp(&(json_string->getData()[3]), "r") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Hour;
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
        case 'I':
            if (strncmp(&(json_string->getData()[1]), "nch", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 0:
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Inch;
                            goto open_enum_is_done;
                          }
                    case 'O':
                        if (strcmp(&(json_string->getData()[5]), "fMercury") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_InchOfMercury;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strcmp(&(json_string->getData()[5]), "erSecondSquared") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_InchPerSecondSquared;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'J':
            if (strcmp(&(json_string->getData()[1]), "oule") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Joule;
                    goto open_enum_is_done;
                  }
            break;
        case 'K':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "lvin") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Kelvin;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strncmp(&(json_string->getData()[2]), "lo", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'b':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'i':
                                        if (strcmp(&(json_string->getData()[6]), "t") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Kilobit;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'y':
                                        if (strcmp(&(json_string->getData()[6]), "te") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Kilobyte;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'c':
                                if (strcmp(&(json_string->getData()[5]), "alorie") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Kilocalorie;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'g':
                                if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Kilogram;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'h':
                                if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Kilohertz;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'j':
                                if (strcmp(&(json_string->getData()[5]), "oule") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Kilojoule;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'l':
                                if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Kiloliter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'm':
                                if (strncmp(&(json_string->getData()[5]), "eter", 4) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[9]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Kilometer;
                                                goto open_enum_is_done;
                                              }
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[10]), "erHour") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_KilometerPerHour;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[5]), "ewton") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Kilonewton;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "scal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Kilopascal;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'o':
                                        if (strcmp(&(json_string->getData()[6]), "nd") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Kilopond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'w':
                                if (strncmp(&(json_string->getData()[5]), "att", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[8]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Kilowatt;
                                                goto open_enum_is_done;
                                              }
                                        case 'H':
                                            if (strcmp(&(json_string->getData()[9]), "our") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_KilowattHour;
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
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "ot") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Knot;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ague") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_League;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'g':
                            if (strcmp(&(json_string->getData()[3]), "htYear") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_LightYear;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 't':
                            if (strcmp(&(json_string->getData()[3]), "er") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Liter;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ngTon") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_LongTon;
                            goto open_enum_is_done;
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
                        case 'c':
                            if (strcmp(&(json_string->getData()[3]), "h") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Mach;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "athon") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Marathon;
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
                        case 'g':
                            if (strncmp(&(json_string->getData()[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'b':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[6]), "t") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Megabit;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'y':
                                                if (strcmp(&(json_string->getData()[6]), "te") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Megabyte;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Megagram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Megahertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Megaliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Megameter;
                                                goto open_enum_is_done;
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
                                    if (strncmp(&(json_string->getData()[4]), "r", 1) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 0:
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Meter;
                                                    goto open_enum_is_done;
                                                  }
                                            case 'P':
                                                if (strncmp(&(json_string->getData()[6]), "erSecond", 8) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[14]))
                                                      {
                                                        case 0:
                                                              {
                                                                the_open_enum.in_known_list = true;
                                                                the_open_enum.list_value = Value_MeterPerSecond;
                                                                goto open_enum_is_done;
                                                              }
                                                        case 'S':
                                                            if (strcmp(&(json_string->getData()[15]), "quared") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_MeterPerSecondSquared;
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
                                    if (strncmp(&(json_string->getData()[4]), "ic", 2) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[6]))
                                          {
                                            case 'H':
                                                if (strcmp(&(json_string->getData()[7]), "orsepower") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_MetricHorsepower;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'T':
                                                if (strcmp(&(json_string->getData()[7]), "on") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_MetricTon;
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
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Microgram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Microhertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Microliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Micrometer;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        if (strcmp(&(json_string->getData()[6]), "econd") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Microsecond;
                                                goto open_enum_is_done;
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
                                    switch ((unsigned char)(json_string->getData()[4]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Mile;
                                                goto open_enum_is_done;
                                              }
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[5]), "erHour") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_MilePerHour;
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
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[5]), "nium") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_Millenium;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            switch ((unsigned char)(json_string->getData()[5]))
                                              {
                                                case 'b':
                                                    if (strcmp(&(json_string->getData()[6]), "ar") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_Millibar;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'g':
                                                    if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_Milligram;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'h':
                                                    if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_Millihertz;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_Milliliter;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'm':
                                                    if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_Millimeter;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 's':
                                                    if (strcmp(&(json_string->getData()[6]), "econd") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_Millisecond;
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
                        case 'n':
                            if (strncmp(&(json_string->getData()[3]), "ute", 3) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 0:
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Minute;
                                            goto open_enum_is_done;
                                          }
                                    case 'O':
                                        if (strcmp(&(json_string->getData()[7]), "fArc") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_MinuteOfArc;
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
                    if (strcmp(&(json_string->getData()[2]), "nth") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Month;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'N':
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
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Nanogram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Nanohertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Nanoliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Nanometer;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 's':
                                        if (strcmp(&(json_string->getData()[5]), "econd") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Nanosecond;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strcmp(&(json_string->getData()[3]), "ticalMile") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_NauticalMile;
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
                            the_open_enum.list_value = Value_Newton;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'O':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "ympicPoolLap") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_OlympicPoolLap;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "nce", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'F':
                                if (strcmp(&(json_string->getData()[6]), "orce") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_OunceForce;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[6]), "eight") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_OunceWeight;
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
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "sec") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Parsec;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 's':
                            if (strcmp(&(json_string->getData()[3]), "cal") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Pascal;
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
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "nyWeight") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_PennyWeight;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "ch") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Perch;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 't':
                            if (strncmp(&(json_string->getData()[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'b':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[6]), "t") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Petabit;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'y':
                                                if (strcmp(&(json_string->getData()[6]), "te") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Petabyte;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Petagram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Petahertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Petaliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Petameter;
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
                    if (strncmp(&(json_string->getData()[2]), "co", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'g':
                                if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Picogram;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'h':
                                if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Picohertz;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'l':
                                if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Picoliter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'm':
                                if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Picometer;
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
                        case 'l':
                            if (strcmp(&(json_string->getData()[3]), "e") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Pole;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "d") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Pond;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'u':
                            if (strncmp(&(json_string->getData()[3]), "nd", 2) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[5]))
                                  {
                                    case 0:
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Pound;
                                            goto open_enum_is_done;
                                          }
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[6]), "orce") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_PoundForce;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'P':
                                        if (strcmp(&(json_string->getData()[6]), "erSquareInch") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_PoundPerSquareInch;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[6]), "l") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Poundal;
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
        case 'Q':
            if (strncmp(&(json_string->getData()[1]), "ua", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'd':
                        if (strcmp(&(json_string->getData()[4]), "rant") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_Quadrant;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'r':
                        if (strcmp(&(json_string->getData()[4]), "ter") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_Quarter;
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
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "dian") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Radian;
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
                                    the_open_enum.list_value = Value_Rod;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'p':
                            if (strcmp(&(json_string->getData()[3]), "e") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Rope;
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
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'c':
                            if (strncmp(&(json_string->getData()[3]), "ond", 3) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[6]))
                                  {
                                    case 0:
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Second;
                                            goto open_enum_is_done;
                                          }
                                    case 'O':
                                        if (strcmp(&(json_string->getData()[7]), "fArc") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SecondOfArc;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'x':
                            if (strcmp(&(json_string->getData()[3]), "tant") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Sextant;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ot") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Shot;
                            goto open_enum_is_done;
                          }
                    break;
                case 'q':
                    if (strncmp(&(json_string->getData()[2]), "uare", 4) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[6]))
                          {
                            case 'C':
                                if (strcmp(&(json_string->getData()[7]), "entimeter") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SquareCentimeter;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'F':
                                if (strcmp(&(json_string->getData()[7]), "oot") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SquareFoot;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[7]), "nch") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SquareInch;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'K':
                                if (strcmp(&(json_string->getData()[7]), "ilometer") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SquareKilometer;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'M':
                                switch ((unsigned char)(json_string->getData()[7]))
                                  {
                                    case 'e':
                                        if (strcmp(&(json_string->getData()[8]), "ter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SquareMeter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        if (strncmp(&(json_string->getData()[8]), "l", 1) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[9]))
                                              {
                                                case 'e':
                                                    if (json_string->getData()[10] == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SquareMile;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                case 'l':
                                                    if (strcmp(&(json_string->getData()[10]), "imeter") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = Value_SquareMillimeter;
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
                                if (strcmp(&(json_string->getData()[7]), "ard") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SquareYard;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 't':
                    if (strcmp(&(json_string->getData()[2]), "one") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Stone;
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
                case 'e':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "KRun") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_TenKRun;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strncmp(&(json_string->getData()[3]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'b':
                                        switch ((unsigned char)(json_string->getData()[5]))
                                          {
                                            case 'i':
                                                if (strcmp(&(json_string->getData()[6]), "t") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Terabit;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'y':
                                                if (strcmp(&(json_string->getData()[6]), "te") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_Terabyte;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[5]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Teragram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[5]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Terahertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[5]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Teraliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[5]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Terameter;
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
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'n':
                            if (json_string->getData()[3] == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Ton;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "r") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Torr;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "oy", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'O':
                                if (strcmp(&(json_string->getData()[5]), "unce") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TroyOunce;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'P':
                                if (strcmp(&(json_string->getData()[5]), "ound") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TroyPound;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "rn") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Turn;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'K':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'B':
                            if (strcmp(&(json_string->getData()[3]), "ushel") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_UKBushel;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'G':
                            if (strcmp(&(json_string->getData()[3]), "allon") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_UKGallon;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'O':
                            if (strcmp(&(json_string->getData()[3]), "unceVolume") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_UKOunceVolume;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'P':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'e':
                                    if (strcmp(&(json_string->getData()[4]), "ck") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_UKPeck;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'i':
                                    if (strcmp(&(json_string->getData()[4]), "nt") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_UKPint;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'Q':
                            if (strcmp(&(json_string->getData()[3]), "uart") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_UKQuart;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'T':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'a':
                                    if (strcmp(&(json_string->getData()[4]), "blespoon") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_UKTablespoon;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'e':
                                    if (strcmp(&(json_string->getData()[4]), "aspoon") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_UKTeaspoon;
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
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'B':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'a':
                                    if (strcmp(&(json_string->getData()[4]), "rrel") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_USBarrel;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'u':
                                    if (strcmp(&(json_string->getData()[4]), "shel") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_USBushel;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'D':
                            if (strcmp(&(json_string->getData()[3]), "ryQuart") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_USDryQuart;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'G':
                            if (strcmp(&(json_string->getData()[3]), "allon") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_USGallon;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'H':
                            if (strcmp(&(json_string->getData()[3]), "ogshead") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_USHogshead;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'L':
                            if (strcmp(&(json_string->getData()[3]), "iquidQuart") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_USLiquidQuart;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'O':
                            if (strcmp(&(json_string->getData()[3]), "unceVolume") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_USOunceVolume;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'P':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'e':
                                    if (strcmp(&(json_string->getData()[4]), "ck") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_USPeck;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'i':
                                    if (strcmp(&(json_string->getData()[4]), "nt") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_USPint;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'T':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'a':
                                    if (strcmp(&(json_string->getData()[4]), "blespoon") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_USTablespoon;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'e':
                                    if (strcmp(&(json_string->getData()[4]), "aspoon") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_USTeaspoon;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'i':
                                    if (strcmp(&(json_string->getData()[4]), "erce") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_USTierce;
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
                    if (strcmp(&(json_string->getData()[2]), "known") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Unknown;
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
                    if (strcmp(&(json_string->getData()[2]), "tt") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Watt;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ek") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Week;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'Y':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "rd") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Yard;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ar") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Year;
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
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Yoctogram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Yoctohertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Yoctoliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Yoctometer;
                                                goto open_enum_is_done;
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
                                    case 'g':
                                        if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Yottagram;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'h':
                                        if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Yottahertz;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'l':
                                        if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Yottaliter;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'm':
                                        if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_Yottameter;
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
        case 'Z':
            if (strncmp(&(json_string->getData()[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'p':
                        if (strncmp(&(json_string->getData()[3]), "to", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[5]))
                              {
                                case 'g':
                                    if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Zeptogram;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'h':
                                    if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Zeptohertz;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'l':
                                    if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Zeptoliter;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'm':
                                    if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Zeptometer;
                                            goto open_enum_is_done;
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
                                case 'g':
                                    if (strcmp(&(json_string->getData()[6]), "ram") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Zettagram;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'h':
                                    if (strcmp(&(json_string->getData()[6]), "ertz") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Zettahertz;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'l':
                                    if (strcmp(&(json_string->getData()[6]), "iter") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Zettaliter;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'm':
                                    if (strcmp(&(json_string->getData()[6]), "eter") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Zettameter;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

UnitOfMeasureJSON::UnitOfMeasureJSON(void) :
        flagHasValue(false)
  {
  }

UnitOfMeasureJSON::UnitOfMeasureJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

UnitOfMeasureJSON::UnitOfMeasureJSON(const char *init_value) :
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

UnitOfMeasureJSON::UnitOfMeasureJSON(std::string init_value) :
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

UnitOfMeasureJSON::UnitOfMeasureJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

UnitOfMeasureJSON::~UnitOfMeasureJSON(void)
  {
  }

bool UnitOfMeasureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitOfMeasureJSON::TypeValue UnitOfMeasureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitOfMeasureJSON::TypeValue UnitOfMeasureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *UnitOfMeasureJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UnitOfMeasureJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

UnitOfMeasureJSON *UnitOfMeasureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitOfMeasureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitOfMeasureJSON>, UnitOfMeasureJSON *, bool> generator("Type UnitOfMeasure", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
