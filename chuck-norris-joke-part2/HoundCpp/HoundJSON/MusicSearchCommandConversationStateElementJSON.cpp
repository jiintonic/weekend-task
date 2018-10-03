/* file "MusicSearchCommandConversationStateElementJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchCommandConversationStateElementJSON.h"

#include "MusicSearchCommandConversationStateElementJSON.h"


MusicSearchCommandConversationStateElementJSON::MusicSearchCommandConversationStateElementJSON(const MusicSearchCommandConversationStateElementJSON &)
  {
    assert(false);
  }

MusicSearchCommandConversationStateElementJSON &MusicSearchCommandConversationStateElementJSON::operator=(const MusicSearchCommandConversationStateElementJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

MusicSearchCommandConversationStateElementJSON::MusicSearchCommandConversationStateElementJSON(void)
  {
    extraIndex = create_string_index();
  }

MusicSearchCommandConversationStateElementJSON::~MusicSearchCommandConversationStateElementJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MusicSearchCommandConversationStateElementJSON::getMusicCommandConversationStateElementKind(void) const
  {
    return "MusicSearchCommandConversationStateElement";
  }

MusicSearchCommandConversationStateElementJSON *MusicSearchCommandConversationStateElementJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchCommandConversationStateElementJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchCommandConversationStateElementJSON>, MusicSearchCommandConversationStateElementJSON *, bool> generator("Type MusicSearchCommandConversationStateElement", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
