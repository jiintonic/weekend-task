/* file "CalendarCreateCalendarItemCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CalendarCreateCalendarItemCommandJSON.h"

#include "CalendarCreateCalendarItemCommandJSON.h"


CalendarCreateCalendarItemCommandJSON::TypeFrequencyType CalendarCreateCalendarItemCommandJSON::stringToFrequencyType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'd':
            if (strcmp(&(chars[1]), "aily") == 0)
                return FrequencyType_daily;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "onthly") == 0)
                return FrequencyType_monthly;
            break;
        case 'o':
            if (strcmp(&(chars[1]), "ne-time") == 0)
                return FrequencyType_one_time;
            break;
        case 'u':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return FrequencyType_unknown;
            break;
        case 'w':
            if (strcmp(&(chars[1]), "eekly") == 0)
                return FrequencyType_weekly;
            break;
        case 'y':
            if (strcmp(&(chars[1]), "early") == 0)
                return FrequencyType_yearly;
            break;
        default:
            break;
      }
    throw("The value for field `FrequencyType' is not one of the legal values.");
  }

const char *CalendarCreateCalendarItemCommandJSON::stringFromFrequencyType(TypeFrequencyType the_enum)
  {
    switch (the_enum)
      {
        case FrequencyType_unknown:
            return "unknown";
        case FrequencyType_one_time:
            return "one-time";
        case FrequencyType_daily:
            return "daily";
        case FrequencyType_weekly:
            return "weekly";
        case FrequencyType_monthly:
            return "monthly";
        case FrequencyType_yearly:
            return "yearly";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateCalendarItemCommandJSON::TypeAvailability CalendarCreateCalendarItemCommandJSON::stringToAvailability(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "usy") == 0)
                return Availability_Busy;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "ree") == 0)
                return Availability_Free;
            break;
        default:
            break;
      }
    throw("The value for field `Availability' is not one of the legal values.");
  }

const char *CalendarCreateCalendarItemCommandJSON::stringFromAvailability(TypeAvailability the_enum)
  {
    switch (the_enum)
      {
        case Availability_Free:
            return "Free";
        case Availability_Busy:
            return "Busy";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::TypeFrequencyType CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::stringToFrequencyType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'd':
            if (strcmp(&(chars[1]), "aily") == 0)
                return FrequencyType_daily;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "onthly") == 0)
                return FrequencyType_monthly;
            break;
        case 'o':
            if (strcmp(&(chars[1]), "ne-time") == 0)
                return FrequencyType_one_time;
            break;
        case 'u':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return FrequencyType_unknown;
            break;
        case 'w':
            if (strcmp(&(chars[1]), "eekly") == 0)
                return FrequencyType_weekly;
            break;
        case 'y':
            if (strcmp(&(chars[1]), "early") == 0)
                return FrequencyType_yearly;
            break;
        default:
            break;
      }
    throw("The value for field `FrequencyType' is not one of the legal values.");
  }

const char *CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::stringFromFrequencyType(TypeFrequencyType the_enum)
  {
    switch (the_enum)
      {
        case FrequencyType_unknown:
            return "unknown";
        case FrequencyType_one_time:
            return "one-time";
        case FrequencyType_daily:
            return "daily";
        case FrequencyType_weekly:
            return "weekly";
        case FrequencyType_monthly:
            return "monthly";
        case FrequencyType_yearly:
            return "yearly";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::TypeAvailability CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::stringToAvailability(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "usy") == 0)
                return Availability_Busy;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "ree") == 0)
                return Availability_Free;
            break;
        default:
            break;
      }
    throw("The value for field `Availability' is not one of the legal values.");
  }

const char *CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::stringFromAvailability(TypeAvailability the_enum)
  {
    switch (the_enum)
      {
        case Availability_Free:
            return "Free";
        case Availability_Busy:
            return "Busy";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON &CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONItemKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ItemKind of TypeNativeDataJSON is not a string.");
    setItemKind(std::string(json_string->getData()));
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of TypeNativeDataJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Location of TypeNativeDataJSON is not a string.");
    setLocation(std::string(json_string->getData()));
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStart(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEnd(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONFrequencyType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FrequencyType of TypeNativeDataJSON is not a string.");
    TypeFrequencyType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'd':
            if (strcmp(&(json_string->getData()[1]), "aily") == 0)
                  {
                    the_enum = FrequencyType_daily;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "onthly") == 0)
                  {
                    the_enum = FrequencyType_monthly;
                    goto enum_is_done;
                  }
            break;
        case 'o':
            if (strcmp(&(json_string->getData()[1]), "ne-time") == 0)
                  {
                    the_enum = FrequencyType_one_time;
                    goto enum_is_done;
                  }
            break;
        case 'u':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = FrequencyType_unknown;
                    goto enum_is_done;
                  }
            break;
        case 'w':
            if (strcmp(&(json_string->getData()[1]), "eekly") == 0)
                  {
                    the_enum = FrequencyType_weekly;
                    goto enum_is_done;
                  }
            break;
        case 'y':
            if (strcmp(&(json_string->getData()[1]), "early") == 0)
                  {
                    the_enum = FrequencyType_yearly;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field FrequencyType of TypeNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setFrequencyType(the_enum);
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONFrequencyMultiplier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FrequencyMultiplier of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FrequencyMultiplier of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setFrequencyMultiplier(extracted_integer);
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONRecurrenceRule(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RecurrenceRule of TypeNativeDataJSON is not a string.");
    setRecurrenceRule(std::string(json_string->getData()));
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRecurring of TypeNativeDataJSON is not true for false.");
          }
      }
    setIsRecurring(the_bool);
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONIsAllDay(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsAllDay of TypeNativeDataJSON is not true for false.");
          }
      }
    setIsAllDay(the_bool);
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONAvailability(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Availability of TypeNativeDataJSON is not a string.");
    TypeAvailability the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "usy") == 0)
                  {
                    the_enum = Availability_Busy;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "ree") == 0)
                  {
                    the_enum = Availability_Free;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Availability of TypeNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setAvailability(the_enum);
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONStartAMPMAmbiguous(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StartAMPMAmbiguous of TypeNativeDataJSON is not true for false.");
          }
      }
    setStartAMPMAmbiguous(the_bool);
  }

void CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONEndAMPMAmbiguous(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EndAMPMAmbiguous of TypeNativeDataJSON is not true for false.");
          }
      }
    setEndAMPMAmbiguous(the_bool);
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasItemKind(false),
        flagHasTitle(false),
        flagHasLocation(false),
        flagHasStart(false),
        flagHasEnd(false),
        flagHasFrequencyType(false),
        flagHasFrequencyMultiplier(false),
        flagHasRecurrenceRule(false),
        flagHasIsRecurring(false),
        flagHasIsAllDay(false),
        flagHasAvailability(false),
        flagHasStartAMPMAmbiguous(false),
        flagHasEndAMPMAmbiguous(false)
  {
    extraIndex = create_string_index();
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasStart)
      {
        storeStart->remove_reference();
      }
    if (flagHasEnd)
      {
        storeEnd->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasItemKind(void) const
  {
    return flagHasItemKind;
  }

std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getItemKind(void)
  {
    assert(flagHasItemKind);
    return storeItemKind;
  }

const std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getItemKind(void) const
  {
    assert(flagHasItemKind);
    return storeItemKind;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasStart(void) const
  {
    return flagHasStart;
  }

DateAndOrTimeJSON * CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getStart(void)
  {
    assert(flagHasStart);
    return storeStart;
  }

const DateAndOrTimeJSON * CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getStart(void) const
  {
    assert(flagHasStart);
    return storeStart;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasEnd(void) const
  {
    return flagHasEnd;
  }

DateAndOrTimeJSON * CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getEnd(void)
  {
    assert(flagHasEnd);
    return storeEnd;
  }

const DateAndOrTimeJSON * CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getEnd(void) const
  {
    assert(flagHasEnd);
    return storeEnd;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasFrequencyType(void) const
  {
    return flagHasFrequencyType;
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::TypeFrequencyType CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getFrequencyType(void)
  {
    assert(flagHasFrequencyType);
    return storeFrequencyType;
  }

const CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::TypeFrequencyType CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getFrequencyType(void) const
  {
    assert(flagHasFrequencyType);
    return storeFrequencyType;
  }

const char *CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getFrequencyTypeAsChars(void) const
  {
    return stringFromFrequencyType(getFrequencyType());
  }

std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getFrequencyTypeAsString(void) const
  {
    return stringFromFrequencyType(getFrequencyType());
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasFrequencyMultiplier(void) const
  {
    return flagHasFrequencyMultiplier;
  }

OInteger CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getFrequencyMultiplier(void)
  {
    assert(flagHasFrequencyMultiplier);
    return storeFrequencyMultiplier;
  }

const OInteger CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getFrequencyMultiplier(void) const
  {
    assert(flagHasFrequencyMultiplier);
    return storeFrequencyMultiplier;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasRecurrenceRule(void) const
  {
    return flagHasRecurrenceRule;
  }

std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getRecurrenceRule(void)
  {
    assert(flagHasRecurrenceRule);
    return storeRecurrenceRule;
  }

const std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getRecurrenceRule(void) const
  {
    assert(flagHasRecurrenceRule);
    return storeRecurrenceRule;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasIsRecurring(void) const
  {
    return flagHasIsRecurring;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getIsRecurring(void)
  {
    assert(flagHasIsRecurring);
    return storeIsRecurring;
  }

const bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getIsRecurring(void) const
  {
    assert(flagHasIsRecurring);
    return storeIsRecurring;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasIsAllDay(void) const
  {
    return flagHasIsAllDay;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getIsAllDay(void)
  {
    assert(flagHasIsAllDay);
    return storeIsAllDay;
  }

const bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getIsAllDay(void) const
  {
    assert(flagHasIsAllDay);
    return storeIsAllDay;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasAvailability(void) const
  {
    return flagHasAvailability;
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::TypeAvailability CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getAvailability(void)
  {
    assert(flagHasAvailability);
    return storeAvailability;
  }

const CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::TypeAvailability CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getAvailability(void) const
  {
    assert(flagHasAvailability);
    return storeAvailability;
  }

const char *CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getAvailabilityAsChars(void) const
  {
    return stringFromAvailability(getAvailability());
  }

std::string CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getAvailabilityAsString(void) const
  {
    return stringFromAvailability(getAvailability());
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasStartAMPMAmbiguous(void) const
  {
    return flagHasStartAMPMAmbiguous;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getStartAMPMAmbiguous(void)
  {
    assert(flagHasStartAMPMAmbiguous);
    return storeStartAMPMAmbiguous;
  }

const bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getStartAMPMAmbiguous(void) const
  {
    assert(flagHasStartAMPMAmbiguous);
    return storeStartAMPMAmbiguous;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::hasEndAMPMAmbiguous(void) const
  {
    return flagHasEndAMPMAmbiguous;
  }

bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getEndAMPMAmbiguous(void)
  {
    assert(flagHasEndAMPMAmbiguous);
    return storeEndAMPMAmbiguous;
  }

const bool CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::getEndAMPMAmbiguous(void) const
  {
    assert(flagHasEndAMPMAmbiguous);
    return storeEndAMPMAmbiguous;
  }

CalendarCreateCalendarItemCommandJSON::CalendarCreateCalendarItemCommandJSON(const CalendarCreateCalendarItemCommandJSON &)
  {
    assert(false);
  }

CalendarCreateCalendarItemCommandJSON &CalendarCreateCalendarItemCommandJSON::operator=(const CalendarCreateCalendarItemCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraItemKindToJSON(void) const
  {
    JSONStringValue *generated_string_ItemKind = new JSONStringValue(storeItemKind.c_str());
    return generated_string_ItemKind;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraTitleToJSON(void) const
  {
    JSONStringValue *generated_string_Title = new JSONStringValue(storeTitle.c_str());
    return generated_string_Title;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraLocationToJSON(void) const
  {
    JSONStringValue *generated_string_Location = new JSONStringValue(storeLocation.c_str());
    return generated_string_Location;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraStartToJSON(void) const
  {
    JSONValueHandler handler_Start;
    storeStart->write_as_json(&handler_Start);
    handler_Start.result->add_reference();
    return handler_Start.result;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraEndToJSON(void) const
  {
    JSONValueHandler handler_End;
    storeEnd->write_as_json(&handler_End);
    handler_End.result->add_reference();
    return handler_End.result;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraFrequencyTypeToJSON(void) const
  {
    JSONStringValue *generated_string_FrequencyType;
    switch (storeFrequencyType)
      {
        case FrequencyType_unknown:
            generated_string_FrequencyType = new JSONStringValue("unknown");
            break;
        case FrequencyType_one_time:
            generated_string_FrequencyType = new JSONStringValue("one-time");
            break;
        case FrequencyType_daily:
            generated_string_FrequencyType = new JSONStringValue("daily");
            break;
        case FrequencyType_weekly:
            generated_string_FrequencyType = new JSONStringValue("weekly");
            break;
        case FrequencyType_monthly:
            generated_string_FrequencyType = new JSONStringValue("monthly");
            break;
        case FrequencyType_yearly:
            generated_string_FrequencyType = new JSONStringValue("yearly");
            break;
        default:
            assert(false);
            generated_string_FrequencyType = NULL;
      }
    return generated_string_FrequencyType;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraFrequencyMultiplierToJSON(void) const
  {
    JSONIntegerValue *generated_integer_FrequencyMultiplier = new JSONIntegerValue(storeFrequencyMultiplier.get_o_integer());
    return generated_integer_FrequencyMultiplier;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraRecurrenceRuleToJSON(void) const
  {
    JSONStringValue *generated_string_RecurrenceRule = new JSONStringValue(storeRecurrenceRule.c_str());
    return generated_string_RecurrenceRule;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraIsRecurringToJSON(void) const
  {
    JSONValue *generated_boolean_IsRecurring = (storeIsRecurring ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsRecurring;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraIsAllDayToJSON(void) const
  {
    JSONValue *generated_boolean_IsAllDay = (storeIsAllDay ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsAllDay;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraAvailabilityToJSON(void) const
  {
    JSONStringValue *generated_string_Availability;
    switch (storeAvailability)
      {
        case Availability_Free:
            generated_string_Availability = new JSONStringValue("Free");
            break;
        case Availability_Busy:
            generated_string_Availability = new JSONStringValue("Busy");
            break;
        default:
            assert(false);
            generated_string_Availability = NULL;
      }
    return generated_string_Availability;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraStartAMPMAmbiguousToJSON(void) const
  {
    JSONValue *generated_boolean_StartAMPMAmbiguous = (storeStartAMPMAmbiguous ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_StartAMPMAmbiguous;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraEndAMPMAmbiguousToJSON(void) const
  {
    JSONValue *generated_boolean_EndAMPMAmbiguous = (storeEndAMPMAmbiguous ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_EndAMPMAmbiguous;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraEventsConflictResultToJSON(void) const
  {
    JSONValueHandler handler_EventsConflictResult;
    storeEventsConflictResult->write_as_json(&handler_EventsConflictResult);
    handler_EventsConflictResult.result->add_reference();
    return handler_EventsConflictResult.result;
  }

JSONValue *CalendarCreateCalendarItemCommandJSON::extraCalendarPreferenceIsNotSetResultToJSON(void) const
  {
    JSONValueHandler handler_CalendarPreferenceIsNotSetResult;
    storeCalendarPreferenceIsNotSetResult->write_as_json(&handler_CalendarPreferenceIsNotSetResult);
    handler_CalendarPreferenceIsNotSetResult.result->add_reference();
    return handler_CalendarPreferenceIsNotSetResult.result;
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONItemKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ItemKind of CalendarCreateCalendarItemCommandJSON is not a string.");
    setItemKind(std::string(json_string->getData()));
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of CalendarCreateCalendarItemCommandJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Location of CalendarCreateCalendarItemCommandJSON is not a string.");
    setLocation(std::string(json_string->getData()));
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStart(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEnd(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONFrequencyType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FrequencyType of CalendarCreateCalendarItemCommandJSON is not a string.");
    TypeFrequencyType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'd':
            if (strcmp(&(json_string->getData()[1]), "aily") == 0)
                  {
                    the_enum = FrequencyType_daily;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "onthly") == 0)
                  {
                    the_enum = FrequencyType_monthly;
                    goto enum_is_done;
                  }
            break;
        case 'o':
            if (strcmp(&(json_string->getData()[1]), "ne-time") == 0)
                  {
                    the_enum = FrequencyType_one_time;
                    goto enum_is_done;
                  }
            break;
        case 'u':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = FrequencyType_unknown;
                    goto enum_is_done;
                  }
            break;
        case 'w':
            if (strcmp(&(json_string->getData()[1]), "eekly") == 0)
                  {
                    the_enum = FrequencyType_weekly;
                    goto enum_is_done;
                  }
            break;
        case 'y':
            if (strcmp(&(json_string->getData()[1]), "early") == 0)
                  {
                    the_enum = FrequencyType_yearly;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field FrequencyType of CalendarCreateCalendarItemCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setFrequencyType(the_enum);
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONFrequencyMultiplier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FrequencyMultiplier of CalendarCreateCalendarItemCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FrequencyMultiplier of CalendarCreateCalendarItemCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setFrequencyMultiplier(extracted_integer);
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONRecurrenceRule(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RecurrenceRule of CalendarCreateCalendarItemCommandJSON is not a string.");
    setRecurrenceRule(std::string(json_string->getData()));
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRecurring of CalendarCreateCalendarItemCommandJSON is not true for false.");
          }
      }
    setIsRecurring(the_bool);
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONIsAllDay(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsAllDay of CalendarCreateCalendarItemCommandJSON is not true for false.");
          }
      }
    setIsAllDay(the_bool);
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONAvailability(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Availability of CalendarCreateCalendarItemCommandJSON is not a string.");
    TypeAvailability the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "usy") == 0)
                  {
                    the_enum = Availability_Busy;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "ree") == 0)
                  {
                    the_enum = Availability_Free;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Availability of CalendarCreateCalendarItemCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setAvailability(the_enum);
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONStartAMPMAmbiguous(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StartAMPMAmbiguous of CalendarCreateCalendarItemCommandJSON is not true for false.");
          }
      }
    setStartAMPMAmbiguous(the_bool);
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONEndAMPMAmbiguous(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EndAMPMAmbiguous of CalendarCreateCalendarItemCommandJSON is not true for false.");
          }
      }
    setEndAMPMAmbiguous(the_bool);
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONEventsConflictResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEventsConflictResult(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateCalendarItemCommandJSON::fromJSONCalendarPreferenceIsNotSetResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCalendarPreferenceIsNotSetResult(convert_classy);
    convert_classy->remove_reference();
  }

CalendarCreateCalendarItemCommandJSON::CalendarCreateCalendarItemCommandJSON(void) :
        flagHasItemKind(false),
        flagHasTitle(false),
        flagHasLocation(false),
        flagHasStart(false),
        flagHasEnd(false),
        flagHasFrequencyType(false),
        flagHasFrequencyMultiplier(false),
        flagHasRecurrenceRule(false),
        flagHasIsRecurring(false),
        flagHasIsAllDay(false),
        flagHasAvailability(false),
        flagHasStartAMPMAmbiguous(false),
        flagHasEndAMPMAmbiguous(false),
        flagHasNativeData(false),
        flagHasEventsConflictResult(false),
        flagHasCalendarPreferenceIsNotSetResult(false)
  {
    extraIndex = create_string_index();
  }

CalendarCreateCalendarItemCommandJSON::~CalendarCreateCalendarItemCommandJSON(void)
  {
    if (flagHasStart)
      {
        storeStart->remove_reference();
      }
    if (flagHasEnd)
      {
        storeEnd->remove_reference();
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasEventsConflictResult)
      {
        storeEventsConflictResult->remove_reference();
      }
    if (flagHasCalendarPreferenceIsNotSetResult)
      {
        storeCalendarPreferenceIsNotSetResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CalendarCreateCalendarItemCommandJSON::getCalendarCommandKind(void) const
  {
    return "CreateItem";
  }

bool CalendarCreateCalendarItemCommandJSON::hasItemKind(void) const
  {
    return flagHasItemKind;
  }

std::string CalendarCreateCalendarItemCommandJSON::getItemKind(void)
  {
    assert(flagHasItemKind);
    return storeItemKind;
  }

const std::string CalendarCreateCalendarItemCommandJSON::getItemKind(void) const
  {
    assert(flagHasItemKind);
    return storeItemKind;
  }

bool CalendarCreateCalendarItemCommandJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string CalendarCreateCalendarItemCommandJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string CalendarCreateCalendarItemCommandJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool CalendarCreateCalendarItemCommandJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

std::string CalendarCreateCalendarItemCommandJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const std::string CalendarCreateCalendarItemCommandJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool CalendarCreateCalendarItemCommandJSON::hasStart(void) const
  {
    return flagHasStart;
  }

DateAndOrTimeJSON * CalendarCreateCalendarItemCommandJSON::getStart(void)
  {
    assert(flagHasStart);
    return storeStart;
  }

const DateAndOrTimeJSON * CalendarCreateCalendarItemCommandJSON::getStart(void) const
  {
    assert(flagHasStart);
    return storeStart;
  }

bool CalendarCreateCalendarItemCommandJSON::hasEnd(void) const
  {
    return flagHasEnd;
  }

DateAndOrTimeJSON * CalendarCreateCalendarItemCommandJSON::getEnd(void)
  {
    assert(flagHasEnd);
    return storeEnd;
  }

const DateAndOrTimeJSON * CalendarCreateCalendarItemCommandJSON::getEnd(void) const
  {
    assert(flagHasEnd);
    return storeEnd;
  }

bool CalendarCreateCalendarItemCommandJSON::hasFrequencyType(void) const
  {
    return flagHasFrequencyType;
  }

CalendarCreateCalendarItemCommandJSON::TypeFrequencyType CalendarCreateCalendarItemCommandJSON::getFrequencyType(void)
  {
    assert(flagHasFrequencyType);
    return storeFrequencyType;
  }

const CalendarCreateCalendarItemCommandJSON::TypeFrequencyType CalendarCreateCalendarItemCommandJSON::getFrequencyType(void) const
  {
    assert(flagHasFrequencyType);
    return storeFrequencyType;
  }

const char *CalendarCreateCalendarItemCommandJSON::getFrequencyTypeAsChars(void) const
  {
    return stringFromFrequencyType(getFrequencyType());
  }

std::string CalendarCreateCalendarItemCommandJSON::getFrequencyTypeAsString(void) const
  {
    return stringFromFrequencyType(getFrequencyType());
  }

bool CalendarCreateCalendarItemCommandJSON::hasFrequencyMultiplier(void) const
  {
    return flagHasFrequencyMultiplier;
  }

OInteger CalendarCreateCalendarItemCommandJSON::getFrequencyMultiplier(void)
  {
    assert(flagHasFrequencyMultiplier);
    return storeFrequencyMultiplier;
  }

const OInteger CalendarCreateCalendarItemCommandJSON::getFrequencyMultiplier(void) const
  {
    assert(flagHasFrequencyMultiplier);
    return storeFrequencyMultiplier;
  }

bool CalendarCreateCalendarItemCommandJSON::hasRecurrenceRule(void) const
  {
    return flagHasRecurrenceRule;
  }

std::string CalendarCreateCalendarItemCommandJSON::getRecurrenceRule(void)
  {
    assert(flagHasRecurrenceRule);
    return storeRecurrenceRule;
  }

const std::string CalendarCreateCalendarItemCommandJSON::getRecurrenceRule(void) const
  {
    assert(flagHasRecurrenceRule);
    return storeRecurrenceRule;
  }

bool CalendarCreateCalendarItemCommandJSON::hasIsRecurring(void) const
  {
    return flagHasIsRecurring;
  }

bool CalendarCreateCalendarItemCommandJSON::getIsRecurring(void)
  {
    assert(flagHasIsRecurring);
    return storeIsRecurring;
  }

const bool CalendarCreateCalendarItemCommandJSON::getIsRecurring(void) const
  {
    assert(flagHasIsRecurring);
    return storeIsRecurring;
  }

bool CalendarCreateCalendarItemCommandJSON::hasIsAllDay(void) const
  {
    return flagHasIsAllDay;
  }

bool CalendarCreateCalendarItemCommandJSON::getIsAllDay(void)
  {
    assert(flagHasIsAllDay);
    return storeIsAllDay;
  }

const bool CalendarCreateCalendarItemCommandJSON::getIsAllDay(void) const
  {
    assert(flagHasIsAllDay);
    return storeIsAllDay;
  }

bool CalendarCreateCalendarItemCommandJSON::hasAvailability(void) const
  {
    return flagHasAvailability;
  }

CalendarCreateCalendarItemCommandJSON::TypeAvailability CalendarCreateCalendarItemCommandJSON::getAvailability(void)
  {
    assert(flagHasAvailability);
    return storeAvailability;
  }

const CalendarCreateCalendarItemCommandJSON::TypeAvailability CalendarCreateCalendarItemCommandJSON::getAvailability(void) const
  {
    assert(flagHasAvailability);
    return storeAvailability;
  }

const char *CalendarCreateCalendarItemCommandJSON::getAvailabilityAsChars(void) const
  {
    return stringFromAvailability(getAvailability());
  }

std::string CalendarCreateCalendarItemCommandJSON::getAvailabilityAsString(void) const
  {
    return stringFromAvailability(getAvailability());
  }

bool CalendarCreateCalendarItemCommandJSON::hasStartAMPMAmbiguous(void) const
  {
    return flagHasStartAMPMAmbiguous;
  }

bool CalendarCreateCalendarItemCommandJSON::getStartAMPMAmbiguous(void)
  {
    assert(flagHasStartAMPMAmbiguous);
    return storeStartAMPMAmbiguous;
  }

const bool CalendarCreateCalendarItemCommandJSON::getStartAMPMAmbiguous(void) const
  {
    assert(flagHasStartAMPMAmbiguous);
    return storeStartAMPMAmbiguous;
  }

bool CalendarCreateCalendarItemCommandJSON::hasEndAMPMAmbiguous(void) const
  {
    return flagHasEndAMPMAmbiguous;
  }

bool CalendarCreateCalendarItemCommandJSON::getEndAMPMAmbiguous(void)
  {
    assert(flagHasEndAMPMAmbiguous);
    return storeEndAMPMAmbiguous;
  }

const bool CalendarCreateCalendarItemCommandJSON::getEndAMPMAmbiguous(void) const
  {
    assert(flagHasEndAMPMAmbiguous);
    return storeEndAMPMAmbiguous;
  }

bool CalendarCreateCalendarItemCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON * CalendarCreateCalendarItemCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON * CalendarCreateCalendarItemCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool CalendarCreateCalendarItemCommandJSON::hasEventsConflictResult(void) const
  {
    return flagHasEventsConflictResult;
  }

DynamicResponseJSON * CalendarCreateCalendarItemCommandJSON::getEventsConflictResult(void)
  {
    assert(flagHasEventsConflictResult);
    return storeEventsConflictResult;
  }

const DynamicResponseJSON * CalendarCreateCalendarItemCommandJSON::getEventsConflictResult(void) const
  {
    assert(flagHasEventsConflictResult);
    return storeEventsConflictResult;
  }

bool CalendarCreateCalendarItemCommandJSON::hasCalendarPreferenceIsNotSetResult(void) const
  {
    return flagHasCalendarPreferenceIsNotSetResult;
  }

DynamicResponseJSON * CalendarCreateCalendarItemCommandJSON::getCalendarPreferenceIsNotSetResult(void)
  {
    assert(flagHasCalendarPreferenceIsNotSetResult);
    return storeCalendarPreferenceIsNotSetResult;
  }

const DynamicResponseJSON * CalendarCreateCalendarItemCommandJSON::getCalendarPreferenceIsNotSetResult(void) const
  {
    assert(flagHasCalendarPreferenceIsNotSetResult);
    return storeCalendarPreferenceIsNotSetResult;
  }

char CalendarCreateCalendarItemCommandJSON::Generator::lowerBoundFrequencyMultiplier[] = "1";
char CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::Generator::lowerBoundFrequencyMultiplier[] = "1";
CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON *CalendarCreateCalendarItemCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
CalendarCreateCalendarItemCommandJSON *CalendarCreateCalendarItemCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CalendarCreateCalendarItemCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CalendarCreateCalendarItemCommandJSON>, CalendarCreateCalendarItemCommandJSON *, bool> generator("Type CalendarCreateCalendarItemCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
