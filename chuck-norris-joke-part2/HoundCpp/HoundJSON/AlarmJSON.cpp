/* file "AlarmJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmJSON.h"

#include "AlarmJSON.h"


AlarmJSON::TypeDaysOfWeek::TypeDaysOfWeek(void)
  {
  }

AlarmJSON::TypeDaysOfWeek::TypeDaysOfWeek(const TypeDaysOfWeek &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

AlarmJSON::TypeDaysOfWeek::TypeDaysOfWeek(TypeDaysOfWeekKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool AlarmJSON::TypeDaysOfWeek::operator==(const TypeDaysOfWeek &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool AlarmJSON::TypeDaysOfWeek::operator!=(const TypeDaysOfWeek &other) const
  {
    return !(operator==(other));
  }

bool AlarmJSON::TypeDaysOfWeek::operator<(const TypeDaysOfWeek &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool AlarmJSON::TypeDaysOfWeek::operator>(const TypeDaysOfWeek &other) const
  {
    return other.operator<(*this);
  }

bool AlarmJSON::TypeDaysOfWeek::operator>=(const TypeDaysOfWeek &other) const
  {
    return !(operator<(other));
  }

bool AlarmJSON::TypeDaysOfWeek::operator<=(const TypeDaysOfWeek &other) const
  {
    return !(other.operator<(*this));
  }

AlarmJSON::TypeDaysOfWeekKnownValues AlarmJSON::stringToDaysOfWeek(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "riday") == 0)
                return DaysOfWeek_Friday;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "onday") == 0)
                return DaysOfWeek_Monday;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "turday") == 0)
                        return DaysOfWeek_Saturday;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "nday") == 0)
                        return DaysOfWeek_Sunday;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'h':
                    if (strcmp(&(chars[2]), "ursday") == 0)
                        return DaysOfWeek_Thursday;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "esday") == 0)
                        return DaysOfWeek_Tuesday;
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ednesday") == 0)
                return DaysOfWeek_Wednesday;
            break;
        default:
            break;
      }
    return DaysOfWeek__none;
  }

const char *AlarmJSON::stringFromDaysOfWeek(TypeDaysOfWeekKnownValues the_enum)
  {
    switch (the_enum)
      {
        case DaysOfWeek_Sunday:
            return "Sunday";
        case DaysOfWeek_Monday:
            return "Monday";
        case DaysOfWeek_Tuesday:
            return "Tuesday";
        case DaysOfWeek_Wednesday:
            return "Wednesday";
        case DaysOfWeek_Thursday:
            return "Thursday";
        case DaysOfWeek_Friday:
            return "Friday";
        case DaysOfWeek_Saturday:
            return "Saturday";
        default:
            assert(false);
            return NULL;
      }
  }

AlarmJSON::AlarmJSON(const AlarmJSON &)
  {
    assert(false);
  }

AlarmJSON &AlarmJSON::operator=(const AlarmJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AlarmJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of AlarmJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void AlarmJSON::fromJSONIsWake(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsWake of AlarmJSON is not true for false.");
          }
      }
    setIsWake(the_bool);
  }

void AlarmJSON::fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRecurring of AlarmJSON is not true for false.");
          }
      }
    setIsRecurring(the_bool);
  }

void AlarmJSON::fromJSONHour(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Hour of AlarmJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Hour of AlarmJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHour(extracted_integer);
  }

void AlarmJSON::fromJSONMinute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Minute of AlarmJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Minute of AlarmJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMinute(extracted_integer);
  }

void AlarmJSON::fromJSONSecond(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Second of AlarmJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Second of AlarmJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setSecond(extracted_integer);
  }

void AlarmJSON::fromJSONDaysOfWeek(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DaysOfWeek of AlarmJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeDaysOfWeek > vector_DaysOfWeek1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DaysOfWeek of AlarmJSON is not a string.");
        TypeDaysOfWeek the_open_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'F':
                if (strcmp(&(json_string->getData()[1]), "riday") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = DaysOfWeek_Friday;
                        goto open_enum_is_done;
                      }
                break;
            case 'M':
                if (strcmp(&(json_string->getData()[1]), "onday") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = DaysOfWeek_Monday;
                        goto open_enum_is_done;
                      }
                break;
            case 'S':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'a':
                        if (strcmp(&(json_string->getData()[2]), "turday") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = DaysOfWeek_Saturday;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'u':
                        if (strcmp(&(json_string->getData()[2]), "nday") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = DaysOfWeek_Sunday;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'h':
                        if (strcmp(&(json_string->getData()[2]), "ursday") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = DaysOfWeek_Thursday;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'u':
                        if (strcmp(&(json_string->getData()[2]), "esday") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = DaysOfWeek_Tuesday;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'W':
                if (strcmp(&(json_string->getData()[1]), "ednesday") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = DaysOfWeek_Wednesday;
                        goto open_enum_is_done;
                      }
                break;
            default:
                break;
          }
        the_open_enum.in_known_list = false;
        the_open_enum.string_value = json_string->getData();
      open_enum_is_done:;
        vector_DaysOfWeek1[num1] = the_open_enum;
      }
    initDaysOfWeek();
    for (size_t num3 = 0; num3 < vector_DaysOfWeek1.size(); ++num3)
        appendDaysOfWeek(vector_DaysOfWeek1[num3]);
    for (size_t num1 = 0; num1 < vector_DaysOfWeek1.size(); ++num1)
      {
      }
  }

void AlarmJSON::fromJSONInvalidDates(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field InvalidDates of AlarmJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DateAndOrTimeJSON * > vector_InvalidDates1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_InvalidDates1[num1] = convert_classy;
      }
    initInvalidDates();
    for (size_t num4 = 0; num4 < vector_InvalidDates1.size(); ++num4)
        appendInvalidDates(vector_InvalidDates1[num4]);
    for (size_t num1 = 0; num1 < vector_InvalidDates1.size(); ++num1)
      {
        vector_InvalidDates1[num1]->remove_reference();
      }
  }

AlarmJSON::AlarmJSON(void) :
        flagHasTitle(false),
        flagHasIsWake(false),
        flagHasIsRecurring(false),
        flagHasHour(false),
        flagHasMinute(false),
        flagHasSecond(false),
        flagHasDaysOfWeek(false),
        flagHasInvalidDates(false)
  {
    storeIsWake = false;
    storeIsRecurring = false;
    extraIndex = create_string_index();
  }

AlarmJSON::~AlarmJSON(void)
  {
    if (flagHasInvalidDates)
      {
        for (size_t num4 = 0; num4 < storeInvalidDates.size(); ++num4)
          {
            storeInvalidDates[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AlarmJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string AlarmJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string AlarmJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool AlarmJSON::hasIsWake(void) const
  {
    return flagHasIsWake;
  }

bool AlarmJSON::getIsWake(void)
  {
    return storeIsWake;
  }

const bool AlarmJSON::getIsWake(void) const
  {
    return storeIsWake;
  }

bool AlarmJSON::hasIsRecurring(void) const
  {
    return flagHasIsRecurring;
  }

bool AlarmJSON::getIsRecurring(void)
  {
    return storeIsRecurring;
  }

const bool AlarmJSON::getIsRecurring(void) const
  {
    return storeIsRecurring;
  }

bool AlarmJSON::hasHour(void) const
  {
    return flagHasHour;
  }

uint8_t AlarmJSON::getHour(void)
  {
    assert(flagHasHour);
    return storeHour;
  }

const uint8_t AlarmJSON::getHour(void) const
  {
    assert(flagHasHour);
    return storeHour;
  }

bool AlarmJSON::hasMinute(void) const
  {
    return flagHasMinute;
  }

uint8_t AlarmJSON::getMinute(void)
  {
    assert(flagHasMinute);
    return storeMinute;
  }

const uint8_t AlarmJSON::getMinute(void) const
  {
    assert(flagHasMinute);
    return storeMinute;
  }

bool AlarmJSON::hasSecond(void) const
  {
    return flagHasSecond;
  }

uint8_t AlarmJSON::getSecond(void)
  {
    assert(flagHasSecond);
    return storeSecond;
  }

const uint8_t AlarmJSON::getSecond(void) const
  {
    assert(flagHasSecond);
    return storeSecond;
  }

bool AlarmJSON::hasDaysOfWeek(void) const
  {
    return flagHasDaysOfWeek;
  }

size_t AlarmJSON::countOfDaysOfWeek(void) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek.size();
  }

AlarmJSON::TypeDaysOfWeek AlarmJSON::elementOfDaysOfWeek(size_t element_num)
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek[element_num];
  }

const AlarmJSON::TypeDaysOfWeek AlarmJSON::elementOfDaysOfWeek(size_t element_num) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek[element_num];
  }

std::vector< AlarmJSON::TypeDaysOfWeek > AlarmJSON::getDaysOfWeek(void)
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek;
  }

const std::vector< AlarmJSON::TypeDaysOfWeek > AlarmJSON::getDaysOfWeek(void) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek;
  }

bool AlarmJSON::hasInvalidDates(void) const
  {
    return flagHasInvalidDates;
  }

size_t AlarmJSON::countOfInvalidDates(void) const
  {
    assert(flagHasInvalidDates);
    return storeInvalidDates.size();
  }

DateAndOrTimeJSON * AlarmJSON::elementOfInvalidDates(size_t element_num)
  {
    assert(flagHasInvalidDates);
    return storeInvalidDates[element_num];
  }

const DateAndOrTimeJSON * AlarmJSON::elementOfInvalidDates(size_t element_num) const
  {
    assert(flagHasInvalidDates);
    return storeInvalidDates[element_num];
  }

std::vector< DateAndOrTimeJSON * > AlarmJSON::getInvalidDates(void)
  {
    assert(flagHasInvalidDates);
    return storeInvalidDates;
  }

const std::vector< DateAndOrTimeJSON * > AlarmJSON::getInvalidDates(void) const
  {
    assert(flagHasInvalidDates);
    return storeInvalidDates;
  }

AlarmJSON *AlarmJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmJSON>, AlarmJSON *, bool> generator("Type Alarm", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
