/* file "MonthLengthLookupConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MonthLengthLookupConversationStateJSON.h"

#include "MonthLengthLookupConversationStateJSON.h"


MonthLengthLookupConversationStateJSON::TypeDateAndTimeKind MonthLengthLookupConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "MonthLengthLookup") == 0)
        return DateAndTimeKind_MonthLengthLookup;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *MonthLengthLookupConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_MonthLengthLookup:
            return "MonthLengthLookup";
        default:
            assert(false);
            return NULL;
      }
  }

MonthLengthLookupConversationStateJSON::MonthLengthLookupConversationStateJSON(const MonthLengthLookupConversationStateJSON &)
  {
    assert(false);
  }

MonthLengthLookupConversationStateJSON &MonthLengthLookupConversationStateJSON::operator=(const MonthLengthLookupConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MonthLengthLookupConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of MonthLengthLookupConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "MonthLengthLookup") == 0))
        throw("The value for field DateAndTimeKind of MonthLengthLookupConversationStateJSON is not `MonthLengthLookup'.");
    setDateAndTimeKind();
  }

void MonthLengthLookupConversationStateJSON::fromJSONMonth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Month of MonthLengthLookupConversationStateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Month of MonthLengthLookupConversationStateJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMonth(extracted_integer);
  }

void MonthLengthLookupConversationStateJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of MonthLengthLookupConversationStateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of MonthLengthLookupConversationStateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

MonthLengthLookupConversationStateJSON::MonthLengthLookupConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasMonth(false),
        flagHasYear(false)
  {
    extraIndex = create_string_index();
  }

MonthLengthLookupConversationStateJSON::~MonthLengthLookupConversationStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MonthLengthLookupConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

MonthLengthLookupConversationStateJSON::TypeDateAndTimeKind MonthLengthLookupConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_MonthLengthLookup;
  }

const MonthLengthLookupConversationStateJSON::TypeDateAndTimeKind MonthLengthLookupConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_MonthLengthLookup;
  }

const char *MonthLengthLookupConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string MonthLengthLookupConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool MonthLengthLookupConversationStateJSON::hasMonth(void) const
  {
    return flagHasMonth;
  }

uint8_t MonthLengthLookupConversationStateJSON::getMonth(void)
  {
    assert(flagHasMonth);
    return storeMonth;
  }

const uint8_t MonthLengthLookupConversationStateJSON::getMonth(void) const
  {
    assert(flagHasMonth);
    return storeMonth;
  }

bool MonthLengthLookupConversationStateJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger MonthLengthLookupConversationStateJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger MonthLengthLookupConversationStateJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

MonthLengthLookupConversationStateJSON *MonthLengthLookupConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MonthLengthLookupConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MonthLengthLookupConversationStateJSON>, MonthLengthLookupConversationStateJSON *, bool> generator("Type MonthLengthLookupConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
