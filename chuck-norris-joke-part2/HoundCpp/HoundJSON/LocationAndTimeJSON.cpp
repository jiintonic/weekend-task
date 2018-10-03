/* file "LocationAndTimeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocationAndTimeJSON.h"

#include "LocationAndTimeJSON.h"


LocationAndTimeJSON::LocationAndTimeJSON(const LocationAndTimeJSON &)
  {
    assert(false);
  }

LocationAndTimeJSON &LocationAndTimeJSON::operator=(const LocationAndTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocationAndTimeJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void LocationAndTimeJSON::fromJSONTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeZoneJSON *convert_classy = TimeZoneJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTimeZone(convert_classy);
    convert_classy->remove_reference();
  }

void LocationAndTimeJSON::fromJSONDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

LocationAndTimeJSON::LocationAndTimeJSON(void) :
        flagHasMapLocation(false),
        flagHasTimeZone(false),
        flagHasDateTimeSpec(false)
  {
    extraIndex = create_string_index();
  }

LocationAndTimeJSON::~LocationAndTimeJSON(void)
  {
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

bool LocationAndTimeJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * LocationAndTimeJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * LocationAndTimeJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool LocationAndTimeJSON::hasTimeZone(void) const
  {
    return flagHasTimeZone;
  }

TimeZoneJSON * LocationAndTimeJSON::getTimeZone(void)
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

const TimeZoneJSON * LocationAndTimeJSON::getTimeZone(void) const
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

bool LocationAndTimeJSON::hasDateTimeSpec(void) const
  {
    return flagHasDateTimeSpec;
  }

DateTimeSpecJSON * LocationAndTimeJSON::getDateTimeSpec(void)
  {
    assert(flagHasDateTimeSpec);
    return storeDateTimeSpec;
  }

const DateTimeSpecJSON * LocationAndTimeJSON::getDateTimeSpec(void) const
  {
    assert(flagHasDateTimeSpec);
    return storeDateTimeSpec;
  }

LocationAndTimeJSON *LocationAndTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocationAndTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocationAndTimeJSON>, LocationAndTimeJSON *, bool> generator("Type LocationAndTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
