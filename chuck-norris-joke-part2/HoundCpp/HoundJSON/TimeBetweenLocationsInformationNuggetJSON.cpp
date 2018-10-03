/* file "TimeBetweenLocationsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeBetweenLocationsInformationNuggetJSON.h"

#include "TimeBetweenLocationsInformationNuggetJSON.h"


TimeBetweenLocationsInformationNuggetJSON::TimeBetweenLocationsInformationNuggetJSON(const TimeBetweenLocationsInformationNuggetJSON &)
  {
    assert(false);
  }

TimeBetweenLocationsInformationNuggetJSON &TimeBetweenLocationsInformationNuggetJSON::operator=(const TimeBetweenLocationsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimeBetweenLocationsInformationNuggetJSON::extraSourceMapLocationToJSON(void) const
  {
    JSONValueHandler handler_SourceMapLocation;
    storeSourceMapLocation->write_as_json(&handler_SourceMapLocation);
    handler_SourceMapLocation.result->add_reference();
    return handler_SourceMapLocation.result;
  }

JSONValue *TimeBetweenLocationsInformationNuggetJSON::extraDestinationMapLocationToJSON(void) const
  {
    JSONValueHandler handler_DestinationMapLocation;
    storeDestinationMapLocation->write_as_json(&handler_DestinationMapLocation);
    handler_DestinationMapLocation.result->add_reference();
    return handler_DestinationMapLocation.result;
  }

JSONValue *TimeBetweenLocationsInformationNuggetJSON::extraOffsetToJSON(void) const
  {
    JSONValue *generated_rational_Offset;
    if (((double)(long int)storeOffset) == storeOffset)
        generated_rational_Offset = new JSONIntegerValue((long int)(storeOffset));
    else
        generated_rational_Offset = new JSONRationalValue(storeOffset, DBL_DIG);
    return generated_rational_Offset;
  }

JSONValue *TimeBetweenLocationsInformationNuggetJSON::extraUnitsToJSON(void) const
  {
    JSONStringValue *generated_string_Units = new JSONStringValue(storeUnits.c_str());
    return generated_string_Units;
  }

JSONValue *TimeBetweenLocationsInformationNuggetJSON::extraDateTimeRangeSpecToJSON(void) const
  {
    JSONValueHandler handler_DateTimeRangeSpec;
    storeDateTimeRangeSpec->write_as_json(&handler_DateTimeRangeSpec);
    handler_DateTimeRangeSpec.result->add_reference();
    return handler_DateTimeRangeSpec.result;
  }

JSONValue *TimeBetweenLocationsInformationNuggetJSON::extraSourceDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_SourceDateAndTime;
    storeSourceDateAndTime->write_as_json(&handler_SourceDateAndTime);
    handler_SourceDateAndTime.result->add_reference();
    return handler_SourceDateAndTime.result;
  }

JSONValue *TimeBetweenLocationsInformationNuggetJSON::extraDestinationDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_DestinationDateAndTime;
    storeDestinationDateAndTime->write_as_json(&handler_DestinationDateAndTime);
    handler_DestinationDateAndTime.result->add_reference();
    return handler_DestinationDateAndTime.result;
  }

void TimeBetweenLocationsInformationNuggetJSON::fromJSONSourceMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsInformationNuggetJSON::fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsInformationNuggetJSON::fromJSONOffset(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Offset of TimeBetweenLocationsInformationNuggetJSON is not a number.");
          }
      }
    setOffsetText(the_rational_text);
  }

void TimeBetweenLocationsInformationNuggetJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of TimeBetweenLocationsInformationNuggetJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void TimeBetweenLocationsInformationNuggetJSON::fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRangeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsInformationNuggetJSON::fromJSONSourceDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenLocationsInformationNuggetJSON::fromJSONDestinationDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

TimeBetweenLocationsInformationNuggetJSON::TimeBetweenLocationsInformationNuggetJSON(void) :
        flagHasSourceMapLocation(false),
        flagHasDestinationMapLocation(false),
        flagHasOffset(false),
        flagHasUnits(false),
        flagHasDateTimeRangeSpec(false),
        flagHasSourceDateAndTime(false),
        flagHasDestinationDateAndTime(false)
  {
    extraIndex = create_string_index();
  }

TimeBetweenLocationsInformationNuggetJSON::~TimeBetweenLocationsInformationNuggetJSON(void)
  {
    if (flagHasSourceMapLocation)
      {
        storeSourceMapLocation->remove_reference();
      }
    if (flagHasDestinationMapLocation)
      {
        storeDestinationMapLocation->remove_reference();
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

const char *TimeBetweenLocationsInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "TimeBetweenLocations";
  }

bool TimeBetweenLocationsInformationNuggetJSON::hasSourceMapLocation(void) const
  {
    return flagHasSourceMapLocation;
  }

MapLocationJSON * TimeBetweenLocationsInformationNuggetJSON::getSourceMapLocation(void)
  {
    assert(flagHasSourceMapLocation);
    return storeSourceMapLocation;
  }

const MapLocationJSON * TimeBetweenLocationsInformationNuggetJSON::getSourceMapLocation(void) const
  {
    assert(flagHasSourceMapLocation);
    return storeSourceMapLocation;
  }

bool TimeBetweenLocationsInformationNuggetJSON::hasDestinationMapLocation(void) const
  {
    return flagHasDestinationMapLocation;
  }

MapLocationJSON * TimeBetweenLocationsInformationNuggetJSON::getDestinationMapLocation(void)
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

const MapLocationJSON * TimeBetweenLocationsInformationNuggetJSON::getDestinationMapLocation(void) const
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

bool TimeBetweenLocationsInformationNuggetJSON::hasOffset(void) const
  {
    return flagHasOffset;
  }

double TimeBetweenLocationsInformationNuggetJSON::getOffset(void)
  {
    assert(flagHasOffset);
    if (textStoreOffset != "")
      {
        return atof(textStoreOffset.c_str());
      }
    return storeOffset;
  }

const double TimeBetweenLocationsInformationNuggetJSON::getOffset(void) const
  {
    assert(flagHasOffset);
    if (textStoreOffset != "")
      {
        return atof(textStoreOffset.c_str());
      }
    return storeOffset;
  }

std::string TimeBetweenLocationsInformationNuggetJSON::getOffsetAsText(void) const
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

bool TimeBetweenLocationsInformationNuggetJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string TimeBetweenLocationsInformationNuggetJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string TimeBetweenLocationsInformationNuggetJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool TimeBetweenLocationsInformationNuggetJSON::hasDateTimeRangeSpec(void) const
  {
    return flagHasDateTimeRangeSpec;
  }

DateTimeRangeSpecJSON * TimeBetweenLocationsInformationNuggetJSON::getDateTimeRangeSpec(void)
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

const DateTimeRangeSpecJSON * TimeBetweenLocationsInformationNuggetJSON::getDateTimeRangeSpec(void) const
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

bool TimeBetweenLocationsInformationNuggetJSON::hasSourceDateAndTime(void) const
  {
    return flagHasSourceDateAndTime;
  }

DateAndOrTimeJSON * TimeBetweenLocationsInformationNuggetJSON::getSourceDateAndTime(void)
  {
    assert(flagHasSourceDateAndTime);
    return storeSourceDateAndTime;
  }

const DateAndOrTimeJSON * TimeBetweenLocationsInformationNuggetJSON::getSourceDateAndTime(void) const
  {
    assert(flagHasSourceDateAndTime);
    return storeSourceDateAndTime;
  }

bool TimeBetweenLocationsInformationNuggetJSON::hasDestinationDateAndTime(void) const
  {
    return flagHasDestinationDateAndTime;
  }

DateAndOrTimeJSON * TimeBetweenLocationsInformationNuggetJSON::getDestinationDateAndTime(void)
  {
    assert(flagHasDestinationDateAndTime);
    return storeDestinationDateAndTime;
  }

const DateAndOrTimeJSON * TimeBetweenLocationsInformationNuggetJSON::getDestinationDateAndTime(void) const
  {
    assert(flagHasDestinationDateAndTime);
    return storeDestinationDateAndTime;
  }

TimeBetweenLocationsInformationNuggetJSON *TimeBetweenLocationsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeBetweenLocationsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeBetweenLocationsInformationNuggetJSON>, TimeBetweenLocationsInformationNuggetJSON *, bool> generator("Type TimeBetweenLocationsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
