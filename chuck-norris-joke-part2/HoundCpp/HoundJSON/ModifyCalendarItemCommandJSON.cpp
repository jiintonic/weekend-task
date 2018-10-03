/* file "ModifyCalendarItemCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ModifyCalendarItemCommandJSON.h"

#include "ModifyCalendarItemCommandJSON.h"


ModifyCalendarItemCommandJSON::TypeNewFrequencyType ModifyCalendarItemCommandJSON::stringToNewFrequencyType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'd':
            if (strcmp(&(chars[1]), "aily") == 0)
                return NewFrequencyType_daily;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "onthly") == 0)
                return NewFrequencyType_monthly;
            break;
        case 'o':
            if (strcmp(&(chars[1]), "ne-time") == 0)
                return NewFrequencyType_one_time;
            break;
        case 'u':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return NewFrequencyType_unknown;
            break;
        case 'w':
            if (strcmp(&(chars[1]), "eekly") == 0)
                return NewFrequencyType_weekly;
            break;
        case 'y':
            if (strcmp(&(chars[1]), "early") == 0)
                return NewFrequencyType_yearly;
            break;
        default:
            break;
      }
    throw("The value for field `NewFrequencyType' is not one of the legal values.");
  }

const char *ModifyCalendarItemCommandJSON::stringFromNewFrequencyType(TypeNewFrequencyType the_enum)
  {
    switch (the_enum)
      {
        case NewFrequencyType_unknown:
            return "unknown";
        case NewFrequencyType_one_time:
            return "one-time";
        case NewFrequencyType_daily:
            return "daily";
        case NewFrequencyType_weekly:
            return "weekly";
        case NewFrequencyType_monthly:
            return "monthly";
        case NewFrequencyType_yearly:
            return "yearly";
        default:
            assert(false);
            return NULL;
      }
  }

ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::TypeSetEventFieldsJSON(const TypeSetEventFieldsJSON &)
  {
    assert(false);
  }

ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON &ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::operator=(const TypeSetEventFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::fromJSONFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FieldName of TypeSetEventFieldsJSON is not a string.");
    setFieldName(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::fromJSONNewValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setNewValue(json_value);
  }

ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::TypeSetEventFieldsJSON(void) :
        flagHasFieldName(false),
        flagHasNewValue(false)
  {
    extraIndex = create_string_index();
  }

ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::~TypeSetEventFieldsJSON(void)
  {
    if (flagHasNewValue)
      {
        storeNewValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::hasFieldName(void) const
  {
    return flagHasFieldName;
  }

std::string ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::getFieldName(void)
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

const std::string ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::getFieldName(void) const
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

bool ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::hasNewValue(void) const
  {
    return flagHasNewValue;
  }

JSONValue * ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::getNewValue(void)
  {
    assert(flagHasNewValue);
    return storeNewValue;
  }

const JSONValue * ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::getNewValue(void) const
  {
    assert(flagHasNewValue);
    return storeNewValue;
  }

ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::TypeAppendEventFieldsJSON(const TypeAppendEventFieldsJSON &)
  {
    assert(false);
  }

ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON &ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::operator=(const TypeAppendEventFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::fromJSONFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FieldName of TypeAppendEventFieldsJSON is not a string.");
    setFieldName(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::fromJSONNewValues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewValues of TypeAppendEventFieldsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field NewValues of TypeAppendEventFieldsJSON has too few elements.");
    std::vector< JSONValue * > vector_NewValues1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        vector_NewValues1[num1] = json_array1->component(num1);
      }
    assert(vector_NewValues1.size() >= 1);
    initNewValues();
    for (size_t num13 = 0; num13 < vector_NewValues1.size(); ++num13)
        appendNewValues(vector_NewValues1[num13]);
    for (size_t num1 = 0; num1 < vector_NewValues1.size(); ++num1)
      {
      }
  }

ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::TypeAppendEventFieldsJSON(void) :
        flagHasFieldName(false),
        flagHasNewValues(false)
  {
    extraIndex = create_string_index();
  }

ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::~TypeAppendEventFieldsJSON(void)
  {
    if (flagHasNewValues)
      {
        for (size_t num25 = 0; num25 < storeNewValues.size(); ++num25)
          {
            storeNewValues[num25]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::hasFieldName(void) const
  {
    return flagHasFieldName;
  }

std::string ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::getFieldName(void)
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

const std::string ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::getFieldName(void) const
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

bool ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::hasNewValues(void) const
  {
    return flagHasNewValues;
  }

size_t ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::countOfNewValues(void) const
  {
    assert(flagHasNewValues);
    return storeNewValues.size();
  }

JSONValue * ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::elementOfNewValues(size_t element_num)
  {
    assert(flagHasNewValues);
    return storeNewValues[element_num];
  }

const JSONValue * ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::elementOfNewValues(size_t element_num) const
  {
    assert(flagHasNewValues);
    return storeNewValues[element_num];
  }

std::vector< JSONValue * > ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::getNewValues(void)
  {
    assert(flagHasNewValues);
    return storeNewValues;
  }

const std::vector< JSONValue * > ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::getNewValues(void) const
  {
    assert(flagHasNewValues);
    return storeNewValues;
  }

ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::TypeAddEventFieldsJSON(const TypeAddEventFieldsJSON &)
  {
    assert(false);
  }

ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON &ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::operator=(const TypeAddEventFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::fromJSONFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FieldName of TypeAddEventFieldsJSON is not a string.");
    setFieldName(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::fromJSONNewValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setNewValue(json_value);
  }

ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::TypeAddEventFieldsJSON(void) :
        flagHasFieldName(false),
        flagHasNewValue(false)
  {
    extraIndex = create_string_index();
  }

ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::~TypeAddEventFieldsJSON(void)
  {
    if (flagHasNewValue)
      {
        storeNewValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::hasFieldName(void) const
  {
    return flagHasFieldName;
  }

std::string ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::getFieldName(void)
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

const std::string ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::getFieldName(void) const
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

bool ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::hasNewValue(void) const
  {
    return flagHasNewValue;
  }

JSONValue * ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::getNewValue(void)
  {
    assert(flagHasNewValue);
    return storeNewValue;
  }

const JSONValue * ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::getNewValue(void) const
  {
    assert(flagHasNewValue);
    return storeNewValue;
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeNewFrequencyType ModifyCalendarItemCommandJSON::TypeNativeDataJSON::stringToNewFrequencyType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'd':
            if (strcmp(&(chars[1]), "aily") == 0)
                return NewFrequencyType_daily;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "onthly") == 0)
                return NewFrequencyType_monthly;
            break;
        case 'o':
            if (strcmp(&(chars[1]), "ne-time") == 0)
                return NewFrequencyType_one_time;
            break;
        case 'u':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return NewFrequencyType_unknown;
            break;
        case 'w':
            if (strcmp(&(chars[1]), "eekly") == 0)
                return NewFrequencyType_weekly;
            break;
        case 'y':
            if (strcmp(&(chars[1]), "early") == 0)
                return NewFrequencyType_yearly;
            break;
        default:
            break;
      }
    throw("The value for field `NewFrequencyType' is not one of the legal values.");
  }

const char *ModifyCalendarItemCommandJSON::TypeNativeDataJSON::stringFromNewFrequencyType(TypeNewFrequencyType the_enum)
  {
    switch (the_enum)
      {
        case NewFrequencyType_unknown:
            return "unknown";
        case NewFrequencyType_one_time:
            return "one-time";
        case NewFrequencyType_daily:
            return "daily";
        case NewFrequencyType_weekly:
            return "weekly";
        case NewFrequencyType_monthly:
            return "monthly";
        case NewFrequencyType_yearly:
            return "yearly";
        default:
            assert(false);
            return NULL;
      }
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::TypeSetEventFieldsJSON(const TypeSetEventFieldsJSON &)
  {
    assert(false);
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON &ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::operator=(const TypeSetEventFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::fromJSONFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FieldName of TypeSetEventFieldsJSON is not a string.");
    setFieldName(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::fromJSONNewValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setNewValue(json_value);
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::TypeSetEventFieldsJSON(void) :
        flagHasFieldName(false),
        flagHasNewValue(false)
  {
    extraIndex = create_string_index();
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::~TypeSetEventFieldsJSON(void)
  {
    if (flagHasNewValue)
      {
        storeNewValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::hasFieldName(void) const
  {
    return flagHasFieldName;
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::getFieldName(void)
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

const std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::getFieldName(void) const
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::hasNewValue(void) const
  {
    return flagHasNewValue;
  }

JSONValue * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::getNewValue(void)
  {
    assert(flagHasNewValue);
    return storeNewValue;
  }

const JSONValue * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::getNewValue(void) const
  {
    assert(flagHasNewValue);
    return storeNewValue;
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::TypeAppendEventFieldsJSON(const TypeAppendEventFieldsJSON &)
  {
    assert(false);
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON &ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::operator=(const TypeAppendEventFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::fromJSONFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FieldName of TypeAppendEventFieldsJSON is not a string.");
    setFieldName(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::fromJSONNewValues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewValues of TypeAppendEventFieldsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field NewValues of TypeAppendEventFieldsJSON has too few elements.");
    std::vector< JSONValue * > vector_NewValues1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        vector_NewValues1[num1] = json_array1->component(num1);
      }
    assert(vector_NewValues1.size() >= 1);
    initNewValues();
    for (size_t num14 = 0; num14 < vector_NewValues1.size(); ++num14)
        appendNewValues(vector_NewValues1[num14]);
    for (size_t num1 = 0; num1 < vector_NewValues1.size(); ++num1)
      {
      }
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::TypeAppendEventFieldsJSON(void) :
        flagHasFieldName(false),
        flagHasNewValues(false)
  {
    extraIndex = create_string_index();
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::~TypeAppendEventFieldsJSON(void)
  {
    if (flagHasNewValues)
      {
        for (size_t num28 = 0; num28 < storeNewValues.size(); ++num28)
          {
            storeNewValues[num28]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::hasFieldName(void) const
  {
    return flagHasFieldName;
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::getFieldName(void)
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

const std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::getFieldName(void) const
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::hasNewValues(void) const
  {
    return flagHasNewValues;
  }

size_t ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::countOfNewValues(void) const
  {
    assert(flagHasNewValues);
    return storeNewValues.size();
  }

JSONValue * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::elementOfNewValues(size_t element_num)
  {
    assert(flagHasNewValues);
    return storeNewValues[element_num];
  }

const JSONValue * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::elementOfNewValues(size_t element_num) const
  {
    assert(flagHasNewValues);
    return storeNewValues[element_num];
  }

std::vector< JSONValue * > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::getNewValues(void)
  {
    assert(flagHasNewValues);
    return storeNewValues;
  }

const std::vector< JSONValue * > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::getNewValues(void) const
  {
    assert(flagHasNewValues);
    return storeNewValues;
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::TypeAddEventFieldsJSON(const TypeAddEventFieldsJSON &)
  {
    assert(false);
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON &ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::operator=(const TypeAddEventFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::fromJSONFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FieldName of TypeAddEventFieldsJSON is not a string.");
    setFieldName(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::fromJSONNewValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setNewValue(json_value);
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::TypeAddEventFieldsJSON(void) :
        flagHasFieldName(false),
        flagHasNewValue(false)
  {
    extraIndex = create_string_index();
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::~TypeAddEventFieldsJSON(void)
  {
    if (flagHasNewValue)
      {
        storeNewValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::hasFieldName(void) const
  {
    return flagHasFieldName;
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::getFieldName(void)
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

const std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::getFieldName(void) const
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::hasNewValue(void) const
  {
    return flagHasNewValue;
  }

JSONValue * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::getNewValue(void)
  {
    assert(flagHasNewValue);
    return storeNewValue;
  }

const JSONValue * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::getNewValue(void) const
  {
    assert(flagHasNewValue);
    return storeNewValue;
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON &ModifyCalendarItemCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONEventIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EventIDs of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field EventIDs of TypeNativeDataJSON has too few elements.");
    std::vector< std::string > vector_EventIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field EventIDs of TypeNativeDataJSON is not a string.");
        vector_EventIDs1[num1] = std::string(json_string->getData());
      }
    assert(vector_EventIDs1.size() >= 1);
    initEventIDs();
    for (size_t num15 = 0; num15 < vector_EventIDs1.size(); ++num15)
        appendEventIDs(vector_EventIDs1[num15]);
    for (size_t num1 = 0; num1 < vector_EventIDs1.size(); ++num1)
      {
      }
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CalendarQueryJSON *convert_classy = CalendarQueryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQuery(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONNewItemType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewItemType of TypeNativeDataJSON is not a string.");
    setNewItemType(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONNewTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewTitle of TypeNativeDataJSON is not a string.");
    setNewTitle(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONNewLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewLocation of TypeNativeDataJSON is not a string.");
    setNewLocation(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONNewStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNewStart(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONStartDeltaSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StartDeltaSeconds of TypeNativeDataJSON is not a number.");
          }
      }
    setStartDeltaSecondsText(the_rational_text);
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONStartDeltaDays(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StartDeltaDays of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StartDeltaDays of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStartDeltaDays(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONStartDeltaMonths(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StartDeltaMonths of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StartDeltaMonths of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStartDeltaMonths(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONNewEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNewEnd(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONEndDeltaSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EndDeltaSeconds of TypeNativeDataJSON is not a number.");
          }
      }
    setEndDeltaSecondsText(the_rational_text);
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONEndDeltaDays(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EndDeltaDays of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EndDeltaDays of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setEndDeltaDays(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONEndDeltaMonths(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EndDeltaMonths of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EndDeltaMonths of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setEndDeltaMonths(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONNewFrequencyType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewFrequencyType of TypeNativeDataJSON is not a string.");
    TypeNewFrequencyType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'd':
            if (strcmp(&(json_string->getData()[1]), "aily") == 0)
                  {
                    the_enum = NewFrequencyType_daily;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "onthly") == 0)
                  {
                    the_enum = NewFrequencyType_monthly;
                    goto enum_is_done;
                  }
            break;
        case 'o':
            if (strcmp(&(json_string->getData()[1]), "ne-time") == 0)
                  {
                    the_enum = NewFrequencyType_one_time;
                    goto enum_is_done;
                  }
            break;
        case 'u':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = NewFrequencyType_unknown;
                    goto enum_is_done;
                  }
            break;
        case 'w':
            if (strcmp(&(json_string->getData()[1]), "eekly") == 0)
                  {
                    the_enum = NewFrequencyType_weekly;
                    goto enum_is_done;
                  }
            break;
        case 'y':
            if (strcmp(&(json_string->getData()[1]), "early") == 0)
                  {
                    the_enum = NewFrequencyType_yearly;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field NewFrequencyType of TypeNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setNewFrequencyType(the_enum);
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONNewFrequencyMultiplier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NewFrequencyMultiplier of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NewFrequencyMultiplier of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNewFrequencyMultiplier(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONSetEventFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SetEventFields of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeSetEventFieldsJSON * > vector_SetEventFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeSetEventFieldsJSON *convert_classy = TypeSetEventFieldsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SetEventFields1[num1] = convert_classy;
      }
    initSetEventFields();
    for (size_t num16 = 0; num16 < vector_SetEventFields1.size(); ++num16)
        appendSetEventFields(vector_SetEventFields1[num16]);
    for (size_t num1 = 0; num1 < vector_SetEventFields1.size(); ++num1)
      {
        vector_SetEventFields1[num1]->remove_reference();
      }
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONAppendEventFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AppendEventFields of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAppendEventFieldsJSON * > vector_AppendEventFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAppendEventFieldsJSON *convert_classy = TypeAppendEventFieldsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AppendEventFields1[num1] = convert_classy;
      }
    initAppendEventFields();
    for (size_t num17 = 0; num17 < vector_AppendEventFields1.size(); ++num17)
        appendAppendEventFields(vector_AppendEventFields1[num17]);
    for (size_t num1 = 0; num1 < vector_AppendEventFields1.size(); ++num1)
      {
        vector_AppendEventFields1[num1]->remove_reference();
      }
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONRemoveEventFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RemoveEventFields of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_RemoveEventFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field RemoveEventFields of TypeNativeDataJSON is not a string.");
        vector_RemoveEventFields1[num1] = std::string(json_string->getData());
      }
    initRemoveEventFields();
    for (size_t num18 = 0; num18 < vector_RemoveEventFields1.size(); ++num18)
        appendRemoveEventFields(vector_RemoveEventFields1[num18]);
    for (size_t num1 = 0; num1 < vector_RemoveEventFields1.size(); ++num1)
      {
      }
  }

void ModifyCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONAddEventFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AddEventFields of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAddEventFieldsJSON * > vector_AddEventFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAddEventFieldsJSON *convert_classy = TypeAddEventFieldsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AddEventFields1[num1] = convert_classy;
      }
    initAddEventFields();
    for (size_t num19 = 0; num19 < vector_AddEventFields1.size(); ++num19)
        appendAddEventFields(vector_AddEventFields1[num19]);
    for (size_t num1 = 0; num1 < vector_AddEventFields1.size(); ++num1)
      {
        vector_AddEventFields1[num1]->remove_reference();
      }
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasEventIDs(false),
        flagHasQuery(false),
        flagHasNewItemType(false),
        flagHasNewTitle(false),
        flagHasNewLocation(false),
        flagHasNewStart(false),
        flagHasStartDeltaSeconds(false),
        flagHasStartDeltaDays(false),
        flagHasStartDeltaMonths(false),
        flagHasNewEnd(false),
        flagHasEndDeltaSeconds(false),
        flagHasEndDeltaDays(false),
        flagHasEndDeltaMonths(false),
        flagHasNewFrequencyType(false),
        flagHasNewFrequencyMultiplier(false),
        flagHasSetEventFields(false),
        flagHasAppendEventFields(false),
        flagHasRemoveEventFields(false),
        flagHasAddEventFields(false)
  {
    extraIndex = create_string_index();
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasQuery)
      {
        storeQuery->remove_reference();
      }
    if (flagHasNewStart)
      {
        storeNewStart->remove_reference();
      }
    if (flagHasNewEnd)
      {
        storeNewEnd->remove_reference();
      }
    if (flagHasSetEventFields)
      {
        for (size_t num31 = 0; num31 < storeSetEventFields.size(); ++num31)
          {
            storeSetEventFields[num31]->remove_reference();
          }
      }
    if (flagHasAppendEventFields)
      {
        for (size_t num32 = 0; num32 < storeAppendEventFields.size(); ++num32)
          {
            storeAppendEventFields[num32]->remove_reference();
          }
      }
    if (flagHasAddEventFields)
      {
        for (size_t num33 = 0; num33 < storeAddEventFields.size(); ++num33)
          {
            storeAddEventFields[num33]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasEventIDs(void) const
  {
    return flagHasEventIDs;
  }

size_t ModifyCalendarItemCommandJSON::TypeNativeDataJSON::countOfEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs.size();
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfEventIDs(size_t element_num)
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

const std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfEventIDs(size_t element_num) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

std::vector< std::string > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEventIDs(void)
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

const std::vector< std::string > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasQuery(void) const
  {
    return flagHasQuery;
  }

CalendarQueryJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getQuery(void)
  {
    assert(flagHasQuery);
    return storeQuery;
  }

const CalendarQueryJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getQuery(void) const
  {
    assert(flagHasQuery);
    return storeQuery;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasNewItemType(void) const
  {
    return flagHasNewItemType;
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewItemType(void)
  {
    assert(flagHasNewItemType);
    return storeNewItemType;
  }

const std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewItemType(void) const
  {
    assert(flagHasNewItemType);
    return storeNewItemType;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasNewTitle(void) const
  {
    return flagHasNewTitle;
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewTitle(void)
  {
    assert(flagHasNewTitle);
    return storeNewTitle;
  }

const std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewTitle(void) const
  {
    assert(flagHasNewTitle);
    return storeNewTitle;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasNewLocation(void) const
  {
    return flagHasNewLocation;
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewLocation(void)
  {
    assert(flagHasNewLocation);
    return storeNewLocation;
  }

const std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewLocation(void) const
  {
    assert(flagHasNewLocation);
    return storeNewLocation;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasNewStart(void) const
  {
    return flagHasNewStart;
  }

DateAndOrTimeJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewStart(void)
  {
    assert(flagHasNewStart);
    return storeNewStart;
  }

const DateAndOrTimeJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewStart(void) const
  {
    assert(flagHasNewStart);
    return storeNewStart;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasStartDeltaSeconds(void) const
  {
    return flagHasStartDeltaSeconds;
  }

double ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getStartDeltaSeconds(void)
  {
    assert(flagHasStartDeltaSeconds);
    if (textStoreStartDeltaSeconds != "")
      {
        return atof(textStoreStartDeltaSeconds.c_str());
      }
    return storeStartDeltaSeconds;
  }

const double ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getStartDeltaSeconds(void) const
  {
    assert(flagHasStartDeltaSeconds);
    if (textStoreStartDeltaSeconds != "")
      {
        return atof(textStoreStartDeltaSeconds.c_str());
      }
    return storeStartDeltaSeconds;
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getStartDeltaSecondsAsText(void) const
  {
    assert(flagHasStartDeltaSeconds);
    if (textStoreStartDeltaSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeStartDeltaSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreStartDeltaSeconds);
      }
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasStartDeltaDays(void) const
  {
    return flagHasStartDeltaDays;
  }

OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getStartDeltaDays(void)
  {
    assert(flagHasStartDeltaDays);
    return storeStartDeltaDays;
  }

const OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getStartDeltaDays(void) const
  {
    assert(flagHasStartDeltaDays);
    return storeStartDeltaDays;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasStartDeltaMonths(void) const
  {
    return flagHasStartDeltaMonths;
  }

OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getStartDeltaMonths(void)
  {
    assert(flagHasStartDeltaMonths);
    return storeStartDeltaMonths;
  }

const OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getStartDeltaMonths(void) const
  {
    assert(flagHasStartDeltaMonths);
    return storeStartDeltaMonths;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasNewEnd(void) const
  {
    return flagHasNewEnd;
  }

DateAndOrTimeJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewEnd(void)
  {
    assert(flagHasNewEnd);
    return storeNewEnd;
  }

const DateAndOrTimeJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewEnd(void) const
  {
    assert(flagHasNewEnd);
    return storeNewEnd;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasEndDeltaSeconds(void) const
  {
    return flagHasEndDeltaSeconds;
  }

double ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEndDeltaSeconds(void)
  {
    assert(flagHasEndDeltaSeconds);
    if (textStoreEndDeltaSeconds != "")
      {
        return atof(textStoreEndDeltaSeconds.c_str());
      }
    return storeEndDeltaSeconds;
  }

const double ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEndDeltaSeconds(void) const
  {
    assert(flagHasEndDeltaSeconds);
    if (textStoreEndDeltaSeconds != "")
      {
        return atof(textStoreEndDeltaSeconds.c_str());
      }
    return storeEndDeltaSeconds;
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEndDeltaSecondsAsText(void) const
  {
    assert(flagHasEndDeltaSeconds);
    if (textStoreEndDeltaSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeEndDeltaSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreEndDeltaSeconds);
      }
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasEndDeltaDays(void) const
  {
    return flagHasEndDeltaDays;
  }

OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEndDeltaDays(void)
  {
    assert(flagHasEndDeltaDays);
    return storeEndDeltaDays;
  }

const OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEndDeltaDays(void) const
  {
    assert(flagHasEndDeltaDays);
    return storeEndDeltaDays;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasEndDeltaMonths(void) const
  {
    return flagHasEndDeltaMonths;
  }

OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEndDeltaMonths(void)
  {
    assert(flagHasEndDeltaMonths);
    return storeEndDeltaMonths;
  }

const OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getEndDeltaMonths(void) const
  {
    assert(flagHasEndDeltaMonths);
    return storeEndDeltaMonths;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasNewFrequencyType(void) const
  {
    return flagHasNewFrequencyType;
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeNewFrequencyType ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewFrequencyType(void)
  {
    assert(flagHasNewFrequencyType);
    return storeNewFrequencyType;
  }

const ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeNewFrequencyType ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewFrequencyType(void) const
  {
    assert(flagHasNewFrequencyType);
    return storeNewFrequencyType;
  }

const char *ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewFrequencyTypeAsChars(void) const
  {
    return stringFromNewFrequencyType(getNewFrequencyType());
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewFrequencyTypeAsString(void) const
  {
    return stringFromNewFrequencyType(getNewFrequencyType());
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasNewFrequencyMultiplier(void) const
  {
    return flagHasNewFrequencyMultiplier;
  }

OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewFrequencyMultiplier(void)
  {
    assert(flagHasNewFrequencyMultiplier);
    return storeNewFrequencyMultiplier;
  }

const OInteger ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getNewFrequencyMultiplier(void) const
  {
    assert(flagHasNewFrequencyMultiplier);
    return storeNewFrequencyMultiplier;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasSetEventFields(void) const
  {
    return flagHasSetEventFields;
  }

size_t ModifyCalendarItemCommandJSON::TypeNativeDataJSON::countOfSetEventFields(void) const
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields.size();
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfSetEventFields(size_t element_num)
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields[element_num];
  }

const ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfSetEventFields(size_t element_num) const
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields[element_num];
  }

std::vector< ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON * > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getSetEventFields(void)
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields;
  }

const std::vector< ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON * > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getSetEventFields(void) const
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasAppendEventFields(void) const
  {
    return flagHasAppendEventFields;
  }

size_t ModifyCalendarItemCommandJSON::TypeNativeDataJSON::countOfAppendEventFields(void) const
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields.size();
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfAppendEventFields(size_t element_num)
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields[element_num];
  }

const ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfAppendEventFields(size_t element_num) const
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields[element_num];
  }

std::vector< ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON * > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getAppendEventFields(void)
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields;
  }

const std::vector< ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON * > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getAppendEventFields(void) const
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasRemoveEventFields(void) const
  {
    return flagHasRemoveEventFields;
  }

size_t ModifyCalendarItemCommandJSON::TypeNativeDataJSON::countOfRemoveEventFields(void) const
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields.size();
  }

std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfRemoveEventFields(size_t element_num)
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields[element_num];
  }

const std::string ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfRemoveEventFields(size_t element_num) const
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields[element_num];
  }

std::vector< std::string > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getRemoveEventFields(void)
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields;
  }

const std::vector< std::string > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getRemoveEventFields(void) const
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields;
  }

bool ModifyCalendarItemCommandJSON::TypeNativeDataJSON::hasAddEventFields(void) const
  {
    return flagHasAddEventFields;
  }

size_t ModifyCalendarItemCommandJSON::TypeNativeDataJSON::countOfAddEventFields(void) const
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields.size();
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfAddEventFields(size_t element_num)
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields[element_num];
  }

const ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON * ModifyCalendarItemCommandJSON::TypeNativeDataJSON::elementOfAddEventFields(size_t element_num) const
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields[element_num];
  }

std::vector< ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON * > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getAddEventFields(void)
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields;
  }

const std::vector< ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON * > ModifyCalendarItemCommandJSON::TypeNativeDataJSON::getAddEventFields(void) const
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields;
  }

ModifyCalendarItemCommandJSON::ModifyCalendarItemCommandJSON(const ModifyCalendarItemCommandJSON &)
  {
    assert(false);
  }

ModifyCalendarItemCommandJSON &ModifyCalendarItemCommandJSON::operator=(const ModifyCalendarItemCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ModifyCalendarItemCommandJSON::extraEventIDsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_EventIDs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeEventIDs.size(); ++num1)
      {
        JSONStringValue *generated_string_EventIDs = new JSONStringValue(storeEventIDs[num1].c_str());
        generated_array_1_EventIDs->appendComponent(generated_string_EventIDs);
      }
    return generated_array_1_EventIDs;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraQueryToJSON(void) const
  {
    JSONValueHandler handler_Query;
    storeQuery->write_as_json(&handler_Query);
    handler_Query.result->add_reference();
    return handler_Query.result;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNewItemTypeToJSON(void) const
  {
    JSONStringValue *generated_string_NewItemType = new JSONStringValue(storeNewItemType.c_str());
    return generated_string_NewItemType;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNewTitleToJSON(void) const
  {
    JSONStringValue *generated_string_NewTitle = new JSONStringValue(storeNewTitle.c_str());
    return generated_string_NewTitle;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNewLocationToJSON(void) const
  {
    JSONStringValue *generated_string_NewLocation = new JSONStringValue(storeNewLocation.c_str());
    return generated_string_NewLocation;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNewStartToJSON(void) const
  {
    JSONValueHandler handler_NewStart;
    storeNewStart->write_as_json(&handler_NewStart);
    handler_NewStart.result->add_reference();
    return handler_NewStart.result;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraStartDeltaSecondsToJSON(void) const
  {
    JSONValue *generated_rational_StartDeltaSeconds;
    if (((double)(long int)storeStartDeltaSeconds) == storeStartDeltaSeconds)
        generated_rational_StartDeltaSeconds = new JSONIntegerValue((long int)(storeStartDeltaSeconds));
    else
        generated_rational_StartDeltaSeconds = new JSONRationalValue(storeStartDeltaSeconds, DBL_DIG);
    return generated_rational_StartDeltaSeconds;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraStartDeltaDaysToJSON(void) const
  {
    JSONIntegerValue *generated_integer_StartDeltaDays = new JSONIntegerValue(storeStartDeltaDays.get_o_integer());
    return generated_integer_StartDeltaDays;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraStartDeltaMonthsToJSON(void) const
  {
    JSONIntegerValue *generated_integer_StartDeltaMonths = new JSONIntegerValue(storeStartDeltaMonths.get_o_integer());
    return generated_integer_StartDeltaMonths;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNewEndToJSON(void) const
  {
    JSONValueHandler handler_NewEnd;
    storeNewEnd->write_as_json(&handler_NewEnd);
    handler_NewEnd.result->add_reference();
    return handler_NewEnd.result;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraEndDeltaSecondsToJSON(void) const
  {
    JSONValue *generated_rational_EndDeltaSeconds;
    if (((double)(long int)storeEndDeltaSeconds) == storeEndDeltaSeconds)
        generated_rational_EndDeltaSeconds = new JSONIntegerValue((long int)(storeEndDeltaSeconds));
    else
        generated_rational_EndDeltaSeconds = new JSONRationalValue(storeEndDeltaSeconds, DBL_DIG);
    return generated_rational_EndDeltaSeconds;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraEndDeltaDaysToJSON(void) const
  {
    JSONIntegerValue *generated_integer_EndDeltaDays = new JSONIntegerValue(storeEndDeltaDays.get_o_integer());
    return generated_integer_EndDeltaDays;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraEndDeltaMonthsToJSON(void) const
  {
    JSONIntegerValue *generated_integer_EndDeltaMonths = new JSONIntegerValue(storeEndDeltaMonths.get_o_integer());
    return generated_integer_EndDeltaMonths;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNewFrequencyTypeToJSON(void) const
  {
    JSONStringValue *generated_string_NewFrequencyType;
    switch (storeNewFrequencyType)
      {
        case NewFrequencyType_unknown:
            generated_string_NewFrequencyType = new JSONStringValue("unknown");
            break;
        case NewFrequencyType_one_time:
            generated_string_NewFrequencyType = new JSONStringValue("one-time");
            break;
        case NewFrequencyType_daily:
            generated_string_NewFrequencyType = new JSONStringValue("daily");
            break;
        case NewFrequencyType_weekly:
            generated_string_NewFrequencyType = new JSONStringValue("weekly");
            break;
        case NewFrequencyType_monthly:
            generated_string_NewFrequencyType = new JSONStringValue("monthly");
            break;
        case NewFrequencyType_yearly:
            generated_string_NewFrequencyType = new JSONStringValue("yearly");
            break;
        default:
            assert(false);
            generated_string_NewFrequencyType = NULL;
      }
    return generated_string_NewFrequencyType;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNewFrequencyMultiplierToJSON(void) const
  {
    JSONIntegerValue *generated_integer_NewFrequencyMultiplier = new JSONIntegerValue(storeNewFrequencyMultiplier.get_o_integer());
    return generated_integer_NewFrequencyMultiplier;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraSetEventFieldsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_SetEventFields = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeSetEventFields.size(); ++num2)
      {
        JSONValueHandler handler_SetEventFields;
        storeSetEventFields[num2]->write_as_json(&handler_SetEventFields);
        handler_SetEventFields.result->add_reference();
        generated_array_2_SetEventFields->appendComponent(handler_SetEventFields.result);
        handler_SetEventFields.result->remove_reference();
      }
    return generated_array_2_SetEventFields;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraAppendEventFieldsToJSON(void) const
  {
    JSONArrayValue *generated_array_3_AppendEventFields = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeAppendEventFields.size(); ++num3)
      {
        JSONValueHandler handler_AppendEventFields;
        storeAppendEventFields[num3]->write_as_json(&handler_AppendEventFields);
        handler_AppendEventFields.result->add_reference();
        generated_array_3_AppendEventFields->appendComponent(handler_AppendEventFields.result);
        handler_AppendEventFields.result->remove_reference();
      }
    return generated_array_3_AppendEventFields;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraRemoveEventFieldsToJSON(void) const
  {
    JSONArrayValue *generated_array_4_RemoveEventFields = new JSONArrayValue();
    for (size_t num4 = 0; num4 < storeRemoveEventFields.size(); ++num4)
      {
        JSONStringValue *generated_string_RemoveEventFields = new JSONStringValue(storeRemoveEventFields[num4].c_str());
        generated_array_4_RemoveEventFields->appendComponent(generated_string_RemoveEventFields);
      }
    return generated_array_4_RemoveEventFields;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraAddEventFieldsToJSON(void) const
  {
    JSONArrayValue *generated_array_5_AddEventFields = new JSONArrayValue();
    for (size_t num5 = 0; num5 < storeAddEventFields.size(); ++num5)
      {
        JSONValueHandler handler_AddEventFields;
        storeAddEventFields[num5]->write_as_json(&handler_AddEventFields);
        handler_AddEventFields.result->add_reference();
        generated_array_5_AddEventFields->appendComponent(handler_AddEventFields.result);
        handler_AddEventFields.result->remove_reference();
      }
    return generated_array_5_AddEventFields;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraEventsConflictResultToJSON(void) const
  {
    JSONValueHandler handler_EventsConflictResult;
    storeEventsConflictResult->write_as_json(&handler_EventsConflictResult);
    handler_EventsConflictResult.result->add_reference();
    return handler_EventsConflictResult.result;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraCalendarPreferenceIsNotSetResultToJSON(void) const
  {
    JSONValueHandler handler_CalendarPreferenceIsNotSetResult;
    storeCalendarPreferenceIsNotSetResult->write_as_json(&handler_CalendarPreferenceIsNotSetResult);
    handler_CalendarPreferenceIsNotSetResult.result->add_reference();
    return handler_CalendarPreferenceIsNotSetResult.result;
  }

JSONValue *ModifyCalendarItemCommandJSON::extraNoMatchResultToJSON(void) const
  {
    JSONValueHandler handler_NoMatchResult;
    storeNoMatchResult->write_as_json(&handler_NoMatchResult);
    handler_NoMatchResult.result->add_reference();
    return handler_NoMatchResult.result;
  }

void ModifyCalendarItemCommandJSON::fromJSONEventIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EventIDs of ModifyCalendarItemCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field EventIDs of ModifyCalendarItemCommandJSON has too few elements.");
    std::vector< std::string > vector_EventIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field EventIDs of ModifyCalendarItemCommandJSON is not a string.");
        vector_EventIDs1[num1] = std::string(json_string->getData());
      }
    assert(vector_EventIDs1.size() >= 1);
    initEventIDs();
    for (size_t num20 = 0; num20 < vector_EventIDs1.size(); ++num20)
        appendEventIDs(vector_EventIDs1[num20]);
    for (size_t num1 = 0; num1 < vector_EventIDs1.size(); ++num1)
      {
      }
  }

void ModifyCalendarItemCommandJSON::fromJSONQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CalendarQueryJSON *convert_classy = CalendarQueryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQuery(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::fromJSONNewItemType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewItemType of ModifyCalendarItemCommandJSON is not a string.");
    setNewItemType(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::fromJSONNewTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewTitle of ModifyCalendarItemCommandJSON is not a string.");
    setNewTitle(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::fromJSONNewLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewLocation of ModifyCalendarItemCommandJSON is not a string.");
    setNewLocation(std::string(json_string->getData()));
  }

void ModifyCalendarItemCommandJSON::fromJSONNewStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNewStart(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::fromJSONStartDeltaSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StartDeltaSeconds of ModifyCalendarItemCommandJSON is not a number.");
          }
      }
    setStartDeltaSecondsText(the_rational_text);
  }

void ModifyCalendarItemCommandJSON::fromJSONStartDeltaDays(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StartDeltaDays of ModifyCalendarItemCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StartDeltaDays of ModifyCalendarItemCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStartDeltaDays(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::fromJSONStartDeltaMonths(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StartDeltaMonths of ModifyCalendarItemCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StartDeltaMonths of ModifyCalendarItemCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStartDeltaMonths(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::fromJSONNewEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNewEnd(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::fromJSONEndDeltaSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EndDeltaSeconds of ModifyCalendarItemCommandJSON is not a number.");
          }
      }
    setEndDeltaSecondsText(the_rational_text);
  }

void ModifyCalendarItemCommandJSON::fromJSONEndDeltaDays(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EndDeltaDays of ModifyCalendarItemCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EndDeltaDays of ModifyCalendarItemCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setEndDeltaDays(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::fromJSONEndDeltaMonths(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EndDeltaMonths of ModifyCalendarItemCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EndDeltaMonths of ModifyCalendarItemCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setEndDeltaMonths(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::fromJSONNewFrequencyType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewFrequencyType of ModifyCalendarItemCommandJSON is not a string.");
    TypeNewFrequencyType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'd':
            if (strcmp(&(json_string->getData()[1]), "aily") == 0)
                  {
                    the_enum = NewFrequencyType_daily;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "onthly") == 0)
                  {
                    the_enum = NewFrequencyType_monthly;
                    goto enum_is_done;
                  }
            break;
        case 'o':
            if (strcmp(&(json_string->getData()[1]), "ne-time") == 0)
                  {
                    the_enum = NewFrequencyType_one_time;
                    goto enum_is_done;
                  }
            break;
        case 'u':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = NewFrequencyType_unknown;
                    goto enum_is_done;
                  }
            break;
        case 'w':
            if (strcmp(&(json_string->getData()[1]), "eekly") == 0)
                  {
                    the_enum = NewFrequencyType_weekly;
                    goto enum_is_done;
                  }
            break;
        case 'y':
            if (strcmp(&(json_string->getData()[1]), "early") == 0)
                  {
                    the_enum = NewFrequencyType_yearly;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field NewFrequencyType of ModifyCalendarItemCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setNewFrequencyType(the_enum);
  }

void ModifyCalendarItemCommandJSON::fromJSONNewFrequencyMultiplier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NewFrequencyMultiplier of ModifyCalendarItemCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NewFrequencyMultiplier of ModifyCalendarItemCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNewFrequencyMultiplier(extracted_integer);
  }

void ModifyCalendarItemCommandJSON::fromJSONSetEventFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SetEventFields of ModifyCalendarItemCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeSetEventFieldsJSON * > vector_SetEventFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeSetEventFieldsJSON *convert_classy = TypeSetEventFieldsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SetEventFields1[num1] = convert_classy;
      }
    initSetEventFields();
    for (size_t num21 = 0; num21 < vector_SetEventFields1.size(); ++num21)
        appendSetEventFields(vector_SetEventFields1[num21]);
    for (size_t num1 = 0; num1 < vector_SetEventFields1.size(); ++num1)
      {
        vector_SetEventFields1[num1]->remove_reference();
      }
  }

void ModifyCalendarItemCommandJSON::fromJSONAppendEventFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AppendEventFields of ModifyCalendarItemCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAppendEventFieldsJSON * > vector_AppendEventFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAppendEventFieldsJSON *convert_classy = TypeAppendEventFieldsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AppendEventFields1[num1] = convert_classy;
      }
    initAppendEventFields();
    for (size_t num22 = 0; num22 < vector_AppendEventFields1.size(); ++num22)
        appendAppendEventFields(vector_AppendEventFields1[num22]);
    for (size_t num1 = 0; num1 < vector_AppendEventFields1.size(); ++num1)
      {
        vector_AppendEventFields1[num1]->remove_reference();
      }
  }

void ModifyCalendarItemCommandJSON::fromJSONRemoveEventFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RemoveEventFields of ModifyCalendarItemCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_RemoveEventFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field RemoveEventFields of ModifyCalendarItemCommandJSON is not a string.");
        vector_RemoveEventFields1[num1] = std::string(json_string->getData());
      }
    initRemoveEventFields();
    for (size_t num23 = 0; num23 < vector_RemoveEventFields1.size(); ++num23)
        appendRemoveEventFields(vector_RemoveEventFields1[num23]);
    for (size_t num1 = 0; num1 < vector_RemoveEventFields1.size(); ++num1)
      {
      }
  }

void ModifyCalendarItemCommandJSON::fromJSONAddEventFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AddEventFields of ModifyCalendarItemCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAddEventFieldsJSON * > vector_AddEventFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAddEventFieldsJSON *convert_classy = TypeAddEventFieldsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AddEventFields1[num1] = convert_classy;
      }
    initAddEventFields();
    for (size_t num24 = 0; num24 < vector_AddEventFields1.size(); ++num24)
        appendAddEventFields(vector_AddEventFields1[num24]);
    for (size_t num1 = 0; num1 < vector_AddEventFields1.size(); ++num1)
      {
        vector_AddEventFields1[num1]->remove_reference();
      }
  }

void ModifyCalendarItemCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::fromJSONEventsConflictResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEventsConflictResult(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::fromJSONCalendarPreferenceIsNotSetResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCalendarPreferenceIsNotSetResult(convert_classy);
    convert_classy->remove_reference();
  }

void ModifyCalendarItemCommandJSON::fromJSONNoMatchResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNoMatchResult(convert_classy);
    convert_classy->remove_reference();
  }

ModifyCalendarItemCommandJSON::ModifyCalendarItemCommandJSON(void) :
        flagHasEventIDs(false),
        flagHasQuery(false),
        flagHasNewItemType(false),
        flagHasNewTitle(false),
        flagHasNewLocation(false),
        flagHasNewStart(false),
        flagHasStartDeltaSeconds(false),
        flagHasStartDeltaDays(false),
        flagHasStartDeltaMonths(false),
        flagHasNewEnd(false),
        flagHasEndDeltaSeconds(false),
        flagHasEndDeltaDays(false),
        flagHasEndDeltaMonths(false),
        flagHasNewFrequencyType(false),
        flagHasNewFrequencyMultiplier(false),
        flagHasSetEventFields(false),
        flagHasAppendEventFields(false),
        flagHasRemoveEventFields(false),
        flagHasAddEventFields(false),
        flagHasNativeData(false),
        flagHasEventsConflictResult(false),
        flagHasCalendarPreferenceIsNotSetResult(false),
        flagHasNoMatchResult(false)
  {
    extraIndex = create_string_index();
  }

ModifyCalendarItemCommandJSON::~ModifyCalendarItemCommandJSON(void)
  {
    if (flagHasQuery)
      {
        storeQuery->remove_reference();
      }
    if (flagHasNewStart)
      {
        storeNewStart->remove_reference();
      }
    if (flagHasNewEnd)
      {
        storeNewEnd->remove_reference();
      }
    if (flagHasSetEventFields)
      {
        for (size_t num40 = 0; num40 < storeSetEventFields.size(); ++num40)
          {
            storeSetEventFields[num40]->remove_reference();
          }
      }
    if (flagHasAppendEventFields)
      {
        for (size_t num41 = 0; num41 < storeAppendEventFields.size(); ++num41)
          {
            storeAppendEventFields[num41]->remove_reference();
          }
      }
    if (flagHasAddEventFields)
      {
        for (size_t num42 = 0; num42 < storeAddEventFields.size(); ++num42)
          {
            storeAddEventFields[num42]->remove_reference();
          }
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasEventsConflictResult)
      {
        storeEventsConflictResult->remove_reference();
      }
    if (flagHasCalendarPreferenceIsNotSetResult)
      {
        storeCalendarPreferenceIsNotSetResult->remove_reference();
      }
    if (flagHasNoMatchResult)
      {
        storeNoMatchResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ModifyCalendarItemCommandJSON::getCalendarCommandKind(void) const
  {
    return "ModifyItem";
  }

bool ModifyCalendarItemCommandJSON::hasEventIDs(void) const
  {
    return flagHasEventIDs;
  }

size_t ModifyCalendarItemCommandJSON::countOfEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs.size();
  }

std::string ModifyCalendarItemCommandJSON::elementOfEventIDs(size_t element_num)
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

const std::string ModifyCalendarItemCommandJSON::elementOfEventIDs(size_t element_num) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

std::vector< std::string > ModifyCalendarItemCommandJSON::getEventIDs(void)
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

const std::vector< std::string > ModifyCalendarItemCommandJSON::getEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

bool ModifyCalendarItemCommandJSON::hasQuery(void) const
  {
    return flagHasQuery;
  }

CalendarQueryJSON * ModifyCalendarItemCommandJSON::getQuery(void)
  {
    assert(flagHasQuery);
    return storeQuery;
  }

const CalendarQueryJSON * ModifyCalendarItemCommandJSON::getQuery(void) const
  {
    assert(flagHasQuery);
    return storeQuery;
  }

bool ModifyCalendarItemCommandJSON::hasNewItemType(void) const
  {
    return flagHasNewItemType;
  }

std::string ModifyCalendarItemCommandJSON::getNewItemType(void)
  {
    assert(flagHasNewItemType);
    return storeNewItemType;
  }

const std::string ModifyCalendarItemCommandJSON::getNewItemType(void) const
  {
    assert(flagHasNewItemType);
    return storeNewItemType;
  }

bool ModifyCalendarItemCommandJSON::hasNewTitle(void) const
  {
    return flagHasNewTitle;
  }

std::string ModifyCalendarItemCommandJSON::getNewTitle(void)
  {
    assert(flagHasNewTitle);
    return storeNewTitle;
  }

const std::string ModifyCalendarItemCommandJSON::getNewTitle(void) const
  {
    assert(flagHasNewTitle);
    return storeNewTitle;
  }

bool ModifyCalendarItemCommandJSON::hasNewLocation(void) const
  {
    return flagHasNewLocation;
  }

std::string ModifyCalendarItemCommandJSON::getNewLocation(void)
  {
    assert(flagHasNewLocation);
    return storeNewLocation;
  }

const std::string ModifyCalendarItemCommandJSON::getNewLocation(void) const
  {
    assert(flagHasNewLocation);
    return storeNewLocation;
  }

bool ModifyCalendarItemCommandJSON::hasNewStart(void) const
  {
    return flagHasNewStart;
  }

DateAndOrTimeJSON * ModifyCalendarItemCommandJSON::getNewStart(void)
  {
    assert(flagHasNewStart);
    return storeNewStart;
  }

const DateAndOrTimeJSON * ModifyCalendarItemCommandJSON::getNewStart(void) const
  {
    assert(flagHasNewStart);
    return storeNewStart;
  }

bool ModifyCalendarItemCommandJSON::hasStartDeltaSeconds(void) const
  {
    return flagHasStartDeltaSeconds;
  }

double ModifyCalendarItemCommandJSON::getStartDeltaSeconds(void)
  {
    assert(flagHasStartDeltaSeconds);
    if (textStoreStartDeltaSeconds != "")
      {
        return atof(textStoreStartDeltaSeconds.c_str());
      }
    return storeStartDeltaSeconds;
  }

const double ModifyCalendarItemCommandJSON::getStartDeltaSeconds(void) const
  {
    assert(flagHasStartDeltaSeconds);
    if (textStoreStartDeltaSeconds != "")
      {
        return atof(textStoreStartDeltaSeconds.c_str());
      }
    return storeStartDeltaSeconds;
  }

std::string ModifyCalendarItemCommandJSON::getStartDeltaSecondsAsText(void) const
  {
    assert(flagHasStartDeltaSeconds);
    if (textStoreStartDeltaSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeStartDeltaSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreStartDeltaSeconds);
      }
  }

bool ModifyCalendarItemCommandJSON::hasStartDeltaDays(void) const
  {
    return flagHasStartDeltaDays;
  }

OInteger ModifyCalendarItemCommandJSON::getStartDeltaDays(void)
  {
    assert(flagHasStartDeltaDays);
    return storeStartDeltaDays;
  }

const OInteger ModifyCalendarItemCommandJSON::getStartDeltaDays(void) const
  {
    assert(flagHasStartDeltaDays);
    return storeStartDeltaDays;
  }

bool ModifyCalendarItemCommandJSON::hasStartDeltaMonths(void) const
  {
    return flagHasStartDeltaMonths;
  }

OInteger ModifyCalendarItemCommandJSON::getStartDeltaMonths(void)
  {
    assert(flagHasStartDeltaMonths);
    return storeStartDeltaMonths;
  }

const OInteger ModifyCalendarItemCommandJSON::getStartDeltaMonths(void) const
  {
    assert(flagHasStartDeltaMonths);
    return storeStartDeltaMonths;
  }

bool ModifyCalendarItemCommandJSON::hasNewEnd(void) const
  {
    return flagHasNewEnd;
  }

DateAndOrTimeJSON * ModifyCalendarItemCommandJSON::getNewEnd(void)
  {
    assert(flagHasNewEnd);
    return storeNewEnd;
  }

const DateAndOrTimeJSON * ModifyCalendarItemCommandJSON::getNewEnd(void) const
  {
    assert(flagHasNewEnd);
    return storeNewEnd;
  }

bool ModifyCalendarItemCommandJSON::hasEndDeltaSeconds(void) const
  {
    return flagHasEndDeltaSeconds;
  }

double ModifyCalendarItemCommandJSON::getEndDeltaSeconds(void)
  {
    assert(flagHasEndDeltaSeconds);
    if (textStoreEndDeltaSeconds != "")
      {
        return atof(textStoreEndDeltaSeconds.c_str());
      }
    return storeEndDeltaSeconds;
  }

const double ModifyCalendarItemCommandJSON::getEndDeltaSeconds(void) const
  {
    assert(flagHasEndDeltaSeconds);
    if (textStoreEndDeltaSeconds != "")
      {
        return atof(textStoreEndDeltaSeconds.c_str());
      }
    return storeEndDeltaSeconds;
  }

std::string ModifyCalendarItemCommandJSON::getEndDeltaSecondsAsText(void) const
  {
    assert(flagHasEndDeltaSeconds);
    if (textStoreEndDeltaSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeEndDeltaSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreEndDeltaSeconds);
      }
  }

bool ModifyCalendarItemCommandJSON::hasEndDeltaDays(void) const
  {
    return flagHasEndDeltaDays;
  }

OInteger ModifyCalendarItemCommandJSON::getEndDeltaDays(void)
  {
    assert(flagHasEndDeltaDays);
    return storeEndDeltaDays;
  }

const OInteger ModifyCalendarItemCommandJSON::getEndDeltaDays(void) const
  {
    assert(flagHasEndDeltaDays);
    return storeEndDeltaDays;
  }

bool ModifyCalendarItemCommandJSON::hasEndDeltaMonths(void) const
  {
    return flagHasEndDeltaMonths;
  }

OInteger ModifyCalendarItemCommandJSON::getEndDeltaMonths(void)
  {
    assert(flagHasEndDeltaMonths);
    return storeEndDeltaMonths;
  }

const OInteger ModifyCalendarItemCommandJSON::getEndDeltaMonths(void) const
  {
    assert(flagHasEndDeltaMonths);
    return storeEndDeltaMonths;
  }

bool ModifyCalendarItemCommandJSON::hasNewFrequencyType(void) const
  {
    return flagHasNewFrequencyType;
  }

ModifyCalendarItemCommandJSON::TypeNewFrequencyType ModifyCalendarItemCommandJSON::getNewFrequencyType(void)
  {
    assert(flagHasNewFrequencyType);
    return storeNewFrequencyType;
  }

const ModifyCalendarItemCommandJSON::TypeNewFrequencyType ModifyCalendarItemCommandJSON::getNewFrequencyType(void) const
  {
    assert(flagHasNewFrequencyType);
    return storeNewFrequencyType;
  }

const char *ModifyCalendarItemCommandJSON::getNewFrequencyTypeAsChars(void) const
  {
    return stringFromNewFrequencyType(getNewFrequencyType());
  }

std::string ModifyCalendarItemCommandJSON::getNewFrequencyTypeAsString(void) const
  {
    return stringFromNewFrequencyType(getNewFrequencyType());
  }

bool ModifyCalendarItemCommandJSON::hasNewFrequencyMultiplier(void) const
  {
    return flagHasNewFrequencyMultiplier;
  }

OInteger ModifyCalendarItemCommandJSON::getNewFrequencyMultiplier(void)
  {
    assert(flagHasNewFrequencyMultiplier);
    return storeNewFrequencyMultiplier;
  }

const OInteger ModifyCalendarItemCommandJSON::getNewFrequencyMultiplier(void) const
  {
    assert(flagHasNewFrequencyMultiplier);
    return storeNewFrequencyMultiplier;
  }

bool ModifyCalendarItemCommandJSON::hasSetEventFields(void) const
  {
    return flagHasSetEventFields;
  }

size_t ModifyCalendarItemCommandJSON::countOfSetEventFields(void) const
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields.size();
  }

ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON * ModifyCalendarItemCommandJSON::elementOfSetEventFields(size_t element_num)
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields[element_num];
  }

const ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON * ModifyCalendarItemCommandJSON::elementOfSetEventFields(size_t element_num) const
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields[element_num];
  }

std::vector< ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON * > ModifyCalendarItemCommandJSON::getSetEventFields(void)
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields;
  }

const std::vector< ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON * > ModifyCalendarItemCommandJSON::getSetEventFields(void) const
  {
    assert(flagHasSetEventFields);
    return storeSetEventFields;
  }

bool ModifyCalendarItemCommandJSON::hasAppendEventFields(void) const
  {
    return flagHasAppendEventFields;
  }

size_t ModifyCalendarItemCommandJSON::countOfAppendEventFields(void) const
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields.size();
  }

ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON * ModifyCalendarItemCommandJSON::elementOfAppendEventFields(size_t element_num)
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields[element_num];
  }

const ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON * ModifyCalendarItemCommandJSON::elementOfAppendEventFields(size_t element_num) const
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields[element_num];
  }

std::vector< ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON * > ModifyCalendarItemCommandJSON::getAppendEventFields(void)
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields;
  }

const std::vector< ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON * > ModifyCalendarItemCommandJSON::getAppendEventFields(void) const
  {
    assert(flagHasAppendEventFields);
    return storeAppendEventFields;
  }

bool ModifyCalendarItemCommandJSON::hasRemoveEventFields(void) const
  {
    return flagHasRemoveEventFields;
  }

size_t ModifyCalendarItemCommandJSON::countOfRemoveEventFields(void) const
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields.size();
  }

std::string ModifyCalendarItemCommandJSON::elementOfRemoveEventFields(size_t element_num)
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields[element_num];
  }

const std::string ModifyCalendarItemCommandJSON::elementOfRemoveEventFields(size_t element_num) const
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields[element_num];
  }

std::vector< std::string > ModifyCalendarItemCommandJSON::getRemoveEventFields(void)
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields;
  }

const std::vector< std::string > ModifyCalendarItemCommandJSON::getRemoveEventFields(void) const
  {
    assert(flagHasRemoveEventFields);
    return storeRemoveEventFields;
  }

bool ModifyCalendarItemCommandJSON::hasAddEventFields(void) const
  {
    return flagHasAddEventFields;
  }

size_t ModifyCalendarItemCommandJSON::countOfAddEventFields(void) const
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields.size();
  }

ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON * ModifyCalendarItemCommandJSON::elementOfAddEventFields(size_t element_num)
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields[element_num];
  }

const ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON * ModifyCalendarItemCommandJSON::elementOfAddEventFields(size_t element_num) const
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields[element_num];
  }

std::vector< ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON * > ModifyCalendarItemCommandJSON::getAddEventFields(void)
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields;
  }

const std::vector< ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON * > ModifyCalendarItemCommandJSON::getAddEventFields(void) const
  {
    assert(flagHasAddEventFields);
    return storeAddEventFields;
  }

bool ModifyCalendarItemCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

ModifyCalendarItemCommandJSON::TypeNativeDataJSON * ModifyCalendarItemCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const ModifyCalendarItemCommandJSON::TypeNativeDataJSON * ModifyCalendarItemCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool ModifyCalendarItemCommandJSON::hasEventsConflictResult(void) const
  {
    return flagHasEventsConflictResult;
  }

DynamicResponseJSON * ModifyCalendarItemCommandJSON::getEventsConflictResult(void)
  {
    assert(flagHasEventsConflictResult);
    return storeEventsConflictResult;
  }

const DynamicResponseJSON * ModifyCalendarItemCommandJSON::getEventsConflictResult(void) const
  {
    assert(flagHasEventsConflictResult);
    return storeEventsConflictResult;
  }

bool ModifyCalendarItemCommandJSON::hasCalendarPreferenceIsNotSetResult(void) const
  {
    return flagHasCalendarPreferenceIsNotSetResult;
  }

DynamicResponseJSON * ModifyCalendarItemCommandJSON::getCalendarPreferenceIsNotSetResult(void)
  {
    assert(flagHasCalendarPreferenceIsNotSetResult);
    return storeCalendarPreferenceIsNotSetResult;
  }

const DynamicResponseJSON * ModifyCalendarItemCommandJSON::getCalendarPreferenceIsNotSetResult(void) const
  {
    assert(flagHasCalendarPreferenceIsNotSetResult);
    return storeCalendarPreferenceIsNotSetResult;
  }

bool ModifyCalendarItemCommandJSON::hasNoMatchResult(void) const
  {
    return flagHasNoMatchResult;
  }

DynamicResponseJSON * ModifyCalendarItemCommandJSON::getNoMatchResult(void)
  {
    assert(flagHasNoMatchResult);
    return storeNoMatchResult;
  }

const DynamicResponseJSON * ModifyCalendarItemCommandJSON::getNoMatchResult(void) const
  {
    assert(flagHasNoMatchResult);
    return storeNoMatchResult;
  }

char ModifyCalendarItemCommandJSON::Generator::lowerBoundStartDeltaDays[] = "0";
char ModifyCalendarItemCommandJSON::Generator::lowerBoundStartDeltaMonths[] = "0";
char ModifyCalendarItemCommandJSON::Generator::lowerBoundEndDeltaDays[] = "0";
char ModifyCalendarItemCommandJSON::Generator::lowerBoundEndDeltaMonths[] = "0";
char ModifyCalendarItemCommandJSON::Generator::lowerBoundNewFrequencyMultiplier[] = "0";
ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON *ModifyCalendarItemCommandJSON::TypeSetEventFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSetEventFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSetEventFieldsJSON>, TypeSetEventFieldsJSON *, bool> generator("Type TypeSetEventFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON *ModifyCalendarItemCommandJSON::TypeAppendEventFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAppendEventFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAppendEventFieldsJSON>, TypeAppendEventFieldsJSON *, bool> generator("Type TypeAppendEventFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON *ModifyCalendarItemCommandJSON::TypeAddEventFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAddEventFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAddEventFieldsJSON>, TypeAddEventFieldsJSON *, bool> generator("Type TypeAddEventFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char ModifyCalendarItemCommandJSON::TypeNativeDataJSON::Generator::lowerBoundStartDeltaDays[] = "0";
char ModifyCalendarItemCommandJSON::TypeNativeDataJSON::Generator::lowerBoundStartDeltaMonths[] = "0";
char ModifyCalendarItemCommandJSON::TypeNativeDataJSON::Generator::lowerBoundEndDeltaDays[] = "0";
char ModifyCalendarItemCommandJSON::TypeNativeDataJSON::Generator::lowerBoundEndDeltaMonths[] = "0";
char ModifyCalendarItemCommandJSON::TypeNativeDataJSON::Generator::lowerBoundNewFrequencyMultiplier[] = "0";
ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON *ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeSetEventFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSetEventFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSetEventFieldsJSON>, TypeSetEventFieldsJSON *, bool> generator("Type TypeSetEventFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON *ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAppendEventFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAppendEventFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAppendEventFieldsJSON>, TypeAppendEventFieldsJSON *, bool> generator("Type TypeAppendEventFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON *ModifyCalendarItemCommandJSON::TypeNativeDataJSON::TypeAddEventFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAddEventFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAddEventFieldsJSON>, TypeAddEventFieldsJSON *, bool> generator("Type TypeAddEventFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ModifyCalendarItemCommandJSON::TypeNativeDataJSON *ModifyCalendarItemCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ModifyCalendarItemCommandJSON *ModifyCalendarItemCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ModifyCalendarItemCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ModifyCalendarItemCommandJSON>, ModifyCalendarItemCommandJSON *, bool> generator("Type ModifyCalendarItemCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
