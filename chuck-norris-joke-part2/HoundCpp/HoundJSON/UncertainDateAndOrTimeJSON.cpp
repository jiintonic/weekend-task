/* file "UncertainDateAndOrTimeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UncertainDateAndOrTimeJSON.h"

#include "UncertainDateAndOrTimeJSON.h"


UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::TypeUncertainDateJSON(const TypeUncertainDateJSON &)
  {
    assert(false);
  }

UncertainDateAndOrTimeJSON::TypeUncertainDateJSON &UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::operator=(const TypeUncertainDateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::fromJSONCentury(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Century of TypeUncertainDateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Century of TypeUncertainDateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setCentury(extracted_integer);
  }

void UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::fromJSONColloquialDecade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ColloquialDecade of TypeUncertainDateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ColloquialDecade of TypeUncertainDateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setColloquialDecade(extracted_integer);
  }

void UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of TypeUncertainDateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of TypeUncertainDateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::fromJSONMonth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Month of TypeUncertainDateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Month of TypeUncertainDateJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMonth(extracted_integer);
  }

void UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::fromJSONDayOfMonth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DayOfMonth of TypeUncertainDateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DayOfMonth of TypeUncertainDateJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDayOfMonth(extracted_integer);
  }

void UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::fromJSONIsCirca(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsCirca of TypeUncertainDateJSON is not true for false.");
          }
      }
    setIsCirca(the_bool);
  }

UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::TypeUncertainDateJSON(void) :
        flagHasCentury(false),
        flagHasColloquialDecade(false),
        flagHasYear(false),
        flagHasMonth(false),
        flagHasDayOfMonth(false),
        flagHasIsCirca(false)
  {
    extraIndex = create_string_index();
  }

UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::~TypeUncertainDateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::hasCentury(void) const
  {
    return flagHasCentury;
  }

OInteger UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getCentury(void)
  {
    assert(flagHasCentury);
    return storeCentury;
  }

const OInteger UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getCentury(void) const
  {
    assert(flagHasCentury);
    return storeCentury;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::hasColloquialDecade(void) const
  {
    return flagHasColloquialDecade;
  }

OInteger UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getColloquialDecade(void)
  {
    assert(flagHasColloquialDecade);
    return storeColloquialDecade;
  }

const OInteger UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getColloquialDecade(void) const
  {
    assert(flagHasColloquialDecade);
    return storeColloquialDecade;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::hasMonth(void) const
  {
    return flagHasMonth;
  }

uint8_t UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getMonth(void)
  {
    assert(flagHasMonth);
    return storeMonth;
  }

const uint8_t UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getMonth(void) const
  {
    assert(flagHasMonth);
    return storeMonth;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::hasDayOfMonth(void) const
  {
    return flagHasDayOfMonth;
  }

uint8_t UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getDayOfMonth(void)
  {
    assert(flagHasDayOfMonth);
    return storeDayOfMonth;
  }

const uint8_t UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getDayOfMonth(void) const
  {
    assert(flagHasDayOfMonth);
    return storeDayOfMonth;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::hasIsCirca(void) const
  {
    return flagHasIsCirca;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getIsCirca(void)
  {
    assert(flagHasIsCirca);
    return storeIsCirca;
  }

const bool UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::getIsCirca(void) const
  {
    assert(flagHasIsCirca);
    return storeIsCirca;
  }

UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::TypeUncertainTimeJSON(const TypeUncertainTimeJSON &)
  {
    assert(false);
  }

UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON &UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::operator=(const TypeUncertainTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::fromJSONHour(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Hour of TypeUncertainTimeJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Hour of TypeUncertainTimeJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHour(extracted_integer);
  }

void UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::fromJSONAmPmUnknown(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AmPmUnknown of TypeUncertainTimeJSON is not true for false.");
          }
      }
    setAmPmUnknown(the_bool);
  }

void UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::fromJSONMinute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Minute of TypeUncertainTimeJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Minute of TypeUncertainTimeJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMinute(extracted_integer);
  }

void UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::fromJSONSecond(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Second of TypeUncertainTimeJSON is not a number.");
          }
      }
    setSecondText(the_rational_text);
  }

UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::TypeUncertainTimeJSON(void) :
        flagHasHour(false),
        flagHasAmPmUnknown(false),
        flagHasMinute(false),
        flagHasSecond(false)
  {
    extraIndex = create_string_index();
  }

UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::~TypeUncertainTimeJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::hasHour(void) const
  {
    return flagHasHour;
  }

uint8_t UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getHour(void)
  {
    assert(flagHasHour);
    return storeHour;
  }

const uint8_t UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getHour(void) const
  {
    assert(flagHasHour);
    return storeHour;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::hasAmPmUnknown(void) const
  {
    return flagHasAmPmUnknown;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getAmPmUnknown(void)
  {
    assert(flagHasAmPmUnknown);
    return storeAmPmUnknown;
  }

const bool UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getAmPmUnknown(void) const
  {
    assert(flagHasAmPmUnknown);
    return storeAmPmUnknown;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::hasMinute(void) const
  {
    return flagHasMinute;
  }

uint8_t UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getMinute(void)
  {
    assert(flagHasMinute);
    return storeMinute;
  }

const uint8_t UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getMinute(void) const
  {
    assert(flagHasMinute);
    return storeMinute;
  }

bool UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::hasSecond(void) const
  {
    return flagHasSecond;
  }

double UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getSecond(void)
  {
    assert(flagHasSecond);
    if (textStoreSecond != "")
      {
        return atof(textStoreSecond.c_str());
      }
    return storeSecond;
  }

const double UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getSecond(void) const
  {
    assert(flagHasSecond);
    if (textStoreSecond != "")
      {
        return atof(textStoreSecond.c_str());
      }
    return storeSecond;
  }

std::string UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::getSecondAsText(void) const
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

UncertainDateAndOrTimeJSON::UncertainDateAndOrTimeJSON(const UncertainDateAndOrTimeJSON &)
  {
    assert(false);
  }

UncertainDateAndOrTimeJSON &UncertainDateAndOrTimeJSON::operator=(const UncertainDateAndOrTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UncertainDateAndOrTimeJSON::extraUncertainDateToJSON(void) const
  {
    JSONValueHandler handler_UncertainDate;
    storeUncertainDate->write_as_json(&handler_UncertainDate);
    handler_UncertainDate.result->add_reference();
    return handler_UncertainDate.result;
  }

JSONValue *UncertainDateAndOrTimeJSON::extraUncertainTimeToJSON(void) const
  {
    JSONValueHandler handler_UncertainTime;
    storeUncertainTime->write_as_json(&handler_UncertainTime);
    handler_UncertainTime.result->add_reference();
    return handler_UncertainTime.result;
  }

void UncertainDateAndOrTimeJSON::fromJSONUncertainDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeUncertainDateJSON *convert_classy = TypeUncertainDateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUncertainDate(convert_classy);
    convert_classy->remove_reference();
  }

void UncertainDateAndOrTimeJSON::fromJSONUncertainTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeUncertainTimeJSON *convert_classy = TypeUncertainTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUncertainTime(convert_classy);
    convert_classy->remove_reference();
  }

UncertainDateAndOrTimeJSON::UncertainDateAndOrTimeJSON(void) :
        flagHasUncertainDate(false),
        flagHasUncertainTime(false)
  {
    extraIndex = create_string_index();
  }

UncertainDateAndOrTimeJSON::~UncertainDateAndOrTimeJSON(void)
  {
    if (flagHasUncertainDate)
      {
        storeUncertainDate->remove_reference();
      }
    if (flagHasUncertainTime)
      {
        storeUncertainTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UncertainDateAndOrTimeJSON::hasUncertainDate(void) const
  {
    return flagHasUncertainDate;
  }

UncertainDateAndOrTimeJSON::TypeUncertainDateJSON * UncertainDateAndOrTimeJSON::getUncertainDate(void)
  {
    assert(flagHasUncertainDate);
    return storeUncertainDate;
  }

const UncertainDateAndOrTimeJSON::TypeUncertainDateJSON * UncertainDateAndOrTimeJSON::getUncertainDate(void) const
  {
    assert(flagHasUncertainDate);
    return storeUncertainDate;
  }

bool UncertainDateAndOrTimeJSON::hasUncertainTime(void) const
  {
    return flagHasUncertainTime;
  }

UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON * UncertainDateAndOrTimeJSON::getUncertainTime(void)
  {
    assert(flagHasUncertainTime);
    return storeUncertainTime;
  }

const UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON * UncertainDateAndOrTimeJSON::getUncertainTime(void) const
  {
    assert(flagHasUncertainTime);
    return storeUncertainTime;
  }

UncertainDateAndOrTimeJSON::TypeUncertainDateJSON *UncertainDateAndOrTimeJSON::TypeUncertainDateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeUncertainDateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeUncertainDateJSON>, TypeUncertainDateJSON *, bool> generator("Type TypeUncertainDate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON *UncertainDateAndOrTimeJSON::TypeUncertainTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeUncertainTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeUncertainTimeJSON>, TypeUncertainTimeJSON *, bool> generator("Type TypeUncertainTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
UncertainDateAndOrTimeJSON *UncertainDateAndOrTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UncertainDateAndOrTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UncertainDateAndOrTimeJSON>, UncertainDateAndOrTimeJSON *, bool> generator("Type UncertainDateAndOrTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
