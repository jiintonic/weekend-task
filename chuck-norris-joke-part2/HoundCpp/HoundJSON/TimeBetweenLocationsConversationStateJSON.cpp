/* file "TimeBetweenLocationsConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeBetweenLocationsConversationStateJSON.h"

#include "TimeBetweenLocationsConversationStateJSON.h"


TimeBetweenLocationsConversationStateJSON::TypeDateAndTimeKind TimeBetweenLocationsConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "TimeBetweenLocations") == 0)
        return DateAndTimeKind_TimeBetweenLocations;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *TimeBetweenLocationsConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_TimeBetweenLocations:
            return "TimeBetweenLocations";
        default:
            assert(false);
            return NULL;
      }
  }

TimeBetweenLocationsConversationStateJSON::TimeBetweenLocationsConversationStateJSON(const TimeBetweenLocationsConversationStateJSON &)
  {
    assert(false);
  }

TimeBetweenLocationsConversationStateJSON &TimeBetweenLocationsConversationStateJSON::operator=(const TimeBetweenLocationsConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of TimeBetweenLocationsConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "TimeBetweenLocations") == 0))
        throw("The value for field DateAndTimeKind of TimeBetweenLocationsConversationStateJSON is not `TimeBetweenLocations'.");
    setDateAndTimeKind();
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONSourceMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONOffset(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Offset of TimeBetweenLocationsConversationStateJSON is not a number.");
          }
      }
    setOffsetText(the_rational_text);
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of TimeBetweenLocationsConversationStateJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRangeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONSourceDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsConversationStateJSON::fromJSONDestinationDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

TimeBetweenLocationsConversationStateJSON::TimeBetweenLocationsConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasSourceMapLocation(false),
        flagHasDestinationMapLocation(false),
        flagHasMapLocation(false),
        flagHasOffset(false),
        flagHasUnits(false),
        flagHasDateTimeRangeSpec(false),
        flagHasSourceDateAndTime(false),
        flagHasDestinationDateAndTime(false)
  {
    extraIndex = create_string_index();
  }

TimeBetweenLocationsConversationStateJSON::~TimeBetweenLocationsConversationStateJSON(void)
  {
    if (flagHasSourceMapLocation)
      {
        storeSourceMapLocation->remove_reference();
      }
    if (flagHasDestinationMapLocation)
      {
        storeDestinationMapLocation->remove_reference();
      }
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasDateTimeRangeSpec)
      {
        storeDateTimeRangeSpec->remove_reference();
      }
    if (flagHasSourceDateAndTime)
      {
        storeSourceDateAndTime->remove_reference();
      }
    if (flagHasDestinationDateAndTime)
      {
        storeDestinationDateAndTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimeBetweenLocationsConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

TimeBetweenLocationsConversationStateJSON::TypeDateAndTimeKind TimeBetweenLocationsConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimeBetweenLocations;
  }

const TimeBetweenLocationsConversationStateJSON::TypeDateAndTimeKind TimeBetweenLocationsConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimeBetweenLocations;
  }

const char *TimeBetweenLocationsConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string TimeBetweenLocationsConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool TimeBetweenLocationsConversationStateJSON::hasSourceMapLocation(void) const
  {
    return flagHasSourceMapLocation;
  }

MapLocationJSON * TimeBetweenLocationsConversationStateJSON::getSourceMapLocation(void)
  {
    assert(flagHasSourceMapLocation);
    return storeSourceMapLocation;
  }

const MapLocationJSON * TimeBetweenLocationsConversationStateJSON::getSourceMapLocation(void) const
  {
    assert(flagHasSourceMapLocation);
    return storeSourceMapLocation;
  }

bool TimeBetweenLocationsConversationStateJSON::hasDestinationMapLocation(void) const
  {
    return flagHasDestinationMapLocation;
  }

MapLocationJSON * TimeBetweenLocationsConversationStateJSON::getDestinationMapLocation(void)
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

const MapLocationJSON * TimeBetweenLocationsConversationStateJSON::getDestinationMapLocation(void) const
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

bool TimeBetweenLocationsConversationStateJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * TimeBetweenLocationsConversationStateJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * TimeBetweenLocationsConversationStateJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool TimeBetweenLocationsConversationStateJSON::hasOffset(void) const
  {
    return flagHasOffset;
  }

double TimeBetweenLocationsConversationStateJSON::getOffset(void)
  {
    assert(flagHasOffset);
    if (textStoreOffset != "")
      {
        return atof(textStoreOffset.c_str());
      }
    return storeOffset;
  }

const double TimeBetweenLocationsConversationStateJSON::getOffset(void) const
  {
    assert(flagHasOffset);
    if (textStoreOffset != "")
      {
        return atof(textStoreOffset.c_str());
      }
    return storeOffset;
  }

std::string TimeBetweenLocationsConversationStateJSON::getOffsetAsText(void) const
  {
    assert(flagHasOffset);
    if (textStoreOffset == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeOffset);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreOffset);
      }
  }

bool TimeBetweenLocationsConversationStateJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string TimeBetweenLocationsConversationStateJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string TimeBetweenLocationsConversationStateJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool TimeBetweenLocationsConversationStateJSON::hasDateTimeRangeSpec(void) const
  {
    return flagHasDateTimeRangeSpec;
  }

DateTimeRangeSpecJSON * TimeBetweenLocationsConversationStateJSON::getDateTimeRangeSpec(void)
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

const DateTimeRangeSpecJSON * TimeBetweenLocationsConversationStateJSON::getDateTimeRangeSpec(void) const
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

bool TimeBetweenLocationsConversationStateJSON::hasSourceDateAndTime(void) const
  {
    return flagHasSourceDateAndTime;
  }

DateAndOrTimeJSON * TimeBetweenLocationsConversationStateJSON::getSourceDateAndTime(void)
  {
    assert(flagHasSourceDateAndTime);
    return storeSourceDateAndTime;
  }

const DateAndOrTimeJSON * TimeBetweenLocationsConversationStateJSON::getSourceDateAndTime(void) const
  {
    assert(flagHasSourceDateAndTime);
    return storeSourceDateAndTime;
  }

bool TimeBetweenLocationsConversationStateJSON::hasDestinationDateAndTime(void) const
  {
    return flagHasDestinationDateAndTime;
  }

DateAndOrTimeJSON * TimeBetweenLocationsConversationStateJSON::getDestinationDateAndTime(void)
  {
    assert(flagHasDestinationDateAndTime);
    return storeDestinationDateAndTime;
  }

const DateAndOrTimeJSON * TimeBetweenLocationsConversationStateJSON::getDestinationDateAndTime(void) const
  {
    assert(flagHasDestinationDateAndTime);
    return storeDestinationDateAndTime;
  }

TimeBetweenLocationsConversationStateJSON *TimeBetweenLocationsConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeBetweenLocationsConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeBetweenLocationsConversationStateJSON>, TimeBetweenLocationsConversationStateJSON *, bool> generator("Type TimeBetweenLocationsConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
