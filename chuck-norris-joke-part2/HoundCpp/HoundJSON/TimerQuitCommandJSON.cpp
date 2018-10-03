/* file "TimerQuitCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerQuitCommandJSON.h"

#include "TimerQuitCommandJSON.h"


TimerQuitCommandJSON::TimerQuitCommandJSON(const TimerQuitCommandJSON &)
  {
    assert(false);
  }

TimerQuitCommandJSON &TimerQuitCommandJSON::operator=(const TimerQuitCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerQuitCommandJSON::extraNativeDataToJSON(void) const
  {
    return storeNativeData;
  }

void TimerQuitCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field NativeData of TimerQuitCommandJSON is not an object.");
    json_value->object_value()->add_reference();
    setNativeData(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

TimerQuitCommandJSON::TimerQuitCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

TimerQuitCommandJSON::~TimerQuitCommandJSON(void)
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

const char *TimerQuitCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerQuitCommand";
  }

bool TimerQuitCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

JSONObjectValue * TimerQuitCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const JSONObjectValue * TimerQuitCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

TimerQuitCommandJSON *TimerQuitCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerQuitCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerQuitCommandJSON>, TimerQuitCommandJSON *, bool> generator("Type TimerQuitCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
