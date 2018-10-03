/* file "CalendarCreateDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CalendarCreateDataJSON.h"

#include "CalendarCreateDataJSON.h"


CalendarCreateDataJSON::TypeNextCreateAction CalendarCreateDataJSON::stringToNextCreateAction(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'D':
                        if (strncmp(&(chars[4]), "ate", 3) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 0:
                                    return NextCreateAction_AskDate;
                                case 'A':
                                    if (strcmp(&(chars[8]), "ndTime") == 0)
                                        return NextCreateAction_AskDateAndTime;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(chars[4]), "ime") == 0)
                            return NextCreateAction_AskTime;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'C':
            if (strcmp(&(chars[1]), "reateItem") == 0)
                return NextCreateAction_CreateItem;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "ndefined") == 0)
                return NextCreateAction_Undefined;
            break;
        default:
            break;
      }
    throw("The value for field `NextCreateAction' is not one of the legal values.");
  }

const char *CalendarCreateDataJSON::stringFromNextCreateAction(TypeNextCreateAction the_enum)
  {
    switch (the_enum)
      {
        case NextCreateAction_Undefined:
            return "Undefined";
        case NextCreateAction_CreateItem:
            return "CreateItem";
        case NextCreateAction_AskDateAndTime:
            return "AskDateAndTime";
        case NextCreateAction_AskDate:
            return "AskDate";
        case NextCreateAction_AskTime:
            return "AskTime";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateDataJSON::TypeLastCreateAction CalendarCreateDataJSON::stringToLastCreateAction(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'D':
                        if (strncmp(&(chars[4]), "ate", 3) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 0:
                                    return LastCreateAction_AskDate;
                                case 'A':
                                    if (strcmp(&(chars[8]), "ndTime") == 0)
                                        return LastCreateAction_AskDateAndTime;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(chars[4]), "ime") == 0)
                            return LastCreateAction_AskTime;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'C':
            if (strcmp(&(chars[1]), "reateItem") == 0)
                return LastCreateAction_CreateItem;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "ndefined") == 0)
                return LastCreateAction_Undefined;
            break;
        default:
            break;
      }
    throw("The value for field `LastCreateAction' is not one of the legal values.");
  }

const char *CalendarCreateDataJSON::stringFromLastCreateAction(TypeLastCreateAction the_enum)
  {
    switch (the_enum)
      {
        case LastCreateAction_Undefined:
            return "Undefined";
        case LastCreateAction_CreateItem:
            return "CreateItem";
        case LastCreateAction_AskDateAndTime:
            return "AskDateAndTime";
        case LastCreateAction_AskDate:
            return "AskDate";
        case LastCreateAction_AskTime:
            return "AskTime";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateDataJSON::TypeFrequencyType CalendarCreateDataJSON::stringToFrequencyType(const char *chars)
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

const char *CalendarCreateDataJSON::stringFromFrequencyType(TypeFrequencyType the_enum)
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

CalendarCreateDataJSON::TypeAvailability CalendarCreateDataJSON::stringToAvailability(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "vailable") == 0)
                return Availability_Available;
            break;
        case 'B':
            if (strcmp(&(chars[1]), "usy") == 0)
                return Availability_Busy;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "entative") == 0)
                return Availability_Tentative;
            break;
        default:
            break;
      }
    throw("The value for field `Availability' is not one of the legal values.");
  }

const char *CalendarCreateDataJSON::stringFromAvailability(TypeAvailability the_enum)
  {
    switch (the_enum)
      {
        case Availability_Busy:
            return "Busy";
        case Availability_Available:
            return "Available";
        case Availability_Tentative:
            return "Tentative";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateDataJSON::TypeSelfAttendeeStatus CalendarCreateDataJSON::stringToSelfAttendeeStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ccepted") == 0)
                return SelfAttendeeStatus_Accepted;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "eclined") == 0)
                return SelfAttendeeStatus_Declined;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nvited") == 0)
                return SelfAttendeeStatus_Invited;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return SelfAttendeeStatus_None;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "entative") == 0)
                return SelfAttendeeStatus_Tentative;
            break;
        default:
            break;
      }
    throw("The value for field `SelfAttendeeStatus' is not one of the legal values.");
  }

const char *CalendarCreateDataJSON::stringFromSelfAttendeeStatus(TypeSelfAttendeeStatus the_enum)
  {
    switch (the_enum)
      {
        case SelfAttendeeStatus_None:
            return "None";
        case SelfAttendeeStatus_Accepted:
            return "Accepted";
        case SelfAttendeeStatus_Declined:
            return "Declined";
        case SelfAttendeeStatus_Invited:
            return "Invited";
        case SelfAttendeeStatus_Tentative:
            return "Tentative";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateDataJSON::TypeAccessLevel CalendarCreateDataJSON::stringToAccessLevel(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "efault") == 0)
                return AccessLevel_Default;
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'r':
                    if (strcmp(&(chars[2]), "ivate") == 0)
                        return AccessLevel_Private;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "blic") == 0)
                        return AccessLevel_Public;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field `AccessLevel' is not one of the legal values.");
  }

const char *CalendarCreateDataJSON::stringFromAccessLevel(TypeAccessLevel the_enum)
  {
    switch (the_enum)
      {
        case AccessLevel_Default:
            return "Default";
        case AccessLevel_Private:
            return "Private";
        case AccessLevel_Public:
            return "Public";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarCreateDataJSON::CalendarCreateDataJSON(const CalendarCreateDataJSON &)
  {
    assert(false);
  }

CalendarCreateDataJSON &CalendarCreateDataJSON::operator=(const CalendarCreateDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CalendarCreateDataJSON::fromJSONNextCreateAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NextCreateAction of CalendarCreateDataJSON is not a string.");
    TypeNextCreateAction the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'D':
                        if (strncmp(&(json_string->getData()[4]), "ate", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 0:
                                      {
                                        the_enum = NextCreateAction_AskDate;
                                        goto enum_is_done;
                                      }
                                case 'A':
                                    if (strcmp(&(json_string->getData()[8]), "ndTime") == 0)
                                          {
                                            the_enum = NextCreateAction_AskDateAndTime;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[4]), "ime") == 0)
                              {
                                the_enum = NextCreateAction_AskTime;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "reateItem") == 0)
                  {
                    the_enum = NextCreateAction_CreateItem;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "ndefined") == 0)
                  {
                    the_enum = NextCreateAction_Undefined;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field NextCreateAction of CalendarCreateDataJSON is not one of the legal strings.");
  enum_is_done:;
    setNextCreateAction(the_enum);
  }

void CalendarCreateDataJSON::fromJSONLastCreateAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastCreateAction of CalendarCreateDataJSON is not a string.");
    TypeLastCreateAction the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'D':
                        if (strncmp(&(json_string->getData()[4]), "ate", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 0:
                                      {
                                        the_enum = LastCreateAction_AskDate;
                                        goto enum_is_done;
                                      }
                                case 'A':
                                    if (strcmp(&(json_string->getData()[8]), "ndTime") == 0)
                                          {
                                            the_enum = LastCreateAction_AskDateAndTime;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[4]), "ime") == 0)
                              {
                                the_enum = LastCreateAction_AskTime;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "reateItem") == 0)
                  {
                    the_enum = LastCreateAction_CreateItem;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "ndefined") == 0)
                  {
                    the_enum = LastCreateAction_Undefined;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field LastCreateAction of CalendarCreateDataJSON is not one of the legal strings.");
  enum_is_done:;
    setLastCreateAction(the_enum);
  }

void CalendarCreateDataJSON::fromJSONItemKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ItemKind of CalendarCreateDataJSON is not a string.");
    setItemKind(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of CalendarCreateDataJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Location of CalendarCreateDataJSON is not a string.");
    setLocation(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MapLocation of CalendarCreateDataJSON is not a string.");
    setMapLocation(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONRequestedStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedStart(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateDataJSON::fromJSONRequestedEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedEnd(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateDataJSON::fromJSONStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStart(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateDataJSON::fromJSONEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEnd(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarCreateDataJSON::fromJSONFrequencyType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FrequencyType of CalendarCreateDataJSON is not a string.");
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
    throw("The value for field FrequencyType of CalendarCreateDataJSON is not one of the legal strings.");
  enum_is_done:;
    setFrequencyType(the_enum);
  }

void CalendarCreateDataJSON::fromJSONFrequencyMultiplier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FrequencyMultiplier of CalendarCreateDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FrequencyMultiplier of CalendarCreateDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setFrequencyMultiplier(extracted_integer);
  }

void CalendarCreateDataJSON::fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRecurring of CalendarCreateDataJSON is not true for false.");
          }
      }
    setIsRecurring(the_bool);
  }

void CalendarCreateDataJSON::fromJSONRecurrenceRule(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RecurrenceRule of CalendarCreateDataJSON is not a string.");
    setRecurrenceRule(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONDurationSeconds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DurationSeconds of CalendarCreateDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DurationSeconds of CalendarCreateDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDurationSeconds(extracted_integer);
  }

void CalendarCreateDataJSON::fromJSONIsAllDay(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsAllDay of CalendarCreateDataJSON is not true for false.");
          }
      }
    setIsAllDay(the_bool);
  }

void CalendarCreateDataJSON::fromJSONAvailability(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Availability of CalendarCreateDataJSON is not a string.");
    TypeAvailability the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "vailable") == 0)
                  {
                    the_enum = Availability_Available;
                    goto enum_is_done;
                  }
            break;
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "usy") == 0)
                  {
                    the_enum = Availability_Busy;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "entative") == 0)
                  {
                    the_enum = Availability_Tentative;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Availability of CalendarCreateDataJSON is not one of the legal strings.");
  enum_is_done:;
    setAvailability(the_enum);
  }

void CalendarCreateDataJSON::fromJSONCalendarName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CalendarName of CalendarCreateDataJSON is not a string.");
    setCalendarName(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONCalendarID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CalendarID of CalendarCreateDataJSON is not a string.");
    setCalendarID(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of CalendarCreateDataJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONOrganizer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Organizer of CalendarCreateDataJSON is not a string.");
    setOrganizer(std::string(json_string->getData()));
  }

void CalendarCreateDataJSON::fromJSONSelfAttendeeStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SelfAttendeeStatus of CalendarCreateDataJSON is not a string.");
    TypeSelfAttendeeStatus the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ccepted") == 0)
                  {
                    the_enum = SelfAttendeeStatus_Accepted;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "eclined") == 0)
                  {
                    the_enum = SelfAttendeeStatus_Declined;
                    goto enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nvited") == 0)
                  {
                    the_enum = SelfAttendeeStatus_Invited;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = SelfAttendeeStatus_None;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "entative") == 0)
                  {
                    the_enum = SelfAttendeeStatus_Tentative;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field SelfAttendeeStatus of CalendarCreateDataJSON is not one of the legal strings.");
  enum_is_done:;
    setSelfAttendeeStatus(the_enum);
  }

void CalendarCreateDataJSON::fromJSONAccessLevel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AccessLevel of CalendarCreateDataJSON is not a string.");
    TypeAccessLevel the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "efault") == 0)
                  {
                    the_enum = AccessLevel_Default;
                    goto enum_is_done;
                  }
            break;
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "ivate") == 0)
                          {
                            the_enum = AccessLevel_Private;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "blic") == 0)
                          {
                            the_enum = AccessLevel_Public;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field AccessLevel of CalendarCreateDataJSON is not one of the legal strings.");
  enum_is_done:;
    setAccessLevel(the_enum);
  }

void CalendarCreateDataJSON::fromJSONAttendees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Attendees of CalendarCreateDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Attendees of CalendarCreateDataJSON has too few elements.");
    std::vector< CalendarAttendeeJSON * > vector_Attendees1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CalendarAttendeeJSON *convert_classy = CalendarAttendeeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Attendees1[num1] = convert_classy;
      }
    assert(vector_Attendees1.size() >= 1);
    initAttendees();
    for (size_t num3 = 0; num3 < vector_Attendees1.size(); ++num3)
        appendAttendees(vector_Attendees1[num3]);
    for (size_t num1 = 0; num1 < vector_Attendees1.size(); ++num1)
      {
        vector_Attendees1[num1]->remove_reference();
      }
  }

void CalendarCreateDataJSON::fromJSONReminders(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Reminders of CalendarCreateDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Reminders of CalendarCreateDataJSON has too few elements.");
    std::vector< CalendarReminderJSON * > vector_Reminders1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CalendarReminderJSON *convert_classy = CalendarReminderJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Reminders1[num1] = convert_classy;
      }
    assert(vector_Reminders1.size() >= 1);
    initReminders();
    for (size_t num4 = 0; num4 < vector_Reminders1.size(); ++num4)
        appendReminders(vector_Reminders1[num4]);
    for (size_t num1 = 0; num1 < vector_Reminders1.size(); ++num1)
      {
        vector_Reminders1[num1]->remove_reference();
      }
  }

CalendarCreateDataJSON::CalendarCreateDataJSON(void) :
        flagHasNextCreateAction(false),
        flagHasLastCreateAction(false),
        flagHasItemKind(false),
        flagHasTitle(false),
        flagHasLocation(false),
        flagHasMapLocation(false),
        flagHasRequestedStart(false),
        flagHasRequestedEnd(false),
        flagHasStart(false),
        flagHasEnd(false),
        flagHasFrequencyType(false),
        flagHasFrequencyMultiplier(false),
        flagHasIsRecurring(false),
        flagHasRecurrenceRule(false),
        flagHasDurationSeconds(false),
        flagHasIsAllDay(false),
        flagHasAvailability(false),
        flagHasCalendarName(false),
        flagHasCalendarID(false),
        flagHasDescription(false),
        flagHasOrganizer(false),
        flagHasSelfAttendeeStatus(false),
        flagHasAccessLevel(false),
        flagHasAttendees(false),
        flagHasReminders(false)
  {
    extraIndex = create_string_index();
  }

CalendarCreateDataJSON::~CalendarCreateDataJSON(void)
  {
    if (flagHasRequestedStart)
      {
        storeRequestedStart->remove_reference();
      }
    if (flagHasRequestedEnd)
      {
        storeRequestedEnd->remove_reference();
      }
    if (flagHasStart)
      {
        storeStart->remove_reference();
      }
    if (flagHasEnd)
      {
        storeEnd->remove_reference();
      }
    if (flagHasAttendees)
      {
        for (size_t num7 = 0; num7 < storeAttendees.size(); ++num7)
          {
            storeAttendees[num7]->remove_reference();
          }
      }
    if (flagHasReminders)
      {
        for (size_t num8 = 0; num8 < storeReminders.size(); ++num8)
          {
            storeReminders[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CalendarCreateDataJSON::hasNextCreateAction(void) const
  {
    return flagHasNextCreateAction;
  }

CalendarCreateDataJSON::TypeNextCreateAction CalendarCreateDataJSON::getNextCreateAction(void)
  {
    assert(flagHasNextCreateAction);
    return storeNextCreateAction;
  }

const CalendarCreateDataJSON::TypeNextCreateAction CalendarCreateDataJSON::getNextCreateAction(void) const
  {
    assert(flagHasNextCreateAction);
    return storeNextCreateAction;
  }

const char *CalendarCreateDataJSON::getNextCreateActionAsChars(void) const
  {
    return stringFromNextCreateAction(getNextCreateAction());
  }

std::string CalendarCreateDataJSON::getNextCreateActionAsString(void) const
  {
    return stringFromNextCreateAction(getNextCreateAction());
  }

bool CalendarCreateDataJSON::hasLastCreateAction(void) const
  {
    return flagHasLastCreateAction;
  }

CalendarCreateDataJSON::TypeLastCreateAction CalendarCreateDataJSON::getLastCreateAction(void)
  {
    assert(flagHasLastCreateAction);
    return storeLastCreateAction;
  }

const CalendarCreateDataJSON::TypeLastCreateAction CalendarCreateDataJSON::getLastCreateAction(void) const
  {
    assert(flagHasLastCreateAction);
    return storeLastCreateAction;
  }

const char *CalendarCreateDataJSON::getLastCreateActionAsChars(void) const
  {
    return stringFromLastCreateAction(getLastCreateAction());
  }

std::string CalendarCreateDataJSON::getLastCreateActionAsString(void) const
  {
    return stringFromLastCreateAction(getLastCreateAction());
  }

bool CalendarCreateDataJSON::hasItemKind(void) const
  {
    return flagHasItemKind;
  }

std::string CalendarCreateDataJSON::getItemKind(void)
  {
    assert(flagHasItemKind);
    return storeItemKind;
  }

const std::string CalendarCreateDataJSON::getItemKind(void) const
  {
    assert(flagHasItemKind);
    return storeItemKind;
  }

bool CalendarCreateDataJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string CalendarCreateDataJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string CalendarCreateDataJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool CalendarCreateDataJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

std::string CalendarCreateDataJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const std::string CalendarCreateDataJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool CalendarCreateDataJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

std::string CalendarCreateDataJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const std::string CalendarCreateDataJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool CalendarCreateDataJSON::hasRequestedStart(void) const
  {
    return flagHasRequestedStart;
  }

DateAndOrTimeJSON * CalendarCreateDataJSON::getRequestedStart(void)
  {
    assert(flagHasRequestedStart);
    return storeRequestedStart;
  }

const DateAndOrTimeJSON * CalendarCreateDataJSON::getRequestedStart(void) const
  {
    assert(flagHasRequestedStart);
    return storeRequestedStart;
  }

bool CalendarCreateDataJSON::hasRequestedEnd(void) const
  {
    return flagHasRequestedEnd;
  }

DateAndOrTimeJSON * CalendarCreateDataJSON::getRequestedEnd(void)
  {
    assert(flagHasRequestedEnd);
    return storeRequestedEnd;
  }

const DateAndOrTimeJSON * CalendarCreateDataJSON::getRequestedEnd(void) const
  {
    assert(flagHasRequestedEnd);
    return storeRequestedEnd;
  }

bool CalendarCreateDataJSON::hasStart(void) const
  {
    return flagHasStart;
  }

DateAndOrTimeJSON * CalendarCreateDataJSON::getStart(void)
  {
    assert(flagHasStart);
    return storeStart;
  }

const DateAndOrTimeJSON * CalendarCreateDataJSON::getStart(void) const
  {
    assert(flagHasStart);
    return storeStart;
  }

bool CalendarCreateDataJSON::hasEnd(void) const
  {
    return flagHasEnd;
  }

DateAndOrTimeJSON * CalendarCreateDataJSON::getEnd(void)
  {
    assert(flagHasEnd);
    return storeEnd;
  }

const DateAndOrTimeJSON * CalendarCreateDataJSON::getEnd(void) const
  {
    assert(flagHasEnd);
    return storeEnd;
  }

bool CalendarCreateDataJSON::hasFrequencyType(void) const
  {
    return flagHasFrequencyType;
  }

CalendarCreateDataJSON::TypeFrequencyType CalendarCreateDataJSON::getFrequencyType(void)
  {
    assert(flagHasFrequencyType);
    return storeFrequencyType;
  }

const CalendarCreateDataJSON::TypeFrequencyType CalendarCreateDataJSON::getFrequencyType(void) const
  {
    assert(flagHasFrequencyType);
    return storeFrequencyType;
  }

const char *CalendarCreateDataJSON::getFrequencyTypeAsChars(void) const
  {
    return stringFromFrequencyType(getFrequencyType());
  }

std::string CalendarCreateDataJSON::getFrequencyTypeAsString(void) const
  {
    return stringFromFrequencyType(getFrequencyType());
  }

bool CalendarCreateDataJSON::hasFrequencyMultiplier(void) const
  {
    return flagHasFrequencyMultiplier;
  }

OInteger CalendarCreateDataJSON::getFrequencyMultiplier(void)
  {
    assert(flagHasFrequencyMultiplier);
    return storeFrequencyMultiplier;
  }

const OInteger CalendarCreateDataJSON::getFrequencyMultiplier(void) const
  {
    assert(flagHasFrequencyMultiplier);
    return storeFrequencyMultiplier;
  }

bool CalendarCreateDataJSON::hasIsRecurring(void) const
  {
    return flagHasIsRecurring;
  }

bool CalendarCreateDataJSON::getIsRecurring(void)
  {
    assert(flagHasIsRecurring);
    return storeIsRecurring;
  }

const bool CalendarCreateDataJSON::getIsRecurring(void) const
  {
    assert(flagHasIsRecurring);
    return storeIsRecurring;
  }

bool CalendarCreateDataJSON::hasRecurrenceRule(void) const
  {
    return flagHasRecurrenceRule;
  }

std::string CalendarCreateDataJSON::getRecurrenceRule(void)
  {
    assert(flagHasRecurrenceRule);
    return storeRecurrenceRule;
  }

const std::string CalendarCreateDataJSON::getRecurrenceRule(void) const
  {
    assert(flagHasRecurrenceRule);
    return storeRecurrenceRule;
  }

bool CalendarCreateDataJSON::hasDurationSeconds(void) const
  {
    return flagHasDurationSeconds;
  }

OInteger CalendarCreateDataJSON::getDurationSeconds(void)
  {
    assert(flagHasDurationSeconds);
    return storeDurationSeconds;
  }

const OInteger CalendarCreateDataJSON::getDurationSeconds(void) const
  {
    assert(flagHasDurationSeconds);
    return storeDurationSeconds;
  }

bool CalendarCreateDataJSON::hasIsAllDay(void) const
  {
    return flagHasIsAllDay;
  }

bool CalendarCreateDataJSON::getIsAllDay(void)
  {
    assert(flagHasIsAllDay);
    return storeIsAllDay;
  }

const bool CalendarCreateDataJSON::getIsAllDay(void) const
  {
    assert(flagHasIsAllDay);
    return storeIsAllDay;
  }

bool CalendarCreateDataJSON::hasAvailability(void) const
  {
    return flagHasAvailability;
  }

CalendarCreateDataJSON::TypeAvailability CalendarCreateDataJSON::getAvailability(void)
  {
    assert(flagHasAvailability);
    return storeAvailability;
  }

const CalendarCreateDataJSON::TypeAvailability CalendarCreateDataJSON::getAvailability(void) const
  {
    assert(flagHasAvailability);
    return storeAvailability;
  }

const char *CalendarCreateDataJSON::getAvailabilityAsChars(void) const
  {
    return stringFromAvailability(getAvailability());
  }

std::string CalendarCreateDataJSON::getAvailabilityAsString(void) const
  {
    return stringFromAvailability(getAvailability());
  }

bool CalendarCreateDataJSON::hasCalendarName(void) const
  {
    return flagHasCalendarName;
  }

std::string CalendarCreateDataJSON::getCalendarName(void)
  {
    assert(flagHasCalendarName);
    return storeCalendarName;
  }

const std::string CalendarCreateDataJSON::getCalendarName(void) const
  {
    assert(flagHasCalendarName);
    return storeCalendarName;
  }

bool CalendarCreateDataJSON::hasCalendarID(void) const
  {
    return flagHasCalendarID;
  }

std::string CalendarCreateDataJSON::getCalendarID(void)
  {
    assert(flagHasCalendarID);
    return storeCalendarID;
  }

const std::string CalendarCreateDataJSON::getCalendarID(void) const
  {
    assert(flagHasCalendarID);
    return storeCalendarID;
  }

bool CalendarCreateDataJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string CalendarCreateDataJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string CalendarCreateDataJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

bool CalendarCreateDataJSON::hasOrganizer(void) const
  {
    return flagHasOrganizer;
  }

std::string CalendarCreateDataJSON::getOrganizer(void)
  {
    assert(flagHasOrganizer);
    return storeOrganizer;
  }

const std::string CalendarCreateDataJSON::getOrganizer(void) const
  {
    assert(flagHasOrganizer);
    return storeOrganizer;
  }

bool CalendarCreateDataJSON::hasSelfAttendeeStatus(void) const
  {
    return flagHasSelfAttendeeStatus;
  }

CalendarCreateDataJSON::TypeSelfAttendeeStatus CalendarCreateDataJSON::getSelfAttendeeStatus(void)
  {
    assert(flagHasSelfAttendeeStatus);
    return storeSelfAttendeeStatus;
  }

const CalendarCreateDataJSON::TypeSelfAttendeeStatus CalendarCreateDataJSON::getSelfAttendeeStatus(void) const
  {
    assert(flagHasSelfAttendeeStatus);
    return storeSelfAttendeeStatus;
  }

const char *CalendarCreateDataJSON::getSelfAttendeeStatusAsChars(void) const
  {
    return stringFromSelfAttendeeStatus(getSelfAttendeeStatus());
  }

std::string CalendarCreateDataJSON::getSelfAttendeeStatusAsString(void) const
  {
    return stringFromSelfAttendeeStatus(getSelfAttendeeStatus());
  }

bool CalendarCreateDataJSON::hasAccessLevel(void) const
  {
    return flagHasAccessLevel;
  }

CalendarCreateDataJSON::TypeAccessLevel CalendarCreateDataJSON::getAccessLevel(void)
  {
    assert(flagHasAccessLevel);
    return storeAccessLevel;
  }

const CalendarCreateDataJSON::TypeAccessLevel CalendarCreateDataJSON::getAccessLevel(void) const
  {
    assert(flagHasAccessLevel);
    return storeAccessLevel;
  }

const char *CalendarCreateDataJSON::getAccessLevelAsChars(void) const
  {
    return stringFromAccessLevel(getAccessLevel());
  }

std::string CalendarCreateDataJSON::getAccessLevelAsString(void) const
  {
    return stringFromAccessLevel(getAccessLevel());
  }

bool CalendarCreateDataJSON::hasAttendees(void) const
  {
    return flagHasAttendees;
  }

size_t CalendarCreateDataJSON::countOfAttendees(void) const
  {
    assert(flagHasAttendees);
    return storeAttendees.size();
  }

CalendarAttendeeJSON * CalendarCreateDataJSON::elementOfAttendees(size_t element_num)
  {
    assert(flagHasAttendees);
    return storeAttendees[element_num];
  }

const CalendarAttendeeJSON * CalendarCreateDataJSON::elementOfAttendees(size_t element_num) const
  {
    assert(flagHasAttendees);
    return storeAttendees[element_num];
  }

std::vector< CalendarAttendeeJSON * > CalendarCreateDataJSON::getAttendees(void)
  {
    assert(flagHasAttendees);
    return storeAttendees;
  }

const std::vector< CalendarAttendeeJSON * > CalendarCreateDataJSON::getAttendees(void) const
  {
    assert(flagHasAttendees);
    return storeAttendees;
  }

bool CalendarCreateDataJSON::hasReminders(void) const
  {
    return flagHasReminders;
  }

size_t CalendarCreateDataJSON::countOfReminders(void) const
  {
    assert(flagHasReminders);
    return storeReminders.size();
  }

CalendarReminderJSON * CalendarCreateDataJSON::elementOfReminders(size_t element_num)
  {
    assert(flagHasReminders);
    return storeReminders[element_num];
  }

const CalendarReminderJSON * CalendarCreateDataJSON::elementOfReminders(size_t element_num) const
  {
    assert(flagHasReminders);
    return storeReminders[element_num];
  }

std::vector< CalendarReminderJSON * > CalendarCreateDataJSON::getReminders(void)
  {
    assert(flagHasReminders);
    return storeReminders;
  }

const std::vector< CalendarReminderJSON * > CalendarCreateDataJSON::getReminders(void) const
  {
    assert(flagHasReminders);
    return storeReminders;
  }

char CalendarCreateDataJSON::Generator::lowerBoundFrequencyMultiplier[] = "1";
CalendarCreateDataJSON *CalendarCreateDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CalendarCreateDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CalendarCreateDataJSON>, CalendarCreateDataJSON *, bool> generator("Type CalendarCreateData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
