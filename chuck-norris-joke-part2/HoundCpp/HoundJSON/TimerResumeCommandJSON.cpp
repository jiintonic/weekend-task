/* file "TimerResumeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerResumeCommandJSON.h"

#include "TimerResumeCommandJSON.h"


TimerResumeCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

TimerResumeCommandJSON::TypeNativeDataJSON &TimerResumeCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerResumeCommandJSON::TypeNativeDataJSON::fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras)
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

TimerResumeCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTimerCriteria(false)
  {
    extraIndex = create_string_index();
  }

TimerResumeCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool TimerResumeCommandJSON::TypeNativeDataJSON::hasTimerCriteria(void) const
  {
    return flagHasTimerCriteria;
  }

size_t TimerResumeCommandJSON::TypeNativeDataJSON::countOfTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria.size();
  }

TimerCriteriaJSON * TimerResumeCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

const TimerCriteriaJSON * TimerResumeCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

std::vector< TimerCriteriaJSON * > TimerResumeCommandJSON::TypeNativeDataJSON::getTimerCriteria(void)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

const std::vector< TimerCriteriaJSON * > TimerResumeCommandJSON::TypeNativeDataJSON::getTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

TimerResumeCommandJSON::TimerResumeCommandJSON(const TimerResumeCommandJSON &)
  {
    assert(false);
  }

TimerResumeCommandJSON &TimerResumeCommandJSON::operator=(const TimerResumeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerResumeCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *TimerResumeCommandJSON::extraResumeAllDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResumeAllDynamicResponse;
    storeResumeAllDynamicResponse->write_as_json(&handler_ResumeAllDynamicResponse);
    handler_ResumeAllDynamicResponse.result->add_reference();
    return handler_ResumeAllDynamicResponse.result;
  }

JSONValue *TimerResumeCommandJSON::extraResumeSingleDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResumeSingleDynamicResponse;
    storeResumeSingleDynamicResponse->write_as_json(&handler_ResumeSingleDynamicResponse);
    handler_ResumeSingleDynamicResponse.result->add_reference();
    return handler_ResumeSingleDynamicResponse.result;
  }

JSONValue *TimerResumeCommandJSON::extraResumeMultiDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResumeMultiDynamicResponse;
    storeResumeMultiDynamicResponse->write_as_json(&handler_ResumeMultiDynamicResponse);
    handler_ResumeMultiDynamicResponse.result->add_reference();
    return handler_ResumeMultiDynamicResponse.result;
  }

JSONValue *TimerResumeCommandJSON::extraResumeNoMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResumeNoMatchDynamicResponse;
    storeResumeNoMatchDynamicResponse->write_as_json(&handler_ResumeNoMatchDynamicResponse);
    handler_ResumeNoMatchDynamicResponse.result->add_reference();
    return handler_ResumeNoMatchDynamicResponse.result;
  }

JSONValue *TimerResumeCommandJSON::extraResumePartialMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_ResumePartialMatchDynamicResponse;
    storeResumePartialMatchDynamicResponse->write_as_json(&handler_ResumePartialMatchDynamicResponse);
    handler_ResumePartialMatchDynamicResponse.result->add_reference();
    return handler_ResumePartialMatchDynamicResponse.result;
  }

JSONValue *TimerResumeCommandJSON::extraFutureSupportDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_FutureSupportDynamicResponse;
    storeFutureSupportDynamicResponse->write_as_json(&handler_FutureSupportDynamicResponse);
    handler_FutureSupportDynamicResponse.result->add_reference();
    return handler_FutureSupportDynamicResponse.result;
  }

void TimerResumeCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResumeCommandJSON::fromJSONResumeAllDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResumeAllDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResumeCommandJSON::fromJSONResumeSingleDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResumeSingleDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResumeCommandJSON::fromJSONResumeMultiDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResumeMultiDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResumeCommandJSON::fromJSONResumeNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResumeNoMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResumeCommandJSON::fromJSONResumePartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResumePartialMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerResumeCommandJSON::fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFutureSupportDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

TimerResumeCommandJSON::TimerResumeCommandJSON(void) :
        flagHasNativeData(false),
        flagHasResumeAllDynamicResponse(false),
        flagHasResumeSingleDynamicResponse(false),
        flagHasResumeMultiDynamicResponse(false),
        flagHasResumeNoMatchDynamicResponse(false),
        flagHasResumePartialMatchDynamicResponse(false),
        flagHasFutureSupportDynamicResponse(false)
  {
    extraIndex = create_string_index();
  }

TimerResumeCommandJSON::~TimerResumeCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasResumeAllDynamicResponse)
      {
        storeResumeAllDynamicResponse->remove_reference();
      }
    if (flagHasResumeSingleDynamicResponse)
      {
        storeResumeSingleDynamicResponse->remove_reference();
      }
    if (flagHasResumeMultiDynamicResponse)
      {
        storeResumeMultiDynamicResponse->remove_reference();
      }
    if (flagHasResumeNoMatchDynamicResponse)
      {
        storeResumeNoMatchDynamicResponse->remove_reference();
      }
    if (flagHasResumePartialMatchDynamicResponse)
      {
        storeResumePartialMatchDynamicResponse->remove_reference();
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

const char *TimerResumeCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerResumeCommand";
  }

bool TimerResumeCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

TimerResumeCommandJSON::TypeNativeDataJSON * TimerResumeCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const TimerResumeCommandJSON::TypeNativeDataJSON * TimerResumeCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool TimerResumeCommandJSON::hasResumeAllDynamicResponse(void) const
  {
    return flagHasResumeAllDynamicResponse;
  }

DynamicResponseJSON * TimerResumeCommandJSON::getResumeAllDynamicResponse(void)
  {
    assert(flagHasResumeAllDynamicResponse);
    return storeResumeAllDynamicResponse;
  }

const DynamicResponseJSON * TimerResumeCommandJSON::getResumeAllDynamicResponse(void) const
  {
    assert(flagHasResumeAllDynamicResponse);
    return storeResumeAllDynamicResponse;
  }

bool TimerResumeCommandJSON::hasResumeSingleDynamicResponse(void) const
  {
    return flagHasResumeSingleDynamicResponse;
  }

DynamicResponseJSON * TimerResumeCommandJSON::getResumeSingleDynamicResponse(void)
  {
    assert(flagHasResumeSingleDynamicResponse);
    return storeResumeSingleDynamicResponse;
  }

const DynamicResponseJSON * TimerResumeCommandJSON::getResumeSingleDynamicResponse(void) const
  {
    assert(flagHasResumeSingleDynamicResponse);
    return storeResumeSingleDynamicResponse;
  }

bool TimerResumeCommandJSON::hasResumeMultiDynamicResponse(void) const
  {
    return flagHasResumeMultiDynamicResponse;
  }

DynamicResponseJSON * TimerResumeCommandJSON::getResumeMultiDynamicResponse(void)
  {
    assert(flagHasResumeMultiDynamicResponse);
    return storeResumeMultiDynamicResponse;
  }

const DynamicResponseJSON * TimerResumeCommandJSON::getResumeMultiDynamicResponse(void) const
  {
    assert(flagHasResumeMultiDynamicResponse);
    return storeResumeMultiDynamicResponse;
  }

bool TimerResumeCommandJSON::hasResumeNoMatchDynamicResponse(void) const
  {
    return flagHasResumeNoMatchDynamicResponse;
  }

DynamicResponseJSON * TimerResumeCommandJSON::getResumeNoMatchDynamicResponse(void)
  {
    assert(flagHasResumeNoMatchDynamicResponse);
    return storeResumeNoMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerResumeCommandJSON::getResumeNoMatchDynamicResponse(void) const
  {
    assert(flagHasResumeNoMatchDynamicResponse);
    return storeResumeNoMatchDynamicResponse;
  }

bool TimerResumeCommandJSON::hasResumePartialMatchDynamicResponse(void) const
  {
    return flagHasResumePartialMatchDynamicResponse;
  }

DynamicResponseJSON * TimerResumeCommandJSON::getResumePartialMatchDynamicResponse(void)
  {
    assert(flagHasResumePartialMatchDynamicResponse);
    return storeResumePartialMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerResumeCommandJSON::getResumePartialMatchDynamicResponse(void) const
  {
    assert(flagHasResumePartialMatchDynamicResponse);
    return storeResumePartialMatchDynamicResponse;
  }

bool TimerResumeCommandJSON::hasFutureSupportDynamicResponse(void) const
  {
    return flagHasFutureSupportDynamicResponse;
  }

DynamicResponseJSON * TimerResumeCommandJSON::getFutureSupportDynamicResponse(void)
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

const DynamicResponseJSON * TimerResumeCommandJSON::getFutureSupportDynamicResponse(void) const
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

TimerResumeCommandJSON::TypeNativeDataJSON *TimerResumeCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
TimerResumeCommandJSON *TimerResumeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerResumeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerResumeCommandJSON>, TimerResumeCommandJSON *, bool> generator("Type TimerResumeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
