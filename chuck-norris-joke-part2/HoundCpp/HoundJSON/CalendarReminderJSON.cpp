/* file "CalendarReminderJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CalendarReminderJSON.h"

#include "CalendarReminderJSON.h"


CalendarReminderJSON::TypeMethod CalendarReminderJSON::stringToMethod(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "lert") == 0)
                return Method_Alert;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "efault") == 0)
                return Method_Default;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "mail") == 0)
                return Method_Email;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "MS") == 0)
                return Method_SMS;
            break;
        default:
            break;
      }
    throw("The value for field `Method' is not one of the legal values.");
  }

const char *CalendarReminderJSON::stringFromMethod(TypeMethod the_enum)
  {
    switch (the_enum)
      {
        case Method_Default:
            return "Default";
        case Method_Alert:
            return "Alert";
        case Method_Email:
            return "Email";
        case Method_SMS:
            return "SMS";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarReminderJSON::CalendarReminderJSON(const CalendarReminderJSON &)
  {
    assert(false);
  }

CalendarReminderJSON &CalendarReminderJSON::operator=(const CalendarReminderJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CalendarReminderJSON::fromJSONMethod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Method of CalendarReminderJSON is not a string.");
    TypeMethod the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "lert") == 0)
                  {
                    the_enum = Method_Alert;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "efault") == 0)
                  {
                    the_enum = Method_Default;
                    goto enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "mail") == 0)
                  {
                    the_enum = Method_Email;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "MS") == 0)
                  {
                    the_enum = Method_SMS;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Method of CalendarReminderJSON is not one of the legal strings.");
  enum_is_done:;
    setMethod(the_enum);
  }

void CalendarReminderJSON::fromJSONSecondsBeforeStartOfEvent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SecondsBeforeStartOfEvent of CalendarReminderJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SecondsBeforeStartOfEvent of CalendarReminderJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSecondsBeforeStartOfEvent(extracted_integer);
  }

CalendarReminderJSON::CalendarReminderJSON(void) :
        flagHasMethod(false),
        flagHasSecondsBeforeStartOfEvent(false)
  {
  }

CalendarReminderJSON::~CalendarReminderJSON(void)
  {
  }

bool CalendarReminderJSON::hasMethod(void) const
  {
    return flagHasMethod;
  }

CalendarReminderJSON::TypeMethod CalendarReminderJSON::getMethod(void)
  {
    assert(flagHasMethod);
    return storeMethod;
  }

const CalendarReminderJSON::TypeMethod CalendarReminderJSON::getMethod(void) const
  {
    assert(flagHasMethod);
    return storeMethod;
  }

const char *CalendarReminderJSON::getMethodAsChars(void) const
  {
    return stringFromMethod(getMethod());
  }

std::string CalendarReminderJSON::getMethodAsString(void) const
  {
    return stringFromMethod(getMethod());
  }

bool CalendarReminderJSON::hasSecondsBeforeStartOfEvent(void) const
  {
    return flagHasSecondsBeforeStartOfEvent;
  }

OInteger CalendarReminderJSON::getSecondsBeforeStartOfEvent(void)
  {
    assert(flagHasSecondsBeforeStartOfEvent);
    return storeSecondsBeforeStartOfEvent;
  }

const OInteger CalendarReminderJSON::getSecondsBeforeStartOfEvent(void) const
  {
    assert(flagHasSecondsBeforeStartOfEvent);
    return storeSecondsBeforeStartOfEvent;
  }

char CalendarReminderJSON::Generator::lowerBoundSecondsBeforeStartOfEvent[] = "0";
CalendarReminderJSON *CalendarReminderJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CalendarReminderJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CalendarReminderJSON>, CalendarReminderJSON *, bool> generator("Type CalendarReminder", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
