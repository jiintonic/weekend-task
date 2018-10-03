/* file "NextChannelCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NextChannelCommandIntentJSON.h"

#include "NextChannelCommandIntentJSON.h"


NextChannelCommandIntentJSON::NextChannelCommandIntentJSON(const NextChannelCommandIntentJSON &)
  {
    assert(false);
  }

NextChannelCommandIntentJSON &NextChannelCommandIntentJSON::operator=(const NextChannelCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NextChannelCommandIntentJSON::NextChannelCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

NextChannelCommandIntentJSON::~NextChannelCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NextChannelCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "NextChannel";
  }

NextChannelCommandIntentJSON *NextChannelCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NextChannelCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NextChannelCommandIntentJSON>, NextChannelCommandIntentJSON *, bool> generator("Type NextChannelCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
