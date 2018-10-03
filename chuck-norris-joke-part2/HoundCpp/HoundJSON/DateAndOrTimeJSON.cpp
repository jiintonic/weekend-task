/* file "DateAndOrTimeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateAndOrTimeJSON.h"

#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "UncertainDateAndOrTimeJSON.h"


DateAndOrTimeJSON::TypeDate_0JSON::TypeDate_0JSON(const TypeDate_0JSON &)
  {
    assert(false);
  }

DateAndOrTimeJSON::TypeDate_0JSON &DateAndOrTimeJSON::TypeDate_0JSON::operator=(const TypeDate_0JSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DateAndOrTimeJSON::TypeDate_0JSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of TypeDate_0JSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of TypeDate_0JSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void DateAndOrTimeJSON::TypeDate_0JSON::fromJSONMonth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Month of TypeDate_0JSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Month of TypeDate_0JSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMonth(extracted_integer);
  }

void DateAndOrTimeJSON::TypeDate_0JSON::fromJSONDayOfMonth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DayOfMonth of TypeDate_0JSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DayOfMonth of TypeDate_0JSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDayOfMonth(extracted_integer);
  }

DateAndOrTimeJSON::TypeDate_0JSON::TypeDate_0JSON(void) :
        flagHasYear(false),
        flagHasMonth(false),
        flagHasDayOfMonth(false)
  {
    extraIndex = create_string_index();
  }

DateAndOrTimeJSON::TypeDate_0JSON::~TypeDate_0JSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateAndOrTimeJSON::TypeDate_0JSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger DateAndOrTimeJSON::TypeDate_0JSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger DateAndOrTimeJSON::TypeDate_0JSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool DateAndOrTimeJSON::TypeDate_0JSON::hasMonth(void) const
  {
    return flagHasMonth;
  }

uint8_t DateAndOrTimeJSON::TypeDate_0JSON::getMonth(void)
  {
    assert(flagHasMonth);
    return storeMonth;
  }

const uint8_t DateAndOrTimeJSON::TypeDate_0JSON::getMonth(void) const
  {
    assert(flagHasMonth);
    return storeMonth;
  }

bool DateAndOrTimeJSON::TypeDate_0JSON::hasDayOfMonth(void) const
  {
    return flagHasDayOfMonth;
  }

uint8_t DateAndOrTimeJSON::TypeDate_0JSON::getDayOfMonth(void)
  {
    assert(flagHasDayOfMonth);
    return storeDayOfMonth;
  }

const uint8_t DateAndOrTimeJSON::TypeDate_0JSON::getDayOfMonth(void) const
  {
    assert(flagHasDayOfMonth);
    return storeDayOfMonth;
  }

DateAndOrTimeJSON::TypeDate_1JSON::TypeSymbolic DateAndOrTimeJSON::TypeDate_1JSON::stringToSymbolic(const char *chars)
  {
    if (strcmp(chars, "unknown") == 0)
        return Symbolic_unknown;
    throw("The value for field `Symbolic' is not one of the legal values.");
  }

const char *DateAndOrTimeJSON::TypeDate_1JSON::stringFromSymbolic(TypeSymbolic the_enum)
  {
    switch (the_enum)
      {
        case Symbolic_unknown:
            return "unknown";
        default:
            assert(false);
            return NULL;
      }
  }

DateAndOrTimeJSON::TypeDate_1JSON::TypeDate_1JSON(const TypeDate_1JSON &)
  {
    assert(false);
  }

DateAndOrTimeJSON::TypeDate_1JSON &DateAndOrTimeJSON::TypeDate_1JSON::operator=(const TypeDate_1JSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DateAndOrTimeJSON::TypeDate_1JSON::fromJSONSymbolic(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Symbolic of TypeDate_1JSON is not a string.");
    if (!(strcmp(json_string->getData(), "unknown") == 0))
        throw("The value for field Symbolic of TypeDate_1JSON is not `unknown'.");
    setSymbolic();
  }

DateAndOrTimeJSON::TypeDate_1JSON::TypeDate_1JSON(void) :
        flagHasSymbolic(false)
  {
    extraIndex = create_string_index();
  }

DateAndOrTimeJSON::TypeDate_1JSON::~TypeDate_1JSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateAndOrTimeJSON::TypeDate_1JSON::hasSymbolic(void) const
  {
    return flagHasSymbolic;
  }

DateAndOrTimeJSON::TypeDate_1JSON::TypeSymbolic DateAndOrTimeJSON::TypeDate_1JSON::getSymbolic(void)
  {
    assert(flagHasSymbolic);
    return Symbolic_unknown;
  }

const DateAndOrTimeJSON::TypeDate_1JSON::TypeSymbolic DateAndOrTimeJSON::TypeDate_1JSON::getSymbolic(void) const
  {
    assert(flagHasSymbolic);
    return Symbolic_unknown;
  }

const char *DateAndOrTimeJSON::TypeDate_1JSON::getSymbolicAsChars(void) const
  {
    return stringFromSymbolic(getSymbolic());
  }

std::string DateAndOrTimeJSON::TypeDate_1JSON::getSymbolicAsString(void) const
  {
    return stringFromSymbolic(getSymbolic());
  }

DateAndOrTimeJSON::TypeTime_0JSON::TypeTime_0JSON(const TypeTime_0JSON &)
  {
    assert(false);
  }

DateAndOrTimeJSON::TypeTime_0JSON &DateAndOrTimeJSON::TypeTime_0JSON::operator=(const TypeTime_0JSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DateAndOrTimeJSON::TypeTime_0JSON::fromJSONHour(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Hour of TypeTime_0JSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Hour of TypeTime_0JSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHour(extracted_integer);
  }

void DateAndOrTimeJSON::TypeTime_0JSON::fromJSONAmPmUnknown(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AmPmUnknown of TypeTime_0JSON is not true for false.");
          }
      }
    setAmPmUnknown(the_bool);
  }

void DateAndOrTimeJSON::TypeTime_0JSON::fromJSONMinute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Minute of TypeTime_0JSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Minute of TypeTime_0JSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMinute(extracted_integer);
  }

void DateAndOrTimeJSON::TypeTime_0JSON::fromJSONSecond(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Second of TypeTime_0JSON is not a number.");
          }
      }
    setSecondText(the_rational_text);
  }

DateAndOrTimeJSON::TypeTime_0JSON::TypeTime_0JSON(void) :
        flagHasHour(false),
        flagHasAmPmUnknown(false),
        flagHasMinute(false),
        flagHasSecond(false)
  {
    extraIndex = create_string_index();
  }

DateAndOrTimeJSON::TypeTime_0JSON::~TypeTime_0JSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateAndOrTimeJSON::TypeTime_0JSON::hasHour(void) const
  {
    return flagHasHour;
  }

uint8_t DateAndOrTimeJSON::TypeTime_0JSON::getHour(void)
  {
    assert(flagHasHour);
    return storeHour;
  }

const uint8_t DateAndOrTimeJSON::TypeTime_0JSON::getHour(void) const
  {
    assert(flagHasHour);
    return storeHour;
  }

bool DateAndOrTimeJSON::TypeTime_0JSON::hasAmPmUnknown(void) const
  {
    return flagHasAmPmUnknown;
  }

bool DateAndOrTimeJSON::TypeTime_0JSON::getAmPmUnknown(void)
  {
    assert(flagHasAmPmUnknown);
    return storeAmPmUnknown;
  }

const bool DateAndOrTimeJSON::TypeTime_0JSON::getAmPmUnknown(void) const
  {
    assert(flagHasAmPmUnknown);
    return storeAmPmUnknown;
  }

bool DateAndOrTimeJSON::TypeTime_0JSON::hasMinute(void) const
  {
    return flagHasMinute;
  }

uint8_t DateAndOrTimeJSON::TypeTime_0JSON::getMinute(void)
  {
    assert(flagHasMinute);
    return storeMinute;
  }

const uint8_t DateAndOrTimeJSON::TypeTime_0JSON::getMinute(void) const
  {
    assert(flagHasMinute);
    return storeMinute;
  }

bool DateAndOrTimeJSON::TypeTime_0JSON::hasSecond(void) const
  {
    return flagHasSecond;
  }

double DateAndOrTimeJSON::TypeTime_0JSON::getSecond(void)
  {
    assert(flagHasSecond);
    if (textStoreSecond != "")
      {
        return atof(textStoreSecond.c_str());
      }
    return storeSecond;
  }

const double DateAndOrTimeJSON::TypeTime_0JSON::getSecond(void) const
  {
    assert(flagHasSecond);
    if (textStoreSecond != "")
      {
        return atof(textStoreSecond.c_str());
      }
    return storeSecond;
  }

std::string DateAndOrTimeJSON::TypeTime_0JSON::getSecondAsText(void) const
  {
    assert(flagHasSecond);
    if (textStoreSecond == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSecond);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSecond);
      }
  }

DateAndOrTimeJSON::TypeTime_1JSON::TypeSymbolic DateAndOrTimeJSON::TypeTime_1JSON::stringToSymbolic(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'e':
            if (strcmp(&(chars[1]), "nd-of-day") == 0)
                return Symbolic_end_of_day;
            break;
        case 's':
            if (strcmp(&(chars[1]), "tart-of-day") == 0)
                return Symbolic_start_of_day;
            break;
        case 'u':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return Symbolic_unknown;
            break;
        default:
            break;
      }
    throw("The value for field `Symbolic' is not one of the legal values.");
  }

const char *DateAndOrTimeJSON::TypeTime_1JSON::stringFromSymbolic(TypeSymbolic the_enum)
  {
    switch (the_enum)
      {
        case Symbolic_start_of_day:
            return "start-of-day";
        case Symbolic_end_of_day:
            return "end-of-day";
        case Symbolic_unknown:
            return "unknown";
        default:
            assert(false);
            return NULL;
      }
  }

DateAndOrTimeJSON::TypeTime_1JSON::TypeTime_1JSON(const TypeTime_1JSON &)
  {
    assert(false);
  }

DateAndOrTimeJSON::TypeTime_1JSON &DateAndOrTimeJSON::TypeTime_1JSON::operator=(const TypeTime_1JSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DateAndOrTimeJSON::TypeTime_1JSON::fromJSONSymbolic(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Symbolic of TypeTime_1JSON is not a string.");
    TypeSymbolic the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'e':
            if (strcmp(&(json_string->getData()[1]), "nd-of-day") == 0)
                  {
                    the_enum = Symbolic_end_of_day;
                    goto enum_is_done;
                  }
            break;
        case 's':
            if (strcmp(&(json_string->getData()[1]), "tart-of-day") == 0)
                  {
                    the_enum = Symbolic_start_of_day;
                    goto enum_is_done;
                  }
            break;
        case 'u':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = Symbolic_unknown;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Symbolic of TypeTime_1JSON is not one of the legal strings.");
  enum_is_done:;
    setSymbolic(the_enum);
  }

DateAndOrTimeJSON::TypeTime_1JSON::TypeTime_1JSON(void) :
        flagHasSymbolic(false)
  {
    extraIndex = create_string_index();
  }

DateAndOrTimeJSON::TypeTime_1JSON::~TypeTime_1JSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateAndOrTimeJSON::TypeTime_1JSON::hasSymbolic(void) const
  {
    return flagHasSymbolic;
  }

DateAndOrTimeJSON::TypeTime_1JSON::TypeSymbolic DateAndOrTimeJSON::TypeTime_1JSON::getSymbolic(void)
  {
    assert(flagHasSymbolic);
    return storeSymbolic;
  }

const DateAndOrTimeJSON::TypeTime_1JSON::TypeSymbolic DateAndOrTimeJSON::TypeTime_1JSON::getSymbolic(void) const
  {
    assert(flagHasSymbolic);
    return storeSymbolic;
  }

const char *DateAndOrTimeJSON::TypeTime_1JSON::getSymbolicAsChars(void) const
  {
    return stringFromSymbolic(getSymbolic());
  }

std::string DateAndOrTimeJSON::TypeTime_1JSON::getSymbolicAsString(void) const
  {
    return stringFromSymbolic(getSymbolic());
  }

DateAndOrTimeJSON::DateAndOrTimeJSON(const DateAndOrTimeJSON &)
  {
    assert(false);
  }

DateAndOrTimeJSON &DateAndOrTimeJSON::operator=(const DateAndOrTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DateAndOrTimeJSON::fromJSONDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDate or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            TypeDate_0JSON *convert_classy = TypeDate_0JSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice0 = convert_classy;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            TypeDate_1JSON *convert_classy = TypeDate_1JSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice1 = convert_classy;
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Date of DateAndOrTimeJSON is not one of the allowed values.");
    setDate(or_result);
    switch (or_result.key)
      {
        case 0:
            or_result.u.choice0->remove_reference();
            break;
        case 1:
            or_result.u.choice1->remove_reference();
            break;
        default:
            assert(false);
      }
  }

void DateAndOrTimeJSON::fromJSONTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeTime or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            TypeTime_0JSON *convert_classy = TypeTime_0JSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice0 = convert_classy;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            TypeTime_1JSON *convert_classy = TypeTime_1JSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice1 = convert_classy;
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Time of DateAndOrTimeJSON is not one of the allowed values.");
    setTime(or_result);
    switch (or_result.key)
      {
        case 0:
            or_result.u.choice0->remove_reference();
            break;
        case 1:
            or_result.u.choice1->remove_reference();
            break;
        default:
            assert(false);
      }
  }

void DateAndOrTimeJSON::fromJSONTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TimeZone of DateAndOrTimeJSON is not a string.");
    setTimeZone(std::string(json_string->getData()));
  }

DateAndOrTimeJSON::DateAndOrTimeJSON(void) :
        flagHasDate(false),
        flagHasTime(false),
        flagHasTimeZone(false)
  {
    extraIndex = create_string_index();
  }

DateAndOrTimeJSON::~DateAndOrTimeJSON(void)
  {
    if (flagHasDate)
      {
        switch (storeDate.key)
          {
            case 0:
                storeDate.u.choice0->remove_reference();
                break;
            case 1:
                storeDate.u.choice1->remove_reference();
                break;
            default:
                assert(false);
          }
      }
    if (flagHasTime)
      {
        switch (storeTime.key)
          {
            case 0:
                storeTime.u.choice0->remove_reference();
                break;
            case 1:
                storeTime.u.choice1->remove_reference();
                break;
            default:
                assert(false);
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DateAndOrTimeJSON::hasDate(void) const
  {
    return flagHasDate;
  }

DateAndOrTimeJSON::TypeDate DateAndOrTimeJSON::getDate(void)
  {
    assert(flagHasDate);
    return storeDate;
  }

const DateAndOrTimeJSON::TypeDate DateAndOrTimeJSON::getDate(void) const
  {
    assert(flagHasDate);
    return storeDate;
  }

bool DateAndOrTimeJSON::hasTime(void) const
  {
    return flagHasTime;
  }

DateAndOrTimeJSON::TypeTime DateAndOrTimeJSON::getTime(void)
  {
    assert(flagHasTime);
    return storeTime;
  }

const DateAndOrTimeJSON::TypeTime DateAndOrTimeJSON::getTime(void) const
  {
    assert(flagHasTime);
    return storeTime;
  }

bool DateAndOrTimeJSON::hasTimeZone(void) const
  {
    return flagHasTimeZone;
  }

std::string DateAndOrTimeJSON::getTimeZone(void)
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

const std::string DateAndOrTimeJSON::getTimeZone(void) const
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

DateAndOrTimeJSON::TypeDate_0JSON *DateAndOrTimeJSON::TypeDate_0JSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDate_0JSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDate_0JSON>, TypeDate_0JSON *, bool> generator("Type TypeDate_0", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DateAndOrTimeJSON::TypeDate_1JSON *DateAndOrTimeJSON::TypeDate_1JSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDate_1JSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDate_1JSON>, TypeDate_1JSON *, bool> generator("Type TypeDate_1", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DateAndOrTimeJSON::TypeTime_0JSON *DateAndOrTimeJSON::TypeTime_0JSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeTime_0JSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeTime_0JSON>, TypeTime_0JSON *, bool> generator("Type TypeTime_0", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DateAndOrTimeJSON::TypeTime_1JSON *DateAndOrTimeJSON::TypeTime_1JSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeTime_1JSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeTime_1JSON>, TypeTime_1JSON *, bool> generator("Type TypeTime_1", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DateAndOrTimeJSON *DateAndOrTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateAndOrTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool> generator("Type DateAndOrTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
