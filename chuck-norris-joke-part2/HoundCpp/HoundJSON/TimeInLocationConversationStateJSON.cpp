/* file "TimeInLocationConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeInLocationConversationStateJSON.h"

#include "TimeInLocationConversationStateJSON.h"


TimeInLocationConversationStateJSON::TypeDateAndTimeKind TimeInLocationConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "TimeInLocation") == 0)
        return DateAndTimeKind_TimeInLocation;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *TimeInLocationConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_TimeInLocation:
            return "TimeInLocation";
        default:
            assert(false);
            return NULL;
      }
  }

TimeInLocationConversationStateJSON::TimeInLocationConversationStateJSON(const TimeInLocationConversationStateJSON &)
  {
    assert(false);
  }

TimeInLocationConversationStateJSON &TimeInLocationConversationStateJSON::operator=(const TimeInLocationConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimeInLocationConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of TimeInLocationConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "TimeInLocation") == 0))
        throw("The value for field DateAndTimeKind of TimeInLocationConversationStateJSON is not `TimeInLocation'.");
    setDateAndTimeKind();
  }

void TimeInLocationConversationStateJSON::fromJSONSourceMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationConversationStateJSON::fromJSONSourceTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeZoneJSON *convert_classy = TimeZoneJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceTimeZone(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationConversationStateJSON::fromJSONSourceDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationConversationStateJSON::fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationConversationStateJSON::fromJSONDestinationTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeZoneJSON *convert_classy = TimeZoneJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationTimeZone(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationConversationStateJSON::fromJSONDestinationDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationConversationStateJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationConversationStateJSON::fromJSONTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeZoneJSON *convert_classy = TimeZoneJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTimeZone(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationConversationStateJSON::fromJSONDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

TimeInLocationConversationStateJSON::TimeInLocationConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasSourceMapLocation(false),
        flagHasSourceTimeZone(false),
        flagHasSourceDateTimeSpec(false),
        flagHasDestinationMapLocation(false),
        flagHasDestinationTimeZone(false),
        flagHasDestinationDateTimeSpec(false),
        flagHasMapLocation(false),
        flagHasTimeZone(false),
        flagHasDateTimeSpec(false)
  {
    extraIndex = create_string_index();
  }

TimeInLocationConversationStateJSON::~TimeInLocationConversationStateJSON(void)
  {
    if (flagHasSourceMapLocation)
      {
        storeSourceMapLocation->remove_reference();
      }
    if (flagHasSourceTimeZone)
      {
        storeSourceTimeZone->remove_reference();
      }
    if (flagHasSourceDateTimeSpec)
      {
        storeSourceDateTimeSpec->remove_reference();
      }
    if (flagHasDestinationMapLocation)
      {
        storeDestinationMapLocation->remove_reference();
      }
    if (flagHasDestinationTimeZone)
      {
        storeDestinationTimeZone->remove_reference();
      }
    if (flagHasDestinationDateTimeSpec)
      {
        storeDestinationDateTimeSpec->remove_reference();
      }
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasTimeZone)
      {
        storeTimeZone->remove_reference();
      }
    if (flagHasDateTimeSpec)
      {
        storeDateTimeSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimeInLocationConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

TimeInLocationConversationStateJSON::TypeDateAndTimeKind TimeInLocationConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimeInLocation;
  }

const TimeInLocationConversationStateJSON::TypeDateAndTimeKind TimeInLocationConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimeInLocation;
  }

const char *TimeInLocationConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string TimeInLocationConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool TimeInLocationConversationStateJSON::hasSourceMapLocation(void) const
  {
    return flagHasSourceMapLocation;
  }

MapLocationJSON * TimeInLocationConversationStateJSON::getSourceMapLocation(void)
  {
    assert(flagHasSourceMapLocation);
    return storeSourceMapLocation;
  }

const MapLocationJSON * TimeInLocationConversationStateJSON::getSourceMapLocation(void) const
  {
    assert(flagHasSourceMapLocation);
    return storeSourceMapLocation;
  }

bool TimeInLocationConversationStateJSON::hasSourceTimeZone(void) const
  {
    return flagHasSourceTimeZone;
  }

TimeZoneJSON * TimeInLocationConversationStateJSON::getSourceTimeZone(void)
  {
    assert(flagHasSourceTimeZone);
    return storeSourceTimeZone;
  }

const TimeZoneJSON * TimeInLocationConversationStateJSON::getSourceTimeZone(void) const
  {
    assert(flagHasSourceTimeZone);
    return storeSourceTimeZone;
  }

bool TimeInLocationConversationStateJSON::hasSourceDateTimeSpec(void) const
  {
    return flagHasSourceDateTimeSpec;
  }

DateTimeSpecJSON * TimeInLocationConversationStateJSON::getSourceDateTimeSpec(void)
  {
    assert(flagHasSourceDateTimeSpec);
    return storeSourceDateTimeSpec;
  }

const DateTimeSpecJSON * TimeInLocationConversationStateJSON::getSourceDateTimeSpec(void) const
  {
    assert(flagHasSourceDateTimeSpec);
    return storeSourceDateTimeSpec;
  }

bool TimeInLocationConversationStateJSON::hasDestinationMapLocation(void) const
  {
    return flagHasDestinationMapLocation;
  }

MapLocationJSON * TimeInLocationConversationStateJSON::getDestinationMapLocation(void)
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

const MapLocationJSON * TimeInLocationConversationStateJSON::getDestinationMapLocation(void) const
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

bool TimeInLocationConversationStateJSON::hasDestinationTimeZone(void) const
  {
    return flagHasDestinationTimeZone;
  }

TimeZoneJSON * TimeInLocationConversationStateJSON::getDestinationTimeZone(void)
  {
    assert(flagHasDestinationTimeZone);
    return storeDestinationTimeZone;
  }

const TimeZoneJSON * TimeInLocationConversationStateJSON::getDestinationTimeZone(void) const
  {
    assert(flagHasDestinationTimeZone);
    return storeDestinationTimeZone;
  }

bool TimeInLocationConversationStateJSON::hasDestinationDateTimeSpec(void) const
  {
    return flagHasDestinationDateTimeSpec;
  }

DateTimeSpecJSON * TimeInLocationConversationStateJSON::getDestinationDateTimeSpec(void)
  {
    assert(flagHasDestinationDateTimeSpec);
    return storeDestinationDateTimeSpec;
  }

const DateTimeSpecJSON * TimeInLocationConversationStateJSON::getDestinationDateTimeSpec(void) const
  {
    assert(flagHasDestinationDateTimeSpec);
    return storeDestinationDateTimeSpec;
  }

bool TimeInLocationConversationStateJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * TimeInLocationConversationStateJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * TimeInLocationConversationStateJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool TimeInLocationConversationStateJSON::hasTimeZone(void) const
  {
    return flagHasTimeZone;
  }

TimeZoneJSON * TimeInLocationConversationStateJSON::getTimeZone(void)
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

const TimeZoneJSON * TimeInLocationConversationStateJSON::getTimeZone(void) const
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

bool TimeInLocationConversationStateJSON::hasDateTimeSpec(void) const
  {
    return flagHasDateTimeSpec;
  }

DateTimeSpecJSON * TimeInLocationConversationStateJSON::getDateTimeSpec(void)
  {
    assert(flagHasDateTimeSpec);
    return storeDateTimeSpec;
  }

const DateTimeSpecJSON * TimeInLocationConversationStateJSON::getDateTimeSpec(void) const
  {
    assert(flagHasDateTimeSpec);
    return storeDateTimeSpec;
  }

TimeInLocationConversationStateJSON *TimeInLocationConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeInLocationConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeInLocationConversationStateJSON>, TimeInLocationConversationStateJSON *, bool> generator("Type TimeInLocationConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
