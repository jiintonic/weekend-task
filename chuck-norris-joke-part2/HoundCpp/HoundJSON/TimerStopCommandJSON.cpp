/* file "TimerStopCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerStopCommandJSON.h"

#include "TimerStopCommandJSON.h"


TimerStopCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

TimerStopCommandJSON::TypeNativeDataJSON &TimerStopCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerStopCommandJSON::TypeNativeDataJSON::fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras)
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

TimerStopCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTimerCriteria(false)
  {
    extraIndex = create_string_index();
  }

TimerStopCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasTimerCriteria)
      {
        for (size_t num4 = 0; num4 < storeTimerCriteria.size(); ++num4)
          {
            storeTimerCriteria[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimerStopCommandJSON::TypeNativeDataJSON::hasTimerCriteria(void) const
  {
    return flagHasTimerCriteria;
  }

size_t TimerStopCommandJSON::TypeNativeDataJSON::countOfTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria.size();
  }

TimerCriteriaJSON * TimerStopCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

const TimerCriteriaJSON * TimerStopCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

std::vector< TimerCriteriaJSON * > TimerStopCommandJSON::TypeNativeDataJSON::getTimerCriteria(void)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

const std::vector< TimerCriteriaJSON * > TimerStopCommandJSON::TypeNativeDataJSON::getTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

TimerStopCommandJSON::TimerStopCommandJSON(const TimerStopCommandJSON &)
  {
    assert(false);
  }

TimerStopCommandJSON &TimerStopCommandJSON::operator=(const TimerStopCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerStopCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *TimerStopCommandJSON::extraStopAllDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_StopAllDynamicResponse;
    storeStopAllDynamicResponse->write_as_json(&handler_StopAllDynamicResponse);
    handler_StopAllDynamicResponse.result->add_reference();
    return handler_StopAllDynamicResponse.result;
  }

JSONValue *TimerStopCommandJSON::extraStopSingleDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_StopSingleDynamicResponse;
    storeStopSingleDynamicResponse->write_as_json(&handler_StopSingleDynamicResponse);
    handler_StopSingleDynamicResponse.result->add_reference();
    return handler_StopSingleDynamicResponse.result;
  }

JSONValue *TimerStopCommandJSON::extraStopMultiDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_StopMultiDynamicResponse;
    storeStopMultiDynamicResponse->write_as_json(&handler_StopMultiDynamicResponse);
    handler_StopMultiDynamicResponse.result->add_reference();
    return handler_StopMultiDynamicResponse.result;
  }

JSONValue *TimerStopCommandJSON::extraStopNoMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_StopNoMatchDynamicResponse;
    storeStopNoMatchDynamicResponse->write_as_json(&handler_StopNoMatchDynamicResponse);
    handler_StopNoMatchDynamicResponse.result->add_reference();
    return handler_StopNoMatchDynamicResponse.result;
  }

JSONValue *TimerStopCommandJSON::extraStopPartialMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_StopPartialMatchDynamicResponse;
    storeStopPartialMatchDynamicResponse->write_as_json(&handler_StopPartialMatchDynamicResponse);
    handler_StopPartialMatchDynamicResponse.result->add_reference();
    return handler_StopPartialMatchDynamicResponse.result;
  }

JSONValue *TimerStopCommandJSON::extraFutureSupportDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_FutureSupportDynamicResponse;
    storeFutureSupportDynamicResponse->write_as_json(&handler_FutureSupportDynamicResponse);
    handler_FutureSupportDynamicResponse.result->add_reference();
    return handler_FutureSupportDynamicResponse.result;
  }

void TimerStopCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void TimerStopCommandJSON::fromJSONStopAllDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStopAllDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerStopCommandJSON::fromJSONStopSingleDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStopSingleDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerStopCommandJSON::fromJSONStopMultiDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStopMultiDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerStopCommandJSON::fromJSONStopNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStopNoMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerStopCommandJSON::fromJSONStopPartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStopPartialMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerStopCommandJSON::fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFutureSupportDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

TimerStopCommandJSON::TimerStopCommandJSON(void) :
        flagHasNativeData(false),
        flagHasStopAllDynamicResponse(false),
        flagHasStopSingleDynamicResponse(false),
        flagHasStopMultiDynamicResponse(false),
        flagHasStopNoMatchDynamicResponse(false),
        flagHasStopPartialMatchDynamicResponse(false),
        flagHasFutureSupportDynamicResponse(false)
  {
    extraIndex = create_string_index();
  }

TimerStopCommandJSON::~TimerStopCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasStopAllDynamicResponse)
      {
        storeStopAllDynamicResponse->remove_reference();
      }
    if (flagHasStopSingleDynamicResponse)
      {
        storeStopSingleDynamicResponse->remove_reference();
      }
    if (flagHasStopMultiDynamicResponse)
      {
        storeStopMultiDynamicResponse->remove_reference();
      }
    if (flagHasStopNoMatchDynamicResponse)
      {
        storeStopNoMatchDynamicResponse->remove_reference();
      }
    if (flagHasStopPartialMatchDynamicResponse)
      {
        storeStopPartialMatchDynamicResponse->remove_reference();
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

const char *TimerStopCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerStopCommand";
  }

bool TimerStopCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

TimerStopCommandJSON::TypeNativeDataJSON * TimerStopCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const TimerStopCommandJSON::TypeNativeDataJSON * TimerStopCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool TimerStopCommandJSON::hasStopAllDynamicResponse(void) const
  {
    return flagHasStopAllDynamicResponse;
  }

DynamicResponseJSON * TimerStopCommandJSON::getStopAllDynamicResponse(void)
  {
    assert(flagHasStopAllDynamicResponse);
    return storeStopAllDynamicResponse;
  }

const DynamicResponseJSON * TimerStopCommandJSON::getStopAllDynamicResponse(void) const
  {
    assert(flagHasStopAllDynamicResponse);
    return storeStopAllDynamicResponse;
  }

bool TimerStopCommandJSON::hasStopSingleDynamicResponse(void) const
  {
    return flagHasStopSingleDynamicResponse;
  }

DynamicResponseJSON * TimerStopCommandJSON::getStopSingleDynamicResponse(void)
  {
    assert(flagHasStopSingleDynamicResponse);
    return storeStopSingleDynamicResponse;
  }

const DynamicResponseJSON * TimerStopCommandJSON::getStopSingleDynamicResponse(void) const
  {
    assert(flagHasStopSingleDynamicResponse);
    return storeStopSingleDynamicResponse;
  }

bool TimerStopCommandJSON::hasStopMultiDynamicResponse(void) const
  {
    return flagHasStopMultiDynamicResponse;
  }

DynamicResponseJSON * TimerStopCommandJSON::getStopMultiDynamicResponse(void)
  {
    assert(flagHasStopMultiDynamicResponse);
    return storeStopMultiDynamicResponse;
  }

const DynamicResponseJSON * TimerStopCommandJSON::getStopMultiDynamicResponse(void) const
  {
    assert(flagHasStopMultiDynamicResponse);
    return storeStopMultiDynamicResponse;
  }

bool TimerStopCommandJSON::hasStopNoMatchDynamicResponse(void) const
  {
    return flagHasStopNoMatchDynamicResponse;
  }

DynamicResponseJSON * TimerStopCommandJSON::getStopNoMatchDynamicResponse(void)
  {
    assert(flagHasStopNoMatchDynamicResponse);
    return storeStopNoMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerStopCommandJSON::getStopNoMatchDynamicResponse(void) const
  {
    assert(flagHasStopNoMatchDynamicResponse);
    return storeStopNoMatchDynamicResponse;
  }

bool TimerStopCommandJSON::hasStopPartialMatchDynamicResponse(void) const
  {
    return flagHasStopPartialMatchDynamicResponse;
  }

DynamicResponseJSON * TimerStopCommandJSON::getStopPartialMatchDynamicResponse(void)
  {
    assert(flagHasStopPartialMatchDynamicResponse);
    return storeStopPartialMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerStopCommandJSON::getStopPartialMatchDynamicResponse(void) const
  {
    assert(flagHasStopPartialMatchDynamicResponse);
    return storeStopPartialMatchDynamicResponse;
  }

bool TimerStopCommandJSON::hasFutureSupportDynamicResponse(void) const
  {
    return flagHasFutureSupportDynamicResponse;
  }

DynamicResponseJSON * TimerStopCommandJSON::getFutureSupportDynamicResponse(void)
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

const DynamicResponseJSON * TimerStopCommandJSON::getFutureSupportDynamicResponse(void) const
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

TimerStopCommandJSON::TypeNativeDataJSON *TimerStopCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
TimerStopCommandJSON *TimerStopCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerStopCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerStopCommandJSON>, TimerStopCommandJSON *, bool> generator("Type TimerStopCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
