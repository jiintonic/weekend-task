/* file "MonthLengthLookupInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MonthLengthLookupInformationNuggetJSON.h"

#include "MonthLengthLookupInformationNuggetJSON.h"


MonthLengthLookupInformationNuggetJSON::MonthLengthLookupInformationNuggetJSON(const MonthLengthLookupInformationNuggetJSON &)
  {
    assert(false);
  }

MonthLengthLookupInformationNuggetJSON &MonthLengthLookupInformationNuggetJSON::operator=(const MonthLengthLookupInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MonthLengthLookupInformationNuggetJSON::extraMonthIndexToJSON(void) const
  {
    JSONIntegerValue *generated_integer_MonthIndex = new JSONIntegerValue(storeMonthIndex);
    return generated_integer_MonthIndex;
  }

JSONValue *MonthLengthLookupInformationNuggetJSON::extraMonthNameToJSON(void) const
  {
    JSONStringValue *generated_string_MonthName = new JSONStringValue(storeMonthName.c_str());
    return generated_string_MonthName;
  }

JSONValue *MonthLengthLookupInformationNuggetJSON::extraYearToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Year = new JSONIntegerValue(storeYear.get_o_integer());
    return generated_integer_Year;
  }

JSONValue *MonthLengthLookupInformationNuggetJSON::extraDaysInMonthToJSON(void) const
  {
    JSONIntegerValue *generated_integer_DaysInMonth = new JSONIntegerValue(storeDaysInMonth);
    return generated_integer_DaysInMonth;
  }

void MonthLengthLookupInformationNuggetJSON::fromJSONMonthIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MonthIndex of MonthLengthLookupInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MonthIndex of MonthLengthLookupInformationNuggetJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMonthIndex(extracted_integer);
  }

void MonthLengthLookupInformationNuggetJSON::fromJSONMonthName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MonthName of MonthLengthLookupInformationNuggetJSON is not a string.");
    setMonthName(std::string(json_string->getData()));
  }

void MonthLengthLookupInformationNuggetJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of MonthLengthLookupInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of MonthLengthLookupInformationNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void MonthLengthLookupInformationNuggetJSON::fromJSONDaysInMonth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DaysInMonth of MonthLengthLookupInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DaysInMonth of MonthLengthLookupInformationNuggetJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDaysInMonth(extracted_integer);
  }

MonthLengthLookupInformationNuggetJSON::MonthLengthLookupInformationNuggetJSON(void) :
        flagHasMonthIndex(false),
        flagHasMonthName(false),
        flagHasYear(false),
        flagHasDaysInMonth(false)
  {
    extraIndex = create_string_index();
  }

MonthLengthLookupInformationNuggetJSON::~MonthLengthLookupInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MonthLengthLookupInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "MonthLengthLookup";
  }

bool MonthLengthLookupInformationNuggetJSON::hasMonthIndex(void) const
  {
    return flagHasMonthIndex;
  }

uint8_t MonthLengthLookupInformationNuggetJSON::getMonthIndex(void)
  {
    assert(flagHasMonthIndex);
    return storeMonthIndex;
  }

const uint8_t MonthLengthLookupInformationNuggetJSON::getMonthIndex(void) const
  {
    assert(flagHasMonthIndex);
    return storeMonthIndex;
  }

bool MonthLengthLookupInformationNuggetJSON::hasMonthName(void) const
  {
    return flagHasMonthName;
  }

std::string MonthLengthLookupInformationNuggetJSON::getMonthName(void)
  {
    assert(flagHasMonthName);
    return storeMonthName;
  }

const std::string MonthLengthLookupInformationNuggetJSON::getMonthName(void) const
  {
    assert(flagHasMonthName);
    return storeMonthName;
  }

bool MonthLengthLookupInformationNuggetJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger MonthLengthLookupInformationNuggetJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger MonthLengthLookupInformationNuggetJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool MonthLengthLookupInformationNuggetJSON::hasDaysInMonth(void) const
  {
    return flagHasDaysInMonth;
  }

uint8_t MonthLengthLookupInformationNuggetJSON::getDaysInMonth(void)
  {
    assert(flagHasDaysInMonth);
    return storeDaysInMonth;
  }

const uint8_t MonthLengthLookupInformationNuggetJSON::getDaysInMonth(void) const
  {
    assert(flagHasDaysInMonth);
    return storeDaysInMonth;
  }

MonthLengthLookupInformationNuggetJSON *MonthLengthLookupInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MonthLengthLookupInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MonthLengthLookupInformationNuggetJSON>, MonthLengthLookupInformationNuggetJSON *, bool> generator("Type MonthLengthLookupInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
