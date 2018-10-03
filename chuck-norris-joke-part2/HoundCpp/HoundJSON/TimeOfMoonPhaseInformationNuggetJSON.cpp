/* file "TimeOfMoonPhaseInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeOfMoonPhaseInformationNuggetJSON.h"

#include "TimeOfMoonPhaseInformationNuggetJSON.h"


TimeOfMoonPhaseInformationNuggetJSON::TimeOfMoonPhaseInformationNuggetJSON(const TimeOfMoonPhaseInformationNuggetJSON &)
  {
    assert(false);
  }

TimeOfMoonPhaseInformationNuggetJSON &TimeOfMoonPhaseInformationNuggetJSON::operator=(const TimeOfMoonPhaseInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimeOfMoonPhaseInformationNuggetJSON::extraDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_DateAndTime;
    storeDateAndTime->write_as_json(&handler_DateAndTime);
    handler_DateAndTime.result->add_reference();
    return handler_DateAndTime.result;
  }

JSONValue *TimeOfMoonPhaseInformationNuggetJSON::extraMapLocationToJSON(void) const
  {
    JSONValueHandler handler_MapLocation;
    storeMapLocation->write_as_json(&handler_MapLocation);
    handler_MapLocation.result->add_reference();
    return handler_MapLocation.result;
  }

JSONValue *TimeOfMoonPhaseInformationNuggetJSON::extraRequestedMoonPhaseToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedMoonPhase = new JSONStringValue(storeRequestedMoonPhase.c_str());
    return generated_string_RequestedMoonPhase;
  }

JSONValue *TimeOfMoonPhaseInformationNuggetJSON::extraRequestedInThePastToJSON(void) const
  {
    JSONValue *generated_boolean_RequestedInThePast = (storeRequestedInThePast ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_RequestedInThePast;
  }

void TimeOfMoonPhaseInformationNuggetJSON::fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void TimeOfMoonPhaseInformationNuggetJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimeOfMoonPhaseInformationNuggetJSON::fromJSONRequestedMoonPhase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedMoonPhase of TimeOfMoonPhaseInformationNuggetJSON is not a string.");
    setRequestedMoonPhase(std::string(json_string->getData()));
  }

void TimeOfMoonPhaseInformationNuggetJSON::fromJSONRequestedInThePast(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequestedInThePast of TimeOfMoonPhaseInformationNuggetJSON is not true for false.");
          }
      }
    setRequestedInThePast(the_bool);
  }

TimeOfMoonPhaseInformationNuggetJSON::TimeOfMoonPhaseInformationNuggetJSON(void) :
        flagHasDateAndTime(false),
        flagHasMapLocation(false),
        flagHasRequestedMoonPhase(false),
        flagHasRequestedInThePast(false)
  {
    extraIndex = create_string_index();
  }

TimeOfMoonPhaseInformationNuggetJSON::~TimeOfMoonPhaseInformationNuggetJSON(void)
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

const char *TimeOfMoonPhaseInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "TimeOfMoonPhase";
  }

bool TimeOfMoonPhaseInformationNuggetJSON::hasDateAndTime(void) const
  {
    return flagHasDateAndTime;
  }

DateAndOrTimeJSON * TimeOfMoonPhaseInformationNuggetJSON::getDateAndTime(void)
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

const DateAndOrTimeJSON * TimeOfMoonPhaseInformationNuggetJSON::getDateAndTime(void) const
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

bool TimeOfMoonPhaseInformationNuggetJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * TimeOfMoonPhaseInformationNuggetJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * TimeOfMoonPhaseInformationNuggetJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool TimeOfMoonPhaseInformationNuggetJSON::hasRequestedMoonPhase(void) const
  {
    return flagHasRequestedMoonPhase;
  }

std::string TimeOfMoonPhaseInformationNuggetJSON::getRequestedMoonPhase(void)
  {
    assert(flagHasRequestedMoonPhase);
    return storeRequestedMoonPhase;
  }

const std::string TimeOfMoonPhaseInformationNuggetJSON::getRequestedMoonPhase(void) const
  {
    assert(flagHasRequestedMoonPhase);
    return storeRequestedMoonPhase;
  }

bool TimeOfMoonPhaseInformationNuggetJSON::hasRequestedInThePast(void) const
  {
    return flagHasRequestedInThePast;
  }

bool TimeOfMoonPhaseInformationNuggetJSON::getRequestedInThePast(void)
  {
    assert(flagHasRequestedInThePast);
    return storeRequestedInThePast;
  }

const bool TimeOfMoonPhaseInformationNuggetJSON::getRequestedInThePast(void) const
  {
    assert(flagHasRequestedInThePast);
    return storeRequestedInThePast;
  }

TimeOfMoonPhaseInformationNuggetJSON *TimeOfMoonPhaseInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeOfMoonPhaseInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeOfMoonPhaseInformationNuggetJSON>, TimeOfMoonPhaseInformationNuggetJSON *, bool> generator("Type TimeOfMoonPhaseInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
