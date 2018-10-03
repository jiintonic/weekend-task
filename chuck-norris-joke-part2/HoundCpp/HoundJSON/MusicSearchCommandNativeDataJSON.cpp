/* file "MusicSearchCommandNativeDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchCommandNativeDataJSON.h"

#include "MusicSearchCommandNativeDataJSON.h"


MusicSearchCommandNativeDataJSON::MusicSearchCommandNativeDataJSON(const MusicSearchCommandNativeDataJSON &)
  {
    assert(false);
  }

MusicSearchCommandNativeDataJSON &MusicSearchCommandNativeDataJSON::operator=(const MusicSearchCommandNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

MusicSearchCommandNativeDataJSON::MusicSearchCommandNativeDataJSON(void)
  {
    extraIndex = create_string_index();
  }

MusicSearchCommandNativeDataJSON::~MusicSearchCommandNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MusicSearchCommandNativeDataJSON::getMusicCommandNativeDataKind(void) const
  {
    return "MusicSearchCommandNativeData";
  }

MusicSearchCommandNativeDataJSON *MusicSearchCommandNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchCommandNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchCommandNativeDataJSON>, MusicSearchCommandNativeDataJSON *, bool> generator("Type MusicSearchCommandNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
