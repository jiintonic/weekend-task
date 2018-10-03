/* file "TimerSetCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerSetCommandJSON.h"

#include "TimerSetCommandJSON.h"


TimerSetCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

TimerSetCommandJSON::TypeNativeDataJSON &TimerSetCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerSetCommandJSON::TypeNativeDataJSON::fromJSONTimers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Timers of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Timers of TypeNativeDataJSON has too few elements.");
    std::vector< TimerJSON * > vector_Timers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TimerJSON *convert_classy = TimerJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Timers1[num1] = convert_classy;
      }
    assert(vector_Timers1.size() >= 1);
    initTimers();
    for (size_t num2 = 0; num2 < vector_Timers1.size(); ++num2)
        appendTimers(vector_Timers1[num2]);
    for (size_t num1 = 0; num1 < vector_Timers1.size(); ++num1)
      {
        vector_Timers1[num1]->remove_reference();
      }
  }

void TimerSetCommandJSON::TypeNativeDataJSON::fromJSONTimer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimerJSON *convert_classy = TimerJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTimer(convert_classy);
    convert_classy->remove_reference();
  }

TimerSetCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTimers(false),
        flagHasTimer(false)
  {
    extraIndex = create_string_index();
  }

TimerSetCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasTimers)
      {
        for (size_t num4 = 0; num4 < storeTimers.size(); ++num4)
          {
            storeTimers[num4]->remove_reference();
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

bool TimerSetCommandJSON::TypeNativeDataJSON::hasTimers(void) const
  {
    return flagHasTimers;
  }

size_t TimerSetCommandJSON::TypeNativeDataJSON::countOfTimers(void) const
  {
    assert(flagHasTimers);
    return storeTimers.size();
  }

TimerJSON * TimerSetCommandJSON::TypeNativeDataJSON::elementOfTimers(size_t element_num)
  {
    assert(flagHasTimers);
    return storeTimers[element_num];
  }

const TimerJSON * TimerSetCommandJSON::TypeNativeDataJSON::elementOfTimers(size_t element_num) const
  {
    assert(flagHasTimers);
    return storeTimers[element_num];
  }

std::vector< TimerJSON * > TimerSetCommandJSON::TypeNativeDataJSON::getTimers(void)
  {
    assert(flagHasTimers);
    return storeTimers;
  }

const std::vector< TimerJSON * > TimerSetCommandJSON::TypeNativeDataJSON::getTimers(void) const
  {
    assert(flagHasTimers);
    return storeTimers;
  }

bool TimerSetCommandJSON::TypeNativeDataJSON::hasTimer(void) const
  {
    return flagHasTimer;
  }

TimerJSON * TimerSetCommandJSON::TypeNativeDataJSON::getTimer(void)
  {
    assert(flagHasTimer);
    return storeTimer;
  }

const TimerJSON * TimerSetCommandJSON::TypeNativeDataJSON::getTimer(void) const
  {
    assert(flagHasTimer);
    return storeTimer;
  }

TimerSetCommandJSON::TimerSetCommandJSON(const TimerSetCommandJSON &)
  {
    assert(false);
  }

TimerSetCommandJSON &TimerSetCommandJSON::operator=(const TimerSetCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerSetCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void TimerSetCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

TimerSetCommandJSON::TimerSetCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

TimerSetCommandJSON::~TimerSetCommandJSON(void)
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

const char *TimerSetCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerSetCommand";
  }

bool TimerSetCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

TimerSetCommandJSON::TypeNativeDataJSON * TimerSetCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const TimerSetCommandJSON::TypeNativeDataJSON * TimerSetCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

TimerSetCommandJSON::TypeNativeDataJSON *TimerSetCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
TimerSetCommandJSON *TimerSetCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerSetCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerSetCommandJSON>, TimerSetCommandJSON *, bool> generator("Type TimerSetCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
