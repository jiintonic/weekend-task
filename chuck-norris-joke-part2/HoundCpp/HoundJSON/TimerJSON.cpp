/* file "TimerJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerJSON.h"

#include "TimerJSON.h"


TimerJSON::TimerJSON(const TimerJSON &)
  {
    assert(false);
  }

TimerJSON &TimerJSON::operator=(const TimerJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of TimerJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void TimerJSON::fromJSONCenturies(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Centuries of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Centuries of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setCenturies(extracted_integer);
  }

void TimerJSON::fromJSONDecades(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Decades of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Decades of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDecades(extracted_integer);
  }

void TimerJSON::fromJSONYears(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Years of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Years of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYears(extracted_integer);
  }

void TimerJSON::fromJSONMonths(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Months of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Months of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMonths(extracted_integer);
  }

void TimerJSON::fromJSONWeeks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Weeks of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Weeks of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWeeks(extracted_integer);
  }

void TimerJSON::fromJSONDays(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Days of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Days of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDays(extracted_integer);
  }

void TimerJSON::fromJSONHours(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Hours of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Hours of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setHours(extracted_integer);
  }

void TimerJSON::fromJSONMinutes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Minutes of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Minutes of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinutes(extracted_integer);
  }

void TimerJSON::fromJSONSeconds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Seconds of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Seconds of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSeconds(extracted_integer);
  }

void TimerJSON::fromJSONDurationInSeconds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DurationInSeconds of TimerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DurationInSeconds of TimerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDurationInSeconds(extracted_integer);
  }

void TimerJSON::fromJSONIsCountdown(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsCountdown of TimerJSON is not true for false.");
          }
      }
    setIsCountdown(the_bool);
  }

TimerJSON::TimerJSON(void) :
        flagHasTitle(false),
        flagHasCenturies(false),
        flagHasDecades(false),
        flagHasYears(false),
        flagHasMonths(false),
        flagHasWeeks(false),
        flagHasDays(false),
        flagHasHours(false),
        flagHasMinutes(false),
        flagHasSeconds(false),
        flagHasDurationInSeconds(false),
        flagHasIsCountdown(false)
  {
    extraIndex = create_string_index();
  }

TimerJSON::~TimerJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimerJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string TimerJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string TimerJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool TimerJSON::hasCenturies(void) const
  {
    return flagHasCenturies;
  }

OInteger TimerJSON::getCenturies(void)
  {
    assert(flagHasCenturies);
    return storeCenturies;
  }

const OInteger TimerJSON::getCenturies(void) const
  {
    assert(flagHasCenturies);
    return storeCenturies;
  }

bool TimerJSON::hasDecades(void) const
  {
    return flagHasDecades;
  }

OInteger TimerJSON::getDecades(void)
  {
    assert(flagHasDecades);
    return storeDecades;
  }

const OInteger TimerJSON::getDecades(void) const
  {
    assert(flagHasDecades);
    return storeDecades;
  }

bool TimerJSON::hasYears(void) const
  {
    return flagHasYears;
  }

OInteger TimerJSON::getYears(void)
  {
    assert(flagHasYears);
    return storeYears;
  }

const OInteger TimerJSON::getYears(void) const
  {
    assert(flagHasYears);
    return storeYears;
  }

bool TimerJSON::hasMonths(void) const
  {
    return flagHasMonths;
  }

OInteger TimerJSON::getMonths(void)
  {
    assert(flagHasMonths);
    return storeMonths;
  }

const OInteger TimerJSON::getMonths(void) const
  {
    assert(flagHasMonths);
    return storeMonths;
  }

bool TimerJSON::hasWeeks(void) const
  {
    return flagHasWeeks;
  }

OInteger TimerJSON::getWeeks(void)
  {
    assert(flagHasWeeks);
    return storeWeeks;
  }

const OInteger TimerJSON::getWeeks(void) const
  {
    assert(flagHasWeeks);
    return storeWeeks;
  }

bool TimerJSON::hasDays(void) const
  {
    return flagHasDays;
  }

OInteger TimerJSON::getDays(void)
  {
    assert(flagHasDays);
    return storeDays;
  }

const OInteger TimerJSON::getDays(void) const
  {
    assert(flagHasDays);
    return storeDays;
  }

bool TimerJSON::hasHours(void) const
  {
    return flagHasHours;
  }

OInteger TimerJSON::getHours(void)
  {
    assert(flagHasHours);
    return storeHours;
  }

const OInteger TimerJSON::getHours(void) const
  {
    assert(flagHasHours);
    return storeHours;
  }

bool TimerJSON::hasMinutes(void) const
  {
    return flagHasMinutes;
  }

OInteger TimerJSON::getMinutes(void)
  {
    assert(flagHasMinutes);
    return storeMinutes;
  }

const OInteger TimerJSON::getMinutes(void) const
  {
    assert(flagHasMinutes);
    return storeMinutes;
  }

bool TimerJSON::hasSeconds(void) const
  {
    return flagHasSeconds;
  }

OInteger TimerJSON::getSeconds(void)
  {
    assert(flagHasSeconds);
    return storeSeconds;
  }

const OInteger TimerJSON::getSeconds(void) const
  {
    assert(flagHasSeconds);
    return storeSeconds;
  }

bool TimerJSON::hasDurationInSeconds(void) const
  {
    return flagHasDurationInSeconds;
  }

OInteger TimerJSON::getDurationInSeconds(void)
  {
    assert(flagHasDurationInSeconds);
    return storeDurationInSeconds;
  }

const OInteger TimerJSON::getDurationInSeconds(void) const
  {
    assert(flagHasDurationInSeconds);
    return storeDurationInSeconds;
  }

bool TimerJSON::hasIsCountdown(void) const
  {
    return flagHasIsCountdown;
  }

bool TimerJSON::getIsCountdown(void)
  {
    assert(flagHasIsCountdown);
    return storeIsCountdown;
  }

const bool TimerJSON::getIsCountdown(void) const
  {
    assert(flagHasIsCountdown);
    return storeIsCountdown;
  }

TimerJSON *TimerJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerJSON>, TimerJSON *, bool> generator("Type Timer", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
