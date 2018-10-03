/* file "DateAndOrTimeSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateAndOrTimeSpecJSON.h"

#include "DateAndOrTimeSpecJSON.h"


DateAndOrTimeSpecJSON::TypeDayPhase::TypeDayPhase(void)
  {
  }

DateAndOrTimeSpecJSON::TypeDayPhase::TypeDayPhase(const TypeDayPhase &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

DateAndOrTimeSpecJSON::TypeDayPhase::TypeDayPhase(TypeDayPhaseKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool DateAndOrTimeSpecJSON::TypeDayPhase::operator==(const TypeDayPhase &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool DateAndOrTimeSpecJSON::TypeDayPhase::operator!=(const TypeDayPhase &other) const
  {
    return !(operator==(other));
  }

bool DateAndOrTimeSpecJSON::TypeDayPhase::operator<(const TypeDayPhase &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool DateAndOrTimeSpecJSON::TypeDayPhase::operator>(const TypeDayPhase &other) const
  {
    return other.operator<(*this);
  }

bool DateAndOrTimeSpecJSON::TypeDayPhase::operator>=(const TypeDayPhase &other) const
  {
    return !(operator<(other));
  }

bool DateAndOrTimeSpecJSON::TypeDayPhase::operator<=(const TypeDayPhase &other) const
  {
    return !(other.operator<(*this));
  }

DateAndOrTimeSpecJSON::TypeDayPhaseKnownValues DateAndOrTimeSpecJSON::stringToDayPhase(const char *chars)
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

const char *DateAndOrTimeSpecJSON::stringFromDayPhase(TypeDayPhaseKnownValues the_enum)
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

DateAndOrTimeSpecJSON::DateAndOrTimeSpecJSON(const DateAndOrTimeSpecJSON &)
  {
    assert(false);
  }

DateAndOrTimeSpecJSON &DateAndOrTimeSpecJSON::operator=(const DateAndOrTimeSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DateAndOrTimeSpecJSON::extraScheduledEventSpecToJSON(void) const
  {
    JSONValueHandler handler_ScheduledEventSpec;
    storeScheduledEventSpec->write_as_json(&handler_ScheduledEventSpec);
    handler_ScheduledEventSpec.result->add_reference();
    return handler_ScheduledEventSpec.result;
  }

JSONValue *DateAndOrTimeSpecJSON::extraLabelToJSON(void) const
  {
    JSONStringValue *generated_string_Label = new JSONStringValue(storeLabel.c_str());
    return generated_string_Label;
  }

JSONValue *DateAndOrTimeSpecJSON::extraSpokenLabelToJSON(void) const
  {
    JSONStringValue *generated_string_SpokenLabel = new JSONStringValue(storeSpokenLabel.c_str());
    return generated_string_SpokenLabel;
  }

JSONValue *DateAndOrTimeSpecJSON::extraPrepositionTextToJSON(void) const
  {
    JSONStringValue *generated_string_PrepositionText = new JSONStringValue(storePrepositionText.c_str());
    return generated_string_PrepositionText;
  }

JSONValue *DateAndOrTimeSpecJSON::extraHolidayToJSON(void) const
  {
    JSONStringValue *generated_string_Holiday = new JSONStringValue(storeHoliday.c_str());
    return generated_string_Holiday;
  }

JSONValue *DateAndOrTimeSpecJSON::extraDayPhaseToJSON(void) const
  {
    JSONStringValue *generated_string_DayPhase;
    if (!(storeDayPhase.in_known_list))
      {
    generated_string_DayPhase = new JSONStringValue(storeDayPhase.string_value.c_str());
      }
    else
      {
    switch (storeDayPhase.list_value)
      {
        case DayPhase_Unknown:
            generated_string_DayPhase = new JSONStringValue("Unknown");
            break;
        case DayPhase_All_x20_day:
            generated_string_DayPhase = new JSONStringValue("All day");
            break;
        case DayPhase_Midnight:
            generated_string_DayPhase = new JSONStringValue("Midnight");
            break;
        case DayPhase_Dawn:
            generated_string_DayPhase = new JSONStringValue("Dawn");
            break;
        case DayPhase_Morning:
            generated_string_DayPhase = new JSONStringValue("Morning");
            break;
        case DayPhase_Noon:
            generated_string_DayPhase = new JSONStringValue("Noon");
            break;
        case DayPhase_Afternoon:
            generated_string_DayPhase = new JSONStringValue("Afternoon");
            break;
        case DayPhase_Dusk:
            generated_string_DayPhase = new JSONStringValue("Dusk");
            break;
        case DayPhase_Evening:
            generated_string_DayPhase = new JSONStringValue("Evening");
            break;
        case DayPhase_Night:
            generated_string_DayPhase = new JSONStringValue("Night");
            break;
        default:
            assert(false);
            generated_string_DayPhase = NULL;
      }
      }
    return generated_string_DayPhase;
  }

JSONValue *DateAndOrTimeSpecJSON::extraYearMentionedToJSON(void) const
  {
    JSONValue *generated_boolean_YearMentioned = (storeYearMentioned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_YearMentioned;
  }

JSONValue *DateAndOrTimeSpecJSON::extraMonthMentionedToJSON(void) const
  {
    JSONValue *generated_boolean_MonthMentioned = (storeMonthMentioned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_MonthMentioned;
  }

JSONValue *DateAndOrTimeSpecJSON::extraDayOfMonthMentionedToJSON(void) const
  {
    JSONValue *generated_boolean_DayOfMonthMentioned = (storeDayOfMonthMentioned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DayOfMonthMentioned;
  }

JSONValue *DateAndOrTimeSpecJSON::extraDayOfWeekMentionedToJSON(void) const
  {
    JSONValue *generated_boolean_DayOfWeekMentioned = (storeDayOfWeekMentioned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DayOfWeekMentioned;
  }

JSONValue *DateAndOrTimeSpecJSON::extraDateMentionedToJSON(void) const
  {
    JSONValue *generated_boolean_DateMentioned = (storeDateMentioned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DateMentioned;
  }

JSONValue *DateAndOrTimeSpecJSON::extraTimeMentionedToJSON(void) const
  {
    JSONValue *generated_boolean_TimeMentioned = (storeTimeMentioned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_TimeMentioned;
  }

JSONValue *DateAndOrTimeSpecJSON::extraTodayRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_TodayRequested = (storeTodayRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_TodayRequested;
  }

JSONValue *DateAndOrTimeSpecJSON::extraNowRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_NowRequested = (storeNowRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_NowRequested;
  }

JSONValue *DateAndOrTimeSpecJSON::extraRelativeToNowToJSON(void) const
  {
    JSONValue *generated_boolean_RelativeToNow = (storeRelativeToNow ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_RelativeToNow;
  }

JSONValue *DateAndOrTimeSpecJSON::extraRelativeToConversationDateTimeToJSON(void) const
  {
    JSONValue *generated_boolean_RelativeToConversationDateTime = (storeRelativeToConversationDateTime ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_RelativeToConversationDateTime;
  }

void DateAndOrTimeSpecJSON::fromJSONScheduledEventSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ScheduledEventSpecJSON *convert_classy = ScheduledEventSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setScheduledEventSpec(convert_classy);
    convert_classy->remove_reference();
  }

void DateAndOrTimeSpecJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of DateAndOrTimeSpecJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void DateAndOrTimeSpecJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of DateAndOrTimeSpecJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

void DateAndOrTimeSpecJSON::fromJSONPrepositionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PrepositionText of DateAndOrTimeSpecJSON is not a string.");
    setPrepositionText(std::string(json_string->getData()));
  }

void DateAndOrTimeSpecJSON::fromJSONHoliday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Holiday of DateAndOrTimeSpecJSON is not a string.");
    setHoliday(std::string(json_string->getData()));
  }

void DateAndOrTimeSpecJSON::fromJSONDayPhase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DayPhase of DateAndOrTimeSpecJSON is not a string.");
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

void DateAndOrTimeSpecJSON::fromJSONYearMentioned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field YearMentioned of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setYearMentioned(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONMonthMentioned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MonthMentioned of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setMonthMentioned(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONDayOfMonthMentioned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DayOfMonthMentioned of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setDayOfMonthMentioned(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONDayOfWeekMentioned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DayOfWeekMentioned of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setDayOfWeekMentioned(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONDateMentioned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DateMentioned of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setDateMentioned(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONTimeMentioned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TimeMentioned of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setTimeMentioned(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONTodayRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TodayRequested of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setTodayRequested(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONNowRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field NowRequested of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setNowRequested(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONRelativeToNow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RelativeToNow of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setRelativeToNow(the_bool);
  }

void DateAndOrTimeSpecJSON::fromJSONRelativeToConversationDateTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RelativeToConversationDateTime of DateAndOrTimeSpecJSON is not true for false.");
          }
      }
    setRelativeToConversationDateTime(the_bool);
  }

DateAndOrTimeSpecJSON::DateAndOrTimeSpecJSON(void) :
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

DateAndOrTimeSpecJSON::~DateAndOrTimeSpecJSON(void)
  {
    if (flagHasScheduledEventSpec)
      {
        storeScheduledEventSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateAndOrTimeSpecJSON::hasScheduledEventSpec(void) const
  {
    return flagHasScheduledEventSpec;
  }

ScheduledEventSpecJSON * DateAndOrTimeSpecJSON::getScheduledEventSpec(void)
  {
    assert(flagHasScheduledEventSpec);
    return storeScheduledEventSpec;
  }

const ScheduledEventSpecJSON * DateAndOrTimeSpecJSON::getScheduledEventSpec(void) const
  {
    assert(flagHasScheduledEventSpec);
    return storeScheduledEventSpec;
  }

bool DateAndOrTimeSpecJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string DateAndOrTimeSpecJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string DateAndOrTimeSpecJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool DateAndOrTimeSpecJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string DateAndOrTimeSpecJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string DateAndOrTimeSpecJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

bool DateAndOrTimeSpecJSON::hasPrepositionText(void) const
  {
    return flagHasPrepositionText;
  }

std::string DateAndOrTimeSpecJSON::getPrepositionText(void)
  {
    assert(flagHasPrepositionText);
    return storePrepositionText;
  }

const std::string DateAndOrTimeSpecJSON::getPrepositionText(void) const
  {
    assert(flagHasPrepositionText);
    return storePrepositionText;
  }

bool DateAndOrTimeSpecJSON::hasHoliday(void) const
  {
    return flagHasHoliday;
  }

std::string DateAndOrTimeSpecJSON::getHoliday(void)
  {
    assert(flagHasHoliday);
    return storeHoliday;
  }

const std::string DateAndOrTimeSpecJSON::getHoliday(void) const
  {
    assert(flagHasHoliday);
    return storeHoliday;
  }

bool DateAndOrTimeSpecJSON::hasDayPhase(void) const
  {
    return flagHasDayPhase;
  }

DateAndOrTimeSpecJSON::TypeDayPhase DateAndOrTimeSpecJSON::getDayPhase(void)
  {
    assert(flagHasDayPhase);
    return storeDayPhase;
  }

const DateAndOrTimeSpecJSON::TypeDayPhase DateAndOrTimeSpecJSON::getDayPhase(void) const
  {
    assert(flagHasDayPhase);
    return storeDayPhase;
  }

const char *DateAndOrTimeSpecJSON::getDayPhaseAsChars(void) const
  {
    TypeDayPhase result = getDayPhase();
    if (result.in_known_list)
        return stringFromDayPhase(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string DateAndOrTimeSpecJSON::getDayPhaseAsString(void) const
  {
    return getDayPhaseAsChars();
  }

bool DateAndOrTimeSpecJSON::hasYearMentioned(void) const
  {
    return flagHasYearMentioned;
  }

bool DateAndOrTimeSpecJSON::getYearMentioned(void)
  {
    assert(flagHasYearMentioned);
    return storeYearMentioned;
  }

const bool DateAndOrTimeSpecJSON::getYearMentioned(void) const
  {
    assert(flagHasYearMentioned);
    return storeYearMentioned;
  }

bool DateAndOrTimeSpecJSON::hasMonthMentioned(void) const
  {
    return flagHasMonthMentioned;
  }

bool DateAndOrTimeSpecJSON::getMonthMentioned(void)
  {
    assert(flagHasMonthMentioned);
    return storeMonthMentioned;
  }

const bool DateAndOrTimeSpecJSON::getMonthMentioned(void) const
  {
    assert(flagHasMonthMentioned);
    return storeMonthMentioned;
  }

bool DateAndOrTimeSpecJSON::hasDayOfMonthMentioned(void) const
  {
    return flagHasDayOfMonthMentioned;
  }

bool DateAndOrTimeSpecJSON::getDayOfMonthMentioned(void)
  {
    assert(flagHasDayOfMonthMentioned);
    return storeDayOfMonthMentioned;
  }

const bool DateAndOrTimeSpecJSON::getDayOfMonthMentioned(void) const
  {
    assert(flagHasDayOfMonthMentioned);
    return storeDayOfMonthMentioned;
  }

bool DateAndOrTimeSpecJSON::hasDayOfWeekMentioned(void) const
  {
    return flagHasDayOfWeekMentioned;
  }

bool DateAndOrTimeSpecJSON::getDayOfWeekMentioned(void)
  {
    assert(flagHasDayOfWeekMentioned);
    return storeDayOfWeekMentioned;
  }

const bool DateAndOrTimeSpecJSON::getDayOfWeekMentioned(void) const
  {
    assert(flagHasDayOfWeekMentioned);
    return storeDayOfWeekMentioned;
  }

bool DateAndOrTimeSpecJSON::hasDateMentioned(void) const
  {
    return flagHasDateMentioned;
  }

bool DateAndOrTimeSpecJSON::getDateMentioned(void)
  {
    assert(flagHasDateMentioned);
    return storeDateMentioned;
  }

const bool DateAndOrTimeSpecJSON::getDateMentioned(void) const
  {
    assert(flagHasDateMentioned);
    return storeDateMentioned;
  }

bool DateAndOrTimeSpecJSON::hasTimeMentioned(void) const
  {
    return flagHasTimeMentioned;
  }

bool DateAndOrTimeSpecJSON::getTimeMentioned(void)
  {
    assert(flagHasTimeMentioned);
    return storeTimeMentioned;
  }

const bool DateAndOrTimeSpecJSON::getTimeMentioned(void) const
  {
    assert(flagHasTimeMentioned);
    return storeTimeMentioned;
  }

bool DateAndOrTimeSpecJSON::hasTodayRequested(void) const
  {
    return flagHasTodayRequested;
  }

bool DateAndOrTimeSpecJSON::getTodayRequested(void)
  {
    assert(flagHasTodayRequested);
    return storeTodayRequested;
  }

const bool DateAndOrTimeSpecJSON::getTodayRequested(void) const
  {
    assert(flagHasTodayRequested);
    return storeTodayRequested;
  }

bool DateAndOrTimeSpecJSON::hasNowRequested(void) const
  {
    return flagHasNowRequested;
  }

bool DateAndOrTimeSpecJSON::getNowRequested(void)
  {
    assert(flagHasNowRequested);
    return storeNowRequested;
  }

const bool DateAndOrTimeSpecJSON::getNowRequested(void) const
  {
    assert(flagHasNowRequested);
    return storeNowRequested;
  }

bool DateAndOrTimeSpecJSON::hasRelativeToNow(void) const
  {
    return flagHasRelativeToNow;
  }

bool DateAndOrTimeSpecJSON::getRelativeToNow(void)
  {
    assert(flagHasRelativeToNow);
    return storeRelativeToNow;
  }

const bool DateAndOrTimeSpecJSON::getRelativeToNow(void) const
  {
    assert(flagHasRelativeToNow);
    return storeRelativeToNow;
  }

bool DateAndOrTimeSpecJSON::hasRelativeToConversationDateTime(void) const
  {
    return flagHasRelativeToConversationDateTime;
  }

bool DateAndOrTimeSpecJSON::getRelativeToConversationDateTime(void)
  {
    assert(flagHasRelativeToConversationDateTime);
    return storeRelativeToConversationDateTime;
  }

const bool DateAndOrTimeSpecJSON::getRelativeToConversationDateTime(void) const
  {
    assert(flagHasRelativeToConversationDateTime);
    return storeRelativeToConversationDateTime;
  }

DateAndOrTimeSpecJSON *DateAndOrTimeSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateAndOrTimeSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool> generator("Type DateAndOrTimeSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
