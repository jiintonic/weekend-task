/* file "MusicPlayerCommandConversationStateElementJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicPlayerCommandConversationStateElementJSON.h"

#include "MusicPlayerCommandConversationStateElementJSON.h"


MusicPlayerCommandConversationStateElementJSON::MusicPlayerCommandConversationStateElementJSON(const MusicPlayerCommandConversationStateElementJSON &)
  {
    assert(false);
  }

MusicPlayerCommandConversationStateElementJSON &MusicPlayerCommandConversationStateElementJSON::operator=(const MusicPlayerCommandConversationStateElementJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

MusicPlayerCommandConversationStateElementJSON::MusicPlayerCommandConversationStateElementJSON(void)
  {
    extraIndex = create_string_index();
  }

MusicPlayerCommandConversationStateElementJSON::~MusicPlayerCommandConversationStateElementJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MusicPlayerCommandConversationStateElementJSON::getMusicCommandConversationStateElementKind(void) const
  {
    return "MusicPlayerCommandConversationStateElement";
  }

MusicPlayerCommandConversationStateElementJSON *MusicPlayerCommandConversationStateElementJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicPlayerCommandConversationStateElementJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicPlayerCommandConversationStateElementJSON>, MusicPlayerCommandConversationStateElementJSON *, bool> generator("Type MusicPlayerCommandConversationStateElement", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
