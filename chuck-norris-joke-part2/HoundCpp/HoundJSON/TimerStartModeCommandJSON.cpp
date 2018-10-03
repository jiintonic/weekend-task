/* file "TimerStartModeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerStartModeCommandJSON.h"

#include "TimerStartModeCommandJSON.h"


TimerStartModeCommandJSON::TimerStartModeCommandJSON(const TimerStartModeCommandJSON &)
  {
    assert(false);
  }

TimerStartModeCommandJSON &TimerStartModeCommandJSON::operator=(const TimerStartModeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimerStartModeCommandJSON::extraNativeDataToJSON(void) const
  {
    return storeNativeData;
  }

void TimerStartModeCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field NativeData of TimerStartModeCommandJSON is not an object.");
    json_value->object_value()->add_reference();
    setNativeData(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

TimerStartModeCommandJSON::TimerStartModeCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

TimerStartModeCommandJSON::~TimerStartModeCommandJSON(void)
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

const char *TimerStartModeCommandJSON::getTimerCommandKind(void) const
  {
    return "TimerStartModeCommand";
  }

bool TimerStartModeCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

JSONObjectValue * TimerStartModeCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const JSONObjectValue * TimerStartModeCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

TimerStartModeCommandJSON *TimerStartModeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerStartModeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerStartModeCommandJSON>, TimerStartModeCommandJSON *, bool> generator("Type TimerStartModeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
