/* file "AlarmStartCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmStartCommandJSON.h"

#include "AlarmStartCommandJSON.h"


AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::TypeDaysOfWeek(void)
  {
  }

AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::TypeDaysOfWeek(const TypeDaysOfWeek &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::TypeDaysOfWeek(TypeDaysOfWeekKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::operator==(const TypeDaysOfWeek &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::operator!=(const TypeDaysOfWeek &other) const
  {
    return !(operator==(other));
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::operator<(const TypeDaysOfWeek &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::operator>(const TypeDaysOfWeek &other) const
  {
    return other.operator<(*this);
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::operator>=(const TypeDaysOfWeek &other) const
  {
    return !(operator<(other));
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek::operator<=(const TypeDaysOfWeek &other) const
  {
    return !(other.operator<(*this));
  }

AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeekKnownValues AlarmStartCommandJSON::TypeNativeDataJSON::stringToDaysOfWeek(const char *chars)
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

const char *AlarmStartCommandJSON::TypeNativeDataJSON::stringFromDaysOfWeek(TypeDaysOfWeekKnownValues the_enum)
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

AlarmStartCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

AlarmStartCommandJSON::TypeNativeDataJSON &AlarmStartCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AlarmStartCommandJSON::TypeNativeDataJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of TypeNativeDataJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void AlarmStartCommandJSON::TypeNativeDataJSON::fromJSONIsWake(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsWake of TypeNativeDataJSON is not true for false.");
          }
      }
    setIsWake(the_bool);
  }

void AlarmStartCommandJSON::TypeNativeDataJSON::fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRecurring of TypeNativeDataJSON is not true for false.");
          }
      }
    setIsRecurring(the_bool);
  }

void AlarmStartCommandJSON::TypeNativeDataJSON::fromJSONDaysOfWeek(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DaysOfWeek of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeDaysOfWeek > vector_DaysOfWeek1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DaysOfWeek of TypeNativeDataJSON is not a string.");
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
    for (size_t num2 = 0; num2 < vector_DaysOfWeek1.size(); ++num2)
        appendDaysOfWeek(vector_DaysOfWeek1[num2]);
    for (size_t num1 = 0; num1 < vector_DaysOfWeek1.size(); ++num1)
      {
      }
  }

AlarmStartCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTitle(false),
        flagHasIsWake(false),
        flagHasIsRecurring(false),
        flagHasDaysOfWeek(false)
  {
    storeIsWake = false;
    storeIsRecurring = false;
    extraIndex = create_string_index();
  }

AlarmStartCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string AlarmStartCommandJSON::TypeNativeDataJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string AlarmStartCommandJSON::TypeNativeDataJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::hasIsWake(void) const
  {
    return flagHasIsWake;
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::getIsWake(void)
  {
    return storeIsWake;
  }

const bool AlarmStartCommandJSON::TypeNativeDataJSON::getIsWake(void) const
  {
    return storeIsWake;
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::hasIsRecurring(void) const
  {
    return flagHasIsRecurring;
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::getIsRecurring(void)
  {
    return storeIsRecurring;
  }

const bool AlarmStartCommandJSON::TypeNativeDataJSON::getIsRecurring(void) const
  {
    return storeIsRecurring;
  }

bool AlarmStartCommandJSON::TypeNativeDataJSON::hasDaysOfWeek(void) const
  {
    return flagHasDaysOfWeek;
  }

size_t AlarmStartCommandJSON::TypeNativeDataJSON::countOfDaysOfWeek(void) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek.size();
  }

AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek AlarmStartCommandJSON::TypeNativeDataJSON::elementOfDaysOfWeek(size_t element_num)
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek[element_num];
  }

const AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek AlarmStartCommandJSON::TypeNativeDataJSON::elementOfDaysOfWeek(size_t element_num) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek[element_num];
  }

std::vector< AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek > AlarmStartCommandJSON::TypeNativeDataJSON::getDaysOfWeek(void)
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek;
  }

const std::vector< AlarmStartCommandJSON::TypeNativeDataJSON::TypeDaysOfWeek > AlarmStartCommandJSON::TypeNativeDataJSON::getDaysOfWeek(void) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek;
  }

AlarmStartCommandJSON::AlarmStartCommandJSON(const AlarmStartCommandJSON &)
  {
    assert(false);
  }

AlarmStartCommandJSON &AlarmStartCommandJSON::operator=(const AlarmStartCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AlarmStartCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void AlarmStartCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

AlarmStartCommandJSON::AlarmStartCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

AlarmStartCommandJSON::~AlarmStartCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AlarmStartCommandJSON::getAlarmCommandKind(void) const
  {
    return "AlarmStartCommand";
  }

bool AlarmStartCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

AlarmStartCommandJSON::TypeNativeDataJSON * AlarmStartCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const AlarmStartCommandJSON::TypeNativeDataJSON * AlarmStartCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

AlarmStartCommandJSON::TypeNativeDataJSON *AlarmStartCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
AlarmStartCommandJSON *AlarmStartCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmStartCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmStartCommandJSON>, AlarmStartCommandJSON *, bool> generator("Type AlarmStartCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
