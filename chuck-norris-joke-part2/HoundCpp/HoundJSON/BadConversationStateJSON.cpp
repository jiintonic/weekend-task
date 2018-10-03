/* file "BadConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BadConversationStateJSON.h"

#include "BadConversationStateJSON.h"


BadConversationStateJSON::BadConversationStateJSON(const BadConversationStateJSON &)
  {
    assert(false);
  }

BadConversationStateJSON &BadConversationStateJSON::operator=(const BadConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

BadConversationStateJSON::BadConversationStateJSON(void)
  {
    extraIndex = create_string_index();
  }

BadConversationStateJSON::~BadConversationStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BadConversationStateJSON::getErrorType(void) const
  {
    return "BadConversationState";
  }

BadConversationStateJSON *BadConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BadConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BadConversationStateJSON>, BadConversationStateJSON *, bool> generator("Type BadConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
