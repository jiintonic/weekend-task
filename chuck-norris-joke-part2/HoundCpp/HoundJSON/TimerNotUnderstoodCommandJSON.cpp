/* file "TimerNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerNotUnderstoodCommandJSON.h"

#include "TimerNotUnderstoodCommandJSON.h"


TimerNotUnderstoodCommandJSON::TimerNotUnderstoodCommandJSON(const TimerNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

TimerNotUnderstoodCommandJSON &TimerNotUnderstoodCommandJSON::operator=(const TimerNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    return storeNativeData;
  }

void TimerNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field NativeData of TimerNotUnderstoodCommandJSON is not an object.");
    json_value->object_value()->add_reference();
    setNativeData(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

TimerNotUnderstoodCommandJSON::TimerNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

TimerNotUnderstoodCommandJSON::~TimerNotUnderstoodCommandJSON(void)
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

const char *TimerNotUnderstoodCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerNotUnderstoodCommand";
  }

bool TimerNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

JSONObjectValue * TimerNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const JSONObjectValue * TimerNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

TimerNotUnderstoodCommandJSON *TimerNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerNotUnderstoodCommandJSON>, TimerNotUnderstoodCommandJSON *, bool> generator("Type TimerNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
