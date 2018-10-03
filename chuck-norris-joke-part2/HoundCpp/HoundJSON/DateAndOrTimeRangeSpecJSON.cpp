/* file "DateAndOrTimeRangeSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateAndOrTimeRangeSpecJSON.h"

#include "DateAndOrTimeRangeSpecJSON.h"


DateAndOrTimeRangeSpecJSON::DateAndOrTimeRangeSpecJSON(const DateAndOrTimeRangeSpecJSON &)
  {
    assert(false);
  }

DateAndOrTimeRangeSpecJSON &DateAndOrTimeRangeSpecJSON::operator=(const DateAndOrTimeRangeSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DateAndOrTimeRangeSpecJSON::extraStartDateTimeInferredToJSON(void) const
  {
    JSONValue *generated_boolean_StartDateTimeInferred = (storeStartDateTimeInferred ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_StartDateTimeInferred;
  }

JSONValue *DateAndOrTimeRangeSpecJSON::extraEndDateTimeInferredToJSON(void) const
  {
    JSONValue *generated_boolean_EndDateTimeInferred = (storeEndDateTimeInferred ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_EndDateTimeInferred;
  }

JSONValue *DateAndOrTimeRangeSpecJSON::extraRangeIsExplicitToJSON(void) const
  {
    JSONValue *generated_boolean_RangeIsExplicit = (storeRangeIsExplicit ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_RangeIsExplicit;
  }

JSONValue *DateAndOrTimeRangeSpecJSON::extraExpressedAsDurationToJSON(void) const
  {
    JSONValue *generated_boolean_ExpressedAsDuration = (storeExpressedAsDuration ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_ExpressedAsDuration;
  }

void DateAndOrTimeRangeSpecJSON::fromJSONStartDateTimeInferred(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StartDateTimeInferred of DateAndOrTimeRangeSpecJSON is not true for false.");
          }
      }
    setStartDateTimeInferred(the_bool);
  }

void DateAndOrTimeRangeSpecJSON::fromJSONEndDateTimeInferred(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EndDateTimeInferred of DateAndOrTimeRangeSpecJSON is not true for false.");
          }
      }
    setEndDateTimeInferred(the_bool);
  }

void DateAndOrTimeRangeSpecJSON::fromJSONRangeIsExplicit(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RangeIsExplicit of DateAndOrTimeRangeSpecJSON is not true for false.");
          }
      }
    setRangeIsExplicit(the_bool);
  }

void DateAndOrTimeRangeSpecJSON::fromJSONExpressedAsDuration(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ExpressedAsDuration of DateAndOrTimeRangeSpecJSON is not true for false.");
          }
      }
    setExpressedAsDuration(the_bool);
  }

DateAndOrTimeRangeSpecJSON::DateAndOrTimeRangeSpecJSON(void) :
        flagHasStartDateTimeInferred(false),
        flagHasEndDateTimeInferred(false),
        flagHasRangeIsExplicit(false),
        flagHasExpressedAsDuration(false)
  {
    extraIndex = create_string_index();
  }

DateAndOrTimeRangeSpecJSON::~DateAndOrTimeRangeSpecJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateAndOrTimeRangeSpecJSON::hasStartDateTimeInferred(void) const
  {
    return flagHasStartDateTimeInferred;
  }

bool DateAndOrTimeRangeSpecJSON::getStartDateTimeInferred(void)
  {
    assert(flagHasStartDateTimeInferred);
    return storeStartDateTimeInferred;
  }

const bool DateAndOrTimeRangeSpecJSON::getStartDateTimeInferred(void) const
  {
    assert(flagHasStartDateTimeInferred);
    return storeStartDateTimeInferred;
  }

bool DateAndOrTimeRangeSpecJSON::hasEndDateTimeInferred(void) const
  {
    return flagHasEndDateTimeInferred;
  }

bool DateAndOrTimeRangeSpecJSON::getEndDateTimeInferred(void)
  {
    assert(flagHasEndDateTimeInferred);
    return storeEndDateTimeInferred;
  }

const bool DateAndOrTimeRangeSpecJSON::getEndDateTimeInferred(void) const
  {
    assert(flagHasEndDateTimeInferred);
    return storeEndDateTimeInferred;
  }

bool DateAndOrTimeRangeSpecJSON::hasRangeIsExplicit(void) const
  {
    return flagHasRangeIsExplicit;
  }

bool DateAndOrTimeRangeSpecJSON::getRangeIsExplicit(void)
  {
    assert(flagHasRangeIsExplicit);
    return storeRangeIsExplicit;
  }

const bool DateAndOrTimeRangeSpecJSON::getRangeIsExplicit(void) const
  {
    assert(flagHasRangeIsExplicit);
    return storeRangeIsExplicit;
  }

bool DateAndOrTimeRangeSpecJSON::hasExpressedAsDuration(void) const
  {
    return flagHasExpressedAsDuration;
  }

bool DateAndOrTimeRangeSpecJSON::getExpressedAsDuration(void)
  {
    assert(flagHasExpressedAsDuration);
    return storeExpressedAsDuration;
  }

const bool DateAndOrTimeRangeSpecJSON::getExpressedAsDuration(void) const
  {
    assert(flagHasExpressedAsDuration);
    return storeExpressedAsDuration;
  }

DateAndOrTimeRangeSpecJSON *DateAndOrTimeRangeSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateAndOrTimeRangeSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeRangeSpecJSON>, DateAndOrTimeRangeSpecJSON *, bool> generator("Type DateAndOrTimeRangeSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
