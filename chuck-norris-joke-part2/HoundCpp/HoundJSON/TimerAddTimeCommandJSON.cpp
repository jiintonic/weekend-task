/* file "TimerAddTimeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerAddTimeCommandJSON.h"

#include "TimerAddTimeCommandJSON.h"


TimerAddTimeCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

TimerAddTimeCommandJSON::TypeNativeDataJSON &TimerAddTimeCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerAddTimeCommandJSON::TypeNativeDataJSON::fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TimerCriteria of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field TimerCriteria of TypeNativeDataJSON has too few elements.");
    std::vector< TimerCriteriaJSON * > vector_TimerCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TimerCriteriaJSON *convert_classy = TimerCriteriaJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_TimerCriteria1[num1] = convert_classy;
      }
    assert(vector_TimerCriteria1.size() >= 1);
    initTimerCriteria();
    for (size_t num2 = 0; num2 < vector_TimerCriteria1.size(); ++num2)
        appendTimerCriteria(vector_TimerCriteria1[num2]);
    for (size_t num1 = 0; num1 < vector_TimerCriteria1.size(); ++num1)
      {
        vector_TimerCriteria1[num1]->remove_reference();
      }
  }

void TimerAddTimeCommandJSON::TypeNativeDataJSON::fromJSONTimer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimerJSON *convert_classy = TimerJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTimer(convert_classy);
    convert_classy->remove_reference();
  }

TimerAddTimeCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTimerCriteria(false),
        flagHasTimer(false)
  {
    extraIndex = create_string_index();
  }

TimerAddTimeCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasTimerCriteria)
      {
        for (size_t num4 = 0; num4 < storeTimerCriteria.size(); ++num4)
          {
            storeTimerCriteria[num4]->remove_reference();
          }
      }
    if (flagHasTimer)
      {
        storeTimer->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimerAddTimeCommandJSON::TypeNativeDataJSON::hasTimerCriteria(void) const
  {
    return flagHasTimerCriteria;
  }

size_t TimerAddTimeCommandJSON::TypeNativeDataJSON::countOfTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria.size();
  }

TimerCriteriaJSON * TimerAddTimeCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

const TimerCriteriaJSON * TimerAddTimeCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

std::vector< TimerCriteriaJSON * > TimerAddTimeCommandJSON::TypeNativeDataJSON::getTimerCriteria(void)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

const std::vector< TimerCriteriaJSON * > TimerAddTimeCommandJSON::TypeNativeDataJSON::getTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

bool TimerAddTimeCommandJSON::TypeNativeDataJSON::hasTimer(void) const
  {
    return flagHasTimer;
  }

TimerJSON * TimerAddTimeCommandJSON::TypeNativeDataJSON::getTimer(void)
  {
    assert(flagHasTimer);
    return storeTimer;
  }

const TimerJSON * TimerAddTimeCommandJSON::TypeNativeDataJSON::getTimer(void) const
  {
    assert(flagHasTimer);
    return storeTimer;
  }

TimerAddTimeCommandJSON::TimerAddTimeCommandJSON(const TimerAddTimeCommandJSON &)
  {
    assert(false);
  }

TimerAddTimeCommandJSON &TimerAddTimeCommandJSON::operator=(const TimerAddTimeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerAddTimeCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *TimerAddTimeCommandJSON::extraAddTimeAllDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_AddTimeAllDynamicResponse;
    storeAddTimeAllDynamicResponse->write_as_json(&handler_AddTimeAllDynamicResponse);
    handler_AddTimeAllDynamicResponse.result->add_reference();
    return handler_AddTimeAllDynamicResponse.result;
  }

JSONValue *TimerAddTimeCommandJSON::extraAddTimeSingleDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_AddTimeSingleDynamicResponse;
    storeAddTimeSingleDynamicResponse->write_as_json(&handler_AddTimeSingleDynamicResponse);
    handler_AddTimeSingleDynamicResponse.result->add_reference();
    return handler_AddTimeSingleDynamicResponse.result;
  }

JSONValue *TimerAddTimeCommandJSON::extraAddTimeMultiDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_AddTimeMultiDynamicResponse;
    storeAddTimeMultiDynamicResponse->write_as_json(&handler_AddTimeMultiDynamicResponse);
    handler_AddTimeMultiDynamicResponse.result->add_reference();
    return handler_AddTimeMultiDynamicResponse.result;
  }

JSONValue *TimerAddTimeCommandJSON::extraAddTimeNoMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_AddTimeNoMatchDynamicResponse;
    storeAddTimeNoMatchDynamicResponse->write_as_json(&handler_AddTimeNoMatchDynamicResponse);
    handler_AddTimeNoMatchDynamicResponse.result->add_reference();
    return handler_AddTimeNoMatchDynamicResponse.result;
  }

JSONValue *TimerAddTimeCommandJSON::extraAddTimePartialMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_AddTimePartialMatchDynamicResponse;
    storeAddTimePartialMatchDynamicResponse->write_as_json(&handler_AddTimePartialMatchDynamicResponse);
    handler_AddTimePartialMatchDynamicResponse.result->add_reference();
    return handler_AddTimePartialMatchDynamicResponse.result;
  }

JSONValue *TimerAddTimeCommandJSON::extraFutureSupportDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_FutureSupportDynamicResponse;
    storeFutureSupportDynamicResponse->write_as_json(&handler_FutureSupportDynamicResponse);
    handler_FutureSupportDynamicResponse.result->add_reference();
    return handler_FutureSupportDynamicResponse.result;
  }

void TimerAddTimeCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void TimerAddTimeCommandJSON::fromJSONAddTimeAllDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAddTimeAllDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerAddTimeCommandJSON::fromJSONAddTimeSingleDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAddTimeSingleDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerAddTimeCommandJSON::fromJSONAddTimeMultiDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAddTimeMultiDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerAddTimeCommandJSON::fromJSONAddTimeNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAddTimeNoMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerAddTimeCommandJSON::fromJSONAddTimePartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAddTimePartialMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerAddTimeCommandJSON::fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFutureSupportDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

TimerAddTimeCommandJSON::TimerAddTimeCommandJSON(void) :
        flagHasNativeData(false),
        flagHasAddTimeAllDynamicResponse(false),
        flagHasAddTimeSingleDynamicResponse(false),
        flagHasAddTimeMultiDynamicResponse(false),
        flagHasAddTimeNoMatchDynamicResponse(false),
        flagHasAddTimePartialMatchDynamicResponse(false),
        flagHasFutureSupportDynamicResponse(false)
  {
    extraIndex = create_string_index();
  }

TimerAddTimeCommandJSON::~TimerAddTimeCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasAddTimeAllDynamicResponse)
      {
        storeAddTimeAllDynamicResponse->remove_reference();
      }
    if (flagHasAddTimeSingleDynamicResponse)
      {
        storeAddTimeSingleDynamicResponse->remove_reference();
      }
    if (flagHasAddTimeMultiDynamicResponse)
      {
        storeAddTimeMultiDynamicResponse->remove_reference();
      }
    if (flagHasAddTimeNoMatchDynamicResponse)
      {
        storeAddTimeNoMatchDynamicResponse->remove_reference();
      }
    if (flagHasAddTimePartialMatchDynamicResponse)
      {
        storeAddTimePartialMatchDynamicResponse->remove_reference();
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

const char *TimerAddTimeCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerAddTimeCommand";
  }

bool TimerAddTimeCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

TimerAddTimeCommandJSON::TypeNativeDataJSON * TimerAddTimeCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const TimerAddTimeCommandJSON::TypeNativeDataJSON * TimerAddTimeCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool TimerAddTimeCommandJSON::hasAddTimeAllDynamicResponse(void) const
  {
    return flagHasAddTimeAllDynamicResponse;
  }

DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimeAllDynamicResponse(void)
  {
    assert(flagHasAddTimeAllDynamicResponse);
    return storeAddTimeAllDynamicResponse;
  }

const DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimeAllDynamicResponse(void) const
  {
    assert(flagHasAddTimeAllDynamicResponse);
    return storeAddTimeAllDynamicResponse;
  }

bool TimerAddTimeCommandJSON::hasAddTimeSingleDynamicResponse(void) const
  {
    return flagHasAddTimeSingleDynamicResponse;
  }

DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimeSingleDynamicResponse(void)
  {
    assert(flagHasAddTimeSingleDynamicResponse);
    return storeAddTimeSingleDynamicResponse;
  }

const DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimeSingleDynamicResponse(void) const
  {
    assert(flagHasAddTimeSingleDynamicResponse);
    return storeAddTimeSingleDynamicResponse;
  }

bool TimerAddTimeCommandJSON::hasAddTimeMultiDynamicResponse(void) const
  {
    return flagHasAddTimeMultiDynamicResponse;
  }

DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimeMultiDynamicResponse(void)
  {
    assert(flagHasAddTimeMultiDynamicResponse);
    return storeAddTimeMultiDynamicResponse;
  }

const DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimeMultiDynamicResponse(void) const
  {
    assert(flagHasAddTimeMultiDynamicResponse);
    return storeAddTimeMultiDynamicResponse;
  }

bool TimerAddTimeCommandJSON::hasAddTimeNoMatchDynamicResponse(void) const
  {
    return flagHasAddTimeNoMatchDynamicResponse;
  }

DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimeNoMatchDynamicResponse(void)
  {
    assert(flagHasAddTimeNoMatchDynamicResponse);
    return storeAddTimeNoMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimeNoMatchDynamicResponse(void) const
  {
    assert(flagHasAddTimeNoMatchDynamicResponse);
    return storeAddTimeNoMatchDynamicResponse;
  }

bool TimerAddTimeCommandJSON::hasAddTimePartialMatchDynamicResponse(void) const
  {
    return flagHasAddTimePartialMatchDynamicResponse;
  }

DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimePartialMatchDynamicResponse(void)
  {
    assert(flagHasAddTimePartialMatchDynamicResponse);
    return storeAddTimePartialMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerAddTimeCommandJSON::getAddTimePartialMatchDynamicResponse(void) const
  {
    assert(flagHasAddTimePartialMatchDynamicResponse);
    return storeAddTimePartialMatchDynamicResponse;
  }

bool TimerAddTimeCommandJSON::hasFutureSupportDynamicResponse(void) const
  {
    return flagHasFutureSupportDynamicResponse;
  }

DynamicResponseJSON * TimerAddTimeCommandJSON::getFutureSupportDynamicResponse(void)
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

const DynamicResponseJSON * TimerAddTimeCommandJSON::getFutureSupportDynamicResponse(void) const
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

TimerAddTimeCommandJSON::TypeNativeDataJSON *TimerAddTimeCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
TimerAddTimeCommandJSON *TimerAddTimeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerAddTimeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerAddTimeCommandJSON>, TimerAddTimeCommandJSON *, bool> generator("Type TimerAddTimeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
