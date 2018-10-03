/* file "AlarmQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmQueryStateJSON.h"

#include "AlarmQueryStateJSON.h"


AlarmQueryStateJSON::TypeAlarmCommandKind AlarmQueryStateJSON::stringToAlarmCommandKind(const char *chars)
  {
    if (strncmp(chars, "Alarm", 5) == 0)
      {
        switch ((unsigned char)(chars[5]))
          {
            case 'D':
                if (strcmp(&(chars[6]), "isplayCommand") == 0)
                    return AlarmCommandKind_AlarmDisplayCommand;
                break;
            case 'N':
                if (strcmp(&(chars[6]), "otUnderstoodCommand") == 0)
                    return AlarmCommandKind_AlarmNotUnderstoodCommand;
                break;
            case 'S':
                switch ((unsigned char)(chars[6]))
                  {
                    case 'e':
                        if (strcmp(&(chars[7]), "tCommand") == 0)
                            return AlarmCommandKind_AlarmSetCommand;
                        break;
                    case 't':
                        if (strcmp(&(chars[7]), "artCommand") == 0)
                            return AlarmCommandKind_AlarmStartCommand;
                        break;
                    default:
                        break;
                  }
                break;
            case 'U':
                if (strcmp(&(chars[6]), "nsetCommand") == 0)
                    return AlarmCommandKind_AlarmUnsetCommand;
                break;
            default:
                break;
          }
      }
    throw("The value for field `AlarmCommandKind' is not one of the legal values.");
  }

const char *AlarmQueryStateJSON::stringFromAlarmCommandKind(TypeAlarmCommandKind the_enum)
  {
    switch (the_enum)
      {
        case AlarmCommandKind_AlarmStartCommand:
            return "AlarmStartCommand";
        case AlarmCommandKind_AlarmDisplayCommand:
            return "AlarmDisplayCommand";
        case AlarmCommandKind_AlarmSetCommand:
            return "AlarmSetCommand";
        case AlarmCommandKind_AlarmNotUnderstoodCommand:
            return "AlarmNotUnderstoodCommand";
        case AlarmCommandKind_AlarmUnsetCommand:
            return "AlarmUnsetCommand";
        default:
            assert(false);
            return NULL;
      }
  }

AlarmQueryStateJSON::TypeDaysOfWeek::TypeDaysOfWeek(void)
  {
  }

AlarmQueryStateJSON::TypeDaysOfWeek::TypeDaysOfWeek(const TypeDaysOfWeek &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

AlarmQueryStateJSON::TypeDaysOfWeek::TypeDaysOfWeek(TypeDaysOfWeekKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool AlarmQueryStateJSON::TypeDaysOfWeek::operator==(const TypeDaysOfWeek &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool AlarmQueryStateJSON::TypeDaysOfWeek::operator!=(const TypeDaysOfWeek &other) const
  {
    return !(operator==(other));
  }

bool AlarmQueryStateJSON::TypeDaysOfWeek::operator<(const TypeDaysOfWeek &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool AlarmQueryStateJSON::TypeDaysOfWeek::operator>(const TypeDaysOfWeek &other) const
  {
    return other.operator<(*this);
  }

bool AlarmQueryStateJSON::TypeDaysOfWeek::operator>=(const TypeDaysOfWeek &other) const
  {
    return !(operator<(other));
  }

bool AlarmQueryStateJSON::TypeDaysOfWeek::operator<=(const TypeDaysOfWeek &other) const
  {
    return !(other.operator<(*this));
  }

AlarmQueryStateJSON::TypeDaysOfWeekKnownValues AlarmQueryStateJSON::stringToDaysOfWeek(const char *chars)
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

const char *AlarmQueryStateJSON::stringFromDaysOfWeek(TypeDaysOfWeekKnownValues the_enum)
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

AlarmQueryStateJSON::AlarmQueryStateJSON(const AlarmQueryStateJSON &)
  {
    assert(false);
  }

AlarmQueryStateJSON &AlarmQueryStateJSON::operator=(const AlarmQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AlarmQueryStateJSON::fromJSONAlarmCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlarmCommandKind of AlarmQueryStateJSON is not a string.");
    TypeAlarmCommandKind the_enum;
    if (strncmp(json_string->getData(), "Alarm", 5) == 0)
      {
        switch ((unsigned char)(json_string->getData()[5]))
          {
            case 'D':
                if (strcmp(&(json_string->getData()[6]), "isplayCommand") == 0)
                      {
                        the_enum = AlarmCommandKind_AlarmDisplayCommand;
                        goto enum_is_done;
                      }
                break;
            case 'N':
                if (strcmp(&(json_string->getData()[6]), "otUnderstoodCommand") == 0)
                      {
                        the_enum = AlarmCommandKind_AlarmNotUnderstoodCommand;
                        goto enum_is_done;
                      }
                break;
            case 'S':
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'e':
                        if (strcmp(&(json_string->getData()[7]), "tCommand") == 0)
                              {
                                the_enum = AlarmCommandKind_AlarmSetCommand;
                                goto enum_is_done;
                              }
                        break;
                    case 't':
                        if (strcmp(&(json_string->getData()[7]), "artCommand") == 0)
                              {
                                the_enum = AlarmCommandKind_AlarmStartCommand;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'U':
                if (strcmp(&(json_string->getData()[6]), "nsetCommand") == 0)
                      {
                        the_enum = AlarmCommandKind_AlarmUnsetCommand;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field AlarmCommandKind of AlarmQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setAlarmCommandKind(the_enum);
  }

void AlarmQueryStateJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of AlarmQueryStateJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void AlarmQueryStateJSON::fromJSONIsWake(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsWake of AlarmQueryStateJSON is not true for false.");
          }
      }
    setIsWake(the_bool);
  }

void AlarmQueryStateJSON::fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRecurring of AlarmQueryStateJSON is not true for false.");
          }
      }
    setIsRecurring(the_bool);
  }

void AlarmQueryStateJSON::fromJSONDaysOfWeek(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DaysOfWeek of AlarmQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeDaysOfWeek > vector_DaysOfWeek1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DaysOfWeek of AlarmQueryStateJSON is not a string.");
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

AlarmQueryStateJSON::AlarmQueryStateJSON(void) :
        flagHasAlarmCommandKind(false),
        flagHasTitle(false),
        flagHasIsWake(false),
        flagHasIsRecurring(false),
        flagHasDaysOfWeek(false)
  {
    storeIsWake = false;
    storeIsRecurring = false;
    extraIndex = create_string_index();
  }

AlarmQueryStateJSON::~AlarmQueryStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AlarmQueryStateJSON::hasAlarmCommandKind(void) const
  {
    return flagHasAlarmCommandKind;
  }

AlarmQueryStateJSON::TypeAlarmCommandKind AlarmQueryStateJSON::getAlarmCommandKind(void)
  {
    assert(flagHasAlarmCommandKind);
    return storeAlarmCommandKind;
  }

const AlarmQueryStateJSON::TypeAlarmCommandKind AlarmQueryStateJSON::getAlarmCommandKind(void) const
  {
    assert(flagHasAlarmCommandKind);
    return storeAlarmCommandKind;
  }

const char *AlarmQueryStateJSON::getAlarmCommandKindAsChars(void) const
  {
    return stringFromAlarmCommandKind(getAlarmCommandKind());
  }

std::string AlarmQueryStateJSON::getAlarmCommandKindAsString(void) const
  {
    return stringFromAlarmCommandKind(getAlarmCommandKind());
  }

bool AlarmQueryStateJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string AlarmQueryStateJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string AlarmQueryStateJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool AlarmQueryStateJSON::hasIsWake(void) const
  {
    return flagHasIsWake;
  }

bool AlarmQueryStateJSON::getIsWake(void)
  {
    return storeIsWake;
  }

const bool AlarmQueryStateJSON::getIsWake(void) const
  {
    return storeIsWake;
  }

bool AlarmQueryStateJSON::hasIsRecurring(void) const
  {
    return flagHasIsRecurring;
  }

bool AlarmQueryStateJSON::getIsRecurring(void)
  {
    return storeIsRecurring;
  }

const bool AlarmQueryStateJSON::getIsRecurring(void) const
  {
    return storeIsRecurring;
  }

bool AlarmQueryStateJSON::hasDaysOfWeek(void) const
  {
    return flagHasDaysOfWeek;
  }

size_t AlarmQueryStateJSON::countOfDaysOfWeek(void) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek.size();
  }

AlarmQueryStateJSON::TypeDaysOfWeek AlarmQueryStateJSON::elementOfDaysOfWeek(size_t element_num)
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek[element_num];
  }

const AlarmQueryStateJSON::TypeDaysOfWeek AlarmQueryStateJSON::elementOfDaysOfWeek(size_t element_num) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek[element_num];
  }

std::vector< AlarmQueryStateJSON::TypeDaysOfWeek > AlarmQueryStateJSON::getDaysOfWeek(void)
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek;
  }

const std::vector< AlarmQueryStateJSON::TypeDaysOfWeek > AlarmQueryStateJSON::getDaysOfWeek(void) const
  {
    assert(flagHasDaysOfWeek);
    return storeDaysOfWeek;
  }

AlarmQueryStateJSON *AlarmQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmQueryStateJSON>, AlarmQueryStateJSON *, bool> generator("Type AlarmQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
