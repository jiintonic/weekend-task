/* file "MusicChartsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicChartsCommandJSON.h"

#include "MusicChartsCommandJSON.h"


MusicChartsCommandJSON::MusicChartsCommandJSON(const MusicChartsCommandJSON &)
  {
    assert(false);
  }

MusicChartsCommandJSON &MusicChartsCommandJSON::operator=(const MusicChartsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MusicChartsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void MusicChartsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicChartsCommandNativeDataJSON *convert_classy = MusicChartsCommandNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

MusicChartsCommandJSON::MusicChartsCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

MusicChartsCommandJSON::~MusicChartsCommandJSON(void)
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

const char *MusicChartsCommandJSON::getMusicCommandKind(void) const
  {
    return "MusicChartsCommand";
  }

bool MusicChartsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

MusicChartsCommandNativeDataJSON * MusicChartsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const MusicChartsCommandNativeDataJSON * MusicChartsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

MusicChartsCommandJSON *MusicChartsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicChartsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicChartsCommandJSON>, MusicChartsCommandJSON *, bool> generator("Type MusicChartsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
