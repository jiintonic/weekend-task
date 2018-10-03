/* file "PreviousPresetOrChannelCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PreviousPresetOrChannelCommandIntentJSON.h"

#include "PreviousPresetOrChannelCommandIntentJSON.h"


PreviousPresetOrChannelCommandIntentJSON::PreviousPresetOrChannelCommandIntentJSON(const PreviousPresetOrChannelCommandIntentJSON &)
  {
    assert(false);
  }

PreviousPresetOrChannelCommandIntentJSON &PreviousPresetOrChannelCommandIntentJSON::operator=(const PreviousPresetOrChannelCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

PreviousPresetOrChannelCommandIntentJSON::PreviousPresetOrChannelCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

PreviousPresetOrChannelCommandIntentJSON::~PreviousPresetOrChannelCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *PreviousPresetOrChannelCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "PreviousPresetOrChannel";
  }

PreviousPresetOrChannelCommandIntentJSON *PreviousPresetOrChannelCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PreviousPresetOrChannelCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PreviousPresetOrChannelCommandIntentJSON>, PreviousPresetOrChannelCommandIntentJSON *, bool> generator("Type PreviousPresetOrChannelCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
