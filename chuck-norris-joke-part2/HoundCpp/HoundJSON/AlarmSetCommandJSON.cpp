/* file "AlarmSetCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmSetCommandJSON.h"

#include "AlarmSetCommandJSON.h"


AlarmSetCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

AlarmSetCommandJSON::TypeNativeDataJSON &AlarmSetCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AlarmSetCommandJSON::TypeNativeDataJSON::fromJSONAlarms(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Alarms of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Alarms of TypeNativeDataJSON has too few elements.");
    std::vector< AlarmJSON * > vector_Alarms1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AlarmJSON *convert_classy = AlarmJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Alarms1[num1] = convert_classy;
      }
    assert(vector_Alarms1.size() >= 1);
    initAlarms();
    for (size_t num2 = 0; num2 < vector_Alarms1.size(); ++num2)
        appendAlarms(vector_Alarms1[num2]);
    for (size_t num1 = 0; num1 < vector_Alarms1.size(); ++num1)
      {
        vector_Alarms1[num1]->remove_reference();
      }
  }

AlarmSetCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasAlarms(false)
  {
    extraIndex = create_string_index();
  }

AlarmSetCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasAlarms)
      {
        for (size_t num4 = 0; num4 < storeAlarms.size(); ++num4)
          {
            storeAlarms[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AlarmSetCommandJSON::TypeNativeDataJSON::hasAlarms(void) const
  {
    return flagHasAlarms;
  }

size_t AlarmSetCommandJSON::TypeNativeDataJSON::countOfAlarms(void) const
  {
    assert(flagHasAlarms);
    return storeAlarms.size();
  }

AlarmJSON * AlarmSetCommandJSON::TypeNativeDataJSON::elementOfAlarms(size_t element_num)
  {
    assert(flagHasAlarms);
    return storeAlarms[element_num];
  }

const AlarmJSON * AlarmSetCommandJSON::TypeNativeDataJSON::elementOfAlarms(size_t element_num) const
  {
    assert(flagHasAlarms);
    return storeAlarms[element_num];
  }

std::vector< AlarmJSON * > AlarmSetCommandJSON::TypeNativeDataJSON::getAlarms(void)
  {
    assert(flagHasAlarms);
    return storeAlarms;
  }

const std::vector< AlarmJSON * > AlarmSetCommandJSON::TypeNativeDataJSON::getAlarms(void) const
  {
    assert(flagHasAlarms);
    return storeAlarms;
  }

AlarmSetCommandJSON::AlarmSetCommandJSON(const AlarmSetCommandJSON &)
  {
    assert(false);
  }

AlarmSetCommandJSON &AlarmSetCommandJSON::operator=(const AlarmSetCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AlarmSetCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void AlarmSetCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

AlarmSetCommandJSON::AlarmSetCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

AlarmSetCommandJSON::~AlarmSetCommandJSON(void)
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

const char *AlarmSetCommandJSON::getAlarmCommandKind(void) const
  {
    return "AlarmSetCommand";
  }

bool AlarmSetCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

AlarmSetCommandJSON::TypeNativeDataJSON * AlarmSetCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const AlarmSetCommandJSON::TypeNativeDataJSON * AlarmSetCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

AlarmSetCommandJSON::TypeNativeDataJSON *AlarmSetCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
AlarmSetCommandJSON *AlarmSetCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmSetCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmSetCommandJSON>, AlarmSetCommandJSON *, bool> generator("Type AlarmSetCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
