/* file "AlarmUnsetCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmUnsetCommandJSON.h"

#include "AlarmUnsetCommandJSON.h"


AlarmUnsetCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

AlarmUnsetCommandJSON::TypeNativeDataJSON &AlarmUnsetCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AlarmUnsetCommandJSON::TypeNativeDataJSON::fromJSONAlarms(JSONValue *json_value, bool ignore_extras)
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
    for (size_t num3 = 0; num3 < vector_Alarms1.size(); ++num3)
        appendAlarms(vector_Alarms1[num3]);
    for (size_t num1 = 0; num1 < vector_Alarms1.size(); ++num1)
      {
        vector_Alarms1[num1]->remove_reference();
      }
  }

void AlarmUnsetCommandJSON::TypeNativeDataJSON::fromJSONAlarmCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AlarmCriteria of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field AlarmCriteria of TypeNativeDataJSON has too few elements.");
    std::vector< AlarmCriteriaJSON * > vector_AlarmCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AlarmCriteriaJSON *convert_classy = AlarmCriteriaJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AlarmCriteria1[num1] = convert_classy;
      }
    assert(vector_AlarmCriteria1.size() >= 1);
    initAlarmCriteria();
    for (size_t num4 = 0; num4 < vector_AlarmCriteria1.size(); ++num4)
        appendAlarmCriteria(vector_AlarmCriteria1[num4]);
    for (size_t num1 = 0; num1 < vector_AlarmCriteria1.size(); ++num1)
      {
        vector_AlarmCriteria1[num1]->remove_reference();
      }
  }

AlarmUnsetCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasAlarms(false),
        flagHasAlarmCriteria(false)
  {
    extraIndex = create_string_index();
  }

AlarmUnsetCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasAlarms)
      {
        for (size_t num7 = 0; num7 < storeAlarms.size(); ++num7)
          {
            storeAlarms[num7]->remove_reference();
          }
      }
    if (flagHasAlarmCriteria)
      {
        for (size_t num8 = 0; num8 < storeAlarmCriteria.size(); ++num8)
          {
            storeAlarmCriteria[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AlarmUnsetCommandJSON::TypeNativeDataJSON::hasAlarms(void) const
  {
    return flagHasAlarms;
  }

size_t AlarmUnsetCommandJSON::TypeNativeDataJSON::countOfAlarms(void) const
  {
    assert(flagHasAlarms);
    return storeAlarms.size();
  }

AlarmJSON * AlarmUnsetCommandJSON::TypeNativeDataJSON::elementOfAlarms(size_t element_num)
  {
    assert(flagHasAlarms);
    return storeAlarms[element_num];
  }

const AlarmJSON * AlarmUnsetCommandJSON::TypeNativeDataJSON::elementOfAlarms(size_t element_num) const
  {
    assert(flagHasAlarms);
    return storeAlarms[element_num];
  }

std::vector< AlarmJSON * > AlarmUnsetCommandJSON::TypeNativeDataJSON::getAlarms(void)
  {
    assert(flagHasAlarms);
    return storeAlarms;
  }

const std::vector< AlarmJSON * > AlarmUnsetCommandJSON::TypeNativeDataJSON::getAlarms(void) const
  {
    assert(flagHasAlarms);
    return storeAlarms;
  }

bool AlarmUnsetCommandJSON::TypeNativeDataJSON::hasAlarmCriteria(void) const
  {
    return flagHasAlarmCriteria;
  }

size_t AlarmUnsetCommandJSON::TypeNativeDataJSON::countOfAlarmCriteria(void) const
  {
    assert(flagHasAlarmCriteria);
    return storeAlarmCriteria.size();
  }

AlarmCriteriaJSON * AlarmUnsetCommandJSON::TypeNativeDataJSON::elementOfAlarmCriteria(size_t element_num)
  {
    assert(flagHasAlarmCriteria);
    return storeAlarmCriteria[element_num];
  }

const AlarmCriteriaJSON * AlarmUnsetCommandJSON::TypeNativeDataJSON::elementOfAlarmCriteria(size_t element_num) const
  {
    assert(flagHasAlarmCriteria);
    return storeAlarmCriteria[element_num];
  }

std::vector< AlarmCriteriaJSON * > AlarmUnsetCommandJSON::TypeNativeDataJSON::getAlarmCriteria(void)
  {
    assert(flagHasAlarmCriteria);
    return storeAlarmCriteria;
  }

const std::vector< AlarmCriteriaJSON * > AlarmUnsetCommandJSON::TypeNativeDataJSON::getAlarmCriteria(void) const
  {
    assert(flagHasAlarmCriteria);
    return storeAlarmCriteria;
  }

AlarmUnsetCommandJSON::AlarmUnsetCommandJSON(const AlarmUnsetCommandJSON &)
  {
    assert(false);
  }

AlarmUnsetCommandJSON &AlarmUnsetCommandJSON::operator=(const AlarmUnsetCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AlarmUnsetCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *AlarmUnsetCommandJSON::extraDeleteAllDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeleteAllDynamicResponse;
    storeDeleteAllDynamicResponse->write_as_json(&handler_DeleteAllDynamicResponse);
    handler_DeleteAllDynamicResponse.result->add_reference();
    return handler_DeleteAllDynamicResponse.result;
  }

JSONValue *AlarmUnsetCommandJSON::extraDeleteSingleDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeleteSingleDynamicResponse;
    storeDeleteSingleDynamicResponse->write_as_json(&handler_DeleteSingleDynamicResponse);
    handler_DeleteSingleDynamicResponse.result->add_reference();
    return handler_DeleteSingleDynamicResponse.result;
  }

JSONValue *AlarmUnsetCommandJSON::extraDeleteMultiDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeleteMultiDynamicResponse;
    storeDeleteMultiDynamicResponse->write_as_json(&handler_DeleteMultiDynamicResponse);
    handler_DeleteMultiDynamicResponse.result->add_reference();
    return handler_DeleteMultiDynamicResponse.result;
  }

JSONValue *AlarmUnsetCommandJSON::extraDeleteNoMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeleteNoMatchDynamicResponse;
    storeDeleteNoMatchDynamicResponse->write_as_json(&handler_DeleteNoMatchDynamicResponse);
    handler_DeleteNoMatchDynamicResponse.result->add_reference();
    return handler_DeleteNoMatchDynamicResponse.result;
  }

JSONValue *AlarmUnsetCommandJSON::extraDeletePartialMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeletePartialMatchDynamicResponse;
    storeDeletePartialMatchDynamicResponse->write_as_json(&handler_DeletePartialMatchDynamicResponse);
    handler_DeletePartialMatchDynamicResponse.result->add_reference();
    return handler_DeletePartialMatchDynamicResponse.result;
  }

JSONValue *AlarmUnsetCommandJSON::extraFutureSupportDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_FutureSupportDynamicResponse;
    storeFutureSupportDynamicResponse->write_as_json(&handler_FutureSupportDynamicResponse);
    handler_FutureSupportDynamicResponse.result->add_reference();
    return handler_FutureSupportDynamicResponse.result;
  }

void AlarmUnsetCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void AlarmUnsetCommandJSON::fromJSONDeleteAllDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteAllDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void AlarmUnsetCommandJSON::fromJSONDeleteSingleDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteSingleDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void AlarmUnsetCommandJSON::fromJSONDeleteMultiDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteMultiDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void AlarmUnsetCommandJSON::fromJSONDeleteNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteNoMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void AlarmUnsetCommandJSON::fromJSONDeletePartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeletePartialMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void AlarmUnsetCommandJSON::fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFutureSupportDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

AlarmUnsetCommandJSON::AlarmUnsetCommandJSON(void) :
        flagHasNativeData(false),
        flagHasDeleteAllDynamicResponse(false),
        flagHasDeleteSingleDynamicResponse(false),
        flagHasDeleteMultiDynamicResponse(false),
        flagHasDeleteNoMatchDynamicResponse(false),
        flagHasDeletePartialMatchDynamicResponse(false),
        flagHasFutureSupportDynamicResponse(false)
  {
    extraIndex = create_string_index();
  }

AlarmUnsetCommandJSON::~AlarmUnsetCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasDeleteAllDynamicResponse)
      {
        storeDeleteAllDynamicResponse->remove_reference();
      }
    if (flagHasDeleteSingleDynamicResponse)
      {
        storeDeleteSingleDynamicResponse->remove_reference();
      }
    if (flagHasDeleteMultiDynamicResponse)
      {
        storeDeleteMultiDynamicResponse->remove_reference();
      }
    if (flagHasDeleteNoMatchDynamicResponse)
      {
        storeDeleteNoMatchDynamicResponse->remove_reference();
      }
    if (flagHasDeletePartialMatchDynamicResponse)
      {
        storeDeletePartialMatchDynamicResponse->remove_reference();
      }
    if (flagHasFutureSupportDynamicResponse)
      {
        storeFutureSupportDynamicResponse->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AlarmUnsetCommandJSON::getAlarmCommandKind(void) const
  {
    return "AlarmUnsetCommand";
  }

bool AlarmUnsetCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

AlarmUnsetCommandJSON::TypeNativeDataJSON * AlarmUnsetCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const AlarmUnsetCommandJSON::TypeNativeDataJSON * AlarmUnsetCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool AlarmUnsetCommandJSON::hasDeleteAllDynamicResponse(void) const
  {
    return flagHasDeleteAllDynamicResponse;
  }

DynamicResponseJSON * AlarmUnsetCommandJSON::getDeleteAllDynamicResponse(void)
  {
    assert(flagHasDeleteAllDynamicResponse);
    return storeDeleteAllDynamicResponse;
  }

const DynamicResponseJSON * AlarmUnsetCommandJSON::getDeleteAllDynamicResponse(void) const
  {
    assert(flagHasDeleteAllDynamicResponse);
    return storeDeleteAllDynamicResponse;
  }

bool AlarmUnsetCommandJSON::hasDeleteSingleDynamicResponse(void) const
  {
    return flagHasDeleteSingleDynamicResponse;
  }

DynamicResponseJSON * AlarmUnsetCommandJSON::getDeleteSingleDynamicResponse(void)
  {
    assert(flagHasDeleteSingleDynamicResponse);
    return storeDeleteSingleDynamicResponse;
  }

const DynamicResponseJSON * AlarmUnsetCommandJSON::getDeleteSingleDynamicResponse(void) const
  {
    assert(flagHasDeleteSingleDynamicResponse);
    return storeDeleteSingleDynamicResponse;
  }

bool AlarmUnsetCommandJSON::hasDeleteMultiDynamicResponse(void) const
  {
    return flagHasDeleteMultiDynamicResponse;
  }

DynamicResponseJSON * AlarmUnsetCommandJSON::getDeleteMultiDynamicResponse(void)
  {
    assert(flagHasDeleteMultiDynamicResponse);
    return storeDeleteMultiDynamicResponse;
  }

const DynamicResponseJSON * AlarmUnsetCommandJSON::getDeleteMultiDynamicResponse(void) const
  {
    assert(flagHasDeleteMultiDynamicResponse);
    return storeDeleteMultiDynamicResponse;
  }

bool AlarmUnsetCommandJSON::hasDeleteNoMatchDynamicResponse(void) const
  {
    return flagHasDeleteNoMatchDynamicResponse;
  }

DynamicResponseJSON * AlarmUnsetCommandJSON::getDeleteNoMatchDynamicResponse(void)
  {
    assert(flagHasDeleteNoMatchDynamicResponse);
    return storeDeleteNoMatchDynamicResponse;
  }

const DynamicResponseJSON * AlarmUnsetCommandJSON::getDeleteNoMatchDynamicResponse(void) const
  {
    assert(flagHasDeleteNoMatchDynamicResponse);
    return storeDeleteNoMatchDynamicResponse;
  }

bool AlarmUnsetCommandJSON::hasDeletePartialMatchDynamicResponse(void) const
  {
    return flagHasDeletePartialMatchDynamicResponse;
  }

DynamicResponseJSON * AlarmUnsetCommandJSON::getDeletePartialMatchDynamicResponse(void)
  {
    assert(flagHasDeletePartialMatchDynamicResponse);
    return storeDeletePartialMatchDynamicResponse;
  }

const DynamicResponseJSON * AlarmUnsetCommandJSON::getDeletePartialMatchDynamicResponse(void) const
  {
    assert(flagHasDeletePartialMatchDynamicResponse);
    return storeDeletePartialMatchDynamicResponse;
  }

bool AlarmUnsetCommandJSON::hasFutureSupportDynamicResponse(void) const
  {
    return flagHasFutureSupportDynamicResponse;
  }

DynamicResponseJSON * AlarmUnsetCommandJSON::getFutureSupportDynamicResponse(void)
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

const DynamicResponseJSON * AlarmUnsetCommandJSON::getFutureSupportDynamicResponse(void) const
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

AlarmUnsetCommandJSON::TypeNativeDataJSON *AlarmUnsetCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
AlarmUnsetCommandJSON *AlarmUnsetCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmUnsetCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmUnsetCommandJSON>, AlarmUnsetCommandJSON *, bool> generator("Type AlarmUnsetCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
