/* file "TimerDeleteCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerDeleteCommandJSON.h"

#include "TimerDeleteCommandJSON.h"


TimerDeleteCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

TimerDeleteCommandJSON::TypeNativeDataJSON &TimerDeleteCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerDeleteCommandJSON::TypeNativeDataJSON::fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras)
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

TimerDeleteCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTimerCriteria(false)
  {
    extraIndex = create_string_index();
  }

TimerDeleteCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool TimerDeleteCommandJSON::TypeNativeDataJSON::hasTimerCriteria(void) const
  {
    return flagHasTimerCriteria;
  }

size_t TimerDeleteCommandJSON::TypeNativeDataJSON::countOfTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria.size();
  }

TimerCriteriaJSON * TimerDeleteCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

const TimerCriteriaJSON * TimerDeleteCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

std::vector< TimerCriteriaJSON * > TimerDeleteCommandJSON::TypeNativeDataJSON::getTimerCriteria(void)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

const std::vector< TimerCriteriaJSON * > TimerDeleteCommandJSON::TypeNativeDataJSON::getTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

TimerDeleteCommandJSON::TimerDeleteCommandJSON(const TimerDeleteCommandJSON &)
  {
    assert(false);
  }

TimerDeleteCommandJSON &TimerDeleteCommandJSON::operator=(const TimerDeleteCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerDeleteCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *TimerDeleteCommandJSON::extraDeleteAllDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeleteAllDynamicResponse;
    storeDeleteAllDynamicResponse->write_as_json(&handler_DeleteAllDynamicResponse);
    handler_DeleteAllDynamicResponse.result->add_reference();
    return handler_DeleteAllDynamicResponse.result;
  }

JSONValue *TimerDeleteCommandJSON::extraDeleteSingleDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeleteSingleDynamicResponse;
    storeDeleteSingleDynamicResponse->write_as_json(&handler_DeleteSingleDynamicResponse);
    handler_DeleteSingleDynamicResponse.result->add_reference();
    return handler_DeleteSingleDynamicResponse.result;
  }

JSONValue *TimerDeleteCommandJSON::extraDeleteMultiDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeleteMultiDynamicResponse;
    storeDeleteMultiDynamicResponse->write_as_json(&handler_DeleteMultiDynamicResponse);
    handler_DeleteMultiDynamicResponse.result->add_reference();
    return handler_DeleteMultiDynamicResponse.result;
  }

JSONValue *TimerDeleteCommandJSON::extraDeleteNoMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeleteNoMatchDynamicResponse;
    storeDeleteNoMatchDynamicResponse->write_as_json(&handler_DeleteNoMatchDynamicResponse);
    handler_DeleteNoMatchDynamicResponse.result->add_reference();
    return handler_DeleteNoMatchDynamicResponse.result;
  }

JSONValue *TimerDeleteCommandJSON::extraDeletePartialMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DeletePartialMatchDynamicResponse;
    storeDeletePartialMatchDynamicResponse->write_as_json(&handler_DeletePartialMatchDynamicResponse);
    handler_DeletePartialMatchDynamicResponse.result->add_reference();
    return handler_DeletePartialMatchDynamicResponse.result;
  }

JSONValue *TimerDeleteCommandJSON::extraFutureSupportDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_FutureSupportDynamicResponse;
    storeFutureSupportDynamicResponse->write_as_json(&handler_FutureSupportDynamicResponse);
    handler_FutureSupportDynamicResponse.result->add_reference();
    return handler_FutureSupportDynamicResponse.result;
  }

void TimerDeleteCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDeleteCommandJSON::fromJSONDeleteAllDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteAllDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDeleteCommandJSON::fromJSONDeleteSingleDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteSingleDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDeleteCommandJSON::fromJSONDeleteMultiDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteMultiDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDeleteCommandJSON::fromJSONDeleteNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteNoMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDeleteCommandJSON::fromJSONDeletePartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeletePartialMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDeleteCommandJSON::fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFutureSupportDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

TimerDeleteCommandJSON::TimerDeleteCommandJSON(void) :
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

TimerDeleteCommandJSON::~TimerDeleteCommandJSON(void)
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

const char *TimerDeleteCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerDeleteCommand";
  }

bool TimerDeleteCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

TimerDeleteCommandJSON::TypeNativeDataJSON * TimerDeleteCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const TimerDeleteCommandJSON::TypeNativeDataJSON * TimerDeleteCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool TimerDeleteCommandJSON::hasDeleteAllDynamicResponse(void) const
  {
    return flagHasDeleteAllDynamicResponse;
  }

DynamicResponseJSON * TimerDeleteCommandJSON::getDeleteAllDynamicResponse(void)
  {
    assert(flagHasDeleteAllDynamicResponse);
    return storeDeleteAllDynamicResponse;
  }

const DynamicResponseJSON * TimerDeleteCommandJSON::getDeleteAllDynamicResponse(void) const
  {
    assert(flagHasDeleteAllDynamicResponse);
    return storeDeleteAllDynamicResponse;
  }

bool TimerDeleteCommandJSON::hasDeleteSingleDynamicResponse(void) const
  {
    return flagHasDeleteSingleDynamicResponse;
  }

DynamicResponseJSON * TimerDeleteCommandJSON::getDeleteSingleDynamicResponse(void)
  {
    assert(flagHasDeleteSingleDynamicResponse);
    return storeDeleteSingleDynamicResponse;
  }

const DynamicResponseJSON * TimerDeleteCommandJSON::getDeleteSingleDynamicResponse(void) const
  {
    assert(flagHasDeleteSingleDynamicResponse);
    return storeDeleteSingleDynamicResponse;
  }

bool TimerDeleteCommandJSON::hasDeleteMultiDynamicResponse(void) const
  {
    return flagHasDeleteMultiDynamicResponse;
  }

DynamicResponseJSON * TimerDeleteCommandJSON::getDeleteMultiDynamicResponse(void)
  {
    assert(flagHasDeleteMultiDynamicResponse);
    return storeDeleteMultiDynamicResponse;
  }

const DynamicResponseJSON * TimerDeleteCommandJSON::getDeleteMultiDynamicResponse(void) const
  {
    assert(flagHasDeleteMultiDynamicResponse);
    return storeDeleteMultiDynamicResponse;
  }

bool TimerDeleteCommandJSON::hasDeleteNoMatchDynamicResponse(void) const
  {
    return flagHasDeleteNoMatchDynamicResponse;
  }

DynamicResponseJSON * TimerDeleteCommandJSON::getDeleteNoMatchDynamicResponse(void)
  {
    assert(flagHasDeleteNoMatchDynamicResponse);
    return storeDeleteNoMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerDeleteCommandJSON::getDeleteNoMatchDynamicResponse(void) const
  {
    assert(flagHasDeleteNoMatchDynamicResponse);
    return storeDeleteNoMatchDynamicResponse;
  }

bool TimerDeleteCommandJSON::hasDeletePartialMatchDynamicResponse(void) const
  {
    return flagHasDeletePartialMatchDynamicResponse;
  }

DynamicResponseJSON * TimerDeleteCommandJSON::getDeletePartialMatchDynamicResponse(void)
  {
    assert(flagHasDeletePartialMatchDynamicResponse);
    return storeDeletePartialMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerDeleteCommandJSON::getDeletePartialMatchDynamicResponse(void) const
  {
    assert(flagHasDeletePartialMatchDynamicResponse);
    return storeDeletePartialMatchDynamicResponse;
  }

bool TimerDeleteCommandJSON::hasFutureSupportDynamicResponse(void) const
  {
    return flagHasFutureSupportDynamicResponse;
  }

DynamicResponseJSON * TimerDeleteCommandJSON::getFutureSupportDynamicResponse(void)
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

const DynamicResponseJSON * TimerDeleteCommandJSON::getFutureSupportDynamicResponse(void) const
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

TimerDeleteCommandJSON::TypeNativeDataJSON *TimerDeleteCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
TimerDeleteCommandJSON *TimerDeleteCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerDeleteCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerDeleteCommandJSON>, TimerDeleteCommandJSON *, bool> generator("Type TimerDeleteCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
