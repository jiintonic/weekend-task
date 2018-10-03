/* file "PreviousChannelCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PreviousChannelCommandIntentJSON.h"

#include "PreviousChannelCommandIntentJSON.h"


PreviousChannelCommandIntentJSON::PreviousChannelCommandIntentJSON(const PreviousChannelCommandIntentJSON &)
  {
    assert(false);
  }

PreviousChannelCommandIntentJSON &PreviousChannelCommandIntentJSON::operator=(const PreviousChannelCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

PreviousChannelCommandIntentJSON::PreviousChannelCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

PreviousChannelCommandIntentJSON::~PreviousChannelCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *PreviousChannelCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "PreviousChannel";
  }

PreviousChannelCommandIntentJSON *PreviousChannelCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PreviousChannelCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PreviousChannelCommandIntentJSON>, PreviousChannelCommandIntentJSON *, bool> generator("Type PreviousChannelCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
