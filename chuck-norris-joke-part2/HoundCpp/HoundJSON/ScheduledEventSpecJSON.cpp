/* file "ScheduledEventSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ScheduledEventSpecJSON.h"

#include "ScheduledEventSpecJSON.h"


ScheduledEventSpecJSON::ScheduledEventSpecJSON(const ScheduledEventSpecJSON &)
  {
    assert(false);
  }

ScheduledEventSpecJSON &ScheduledEventSpecJSON::operator=(const ScheduledEventSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ScheduledEventSpecJSON::fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ScheduledEventSpecJSON::fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ScheduledEventSpecJSON::fromJSONTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TimeZone of ScheduledEventSpecJSON is not a string.");
    setTimeZone(std::string(json_string->getData()));
  }

void ScheduledEventSpecJSON::fromJSONScheduledEventName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ScheduledEventName of ScheduledEventSpecJSON is not a string.");
    setScheduledEventName(std::string(json_string->getData()));
  }

void ScheduledEventSpecJSON::fromJSONScheduledEventNameSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ScheduledEventNameSpoken of ScheduledEventSpecJSON is not a string.");
    setScheduledEventNameSpoken(std::string(json_string->getData()));
  }

void ScheduledEventSpecJSON::fromJSONIsMultiDay(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsMultiDay of ScheduledEventSpecJSON is not true for false.");
          }
      }
    setIsMultiDay(the_bool);
  }

ScheduledEventSpecJSON::ScheduledEventSpecJSON(void) :
        flagHasStartDateAndTime(false),
        flagHasEndDateAndTime(false),
        flagHasTimeZone(false),
        flagHasScheduledEventName(false),
        flagHasScheduledEventNameSpoken(false),
        flagHasIsMultiDay(false)
  {
    extraIndex = create_string_index();
  }

ScheduledEventSpecJSON::~ScheduledEventSpecJSON(void)
  {
    if (flagHasStartDateAndTime)
      {
        storeStartDateAndTime->remove_reference();
      }
    if (flagHasEndDateAndTime)
      {
        storeEndDateAndTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ScheduledEventSpecJSON::hasStartDateAndTime(void) const
  {
    return flagHasStartDateAndTime;
  }

DateAndOrTimeJSON * ScheduledEventSpecJSON::getStartDateAndTime(void)
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

const DateAndOrTimeJSON * ScheduledEventSpecJSON::getStartDateAndTime(void) const
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

bool ScheduledEventSpecJSON::hasEndDateAndTime(void) const
  {
    return flagHasEndDateAndTime;
  }

DateAndOrTimeJSON * ScheduledEventSpecJSON::getEndDateAndTime(void)
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

const DateAndOrTimeJSON * ScheduledEventSpecJSON::getEndDateAndTime(void) const
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

bool ScheduledEventSpecJSON::hasTimeZone(void) const
  {
    return flagHasTimeZone;
  }

std::string ScheduledEventSpecJSON::getTimeZone(void)
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

const std::string ScheduledEventSpecJSON::getTimeZone(void) const
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

bool ScheduledEventSpecJSON::hasScheduledEventName(void) const
  {
    return flagHasScheduledEventName;
  }

std::string ScheduledEventSpecJSON::getScheduledEventName(void)
  {
    assert(flagHasScheduledEventName);
    return storeScheduledEventName;
  }

const std::string ScheduledEventSpecJSON::getScheduledEventName(void) const
  {
    assert(flagHasScheduledEventName);
    return storeScheduledEventName;
  }

bool ScheduledEventSpecJSON::hasScheduledEventNameSpoken(void) const
  {
    return flagHasScheduledEventNameSpoken;
  }

std::string ScheduledEventSpecJSON::getScheduledEventNameSpoken(void)
  {
    assert(flagHasScheduledEventNameSpoken);
    return storeScheduledEventNameSpoken;
  }

const std::string ScheduledEventSpecJSON::getScheduledEventNameSpoken(void) const
  {
    assert(flagHasScheduledEventNameSpoken);
    return storeScheduledEventNameSpoken;
  }

bool ScheduledEventSpecJSON::hasIsMultiDay(void) const
  {
    return flagHasIsMultiDay;
  }

bool ScheduledEventSpecJSON::getIsMultiDay(void)
  {
    assert(flagHasIsMultiDay);
    return storeIsMultiDay;
  }

const bool ScheduledEventSpecJSON::getIsMultiDay(void) const
  {
    assert(flagHasIsMultiDay);
    return storeIsMultiDay;
  }

ScheduledEventSpecJSON *ScheduledEventSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ScheduledEventSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ScheduledEventSpecJSON>, ScheduledEventSpecJSON *, bool> generator("Type ScheduledEventSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
