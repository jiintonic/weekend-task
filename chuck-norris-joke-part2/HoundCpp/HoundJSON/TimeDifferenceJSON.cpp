/* file "TimeDifferenceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeDifferenceJSON.h"

#include "TimeDifferenceJSON.h"


TimeDifferenceJSON::TimeDifferenceJSON(const TimeDifferenceJSON &)
  {
    assert(false);
  }

TimeDifferenceJSON &TimeDifferenceJSON::operator=(const TimeDifferenceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimeDifferenceJSON::fromJSONAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Amount of TimeDifferenceJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Amount of TimeDifferenceJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAmount(extracted_integer);
  }

void TimeDifferenceJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TimeDifferenceJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

void TimeDifferenceJSON::fromJSONSpokenText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenText of TimeDifferenceJSON is not a string.");
    setSpokenText(std::string(json_string->getData()));
  }

void TimeDifferenceJSON::fromJSONShortText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ShortText of TimeDifferenceJSON is not a string.");
    setShortText(std::string(json_string->getData()));
  }

TimeDifferenceJSON::TimeDifferenceJSON(void) :
        flagHasAmount(false),
        flagHasText(false),
        flagHasSpokenText(false),
        flagHasShortText(false)
  {
    extraIndex = create_string_index();
  }

TimeDifferenceJSON::~TimeDifferenceJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimeDifferenceJSON::hasAmount(void) const
  {
    return flagHasAmount;
  }

OInteger TimeDifferenceJSON::getAmount(void)
  {
    assert(flagHasAmount);
    return storeAmount;
  }

const OInteger TimeDifferenceJSON::getAmount(void) const
  {
    assert(flagHasAmount);
    return storeAmount;
  }

bool TimeDifferenceJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string TimeDifferenceJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string TimeDifferenceJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

bool TimeDifferenceJSON::hasSpokenText(void) const
  {
    return flagHasSpokenText;
  }

std::string TimeDifferenceJSON::getSpokenText(void)
  {
    assert(flagHasSpokenText);
    return storeSpokenText;
  }

const std::string TimeDifferenceJSON::getSpokenText(void) const
  {
    assert(flagHasSpokenText);
    return storeSpokenText;
  }

bool TimeDifferenceJSON::hasShortText(void) const
  {
    return flagHasShortText;
  }

std::string TimeDifferenceJSON::getShortText(void)
  {
    assert(flagHasShortText);
    return storeShortText;
  }

const std::string TimeDifferenceJSON::getShortText(void) const
  {
    assert(flagHasShortText);
    return storeShortText;
  }

TimeDifferenceJSON *TimeDifferenceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeDifferenceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeDifferenceJSON>, TimeDifferenceJSON *, bool> generator("Type TimeDifference", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
