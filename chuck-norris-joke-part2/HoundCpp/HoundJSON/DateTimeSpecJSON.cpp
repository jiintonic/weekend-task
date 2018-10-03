/* file "DateTimeSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateTimeSpecJSON.h"

#include "DateTimeSpecJSON.h"


DateTimeSpecJSON::TypeDayPhase::TypeDayPhase(void)
  {
  }

DateTimeSpecJSON::TypeDayPhase::TypeDayPhase(const TypeDayPhase &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

DateTimeSpecJSON::TypeDayPhase::TypeDayPhase(TypeDayPhaseKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool DateTimeSpecJSON::TypeDayPhase::operator==(const TypeDayPhase &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool DateTimeSpecJSON::TypeDayPhase::operator!=(const TypeDayPhase &other) const
  {
    return !(operator==(other));
  }

bool DateTimeSpecJSON::TypeDayPhase::operator<(const TypeDayPhase &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool DateTimeSpecJSON::TypeDayPhase::operator>(const TypeDayPhase &other) const
  {
    return other.operator<(*this);
  }

bool DateTimeSpecJSON::TypeDayPhase::operator>=(const TypeDayPhase &other) const
  {
    return !(operator<(other));
  }

bool DateTimeSpecJSON::TypeDayPhase::operator<=(const TypeDayPhase &other) const
  {
    return !(other.operator<(*this));
  }

DateTimeSpecJSON::TypeDayPhaseKnownValues DateTimeSpecJSON::stringToDayPhase(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'f':
                    if (strcmp(&(chars[2]), "ternoon") == 0)
                        return DayPhase_Afternoon;
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "l day") == 0)
                        return DayPhase_All_x20_day;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "wn") == 0)
                        return DayPhase_Dawn;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "sk") == 0)
                        return DayPhase_Dusk;
                    break;
                default:
                    break;
              }
            break;
        case 'E':
            if (strcmp(&(chars[1]), "vening") == 0)
                return DayPhase_Evening;
            break;
        case 'M':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "dnight") == 0)
                        return DayPhase_Midnight;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "rning") == 0)
                        return DayPhase_Morning;
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "ght") == 0)
                        return DayPhase_Night;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "on") == 0)
                        return DayPhase_Noon;
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return DayPhase_Unknown;
            break;
        default:
            break;
      }
    return DayPhase__none;
  }

const char *DateTimeSpecJSON::stringFromDayPhase(TypeDayPhaseKnownValues the_enum)
  {
    switch (the_enum)
      {
        case DayPhase_Unknown:
            return "Unknown";
        case DayPhase_All_x20_day:
            return "All day";
        case DayPhase_Midnight:
            return "Midnight";
        case DayPhase_Dawn:
            return "Dawn";
        case DayPhase_Morning:
            return "Morning";
        case DayPhase_Noon:
            return "Noon";
        case DayPhase_Afternoon:
            return "Afternoon";
        case DayPhase_Dusk:
            return "Dusk";
        case DayPhase_Evening:
            return "Evening";
        case DayPhase_Night:
            return "Night";
        default:
            assert(false);
            return NULL;
      }
  }

DateTimeSpecJSON::DateTimeSpecJSON(const DateTimeSpecJSON &)
  {
    assert(false);
  }

DateTimeSpecJSON &DateTimeSpecJSON::operator=(const DateTimeSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DateTimeSpecJSON::fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void DateTimeSpecJSON::fromJSONScheduledEventSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ScheduledEventSpecJSON *convert_classy = ScheduledEventSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setScheduledEventSpec(convert_classy);
    convert_classy->remove_reference();
  }

void DateTimeSpecJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of DateTimeSpecJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void DateTimeSpecJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of DateTimeSpecJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

void DateTimeSpecJSON::fromJSONPrepositionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PrepositionText of DateTimeSpecJSON is not a string.");
    setPrepositionText(std::string(json_string->getData()));
  }

void DateTimeSpecJSON::fromJSONHoliday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Holiday of DateTimeSpecJSON is not a string.");
    setHoliday(std::string(json_string->getData()));
  }

void DateTimeSpecJSON::fromJSONDayPhase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DayPhase of DateTimeSpecJSON is not a string.");
    TypeDayPhase the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'f':
                    if (strcmp(&(json_string->getData()[2]), "ternoon") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DayPhase_Afternoon;
                            goto open_enum_is_done;
                          }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "l day") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DayPhase_All_x20_day;
                            goto open_enum_is_done;
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
                    if (strcmp(&(json_string->getData()[2]), "wn") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DayPhase_Dawn;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "sk") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DayPhase_Dusk;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "vening") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = DayPhase_Evening;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "dnight") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DayPhase_Midnight;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "rning") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DayPhase_Morning;
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
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ght") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DayPhase_Night;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "on") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DayPhase_Noon;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = DayPhase_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setDayPhase(the_open_enum);
  }

void DateTimeSpecJSON::fromJSONYearMentioned(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field YearMentioned of DateTimeSpecJSON is not true for false.");
          }
      }
    setYearMentioned(the_bool);
  }

void DateTimeSpecJSON::fromJSONMonthMentioned(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field MonthMentioned of DateTimeSpecJSON is not true for false.");
          }
      }
    setMonthMentioned(the_bool);
  }

void DateTimeSpecJSON::fromJSONDayOfMonthMentioned(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field DayOfMonthMentioned of DateTimeSpecJSON is not true for false.");
          }
      }
    setDayOfMonthMentioned(the_bool);
  }

void DateTimeSpecJSON::fromJSONDayOfWeekMentioned(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field DayOfWeekMentioned of DateTimeSpecJSON is not true for false.");
          }
      }
    setDayOfWeekMentioned(the_bool);
  }

void DateTimeSpecJSON::fromJSONDateMentioned(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field DateMentioned of DateTimeSpecJSON is not true for false.");
          }
      }
    setDateMentioned(the_bool);
  }

void DateTimeSpecJSON::fromJSONTimeMentioned(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field TimeMentioned of DateTimeSpecJSON is not true for false.");
          }
      }
    setTimeMentioned(the_bool);
  }

void DateTimeSpecJSON::fromJSONTodayRequested(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field TodayRequested of DateTimeSpecJSON is not true for false.");
          }
      }
    setTodayRequested(the_bool);
  }

void DateTimeSpecJSON::fromJSONNowRequested(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field NowRequested of DateTimeSpecJSON is not true for false.");
          }
      }
    setNowRequested(the_bool);
  }

void DateTimeSpecJSON::fromJSONRelativeToNow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field RelativeToNow of DateTimeSpecJSON is not true for false.");
          }
      }
    setRelativeToNow(the_bool);
  }

void DateTimeSpecJSON::fromJSONRelativeToConversationDateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field RelativeToConversationDateTime of DateTimeSpecJSON is not true for false.");
          }
      }
    setRelativeToConversationDateTime(the_bool);
  }

DateTimeSpecJSON::DateTimeSpecJSON(void) :
        flagHasDateAndTime(false),
        flagHasScheduledEventSpec(false),
        flagHasLabel(false),
        flagHasSpokenLabel(false),
        flagHasPrepositionText(false),
        flagHasHoliday(false),
        flagHasDayPhase(false),
        flagHasYearMentioned(false),
        flagHasMonthMentioned(false),
        flagHasDayOfMonthMentioned(false),
        flagHasDayOfWeekMentioned(false),
        flagHasDateMentioned(false),
        flagHasTimeMentioned(false),
        flagHasTodayRequested(false),
        flagHasNowRequested(false),
        flagHasRelativeToNow(false),
        flagHasRelativeToConversationDateTime(false)
  {
    extraIndex = create_string_index();
  }

DateTimeSpecJSON::~DateTimeSpecJSON(void)
  {
    if (flagHasDateAndTime)
      {
        storeDateAndTime->remove_reference();
      }
    if (flagHasScheduledEventSpec)
      {
        storeScheduledEventSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateTimeSpecJSON::hasDateAndTime(void) const
  {
    return flagHasDateAndTime;
  }

DateAndOrTimeJSON * DateTimeSpecJSON::getDateAndTime(void)
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

const DateAndOrTimeJSON * DateTimeSpecJSON::getDateAndTime(void) const
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

bool DateTimeSpecJSON::hasScheduledEventSpec(void) const
  {
    return flagHasScheduledEventSpec;
  }

ScheduledEventSpecJSON * DateTimeSpecJSON::getScheduledEventSpec(void)
  {
    assert(flagHasScheduledEventSpec);
    return storeScheduledEventSpec;
  }

const ScheduledEventSpecJSON * DateTimeSpecJSON::getScheduledEventSpec(void) const
  {
    assert(flagHasScheduledEventSpec);
    return storeScheduledEventSpec;
  }

bool DateTimeSpecJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string DateTimeSpecJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string DateTimeSpecJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool DateTimeSpecJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string DateTimeSpecJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string DateTimeSpecJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

bool DateTimeSpecJSON::hasPrepositionText(void) const
  {
    return flagHasPrepositionText;
  }

std::string DateTimeSpecJSON::getPrepositionText(void)
  {
    assert(flagHasPrepositionText);
    return storePrepositionText;
  }

const std::string DateTimeSpecJSON::getPrepositionText(void) const
  {
    assert(flagHasPrepositionText);
    return storePrepositionText;
  }

bool DateTimeSpecJSON::hasHoliday(void) const
  {
    return flagHasHoliday;
  }

std::string DateTimeSpecJSON::getHoliday(void)
  {
    assert(flagHasHoliday);
    return storeHoliday;
  }

const std::string DateTimeSpecJSON::getHoliday(void) const
  {
    assert(flagHasHoliday);
    return storeHoliday;
  }

bool DateTimeSpecJSON::hasDayPhase(void) const
  {
    return flagHasDayPhase;
  }

DateTimeSpecJSON::TypeDayPhase DateTimeSpecJSON::getDayPhase(void)
  {
    assert(flagHasDayPhase);
    return storeDayPhase;
  }

const DateTimeSpecJSON::TypeDayPhase DateTimeSpecJSON::getDayPhase(void) const
  {
    assert(flagHasDayPhase);
    return storeDayPhase;
  }

const char *DateTimeSpecJSON::getDayPhaseAsChars(void) const
  {
    TypeDayPhase result = getDayPhase();
    if (result.in_known_list)
        return stringFromDayPhase(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string DateTimeSpecJSON::getDayPhaseAsString(void) const
  {
    return getDayPhaseAsChars();
  }

bool DateTimeSpecJSON::hasYearMentioned(void) const
  {
    return flagHasYearMentioned;
  }

bool DateTimeSpecJSON::getYearMentioned(void)
  {
    assert(flagHasYearMentioned);
    return storeYearMentioned;
  }

const bool DateTimeSpecJSON::getYearMentioned(void) const
  {
    assert(flagHasYearMentioned);
    return storeYearMentioned;
  }

bool DateTimeSpecJSON::hasMonthMentioned(void) const
  {
    return flagHasMonthMentioned;
  }

bool DateTimeSpecJSON::getMonthMentioned(void)
  {
    assert(flagHasMonthMentioned);
    return storeMonthMentioned;
  }

const bool DateTimeSpecJSON::getMonthMentioned(void) const
  {
    assert(flagHasMonthMentioned);
    return storeMonthMentioned;
  }

bool DateTimeSpecJSON::hasDayOfMonthMentioned(void) const
  {
    return flagHasDayOfMonthMentioned;
  }

bool DateTimeSpecJSON::getDayOfMonthMentioned(void)
  {
    assert(flagHasDayOfMonthMentioned);
    return storeDayOfMonthMentioned;
  }

const bool DateTimeSpecJSON::getDayOfMonthMentioned(void) const
  {
    assert(flagHasDayOfMonthMentioned);
    return storeDayOfMonthMentioned;
  }

bool DateTimeSpecJSON::hasDayOfWeekMentioned(void) const
  {
    return flagHasDayOfWeekMentioned;
  }

bool DateTimeSpecJSON::getDayOfWeekMentioned(void)
  {
    assert(flagHasDayOfWeekMentioned);
    return storeDayOfWeekMentioned;
  }

const bool DateTimeSpecJSON::getDayOfWeekMentioned(void) const
  {
    assert(flagHasDayOfWeekMentioned);
    return storeDayOfWeekMentioned;
  }

bool DateTimeSpecJSON::hasDateMentioned(void) const
  {
    return flagHasDateMentioned;
  }

bool DateTimeSpecJSON::getDateMentioned(void)
  {
    assert(flagHasDateMentioned);
    return storeDateMentioned;
  }

const bool DateTimeSpecJSON::getDateMentioned(void) const
  {
    assert(flagHasDateMentioned);
    return storeDateMentioned;
  }

bool DateTimeSpecJSON::hasTimeMentioned(void) const
  {
    return flagHasTimeMentioned;
  }

bool DateTimeSpecJSON::getTimeMentioned(void)
  {
    assert(flagHasTimeMentioned);
    return storeTimeMentioned;
  }

const bool DateTimeSpecJSON::getTimeMentioned(void) const
  {
    assert(flagHasTimeMentioned);
    return storeTimeMentioned;
  }

bool DateTimeSpecJSON::hasTodayRequested(void) const
  {
    return flagHasTodayRequested;
  }

bool DateTimeSpecJSON::getTodayRequested(void)
  {
    assert(flagHasTodayRequested);
    return storeTodayRequested;
  }

const bool DateTimeSpecJSON::getTodayRequested(void) const
  {
    assert(flagHasTodayRequested);
    return storeTodayRequested;
  }

bool DateTimeSpecJSON::hasNowRequested(void) const
  {
    return flagHasNowRequested;
  }

bool DateTimeSpecJSON::getNowRequested(void)
  {
    assert(flagHasNowRequested);
    return storeNowRequested;
  }

const bool DateTimeSpecJSON::getNowRequested(void) const
  {
    assert(flagHasNowRequested);
    return storeNowRequested;
  }

bool DateTimeSpecJSON::hasRelativeToNow(void) const
  {
    return flagHasRelativeToNow;
  }

bool DateTimeSpecJSON::getRelativeToNow(void)
  {
    assert(flagHasRelativeToNow);
    return storeRelativeToNow;
  }

const bool DateTimeSpecJSON::getRelativeToNow(void) const
  {
    assert(flagHasRelativeToNow);
    return storeRelativeToNow;
  }

bool DateTimeSpecJSON::hasRelativeToConversationDateTime(void) const
  {
    return flagHasRelativeToConversationDateTime;
  }

bool DateTimeSpecJSON::getRelativeToConversationDateTime(void)
  {
    assert(flagHasRelativeToConversationDateTime);
    return storeRelativeToConversationDateTime;
  }

const bool DateTimeSpecJSON::getRelativeToConversationDateTime(void) const
  {
    assert(flagHasRelativeToConversationDateTime);
    return storeRelativeToConversationDateTime;
  }

DateTimeSpecJSON *DateTimeSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateTimeSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool> generator("Type DateTimeSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
