/* file "TimerCriteriaJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerCriteriaJSON.h"

#include "TimerCriteriaJSON.h"


TimerCriteriaJSON::TimerCriteriaJSON(const TimerCriteriaJSON &)
  {
    assert(false);
  }

TimerCriteriaJSON &TimerCriteriaJSON::operator=(const TimerCriteriaJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerCriteriaJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of TimerCriteriaJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void TimerCriteriaJSON::fromJSONPosition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Position of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Position of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPosition(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONCenturies(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Centuries of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Centuries of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setCenturies(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONDecades(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Decades of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Decades of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDecades(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONYears(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Years of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Years of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYears(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONMonths(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Months of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Months of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMonths(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONWeeks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Weeks of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Weeks of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWeeks(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONDays(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Days of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Days of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDays(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONHours(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Hours of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Hours of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setHours(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONMinutes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Minutes of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Minutes of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinutes(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONSeconds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Seconds of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Seconds of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSeconds(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONDurationInSeconds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DurationInSeconds of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DurationInSeconds of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDurationInSeconds(extracted_integer);
  }

void TimerCriteriaJSON::fromJSONIsCountdown(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsCountdown of TimerCriteriaJSON is not true for false.");
          }
      }
    setIsCountdown(the_bool);
  }

void TimerCriteriaJSON::fromJSONSecondsToAdd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SecondsToAdd of TimerCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SecondsToAdd of TimerCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSecondsToAdd(extracted_integer);
  }

TimerCriteriaJSON::TimerCriteriaJSON(void) :
        flagHasTitle(false),
        flagHasPosition(false),
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
        flagHasIsCountdown(false),
        flagHasSecondsToAdd(false)
  {
    extraIndex = create_string_index();
  }

TimerCriteriaJSON::~TimerCriteriaJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimerCriteriaJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string TimerCriteriaJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string TimerCriteriaJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool TimerCriteriaJSON::hasPosition(void) const
  {
    return flagHasPosition;
  }

OInteger TimerCriteriaJSON::getPosition(void)
  {
    assert(flagHasPosition);
    return storePosition;
  }

const OInteger TimerCriteriaJSON::getPosition(void) const
  {
    assert(flagHasPosition);
    return storePosition;
  }

bool TimerCriteriaJSON::hasCenturies(void) const
  {
    return flagHasCenturies;
  }

OInteger TimerCriteriaJSON::getCenturies(void)
  {
    assert(flagHasCenturies);
    return storeCenturies;
  }

const OInteger TimerCriteriaJSON::getCenturies(void) const
  {
    assert(flagHasCenturies);
    return storeCenturies;
  }

bool TimerCriteriaJSON::hasDecades(void) const
  {
    return flagHasDecades;
  }

OInteger TimerCriteriaJSON::getDecades(void)
  {
    assert(flagHasDecades);
    return storeDecades;
  }

const OInteger TimerCriteriaJSON::getDecades(void) const
  {
    assert(flagHasDecades);
    return storeDecades;
  }

bool TimerCriteriaJSON::hasYears(void) const
  {
    return flagHasYears;
  }

OInteger TimerCriteriaJSON::getYears(void)
  {
    assert(flagHasYears);
    return storeYears;
  }

const OInteger TimerCriteriaJSON::getYears(void) const
  {
    assert(flagHasYears);
    return storeYears;
  }

bool TimerCriteriaJSON::hasMonths(void) const
  {
    return flagHasMonths;
  }

OInteger TimerCriteriaJSON::getMonths(void)
  {
    assert(flagHasMonths);
    return storeMonths;
  }

const OInteger TimerCriteriaJSON::getMonths(void) const
  {
    assert(flagHasMonths);
    return storeMonths;
  }

bool TimerCriteriaJSON::hasWeeks(void) const
  {
    return flagHasWeeks;
  }

OInteger TimerCriteriaJSON::getWeeks(void)
  {
    assert(flagHasWeeks);
    return storeWeeks;
  }

const OInteger TimerCriteriaJSON::getWeeks(void) const
  {
    assert(flagHasWeeks);
    return storeWeeks;
  }

bool TimerCriteriaJSON::hasDays(void) const
  {
    return flagHasDays;
  }

OInteger TimerCriteriaJSON::getDays(void)
  {
    assert(flagHasDays);
    return storeDays;
  }

const OInteger TimerCriteriaJSON::getDays(void) const
  {
    assert(flagHasDays);
    return storeDays;
  }

bool TimerCriteriaJSON::hasHours(void) const
  {
    return flagHasHours;
  }

OInteger TimerCriteriaJSON::getHours(void)
  {
    assert(flagHasHours);
    return storeHours;
  }

const OInteger TimerCriteriaJSON::getHours(void) const
  {
    assert(flagHasHours);
    return storeHours;
  }

bool TimerCriteriaJSON::hasMinutes(void) const
  {
    return flagHasMinutes;
  }

OInteger TimerCriteriaJSON::getMinutes(void)
  {
    assert(flagHasMinutes);
    return storeMinutes;
  }

const OInteger TimerCriteriaJSON::getMinutes(void) const
  {
    assert(flagHasMinutes);
    return storeMinutes;
  }

bool TimerCriteriaJSON::hasSeconds(void) const
  {
    return flagHasSeconds;
  }

OInteger TimerCriteriaJSON::getSeconds(void)
  {
    assert(flagHasSeconds);
    return storeSeconds;
  }

const OInteger TimerCriteriaJSON::getSeconds(void) const
  {
    assert(flagHasSeconds);
    return storeSeconds;
  }

bool TimerCriteriaJSON::hasDurationInSeconds(void) const
  {
    return flagHasDurationInSeconds;
  }

OInteger TimerCriteriaJSON::getDurationInSeconds(void)
  {
    assert(flagHasDurationInSeconds);
    return storeDurationInSeconds;
  }

const OInteger TimerCriteriaJSON::getDurationInSeconds(void) const
  {
    assert(flagHasDurationInSeconds);
    return storeDurationInSeconds;
  }

bool TimerCriteriaJSON::hasIsCountdown(void) const
  {
    return flagHasIsCountdown;
  }

bool TimerCriteriaJSON::getIsCountdown(void)
  {
    assert(flagHasIsCountdown);
    return storeIsCountdown;
  }

const bool TimerCriteriaJSON::getIsCountdown(void) const
  {
    assert(flagHasIsCountdown);
    return storeIsCountdown;
  }

bool TimerCriteriaJSON::hasSecondsToAdd(void) const
  {
    return flagHasSecondsToAdd;
  }

OInteger TimerCriteriaJSON::getSecondsToAdd(void)
  {
    assert(flagHasSecondsToAdd);
    return storeSecondsToAdd;
  }

const OInteger TimerCriteriaJSON::getSecondsToAdd(void) const
  {
    assert(flagHasSecondsToAdd);
    return storeSecondsToAdd;
  }

char TimerCriteriaJSON::Generator::lowerBoundPosition[] = "1";
TimerCriteriaJSON *TimerCriteriaJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerCriteriaJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerCriteriaJSON>, TimerCriteriaJSON *, bool> generator("Type TimerCriteria", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
