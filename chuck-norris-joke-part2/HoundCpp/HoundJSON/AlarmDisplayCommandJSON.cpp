/* file "AlarmDisplayCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmDisplayCommandJSON.h"

#include "AlarmDisplayCommandJSON.h"


AlarmDisplayCommandJSON::AlarmDisplayCommandJSON(const AlarmDisplayCommandJSON &)
  {
    assert(false);
  }

AlarmDisplayCommandJSON &AlarmDisplayCommandJSON::operator=(const AlarmDisplayCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AlarmDisplayCommandJSON::extraNativeDataToJSON(void) const
  {
    return storeNativeData;
  }

void AlarmDisplayCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field NativeData of AlarmDisplayCommandJSON is not an object.");
    json_value->object_value()->add_reference();
    setNativeData(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

AlarmDisplayCommandJSON::AlarmDisplayCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

AlarmDisplayCommandJSON::~AlarmDisplayCommandJSON(void)
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

const char *AlarmDisplayCommandJSON::getAlarmCommandKind(void) const
  {
    return "AlarmDisplayCommand";
  }

bool AlarmDisplayCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

JSONObjectValue * AlarmDisplayCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const JSONObjectValue * AlarmDisplayCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

AlarmDisplayCommandJSON *AlarmDisplayCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmDisplayCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmDisplayCommandJSON>, AlarmDisplayCommandJSON *, bool> generator("Type AlarmDisplayCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
