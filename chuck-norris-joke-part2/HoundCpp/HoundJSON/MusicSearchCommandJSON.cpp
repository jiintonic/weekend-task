/* file "MusicSearchCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchCommandJSON.h"

#include "MusicSearchCommandJSON.h"


MusicSearchCommandJSON::MusicSearchCommandJSON(const MusicSearchCommandJSON &)
  {
    assert(false);
  }

MusicSearchCommandJSON &MusicSearchCommandJSON::operator=(const MusicSearchCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MusicSearchCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void MusicSearchCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchCommandNativeDataJSON *convert_classy = MusicSearchCommandNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

MusicSearchCommandJSON::MusicSearchCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

MusicSearchCommandJSON::~MusicSearchCommandJSON(void)
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

const char *MusicSearchCommandJSON::getMusicCommandKind(void) const
  {
    return "MusicSearchCommand";
  }

bool MusicSearchCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

MusicSearchCommandNativeDataJSON * MusicSearchCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const MusicSearchCommandNativeDataJSON * MusicSearchCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

MusicSearchCommandJSON *MusicSearchCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchCommandJSON>, MusicSearchCommandJSON *, bool> generator("Type MusicSearchCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
