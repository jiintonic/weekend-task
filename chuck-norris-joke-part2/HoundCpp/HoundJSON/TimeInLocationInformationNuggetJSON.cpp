/* file "TimeInLocationInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeInLocationInformationNuggetJSON.h"

#include "TimeInLocationInformationNuggetJSON.h"


TimeInLocationInformationNuggetJSON::TimeInLocationInformationNuggetJSON(const TimeInLocationInformationNuggetJSON &)
  {
    assert(false);
  }

TimeInLocationInformationNuggetJSON &TimeInLocationInformationNuggetJSON::operator=(const TimeInLocationInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraSourceMapLocationToJSON(void) const
  {
    JSONValueHandler handler_SourceMapLocation;
    storeSourceMapLocation->write_as_json(&handler_SourceMapLocation);
    handler_SourceMapLocation.result->add_reference();
    return handler_SourceMapLocation.result;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraSourceTimeZoneToJSON(void) const
  {
    JSONValueHandler handler_SourceTimeZone;
    storeSourceTimeZone->write_as_json(&handler_SourceTimeZone);
    handler_SourceTimeZone.result->add_reference();
    return handler_SourceTimeZone.result;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraSourceDateTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_SourceDateTimeSpec;
    storeSourceDateTimeSpec->write_as_json(&handler_SourceDateTimeSpec);
    handler_SourceDateTimeSpec.result->add_reference();
    return handler_SourceDateTimeSpec.result;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraDestinationMapLocationToJSON(void) const
  {
    JSONValueHandler handler_DestinationMapLocation;
    storeDestinationMapLocation->write_as_json(&handler_DestinationMapLocation);
    handler_DestinationMapLocation.result->add_reference();
    return handler_DestinationMapLocation.result;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraDestinationLocationsAndTimesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_DestinationLocationsAndTimes = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeDestinationLocationsAndTimes.size(); ++num1)
      {
        JSONValueHandler handler_DestinationLocationsAndTimes;
        storeDestinationLocationsAndTimes[num1]->write_as_json(&handler_DestinationLocationsAndTimes);
        handler_DestinationLocationsAndTimes.result->add_reference();
        generated_array_1_DestinationLocationsAndTimes->appendComponent(handler_DestinationLocationsAndTimes.result);
        handler_DestinationLocationsAndTimes.result->remove_reference();
      }
    return generated_array_1_DestinationLocationsAndTimes;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraDestinationTimeZoneToJSON(void) const
  {
    JSONValueHandler handler_DestinationTimeZone;
    storeDestinationTimeZone->write_as_json(&handler_DestinationTimeZone);
    handler_DestinationTimeZone.result->add_reference();
    return handler_DestinationTimeZone.result;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraDestinationDateTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_DestinationDateTimeSpec;
    storeDestinationDateTimeSpec->write_as_json(&handler_DestinationDateTimeSpec);
    handler_DestinationDateTimeSpec.result->add_reference();
    return handler_DestinationDateTimeSpec.result;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraIsDateRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_IsDateRequested = (storeIsDateRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsDateRequested;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraIsTimeInFutureToJSON(void) const
  {
    JSONValue *generated_boolean_IsTimeInFuture = (storeIsTimeInFuture ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsTimeInFuture;
  }

JSONValue *TimeInLocationInformationNuggetJSON::extraIsTimeInPastToJSON(void) const
  {
    JSONValue *generated_boolean_IsTimeInPast = (storeIsTimeInPast ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsTimeInPast;
  }

void TimeInLocationInformationNuggetJSON::fromJSONSourceMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationInformationNuggetJSON::fromJSONSourceTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeZoneJSON *convert_classy = TimeZoneJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceTimeZone(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationInformationNuggetJSON::fromJSONSourceDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationInformationNuggetJSON::fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationInformationNuggetJSON::fromJSONDestinationLocationsAndTimes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DestinationLocationsAndTimes of TimeInLocationInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field DestinationLocationsAndTimes of TimeInLocationInformationNuggetJSON has too few elements.");
    std::vector< LocationAndTimeJSON * > vector_DestinationLocationsAndTimes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocationAndTimeJSON *convert_classy = LocationAndTimeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DestinationLocationsAndTimes1[num1] = convert_classy;
      }
    assert(vector_DestinationLocationsAndTimes1.size() >= 1);
    initDestinationLocationsAndTimes();
    for (size_t num2 = 0; num2 < vector_DestinationLocationsAndTimes1.size(); ++num2)
        appendDestinationLocationsAndTimes(vector_DestinationLocationsAndTimes1[num2]);
    for (size_t num1 = 0; num1 < vector_DestinationLocationsAndTimes1.size(); ++num1)
      {
        vector_DestinationLocationsAndTimes1[num1]->remove_reference();
      }
  }

void TimeInLocationInformationNuggetJSON::fromJSONDestinationTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeZoneJSON *convert_classy = TimeZoneJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationTimeZone(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationInformationNuggetJSON::fromJSONDestinationDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeInLocationInformationNuggetJSON::fromJSONIsDateRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsDateRequested of TimeInLocationInformationNuggetJSON is not true for false.");
          }
      }
    setIsDateRequested(the_bool);
  }

void TimeInLocationInformationNuggetJSON::fromJSONIsTimeInFuture(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsTimeInFuture of TimeInLocationInformationNuggetJSON is not true for false.");
          }
      }
    setIsTimeInFuture(the_bool);
  }

void TimeInLocationInformationNuggetJSON::fromJSONIsTimeInPast(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsTimeInPast of TimeInLocationInformationNuggetJSON is not true for false.");
          }
      }
    setIsTimeInPast(the_bool);
  }

TimeInLocationInformationNuggetJSON::TimeInLocationInformationNuggetJSON(void) :
        flagHasSourceMapLocation(false),
        flagHasSourceTimeZone(false),
        flagHasSourceDateTimeSpec(false),
        flagHasDestinationMapLocation(false),
        flagHasDestinationLocationsAndTimes(false),
        flagHasDestinationTimeZone(false),
        flagHasDestinationDateTimeSpec(false),
        flagHasIsDateRequested(false),
        flagHasIsTimeInFuture(false),
        flagHasIsTimeInPast(false)
  {
    extraIndex = create_string_index();
  }

TimeInLocationInformationNuggetJSON::~TimeInLocationInformationNuggetJSON(void)
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
    if (flagHasDestinationLocationsAndTimes)
      {
        for (size_t num4 = 0; num4 < storeDestinationLocationsAndTimes.size(); ++num4)
          {
            storeDestinationLocationsAndTimes[num4]->remove_reference();
          }
      }
    if (flagHasDestinationTimeZone)
      {
        storeDestinationTimeZone->remove_reference();
      }
    if (flagHasDestinationDateTimeSpec)
      {
        storeDestinationDateTimeSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *TimeInLocationInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "TimeInLocation";
  }

bool TimeInLocationInformationNuggetJSON::hasSourceMapLocation(void) const
  {
    return flagHasSourceMapLocation;
  }

MapLocationJSON * TimeInLocationInformationNuggetJSON::getSourceMapLocation(void)
  {
    assert(flagHasSourceMapLocation);
    return storeSourceMapLocation;
  }

const MapLocationJSON * TimeInLocationInformationNuggetJSON::getSourceMapLocation(void) const
  {
    assert(flagHasSourceMapLocation);
    return storeSourceMapLocation;
  }

bool TimeInLocationInformationNuggetJSON::hasSourceTimeZone(void) const
  {
    return flagHasSourceTimeZone;
  }

TimeZoneJSON * TimeInLocationInformationNuggetJSON::getSourceTimeZone(void)
  {
    assert(flagHasSourceTimeZone);
    return storeSourceTimeZone;
  }

const TimeZoneJSON * TimeInLocationInformationNuggetJSON::getSourceTimeZone(void) const
  {
    assert(flagHasSourceTimeZone);
    return storeSourceTimeZone;
  }

bool TimeInLocationInformationNuggetJSON::hasSourceDateTimeSpec(void) const
  {
    return flagHasSourceDateTimeSpec;
  }

DateTimeSpecJSON * TimeInLocationInformationNuggetJSON::getSourceDateTimeSpec(void)
  {
    assert(flagHasSourceDateTimeSpec);
    return storeSourceDateTimeSpec;
  }

const DateTimeSpecJSON * TimeInLocationInformationNuggetJSON::getSourceDateTimeSpec(void) const
  {
    assert(flagHasSourceDateTimeSpec);
    return storeSourceDateTimeSpec;
  }

bool TimeInLocationInformationNuggetJSON::hasDestinationMapLocation(void) const
  {
    return flagHasDestinationMapLocation;
  }

MapLocationJSON * TimeInLocationInformationNuggetJSON::getDestinationMapLocation(void)
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

const MapLocationJSON * TimeInLocationInformationNuggetJSON::getDestinationMapLocation(void) const
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

bool TimeInLocationInformationNuggetJSON::hasDestinationLocationsAndTimes(void) const
  {
    return flagHasDestinationLocationsAndTimes;
  }

size_t TimeInLocationInformationNuggetJSON::countOfDestinationLocationsAndTimes(void) const
  {
    assert(flagHasDestinationLocationsAndTimes);
    return storeDestinationLocationsAndTimes.size();
  }

LocationAndTimeJSON * TimeInLocationInformationNuggetJSON::elementOfDestinationLocationsAndTimes(size_t element_num)
  {
    assert(flagHasDestinationLocationsAndTimes);
    return storeDestinationLocationsAndTimes[element_num];
  }

const LocationAndTimeJSON * TimeInLocationInformationNuggetJSON::elementOfDestinationLocationsAndTimes(size_t element_num) const
  {
    assert(flagHasDestinationLocationsAndTimes);
    return storeDestinationLocationsAndTimes[element_num];
  }

std::vector< LocationAndTimeJSON * > TimeInLocationInformationNuggetJSON::getDestinationLocationsAndTimes(void)
  {
    assert(flagHasDestinationLocationsAndTimes);
    return storeDestinationLocationsAndTimes;
  }

const std::vector< LocationAndTimeJSON * > TimeInLocationInformationNuggetJSON::getDestinationLocationsAndTimes(void) const
  {
    assert(flagHasDestinationLocationsAndTimes);
    return storeDestinationLocationsAndTimes;
  }

bool TimeInLocationInformationNuggetJSON::hasDestinationTimeZone(void) const
  {
    return flagHasDestinationTimeZone;
  }

TimeZoneJSON * TimeInLocationInformationNuggetJSON::getDestinationTimeZone(void)
  {
    assert(flagHasDestinationTimeZone);
    return storeDestinationTimeZone;
  }

const TimeZoneJSON * TimeInLocationInformationNuggetJSON::getDestinationTimeZone(void) const
  {
    assert(flagHasDestinationTimeZone);
    return storeDestinationTimeZone;
  }

bool TimeInLocationInformationNuggetJSON::hasDestinationDateTimeSpec(void) const
  {
    return flagHasDestinationDateTimeSpec;
  }

DateTimeSpecJSON * TimeInLocationInformationNuggetJSON::getDestinationDateTimeSpec(void)
  {
    assert(flagHasDestinationDateTimeSpec);
    return storeDestinationDateTimeSpec;
  }

const DateTimeSpecJSON * TimeInLocationInformationNuggetJSON::getDestinationDateTimeSpec(void) const
  {
    assert(flagHasDestinationDateTimeSpec);
    return storeDestinationDateTimeSpec;
  }

bool TimeInLocationInformationNuggetJSON::hasIsDateRequested(void) const
  {
    return flagHasIsDateRequested;
  }

bool TimeInLocationInformationNuggetJSON::getIsDateRequested(void)
  {
    assert(flagHasIsDateRequested);
    return storeIsDateRequested;
  }

const bool TimeInLocationInformationNuggetJSON::getIsDateRequested(void) const
  {
    assert(flagHasIsDateRequested);
    return storeIsDateRequested;
  }

bool TimeInLocationInformationNuggetJSON::hasIsTimeInFuture(void) const
  {
    return flagHasIsTimeInFuture;
  }

bool TimeInLocationInformationNuggetJSON::getIsTimeInFuture(void)
  {
    assert(flagHasIsTimeInFuture);
    return storeIsTimeInFuture;
  }

const bool TimeInLocationInformationNuggetJSON::getIsTimeInFuture(void) const
  {
    assert(flagHasIsTimeInFuture);
    return storeIsTimeInFuture;
  }

bool TimeInLocationInformationNuggetJSON::hasIsTimeInPast(void) const
  {
    return flagHasIsTimeInPast;
  }

bool TimeInLocationInformationNuggetJSON::getIsTimeInPast(void)
  {
    assert(flagHasIsTimeInPast);
    return storeIsTimeInPast;
  }

const bool TimeInLocationInformationNuggetJSON::getIsTimeInPast(void) const
  {
    assert(flagHasIsTimeInPast);
    return storeIsTimeInPast;
  }

TimeInLocationInformationNuggetJSON *TimeInLocationInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeInLocationInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeInLocationInformationNuggetJSON>, TimeInLocationInformationNuggetJSON *, bool> generator("Type TimeInLocationInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
