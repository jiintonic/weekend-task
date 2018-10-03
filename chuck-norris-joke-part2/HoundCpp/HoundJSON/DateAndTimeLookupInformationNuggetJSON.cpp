/* file "DateAndTimeLookupInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateAndTimeLookupInformationNuggetJSON.h"

#include "DateAndTimeLookupInformationNuggetJSON.h"


DateAndTimeLookupInformationNuggetJSON::DateAndTimeLookupInformationNuggetJSON(const DateAndTimeLookupInformationNuggetJSON &)
  {
    assert(false);
  }

DateAndTimeLookupInformationNuggetJSON &DateAndTimeLookupInformationNuggetJSON::operator=(const DateAndTimeLookupInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DateAndTimeLookupInformationNuggetJSON::extraDateAndOrTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_DateAndOrTimeSpec;
    storeDateAndOrTimeSpec->write_as_json(&handler_DateAndOrTimeSpec);
    handler_DateAndOrTimeSpec.result->add_reference();
    return handler_DateAndOrTimeSpec.result;
  }

JSONValue *DateAndTimeLookupInformationNuggetJSON::extraDestinationMapLocationToJSON(void) const
  {
    JSONValueHandler handler_DestinationMapLocation;
    storeDestinationMapLocation->write_as_json(&handler_DestinationMapLocation);
    handler_DestinationMapLocation.result->add_reference();
    return handler_DestinationMapLocation.result;
  }

JSONValue *DateAndTimeLookupInformationNuggetJSON::extraDayOfWeekRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_DayOfWeekRequested = (storeDayOfWeekRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DayOfWeekRequested;
  }

JSONValue *DateAndTimeLookupInformationNuggetJSON::extraDateAndOrTimeSpecInFutureToJSON(void) const
  {
    JSONValue *generated_boolean_DateAndOrTimeSpecInFuture = (storeDateAndOrTimeSpecInFuture ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DateAndOrTimeSpecInFuture;
  }

JSONValue *DateAndTimeLookupInformationNuggetJSON::extraComparisonRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_ComparisonRequested = (storeComparisonRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_ComparisonRequested;
  }

JSONValue *DateAndTimeLookupInformationNuggetJSON::extraIncludeTimeToJSON(void) const
  {
    JSONValue *generated_boolean_IncludeTime = (storeIncludeTime ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IncludeTime;
  }

JSONValue *DateAndTimeLookupInformationNuggetJSON::extraComparisonDateAndOrTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_ComparisonDateAndOrTimeSpec;
    storeComparisonDateAndOrTimeSpec->write_as_json(&handler_ComparisonDateAndOrTimeSpec);
    handler_ComparisonDateAndOrTimeSpec.result->add_reference();
    return handler_ComparisonDateAndOrTimeSpec.result;
  }

JSONValue *DateAndTimeLookupInformationNuggetJSON::extraComparisonDateAndOrTimeSpecEndToJSON(void) const
  {
    JSONValueHandler handler_ComparisonDateAndOrTimeSpecEnd;
    storeComparisonDateAndOrTimeSpecEnd->write_as_json(&handler_ComparisonDateAndOrTimeSpecEnd);
    handler_ComparisonDateAndOrTimeSpecEnd.result->add_reference();
    return handler_ComparisonDateAndOrTimeSpecEnd.result;
  }

void DateAndTimeLookupInformationNuggetJSON::fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void DateAndTimeLookupInformationNuggetJSON::fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void DateAndTimeLookupInformationNuggetJSON::fromJSONDayOfWeekRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DayOfWeekRequested of DateAndTimeLookupInformationNuggetJSON is not true for false.");
          }
      }
    setDayOfWeekRequested(the_bool);
  }

void DateAndTimeLookupInformationNuggetJSON::fromJSONDateAndOrTimeSpecInFuture(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DateAndOrTimeSpecInFuture of DateAndTimeLookupInformationNuggetJSON is not true for false.");
          }
      }
    setDateAndOrTimeSpecInFuture(the_bool);
  }

void DateAndTimeLookupInformationNuggetJSON::fromJSONComparisonRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ComparisonRequested of DateAndTimeLookupInformationNuggetJSON is not true for false.");
          }
      }
    setComparisonRequested(the_bool);
  }

void DateAndTimeLookupInformationNuggetJSON::fromJSONIncludeTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IncludeTime of DateAndTimeLookupInformationNuggetJSON is not true for false.");
          }
      }
    setIncludeTime(the_bool);
  }

void DateAndTimeLookupInformationNuggetJSON::fromJSONComparisonDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComparisonDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void DateAndTimeLookupInformationNuggetJSON::fromJSONComparisonDateAndOrTimeSpecEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComparisonDateAndOrTimeSpecEnd(convert_classy);
    convert_classy->remove_reference();
  }

DateAndTimeLookupInformationNuggetJSON::DateAndTimeLookupInformationNuggetJSON(void) :
        flagHasDateAndOrTimeSpec(false),
        flagHasDestinationMapLocation(false),
        flagHasDayOfWeekRequested(false),
        flagHasDateAndOrTimeSpecInFuture(false),
        flagHasComparisonRequested(false),
        flagHasIncludeTime(false),
        flagHasComparisonDateAndOrTimeSpec(false),
        flagHasComparisonDateAndOrTimeSpecEnd(false)
  {
    extraIndex = create_string_index();
  }

DateAndTimeLookupInformationNuggetJSON::~DateAndTimeLookupInformationNuggetJSON(void)
  {
    if (flagHasDateAndOrTimeSpec)
      {
        storeDateAndOrTimeSpec->remove_reference();
      }
    if (flagHasDestinationMapLocation)
      {
        storeDestinationMapLocation->remove_reference();
      }
    if (flagHasComparisonDateAndOrTimeSpec)
      {
        storeComparisonDateAndOrTimeSpec->remove_reference();
      }
    if (flagHasComparisonDateAndOrTimeSpecEnd)
      {
        storeComparisonDateAndOrTimeSpecEnd->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DateAndTimeLookupInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "DateAndTimeLookupCommand";
  }

bool DateAndTimeLookupInformationNuggetJSON::hasDateAndOrTimeSpec(void) const
  {
    return flagHasDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * DateAndTimeLookupInformationNuggetJSON::getDateAndOrTimeSpec(void)
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * DateAndTimeLookupInformationNuggetJSON::getDateAndOrTimeSpec(void) const
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

bool DateAndTimeLookupInformationNuggetJSON::hasDestinationMapLocation(void) const
  {
    return flagHasDestinationMapLocation;
  }

MapLocationJSON * DateAndTimeLookupInformationNuggetJSON::getDestinationMapLocation(void)
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

const MapLocationJSON * DateAndTimeLookupInformationNuggetJSON::getDestinationMapLocation(void) const
  {
    assert(flagHasDestinationMapLocation);
    return storeDestinationMapLocation;
  }

bool DateAndTimeLookupInformationNuggetJSON::hasDayOfWeekRequested(void) const
  {
    return flagHasDayOfWeekRequested;
  }

bool DateAndTimeLookupInformationNuggetJSON::getDayOfWeekRequested(void)
  {
    assert(flagHasDayOfWeekRequested);
    return storeDayOfWeekRequested;
  }

const bool DateAndTimeLookupInformationNuggetJSON::getDayOfWeekRequested(void) const
  {
    assert(flagHasDayOfWeekRequested);
    return storeDayOfWeekRequested;
  }

bool DateAndTimeLookupInformationNuggetJSON::hasDateAndOrTimeSpecInFuture(void) const
  {
    return flagHasDateAndOrTimeSpecInFuture;
  }

bool DateAndTimeLookupInformationNuggetJSON::getDateAndOrTimeSpecInFuture(void)
  {
    assert(flagHasDateAndOrTimeSpecInFuture);
    return storeDateAndOrTimeSpecInFuture;
  }

const bool DateAndTimeLookupInformationNuggetJSON::getDateAndOrTimeSpecInFuture(void) const
  {
    assert(flagHasDateAndOrTimeSpecInFuture);
    return storeDateAndOrTimeSpecInFuture;
  }

bool DateAndTimeLookupInformationNuggetJSON::hasComparisonRequested(void) const
  {
    return flagHasComparisonRequested;
  }

bool DateAndTimeLookupInformationNuggetJSON::getComparisonRequested(void)
  {
    assert(flagHasComparisonRequested);
    return storeComparisonRequested;
  }

const bool DateAndTimeLookupInformationNuggetJSON::getComparisonRequested(void) const
  {
    assert(flagHasComparisonRequested);
    return storeComparisonRequested;
  }

bool DateAndTimeLookupInformationNuggetJSON::hasIncludeTime(void) const
  {
    return flagHasIncludeTime;
  }

bool DateAndTimeLookupInformationNuggetJSON::getIncludeTime(void)
  {
    assert(flagHasIncludeTime);
    return storeIncludeTime;
  }

const bool DateAndTimeLookupInformationNuggetJSON::getIncludeTime(void) const
  {
    assert(flagHasIncludeTime);
    return storeIncludeTime;
  }

bool DateAndTimeLookupInformationNuggetJSON::hasComparisonDateAndOrTimeSpec(void) const
  {
    return flagHasComparisonDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * DateAndTimeLookupInformationNuggetJSON::getComparisonDateAndOrTimeSpec(void)
  {
    assert(flagHasComparisonDateAndOrTimeSpec);
    return storeComparisonDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * DateAndTimeLookupInformationNuggetJSON::getComparisonDateAndOrTimeSpec(void) const
  {
    assert(flagHasComparisonDateAndOrTimeSpec);
    return storeComparisonDateAndOrTimeSpec;
  }

bool DateAndTimeLookupInformationNuggetJSON::hasComparisonDateAndOrTimeSpecEnd(void) const
  {
    return flagHasComparisonDateAndOrTimeSpecEnd;
  }

DateAndOrTimeSpecJSON * DateAndTimeLookupInformationNuggetJSON::getComparisonDateAndOrTimeSpecEnd(void)
  {
    assert(flagHasComparisonDateAndOrTimeSpecEnd);
    return storeComparisonDateAndOrTimeSpecEnd;
  }

const DateAndOrTimeSpecJSON * DateAndTimeLookupInformationNuggetJSON::getComparisonDateAndOrTimeSpecEnd(void) const
  {
    assert(flagHasComparisonDateAndOrTimeSpecEnd);
    return storeComparisonDateAndOrTimeSpecEnd;
  }

DateAndTimeLookupInformationNuggetJSON *DateAndTimeLookupInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateAndTimeLookupInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateAndTimeLookupInformationNuggetJSON>, DateAndTimeLookupInformationNuggetJSON *, bool> generator("Type DateAndTimeLookupInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
