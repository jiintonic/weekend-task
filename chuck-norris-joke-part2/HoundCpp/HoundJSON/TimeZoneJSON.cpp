/* file "TimeZoneJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeZoneJSON.h"

#include "TimeZoneJSON.h"


TimeZoneJSON::TimeZoneJSON(const TimeZoneJSON &)
  {
    assert(false);
  }

TimeZoneJSON &TimeZoneJSON::operator=(const TimeZoneJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimeZoneJSON::fromJSONOlsonName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OlsonName of TimeZoneJSON is not a string.");
    setOlsonName(std::string(json_string->getData()));
  }

void TimeZoneJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of TimeZoneJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void TimeZoneJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of TimeZoneJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

TimeZoneJSON::TimeZoneJSON(void) :
        flagHasOlsonName(false),
        flagHasLabel(false),
        flagHasSpokenLabel(false)
  {
    extraIndex = create_string_index();
  }

TimeZoneJSON::~TimeZoneJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimeZoneJSON::hasOlsonName(void) const
  {
    return flagHasOlsonName;
  }

std::string TimeZoneJSON::getOlsonName(void)
  {
    assert(flagHasOlsonName);
    return storeOlsonName;
  }

const std::string TimeZoneJSON::getOlsonName(void) const
  {
    assert(flagHasOlsonName);
    return storeOlsonName;
  }

bool TimeZoneJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string TimeZoneJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string TimeZoneJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool TimeZoneJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string TimeZoneJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string TimeZoneJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

TimeZoneJSON *TimeZoneJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeZoneJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeZoneJSON>, TimeZoneJSON *, bool> generator("Type TimeZone", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
