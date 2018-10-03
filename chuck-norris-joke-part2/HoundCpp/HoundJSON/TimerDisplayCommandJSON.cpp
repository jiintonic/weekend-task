/* file "TimerDisplayCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerDisplayCommandJSON.h"

#include "TimerDisplayCommandJSON.h"


TimerDisplayCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

TimerDisplayCommandJSON::TypeNativeDataJSON &TimerDisplayCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerDisplayCommandJSON::TypeNativeDataJSON::fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras)
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

void TimerDisplayCommandJSON::TypeNativeDataJSON::fromJSONIsTimeRemainingQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsTimeRemainingQuery of TypeNativeDataJSON is not true for false.");
          }
      }
    setIsTimeRemainingQuery(the_bool);
  }

TimerDisplayCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTimerCriteria(false),
        flagHasIsTimeRemainingQuery(false)
  {
    extraIndex = create_string_index();
  }

TimerDisplayCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool TimerDisplayCommandJSON::TypeNativeDataJSON::hasTimerCriteria(void) const
  {
    return flagHasTimerCriteria;
  }

size_t TimerDisplayCommandJSON::TypeNativeDataJSON::countOfTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria.size();
  }

TimerCriteriaJSON * TimerDisplayCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

const TimerCriteriaJSON * TimerDisplayCommandJSON::TypeNativeDataJSON::elementOfTimerCriteria(size_t element_num) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria[element_num];
  }

std::vector< TimerCriteriaJSON * > TimerDisplayCommandJSON::TypeNativeDataJSON::getTimerCriteria(void)
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

const std::vector< TimerCriteriaJSON * > TimerDisplayCommandJSON::TypeNativeDataJSON::getTimerCriteria(void) const
  {
    assert(flagHasTimerCriteria);
    return storeTimerCriteria;
  }

bool TimerDisplayCommandJSON::TypeNativeDataJSON::hasIsTimeRemainingQuery(void) const
  {
    return flagHasIsTimeRemainingQuery;
  }

bool TimerDisplayCommandJSON::TypeNativeDataJSON::getIsTimeRemainingQuery(void)
  {
    assert(flagHasIsTimeRemainingQuery);
    return storeIsTimeRemainingQuery;
  }

const bool TimerDisplayCommandJSON::TypeNativeDataJSON::getIsTimeRemainingQuery(void) const
  {
    assert(flagHasIsTimeRemainingQuery);
    return storeIsTimeRemainingQuery;
  }

TimerDisplayCommandJSON::TimerDisplayCommandJSON(const TimerDisplayCommandJSON &)
  {
    assert(false);
  }

TimerDisplayCommandJSON &TimerDisplayCommandJSON::operator=(const TimerDisplayCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerDisplayCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *TimerDisplayCommandJSON::extraFutureSupportDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_FutureSupportDynamicResponse;
    storeFutureSupportDynamicResponse->write_as_json(&handler_FutureSupportDynamicResponse);
    handler_FutureSupportDynamicResponse.result->add_reference();
    return handler_FutureSupportDynamicResponse.result;
  }

JSONValue *TimerDisplayCommandJSON::extraDisplayAllDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DisplayAllDynamicResponse;
    storeDisplayAllDynamicResponse->write_as_json(&handler_DisplayAllDynamicResponse);
    handler_DisplayAllDynamicResponse.result->add_reference();
    return handler_DisplayAllDynamicResponse.result;
  }

JSONValue *TimerDisplayCommandJSON::extraDisplaySingleDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DisplaySingleDynamicResponse;
    storeDisplaySingleDynamicResponse->write_as_json(&handler_DisplaySingleDynamicResponse);
    handler_DisplaySingleDynamicResponse.result->add_reference();
    return handler_DisplaySingleDynamicResponse.result;
  }

JSONValue *TimerDisplayCommandJSON::extraDisplayMultiDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DisplayMultiDynamicResponse;
    storeDisplayMultiDynamicResponse->write_as_json(&handler_DisplayMultiDynamicResponse);
    handler_DisplayMultiDynamicResponse.result->add_reference();
    return handler_DisplayMultiDynamicResponse.result;
  }

JSONValue *TimerDisplayCommandJSON::extraDisplayNoMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DisplayNoMatchDynamicResponse;
    storeDisplayNoMatchDynamicResponse->write_as_json(&handler_DisplayNoMatchDynamicResponse);
    handler_DisplayNoMatchDynamicResponse.result->add_reference();
    return handler_DisplayNoMatchDynamicResponse.result;
  }

JSONValue *TimerDisplayCommandJSON::extraDisplayPartialMatchDynamicResponseToJSON(void) const
  {
    JSONValueHandler handler_DisplayPartialMatchDynamicResponse;
    storeDisplayPartialMatchDynamicResponse->write_as_json(&handler_DisplayPartialMatchDynamicResponse);
    handler_DisplayPartialMatchDynamicResponse.result->add_reference();
    return handler_DisplayPartialMatchDynamicResponse.result;
  }

void TimerDisplayCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDisplayCommandJSON::fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFutureSupportDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDisplayCommandJSON::fromJSONDisplayAllDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisplayAllDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDisplayCommandJSON::fromJSONDisplaySingleDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisplaySingleDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDisplayCommandJSON::fromJSONDisplayMultiDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisplayMultiDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDisplayCommandJSON::fromJSONDisplayNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisplayNoMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

void TimerDisplayCommandJSON::fromJSONDisplayPartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisplayPartialMatchDynamicResponse(convert_classy);
    convert_classy->remove_reference();
  }

TimerDisplayCommandJSON::TimerDisplayCommandJSON(void) :
        flagHasNativeData(false),
        flagHasFutureSupportDynamicResponse(false),
        flagHasDisplayAllDynamicResponse(false),
        flagHasDisplaySingleDynamicResponse(false),
        flagHasDisplayMultiDynamicResponse(false),
        flagHasDisplayNoMatchDynamicResponse(false),
        flagHasDisplayPartialMatchDynamicResponse(false)
  {
    extraIndex = create_string_index();
  }

TimerDisplayCommandJSON::~TimerDisplayCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasFutureSupportDynamicResponse)
      {
        storeFutureSupportDynamicResponse->remove_reference();
      }
    if (flagHasDisplayAllDynamicResponse)
      {
        storeDisplayAllDynamicResponse->remove_reference();
      }
    if (flagHasDisplaySingleDynamicResponse)
      {
        storeDisplaySingleDynamicResponse->remove_reference();
      }
    if (flagHasDisplayMultiDynamicResponse)
      {
        storeDisplayMultiDynamicResponse->remove_reference();
      }
    if (flagHasDisplayNoMatchDynamicResponse)
      {
        storeDisplayNoMatchDynamicResponse->remove_reference();
      }
    if (flagHasDisplayPartialMatchDynamicResponse)
      {
        storeDisplayPartialMatchDynamicResponse->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *TimerDisplayCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerDisplayCommand";
  }

bool TimerDisplayCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

TimerDisplayCommandJSON::TypeNativeDataJSON * TimerDisplayCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const TimerDisplayCommandJSON::TypeNativeDataJSON * TimerDisplayCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool TimerDisplayCommandJSON::hasFutureSupportDynamicResponse(void) const
  {
    return flagHasFutureSupportDynamicResponse;
  }

DynamicResponseJSON * TimerDisplayCommandJSON::getFutureSupportDynamicResponse(void)
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

const DynamicResponseJSON * TimerDisplayCommandJSON::getFutureSupportDynamicResponse(void) const
  {
    assert(flagHasFutureSupportDynamicResponse);
    return storeFutureSupportDynamicResponse;
  }

bool TimerDisplayCommandJSON::hasDisplayAllDynamicResponse(void) const
  {
    return flagHasDisplayAllDynamicResponse;
  }

DynamicResponseJSON * TimerDisplayCommandJSON::getDisplayAllDynamicResponse(void)
  {
    assert(flagHasDisplayAllDynamicResponse);
    return storeDisplayAllDynamicResponse;
  }

const DynamicResponseJSON * TimerDisplayCommandJSON::getDisplayAllDynamicResponse(void) const
  {
    assert(flagHasDisplayAllDynamicResponse);
    return storeDisplayAllDynamicResponse;
  }

bool TimerDisplayCommandJSON::hasDisplaySingleDynamicResponse(void) const
  {
    return flagHasDisplaySingleDynamicResponse;
  }

DynamicResponseJSON * TimerDisplayCommandJSON::getDisplaySingleDynamicResponse(void)
  {
    assert(flagHasDisplaySingleDynamicResponse);
    return storeDisplaySingleDynamicResponse;
  }

const DynamicResponseJSON * TimerDisplayCommandJSON::getDisplaySingleDynamicResponse(void) const
  {
    assert(flagHasDisplaySingleDynamicResponse);
    return storeDisplaySingleDynamicResponse;
  }

bool TimerDisplayCommandJSON::hasDisplayMultiDynamicResponse(void) const
  {
    return flagHasDisplayMultiDynamicResponse;
  }

DynamicResponseJSON * TimerDisplayCommandJSON::getDisplayMultiDynamicResponse(void)
  {
    assert(flagHasDisplayMultiDynamicResponse);
    return storeDisplayMultiDynamicResponse;
  }

const DynamicResponseJSON * TimerDisplayCommandJSON::getDisplayMultiDynamicResponse(void) const
  {
    assert(flagHasDisplayMultiDynamicResponse);
    return storeDisplayMultiDynamicResponse;
  }

bool TimerDisplayCommandJSON::hasDisplayNoMatchDynamicResponse(void) const
  {
    return flagHasDisplayNoMatchDynamicResponse;
  }

DynamicResponseJSON * TimerDisplayCommandJSON::getDisplayNoMatchDynamicResponse(void)
  {
    assert(flagHasDisplayNoMatchDynamicResponse);
    return storeDisplayNoMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerDisplayCommandJSON::getDisplayNoMatchDynamicResponse(void) const
  {
    assert(flagHasDisplayNoMatchDynamicResponse);
    return storeDisplayNoMatchDynamicResponse;
  }

bool TimerDisplayCommandJSON::hasDisplayPartialMatchDynamicResponse(void) const
  {
    return flagHasDisplayPartialMatchDynamicResponse;
  }

DynamicResponseJSON * TimerDisplayCommandJSON::getDisplayPartialMatchDynamicResponse(void)
  {
    assert(flagHasDisplayPartialMatchDynamicResponse);
    return storeDisplayPartialMatchDynamicResponse;
  }

const DynamicResponseJSON * TimerDisplayCommandJSON::getDisplayPartialMatchDynamicResponse(void) const
  {
    assert(flagHasDisplayPartialMatchDynamicResponse);
    return storeDisplayPartialMatchDynamicResponse;
  }

TimerDisplayCommandJSON::TypeNativeDataJSON *TimerDisplayCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
TimerDisplayCommandJSON *TimerDisplayCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerDisplayCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerDisplayCommandJSON>, TimerDisplayCommandJSON *, bool> generator("Type TimerDisplayCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
