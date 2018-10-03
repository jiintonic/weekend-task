/* file "TimeOfMoonPhaseConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeOfMoonPhaseConversationStateJSON.h"

#include "TimeOfMoonPhaseConversationStateJSON.h"


TimeOfMoonPhaseConversationStateJSON::TypeDateAndTimeKind TimeOfMoonPhaseConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "TimeOfMoonPhase") == 0)
        return DateAndTimeKind_TimeOfMoonPhase;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *TimeOfMoonPhaseConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_TimeOfMoonPhase:
            return "TimeOfMoonPhase";
        default:
            assert(false);
            return NULL;
      }
  }

TimeOfMoonPhaseConversationStateJSON::TimeOfMoonPhaseConversationStateJSON(const TimeOfMoonPhaseConversationStateJSON &)
  {
    assert(false);
  }

TimeOfMoonPhaseConversationStateJSON &TimeOfMoonPhaseConversationStateJSON::operator=(const TimeOfMoonPhaseConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimeOfMoonPhaseConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of TimeOfMoonPhaseConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "TimeOfMoonPhase") == 0))
        throw("The value for field DateAndTimeKind of TimeOfMoonPhaseConversationStateJSON is not `TimeOfMoonPhase'.");
    setDateAndTimeKind();
  }

void TimeOfMoonPhaseConversationStateJSON::fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void TimeOfMoonPhaseConversationStateJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeOfMoonPhaseConversationStateJSON::fromJSONRequestedMoonPhase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedMoonPhase of TimeOfMoonPhaseConversationStateJSON is not a string.");
    setRequestedMoonPhase(std::string(json_string->getData()));
  }

TimeOfMoonPhaseConversationStateJSON::TimeOfMoonPhaseConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasDateAndTime(false),
        flagHasMapLocation(false),
        flagHasRequestedMoonPhase(false)
  {
    extraIndex = create_string_index();
  }

TimeOfMoonPhaseConversationStateJSON::~TimeOfMoonPhaseConversationStateJSON(void)
  {
    if (flagHasDateAndTime)
      {
        storeDateAndTime->remove_reference();
      }
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimeOfMoonPhaseConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

TimeOfMoonPhaseConversationStateJSON::TypeDateAndTimeKind TimeOfMoonPhaseConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimeOfMoonPhase;
  }

const TimeOfMoonPhaseConversationStateJSON::TypeDateAndTimeKind TimeOfMoonPhaseConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimeOfMoonPhase;
  }

const char *TimeOfMoonPhaseConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string TimeOfMoonPhaseConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool TimeOfMoonPhaseConversationStateJSON::hasDateAndTime(void) const
  {
    return flagHasDateAndTime;
  }

DateAndOrTimeJSON * TimeOfMoonPhaseConversationStateJSON::getDateAndTime(void)
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

const DateAndOrTimeJSON * TimeOfMoonPhaseConversationStateJSON::getDateAndTime(void) const
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

bool TimeOfMoonPhaseConversationStateJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * TimeOfMoonPhaseConversationStateJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * TimeOfMoonPhaseConversationStateJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool TimeOfMoonPhaseConversationStateJSON::hasRequestedMoonPhase(void) const
  {
    return flagHasRequestedMoonPhase;
  }

std::string TimeOfMoonPhaseConversationStateJSON::getRequestedMoonPhase(void)
  {
    assert(flagHasRequestedMoonPhase);
    return storeRequestedMoonPhase;
  }

const std::string TimeOfMoonPhaseConversationStateJSON::getRequestedMoonPhase(void) const
  {
    assert(flagHasRequestedMoonPhase);
    return storeRequestedMoonPhase;
  }

TimeOfMoonPhaseConversationStateJSON *TimeOfMoonPhaseConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeOfMoonPhaseConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeOfMoonPhaseConversationStateJSON>, TimeOfMoonPhaseConversationStateJSON *, bool> generator("Type TimeOfMoonPhaseConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
