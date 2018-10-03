/* file "NextPresetOrChannelCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NextPresetOrChannelCommandIntentJSON.h"

#include "NextPresetOrChannelCommandIntentJSON.h"


NextPresetOrChannelCommandIntentJSON::NextPresetOrChannelCommandIntentJSON(const NextPresetOrChannelCommandIntentJSON &)
  {
    assert(false);
  }

NextPresetOrChannelCommandIntentJSON &NextPresetOrChannelCommandIntentJSON::operator=(const NextPresetOrChannelCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NextPresetOrChannelCommandIntentJSON::NextPresetOrChannelCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

NextPresetOrChannelCommandIntentJSON::~NextPresetOrChannelCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NextPresetOrChannelCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "NextPresetOrChannel";
  }

NextPresetOrChannelCommandIntentJSON *NextPresetOrChannelCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NextPresetOrChannelCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NextPresetOrChannelCommandIntentJSON>, NextPresetOrChannelCommandIntentJSON *, bool> generator("Type NextPresetOrChannelCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
