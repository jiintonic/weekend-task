/* file "TimerResetCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerResetCommandJSON.h"

#include "TimerResetCommandJSON.h"


TimerResetCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

TimerResetCommandJSON::TypeNativeDataJSON &TimerResetCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerResetCommandJSON::TypeNativeDataJSON::fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras)
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

TimerResetCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTimerCriteria(false)
  {
    extraIndex = create_string_index();
  }

TimerResetCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool TimerResetCommandJSON::TypeNativeDataJSON::hasTimerCriteria(void) const
  {
    return flagHasTimerCriteria;
  }

size_t TimerResetCommandJSON::TypeNativeDataJSON::countOfTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria.size();
  }

TimerCriteriaJSON * TimerResetCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

const TimerCriteriaJSON * TimerResetCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

std::vector< TimerCriteriaJSON * > TimerResetCommandJSON::TypeNativeDataJSON::getTimerCriteria(void)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

const std::vector< TimerCriteriaJSON * > TimerResetCommandJSON::TypeNativeDataJSON::getTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

TimerResetCommandJSON::TimerResetCommandJSON(const TimerResetCommandJSON &)
  {
    assert(false);
  }

TimerResetCommandJSON &TimerResetCommandJSON::operator=(const TimerResetCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerResetCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *TimerResetCommandJSON::extraResetAllDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResetAllDynamicResponse;
    storeResetAllDynamicResponse->write_as_json(&handler_ResetAllDynamicResponse);
    handler_ResetAllDynamicResponse.result->add_reference();
    return handler_ResetAllDynamicResponse.result;
  }

JSONValue *TimerResetCommandJSON::extraResetSingleDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResetSingleDynamicResponse;
    storeResetSingleDynamicResponse->write_as_json(&handler_ResetSingleDynamicResponse);
    handler_ResetSingleDynamicResponse.result->add_reference();
    return handler_ResetSingleDynamicResponse.result;
  }

JSONValue *TimerResetCommandJSON::extraResetMultiDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResetMultiDynamicResponse;
    storeResetMultiDynamicResponse->write_as_json(&handler_ResetMultiDynamicResponse);
    handler_ResetMultiDynamicResponse.result->add_reference();
    return handler_ResetMultiDynamicResponse.result;
  }

JSONValue *TimerResetCommandJSON::extraResetNoMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResetNoMatchDynamicResponse;
    storeResetNoMatchDynamicResponse->write_as_json(&handler_ResetNoMatchDynamicResponse);
    handler_ResetNoMatchDynamicResponse.result->add_reference();
    return handler_ResetNoMatchDynamicResponse.result;
  }

JSONValue *TimerResetCommandJSON::extraResetPartialMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResetPartialMatchDynamicResponse;
    storeResetPartialMatchDynamicResponse->write_as_json(&handler_ResetPartialMatchDynamicResponse);
    handler_ResetPartialMatchDynamicResponse.result->add_reference();
    return handler_ResetPartialMatchDynamicResponse.result;
  }

JSONValue *TimerResetCommandJSON::extraFutureSupportDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_FutureSupportDynamicResponse;
    storeFutureSupportDynamicResponse->write_as_json(&handler_FutureSupportDynamicResponse);
    handler_FutureSupportDynamicResponse.result->add_reference();
    return handler_FutureSupportDynamicResponse.result;
  }

void TimerResetCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResetCommandJSON::fromJSONResetAllDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResetAllDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResetCommandJSON::fromJSONResetSingleDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResetSingleDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResetCommandJSON::fromJSONResetMultiDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResetMultiDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResetCommandJSON::fromJSONResetNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResetNoMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResetCommandJSON::fromJSONResetPartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResetPartialMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResetCommandJSON::fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFutureSupportDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

TimerResetCommandJSON::TimerResetCommandJSON(void) :
        flagHasNativeData(false),
        flagHasResetAllDynamicResponse(false),
        flagHasResetSingleDynamicResponse(false),
        flagHasResetMultiDynamicResponse(false),
        flagHasResetNoMatchDynamicResponse(false),
        flagHasResetPartialMatchDynamicResponse(false),
        flagHasFutureSupportDynamicResponse(false)
  {
    extraIndex = create_string_index();
  }

TimerResetCommandJSON::~TimerResetCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasResetAllDynamicResponse)
      {
        storeResetAllDynamicResponse->remove_reference();
      }
    if (flagHasResetSingleDynamicResponse)
      {
        storeResetSingleDynamicResponse->remove_reference();
      }
    if (flagHasResetMultiDynamicResponse)
      {
        storeResetMultiDynamicResponse->remove_reference();
      }
    if (flagHasResetNoMatchDynamicResponse)
      {
        storeResetNoMatchDynamicResponse->remove_reference();
      }
    if (flagHasResetPartialMatchDynamicResponse)
      {
        storeResetPartialMatchDynamicResponse->remove_reference();
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

const char *TimerResetCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerResetCommand";
  }

bool TimerResetCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

TimerResetCommandJSON::TypeNativeDataJSON * TimerResetCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const TimerResetCommandJSON::TypeNativeDataJSON * TimerResetCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool TimerResetCommandJSON::hasResetAllDynamicResponse(void) const
  {
    return flagHasResetAllDynamicResponse;
  }

DynamicResponseJSON * TimerResetCommandJSON::getResetAllDynamicResponse(void)
  {
    assert(flagHasResetAllDynamicResponse);
    return storeResetAllDynamicResponse;
  }

const DynamicResponseJSON * TimerResetCommandJSON::getResetAllDynamicResponse(void) const
  {
    assert(flagHasResetAllDynamicResponse);
    return storeResetAllDynamicResponse;
  }

bool TimerResetCommandJSON::hasResetSingleDynamicResponse(void) const
  {
    return flagHasResetSingleDynamicResponse;
  }

DynamicResponseJSON * TimerResetCommandJSON::getResetSingleDynamicResponse(void)
  {
    assert(flagHasResetSingleDynamicResponse);
    return storeResetSingleDynamicResponse;
  }

const DynamicResponseJSON * TimerResetCommandJSON::getResetSingleDynamicResponse(void) const
  {
    assert(flagHasResetSingleDynamicResponse);
    return storeResetSingleDynamicResponse;
  }

bool TimerResetCommandJSON::hasResetMultiDynamicResponse(void) const
  {
    return flagHasResetMultiDynamicResponse;
  }

DynamicResponseJSON * TimerResetCommandJSON::getResetMultiDynamicResponse(void)
  {
    assert(flagHasResetMultiDynamicResponse);
    return storeResetMultiDynamicResponse;
  }

const DynamicResponseJSON * TimerResetCommandJSON::getResetMultiDynamicResponse(void) const
  {
    assert(flagHasResetMultiDynamicResponse);
    return storeResetMultiDynamicResponse;
  }

bool TimerResetCommandJSON::hasResetNoMatchDynamicResponse(void) const
  {
    return flagHasResetNoMatchDynamicResponse;
  }

DynamicResponseJSON * TimerResetCommandJSON::getResetNoMatchDynamicResponse(void)
  {
    assert(flagHasResetNoMatchDynamicResponse);
    return storeResetNoMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerResetCommandJSON::getResetNoMatchDynamicResponse(void) const
  {
    assert(flagHasResetNoMatchDynamicResponse);
    return storeResetNoMatchDynamicResponse;
  }

bool TimerResetCommandJSON::hasResetPartialMatchDynamicResponse(void) const
  {
    return flagHasResetPartialMatchDynamicResponse;
  }

DynamicResponseJSON * TimerResetCommandJSON::getResetPartialMatchDynamicResponse(void)
  {
    assert(flagHasResetPartialMatchDynamicResponse);
    return storeResetPartialMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerResetCommandJSON::getResetPartialMatchDynamicResponse(void) const
  {
    assert(flagHasResetPartialMatchDynamicResponse);
    return storeResetPartialMatchDynamicResponse;
  }

bool TimerResetCommandJSON::hasFutureSupportDynamicResponse(void) const
  {
    return flagHasFutureSupportDynamicResponse;
  }

DynamicResponseJSON * TimerResetCommandJSON::getFutureSupportDynamicResponse(void)
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

const DynamicResponseJSON * TimerResetCommandJSON::getFutureSupportDynamicResponse(void) const
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

TimerResetCommandJSON::TypeNativeDataJSON *TimerResetCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
TimerResetCommandJSON *TimerResetCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerResetCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerResetCommandJSON>, TimerResetCommandJSON *, bool> generator("Type TimerResetCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
