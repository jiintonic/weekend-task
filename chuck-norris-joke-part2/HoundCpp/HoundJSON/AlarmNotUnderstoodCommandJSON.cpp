/* file "AlarmNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmNotUnderstoodCommandJSON.h"

#include "AlarmNotUnderstoodCommandJSON.h"


AlarmNotUnderstoodCommandJSON::AlarmNotUnderstoodCommandJSON(const AlarmNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

AlarmNotUnderstoodCommandJSON &AlarmNotUnderstoodCommandJSON::operator=(const AlarmNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AlarmNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    return storeNativeData;
  }

void AlarmNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field NativeData of AlarmNotUnderstoodCommandJSON is not an object.");
    json_value->object_value()->add_reference();
    setNativeData(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

AlarmNotUnderstoodCommandJSON::AlarmNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

AlarmNotUnderstoodCommandJSON::~AlarmNotUnderstoodCommandJSON(void)
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

const char *AlarmNotUnderstoodCommandJSON::getAlarmCommandKind(void) const
  {
    return "AlarmNotUnderstoodCommand";
  }

bool AlarmNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

JSONObjectValue * AlarmNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const JSONObjectValue * AlarmNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

AlarmNotUnderstoodCommandJSON *AlarmNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmNotUnderstoodCommandJSON>, AlarmNotUnderstoodCommandJSON *, bool> generator("Type AlarmNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
