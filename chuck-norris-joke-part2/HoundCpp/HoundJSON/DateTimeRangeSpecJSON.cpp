/* file "DateTimeRangeSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateTimeRangeSpecJSON.h"

#include "DateTimeRangeSpecJSON.h"


DateTimeRangeSpecJSON::DateTimeRangeSpecJSON(const DateTimeRangeSpecJSON &)
  {
    assert(false);
  }

DateTimeRangeSpecJSON &DateTimeRangeSpecJSON::operator=(const DateTimeRangeSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DateTimeRangeSpecJSON::fromJSONStartDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void DateTimeRangeSpecJSON::fromJSONEndDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void DateTimeRangeSpecJSON::fromJSONStartDateTimeInferred(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StartDateTimeInferred of DateTimeRangeSpecJSON is not true for false.");
          }
      }
    setStartDateTimeInferred(the_bool);
  }

void DateTimeRangeSpecJSON::fromJSONEndDateTimeInferred(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EndDateTimeInferred of DateTimeRangeSpecJSON is not true for false.");
          }
      }
    setEndDateTimeInferred(the_bool);
  }

void DateTimeRangeSpecJSON::fromJSONRangeIsExplicit(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RangeIsExplicit of DateTimeRangeSpecJSON is not true for false.");
          }
      }
    setRangeIsExplicit(the_bool);
  }

void DateTimeRangeSpecJSON::fromJSONExpressedAsDuration(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ExpressedAsDuration of DateTimeRangeSpecJSON is not true for false.");
          }
      }
    setExpressedAsDuration(the_bool);
  }

DateTimeRangeSpecJSON::DateTimeRangeSpecJSON(void) :
        flagHasStartDateTimeSpec(false),
        flagHasEndDateTimeSpec(false),
        flagHasStartDateTimeInferred(false),
        flagHasEndDateTimeInferred(false),
        flagHasRangeIsExplicit(false),
        flagHasExpressedAsDuration(false)
  {
    extraIndex = create_string_index();
  }

DateTimeRangeSpecJSON::~DateTimeRangeSpecJSON(void)
  {
    if (flagHasStartDateTimeSpec)
      {
        storeStartDateTimeSpec->remove_reference();
      }
    if (flagHasEndDateTimeSpec)
      {
        storeEndDateTimeSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateTimeRangeSpecJSON::hasStartDateTimeSpec(void) const
  {
    return flagHasStartDateTimeSpec;
  }

DateTimeSpecJSON * DateTimeRangeSpecJSON::getStartDateTimeSpec(void)
  {
    assert(flagHasStartDateTimeSpec);
    return storeStartDateTimeSpec;
  }

const DateTimeSpecJSON * DateTimeRangeSpecJSON::getStartDateTimeSpec(void) const
  {
    assert(flagHasStartDateTimeSpec);
    return storeStartDateTimeSpec;
  }

bool DateTimeRangeSpecJSON::hasEndDateTimeSpec(void) const
  {
    return flagHasEndDateTimeSpec;
  }

DateTimeSpecJSON * DateTimeRangeSpecJSON::getEndDateTimeSpec(void)
  {
    assert(flagHasEndDateTimeSpec);
    return storeEndDateTimeSpec;
  }

const DateTimeSpecJSON * DateTimeRangeSpecJSON::getEndDateTimeSpec(void) const
  {
    assert(flagHasEndDateTimeSpec);
    return storeEndDateTimeSpec;
  }

bool DateTimeRangeSpecJSON::hasStartDateTimeInferred(void) const
  {
    return flagHasStartDateTimeInferred;
  }

bool DateTimeRangeSpecJSON::getStartDateTimeInferred(void)
  {
    assert(flagHasStartDateTimeInferred);
    return storeStartDateTimeInferred;
  }

const bool DateTimeRangeSpecJSON::getStartDateTimeInferred(void) const
  {
    assert(flagHasStartDateTimeInferred);
    return storeStartDateTimeInferred;
  }

bool DateTimeRangeSpecJSON::hasEndDateTimeInferred(void) const
  {
    return flagHasEndDateTimeInferred;
  }

bool DateTimeRangeSpecJSON::getEndDateTimeInferred(void)
  {
    assert(flagHasEndDateTimeInferred);
    return storeEndDateTimeInferred;
  }

const bool DateTimeRangeSpecJSON::getEndDateTimeInferred(void) const
  {
    assert(flagHasEndDateTimeInferred);
    return storeEndDateTimeInferred;
  }

bool DateTimeRangeSpecJSON::hasRangeIsExplicit(void) const
  {
    return flagHasRangeIsExplicit;
  }

bool DateTimeRangeSpecJSON::getRangeIsExplicit(void)
  {
    assert(flagHasRangeIsExplicit);
    return storeRangeIsExplicit;
  }

const bool DateTimeRangeSpecJSON::getRangeIsExplicit(void) const
  {
    assert(flagHasRangeIsExplicit);
    return storeRangeIsExplicit;
  }

bool DateTimeRangeSpecJSON::hasExpressedAsDuration(void) const
  {
    return flagHasExpressedAsDuration;
  }

bool DateTimeRangeSpecJSON::getExpressedAsDuration(void)
  {
    assert(flagHasExpressedAsDuration);
    return storeExpressedAsDuration;
  }

const bool DateTimeRangeSpecJSON::getExpressedAsDuration(void) const
  {
    assert(flagHasExpressedAsDuration);
    return storeExpressedAsDuration;
  }

DateTimeRangeSpecJSON *DateTimeRangeSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateTimeRangeSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool> generator("Type DateTimeRangeSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
