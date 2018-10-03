/* file "DateAndTimeLookupConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateAndTimeLookupConversationStateJSON.h"

#include "DateAndTimeLookupConversationStateJSON.h"


DateAndTimeLookupConversationStateJSON::TypeDateAndTimeKind DateAndTimeLookupConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "DateAndTimeLookup") == 0)
        return DateAndTimeKind_DateAndTimeLookup;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *DateAndTimeLookupConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_DateAndTimeLookup:
            return "DateAndTimeLookup";
        default:
            assert(false);
            return NULL;
      }
  }

DateAndTimeLookupConversationStateJSON::DateAndTimeLookupConversationStateJSON(const DateAndTimeLookupConversationStateJSON &)
  {
    assert(false);
  }

DateAndTimeLookupConversationStateJSON &DateAndTimeLookupConversationStateJSON::operator=(const DateAndTimeLookupConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DateAndTimeLookupConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of DateAndTimeLookupConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "DateAndTimeLookup") == 0))
        throw("The value for field DateAndTimeKind of DateAndTimeLookupConversationStateJSON is not `DateAndTimeLookup'.");
    setDateAndTimeKind();
  }

void DateAndTimeLookupConversationStateJSON::fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void DateAndTimeLookupConversationStateJSON::fromJSONComparisonRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ComparisonRequested of DateAndTimeLookupConversationStateJSON is not true for false.");
          }
      }
    setComparisonRequested(the_bool);
  }

void DateAndTimeLookupConversationStateJSON::fromJSONComparisonDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComparisonDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void DateAndTimeLookupConversationStateJSON::fromJSONComparisonDateAndOrTimeSpecEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setComparisonDateAndOrTimeSpecEnd(convert_classy);
    convert_classy->remove_reference();
  }

DateAndTimeLookupConversationStateJSON::DateAndTimeLookupConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasDateAndOrTimeSpec(false),
        flagHasComparisonRequested(false),
        flagHasComparisonDateAndOrTimeSpec(false),
        flagHasComparisonDateAndOrTimeSpecEnd(false)
  {
    extraIndex = create_string_index();
  }

DateAndTimeLookupConversationStateJSON::~DateAndTimeLookupConversationStateJSON(void)
  {
    if (flagHasDateAndOrTimeSpec)
      {
        storeDateAndOrTimeSpec->remove_reference();
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

bool DateAndTimeLookupConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

DateAndTimeLookupConversationStateJSON::TypeDateAndTimeKind DateAndTimeLookupConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_DateAndTimeLookup;
  }

const DateAndTimeLookupConversationStateJSON::TypeDateAndTimeKind DateAndTimeLookupConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_DateAndTimeLookup;
  }

const char *DateAndTimeLookupConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string DateAndTimeLookupConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool DateAndTimeLookupConversationStateJSON::hasDateAndOrTimeSpec(void) const
  {
    return flagHasDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * DateAndTimeLookupConversationStateJSON::getDateAndOrTimeSpec(void)
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * DateAndTimeLookupConversationStateJSON::getDateAndOrTimeSpec(void) const
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

bool DateAndTimeLookupConversationStateJSON::hasComparisonRequested(void) const
  {
    return flagHasComparisonRequested;
  }

bool DateAndTimeLookupConversationStateJSON::getComparisonRequested(void)
  {
    assert(flagHasComparisonRequested);
    return storeComparisonRequested;
  }

const bool DateAndTimeLookupConversationStateJSON::getComparisonRequested(void) const
  {
    assert(flagHasComparisonRequested);
    return storeComparisonRequested;
  }

bool DateAndTimeLookupConversationStateJSON::hasComparisonDateAndOrTimeSpec(void) const
  {
    return flagHasComparisonDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * DateAndTimeLookupConversationStateJSON::getComparisonDateAndOrTimeSpec(void)
  {
    assert(flagHasComparisonDateAndOrTimeSpec);
    return storeComparisonDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * DateAndTimeLookupConversationStateJSON::getComparisonDateAndOrTimeSpec(void) const
  {
    assert(flagHasComparisonDateAndOrTimeSpec);
    return storeComparisonDateAndOrTimeSpec;
  }

bool DateAndTimeLookupConversationStateJSON::hasComparisonDateAndOrTimeSpecEnd(void) const
  {
    return flagHasComparisonDateAndOrTimeSpecEnd;
  }

DateAndOrTimeSpecJSON * DateAndTimeLookupConversationStateJSON::getComparisonDateAndOrTimeSpecEnd(void)
  {
    assert(flagHasComparisonDateAndOrTimeSpecEnd);
    return storeComparisonDateAndOrTimeSpecEnd;
  }

const DateAndOrTimeSpecJSON * DateAndTimeLookupConversationStateJSON::getComparisonDateAndOrTimeSpecEnd(void) const
  {
    assert(flagHasComparisonDateAndOrTimeSpecEnd);
    return storeComparisonDateAndOrTimeSpecEnd;
  }

DateAndTimeLookupConversationStateJSON *DateAndTimeLookupConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateAndTimeLookupConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateAndTimeLookupConversationStateJSON>, DateAndTimeLookupConversationStateJSON *, bool> generator("Type DateAndTimeLookupConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
