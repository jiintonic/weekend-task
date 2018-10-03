/* file "CalendarAttendeeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CalendarAttendeeJSON.h"

#include "CalendarAttendeeJSON.h"


CalendarAttendeeJSON::CalendarAttendeeJSON(const CalendarAttendeeJSON &)
  {
    assert(false);
  }

CalendarAttendeeJSON &CalendarAttendeeJSON::operator=(const CalendarAttendeeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CalendarAttendeeJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of CalendarAttendeeJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void CalendarAttendeeJSON::fromJSONEmailAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EmailAddress of CalendarAttendeeJSON is not a string.");
    setEmailAddress(std::string(json_string->getData()));
  }

CalendarAttendeeJSON::CalendarAttendeeJSON(void) :
        flagHasName(false),
        flagHasEmailAddress(false)
  {
  }

CalendarAttendeeJSON::~CalendarAttendeeJSON(void)
  {
  }

bool CalendarAttendeeJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string CalendarAttendeeJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string CalendarAttendeeJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool CalendarAttendeeJSON::hasEmailAddress(void) const
  {
    return flagHasEmailAddress;
  }

std::string CalendarAttendeeJSON::getEmailAddress(void)
  {
    assert(flagHasEmailAddress);
    return storeEmailAddress;
  }

const std::string CalendarAttendeeJSON::getEmailAddress(void) const
  {
    assert(flagHasEmailAddress);
    return storeEmailAddress;
  }

CalendarAttendeeJSON *CalendarAttendeeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CalendarAttendeeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CalendarAttendeeJSON>, CalendarAttendeeJSON *, bool> generator("Type CalendarAttendee", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
