/* file "SportsOlympicsEventCategoryJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventCategoryJSON.h"

#include "SportsOlympicsEventCategoryJSON.h"


SportsOlympicsEventCategoryJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsEventCategoryJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsEventCategoryJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsEventCategoryJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsEventCategoryJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsEventCategoryJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsEventCategoryJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsEventCategoryJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsEventCategoryJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsEventCategoryJSON::TypeValueKnownValues SportsOlympicsEventCategoryJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "pineSkiing") == 0)
                        return Value_AlpineSkiing;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "chery") == 0)
                        return Value_Archery;
                    break;
                case 't':
                    if (strcmp(&(chars[2]), "hletics") == 0)
                        return Value_Athletics;
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
                            if (strcmp(&(chars[3]), "minton") == 0)
                                return Value_Badminton;
                            break;
                        case 's':
                            switch ((unsigned char)(chars[3]))
                              {
                                case 'e':
                                    if (strcmp(&(chars[4]), "ball") == 0)
                                        return Value_Baseball;
                                    break;
                                case 'k':
                                    if (strcmp(&(chars[4]), "etball") == 0)
                                        return Value_Basketball;
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
                    if (strcmp(&(chars[2]), "athlon") == 0)
                        return Value_Biathlon;
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'b':
                            if (strcmp(&(chars[3]), "sleigh") == 0)
                                return Value_Bobsleigh;
                            break;
                        case 'x':
                            if (strcmp(&(chars[3]), "ing") == 0)
                                return Value_Boxing;
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
                    if (strcmp(&(chars[2]), "noeing") == 0)
                        return Value_Canoeing;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "ossCountrySkiing") == 0)
                        return Value_CrossCountrySkiing;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "rling") == 0)
                        return Value_Curling;
                    break;
                case 'y':
                    if (strcmp(&(chars[2]), "cling") == 0)
                        return Value_Cycling;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "iving") == 0)
                return Value_Diving;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "questrian") == 0)
                return Value_Equestrian;
            break;
        case 'F':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ncing") == 0)
                        return Value_Fencing;
                    break;
                case 'i':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'e':
                            if (strcmp(&(chars[3]), "ldHockey") == 0)
                                return Value_FieldHockey;
                            break;
                        case 'g':
                            if (strcmp(&(chars[3]), "ureSkating") == 0)
                                return Value_FigureSkating;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "otball") == 0)
                        return Value_Football;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "eestyleSkiing") == 0)
                        return Value_FreestyleSkiing;
                    break;
                default:
                    break;
              }
            break;
        case 'G':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "lf") == 0)
                        return Value_Golf;
                    break;
                case 'y':
                    if (strcmp(&(chars[2]), "mnastics") == 0)
                        return Value_Gymnastics;
                    break;
                default:
                    break;
              }
            break;
        case 'H':
            if (strcmp(&(chars[1]), "andball") == 0)
                return Value_Handball;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "ceHockey") == 0)
                return Value_IceHockey;
            break;
        case 'J':
            if (strcmp(&(chars[1]), "udo") == 0)
                return Value_Judo;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "uge") == 0)
                return Value_Luge;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "odernPentathlon") == 0)
                return Value_ModernPentathlon;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "ordicCombined") == 0)
                return Value_NordicCombined;
            break;
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "wing") == 0)
                        return Value_Rowing;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "gby") == 0)
                        return Value_Rugby;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "iling") == 0)
                        return Value_Sailing;
                    break;
                case 'h':
                    if (strncmp(&(chars[2]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'o':
                                if (strcmp(&(chars[4]), "ting") == 0)
                                    return Value_Shooting;
                                break;
                            case 'r':
                                if (strcmp(&(chars[4]), "tTrackSpeedSkating") == 0)
                                    return Value_ShortTrackSpeedSkating;
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
                            if (strcmp(&(chars[3]), "leton") == 0)
                                return Value_Skeleton;
                            break;
                        case 'i':
                            if (strcmp(&(chars[3]), "Jumping") == 0)
                                return Value_SkiJumping;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "owboarding") == 0)
                        return Value_Snowboarding;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ftball") == 0)
                        return Value_Softball;
                    break;
                case 'p':
                    if (strcmp(&(chars[2]), "eedSkating") == 0)
                        return Value_SpeedSkating;
                    break;
                case 'w':
                    if (strcmp(&(chars[2]), "imming") == 0)
                        return Value_Swimming;
                    break;
                case 'y':
                    if (strcmp(&(chars[2]), "nchronizedSwimming") == 0)
                        return Value_SynchronizedSwimming;
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
                            if (strcmp(&(chars[3]), "leTennis") == 0)
                                return Value_TableTennis;
                            break;
                        case 'e':
                            if (strcmp(&(chars[3]), "kwondo") == 0)
                                return Value_Taekwondo;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "nnis") == 0)
                        return Value_Tennis;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "iathlon") == 0)
                        return Value_Triathlon;
                    break;
                default:
                    break;
              }
            break;
        case 'V':
            if (strcmp(&(chars[1]), "olleyball") == 0)
                return Value_Volleyball;
            break;
        case 'W':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "terPolo") == 0)
                        return Value_WaterPolo;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "ightlifting") == 0)
                        return Value_Weightlifting;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "estling") == 0)
                        return Value_Wrestling;
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

const char *SportsOlympicsEventCategoryJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_AlpineSkiing:
            return "AlpineSkiing";
        case Value_Biathlon:
            return "Biathlon";
        case Value_Bobsleigh:
            return "Bobsleigh";
        case Value_CrossCountrySkiing:
            return "CrossCountrySkiing";
        case Value_Curling:
            return "Curling";
        case Value_FigureSkating:
            return "FigureSkating";
        case Value_FreestyleSkiing:
            return "FreestyleSkiing";
        case Value_IceHockey:
            return "IceHockey";
        case Value_Luge:
            return "Luge";
        case Value_NordicCombined:
            return "NordicCombined";
        case Value_ShortTrackSpeedSkating:
            return "ShortTrackSpeedSkating";
        case Value_Skeleton:
            return "Skeleton";
        case Value_SkiJumping:
            return "SkiJumping";
        case Value_Snowboarding:
            return "Snowboarding";
        case Value_SpeedSkating:
            return "SpeedSkating";
        case Value_Archery:
            return "Archery";
        case Value_Athletics:
            return "Athletics";
        case Value_Badminton:
            return "Badminton";
        case Value_Baseball:
            return "Baseball";
        case Value_Basketball:
            return "Basketball";
        case Value_Boxing:
            return "Boxing";
        case Value_Canoeing:
            return "Canoeing";
        case Value_Cycling:
            return "Cycling";
        case Value_Diving:
            return "Diving";
        case Value_Equestrian:
            return "Equestrian";
        case Value_Fencing:
            return "Fencing";
        case Value_FieldHockey:
            return "FieldHockey";
        case Value_Football:
            return "Football";
        case Value_Golf:
            return "Golf";
        case Value_Gymnastics:
            return "Gymnastics";
        case Value_Handball:
            return "Handball";
        case Value_Judo:
            return "Judo";
        case Value_ModernPentathlon:
            return "ModernPentathlon";
        case Value_Rowing:
            return "Rowing";
        case Value_Rugby:
            return "Rugby";
        case Value_Sailing:
            return "Sailing";
        case Value_Shooting:
            return "Shooting";
        case Value_Softball:
            return "Softball";
        case Value_Swimming:
            return "Swimming";
        case Value_SynchronizedSwimming:
            return "SynchronizedSwimming";
        case Value_TableTennis:
            return "TableTennis";
        case Value_Taekwondo:
            return "Taekwondo";
        case Value_Tennis:
            return "Tennis";
        case Value_Triathlon:
            return "Triathlon";
        case Value_Volleyball:
            return "Volleyball";
        case Value_WaterPolo:
            return "WaterPolo";
        case Value_Weightlifting:
            return "Weightlifting";
        case Value_Wrestling:
            return "Wrestling";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsEventCategoryJSON::SportsOlympicsEventCategoryJSON(const SportsOlympicsEventCategoryJSON &)
  {
    assert(false);
  }

SportsOlympicsEventCategoryJSON &SportsOlympicsEventCategoryJSON::operator=(const SportsOlympicsEventCategoryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventCategoryJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsEventCategoryJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "pineSkiing") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_AlpineSkiing;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "chery") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Archery;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    if (strcmp(&(json_string->getData()[2]), "hletics") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Athletics;
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
                            if (strcmp(&(json_string->getData()[3]), "minton") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Badminton;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 's':
                            switch ((unsigned char)(json_string->getData()[3]))
                              {
                                case 'e':
                                    if (strcmp(&(json_string->getData()[4]), "ball") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Baseball;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'k':
                                    if (strcmp(&(json_string->getData()[4]), "etball") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_Basketball;
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
                    if (strcmp(&(json_string->getData()[2]), "athlon") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Biathlon;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'b':
                            if (strcmp(&(json_string->getData()[3]), "sleigh") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Bobsleigh;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'x':
                            if (strcmp(&(json_string->getData()[3]), "ing") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Boxing;
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
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "noeing") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Canoeing;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "ossCountrySkiing") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_CrossCountrySkiing;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "rling") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Curling;
                            goto open_enum_is_done;
                          }
                    break;
                case 'y':
                    if (strcmp(&(json_string->getData()[2]), "cling") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Cycling;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "iving") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Diving;
                    goto open_enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "questrian") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Equestrian;
                    goto open_enum_is_done;
                  }
            break;
        case 'F':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ncing") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Fencing;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'e':
                            if (strcmp(&(json_string->getData()[3]), "ldHockey") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_FieldHockey;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'g':
                            if (strcmp(&(json_string->getData()[3]), "ureSkating") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_FigureSkating;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "otball") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Football;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "eestyleSkiing") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_FreestyleSkiing;
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
                    if (strcmp(&(json_string->getData()[2]), "lf") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Golf;
                            goto open_enum_is_done;
                          }
                    break;
                case 'y':
                    if (strcmp(&(json_string->getData()[2]), "mnastics") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Gymnastics;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "andball") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Handball;
                    goto open_enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "ceHockey") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_IceHockey;
                    goto open_enum_is_done;
                  }
            break;
        case 'J':
            if (strcmp(&(json_string->getData()[1]), "udo") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Judo;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "uge") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Luge;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "odernPentathlon") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ModernPentathlon;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "ordicCombined") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_NordicCombined;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "wing") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Rowing;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "gby") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Rugby;
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
                    if (strcmp(&(json_string->getData()[2]), "iling") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Sailing;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    if (strncmp(&(json_string->getData()[2]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'o':
                                if (strcmp(&(json_string->getData()[4]), "ting") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Shooting;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'r':
                                if (strcmp(&(json_string->getData()[4]), "tTrackSpeedSkating") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ShortTrackSpeedSkating;
                                        goto open_enum_is_done;
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
                            if (strcmp(&(json_string->getData()[3]), "leton") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Skeleton;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'i':
                            if (strcmp(&(json_string->getData()[3]), "Jumping") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_SkiJumping;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "owboarding") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Snowboarding;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ftball") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Softball;
                            goto open_enum_is_done;
                          }
                    break;
                case 'p':
                    if (strcmp(&(json_string->getData()[2]), "eedSkating") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_SpeedSkating;
                            goto open_enum_is_done;
                          }
                    break;
                case 'w':
                    if (strcmp(&(json_string->getData()[2]), "imming") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Swimming;
                            goto open_enum_is_done;
                          }
                    break;
                case 'y':
                    if (strcmp(&(json_string->getData()[2]), "nchronizedSwimming") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_SynchronizedSwimming;
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
                        case 'b':
                            if (strcmp(&(json_string->getData()[3]), "leTennis") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_TableTennis;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'e':
                            if (strcmp(&(json_string->getData()[3]), "kwondo") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_Taekwondo;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "nnis") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Tennis;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "iathlon") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Triathlon;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'V':
            if (strcmp(&(json_string->getData()[1]), "olleyball") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Volleyball;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "terPolo") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_WaterPolo;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ightlifting") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Weightlifting;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "estling") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Wrestling;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

SportsOlympicsEventCategoryJSON::SportsOlympicsEventCategoryJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsEventCategoryJSON::SportsOlympicsEventCategoryJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsEventCategoryJSON::SportsOlympicsEventCategoryJSON(const char *init_value) :
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

SportsOlympicsEventCategoryJSON::SportsOlympicsEventCategoryJSON(std::string init_value) :
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

SportsOlympicsEventCategoryJSON::SportsOlympicsEventCategoryJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsEventCategoryJSON::~SportsOlympicsEventCategoryJSON(void)
  {
  }

bool SportsOlympicsEventCategoryJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsEventCategoryJSON::TypeValue SportsOlympicsEventCategoryJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsEventCategoryJSON::TypeValue SportsOlympicsEventCategoryJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsEventCategoryJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsEventCategoryJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsEventCategoryJSON *SportsOlympicsEventCategoryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventCategoryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventCategoryJSON>, SportsOlympicsEventCategoryJSON *, bool> generator("Type SportsOlympicsEventCategory", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
