/* file "RadioToSpotifyCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToSpotifyCommandIntentJSON.h"

#include "RadioToSpotifyCommandIntentJSON.h"


RadioToSpotifyCommandIntentJSON::RadioToSpotifyCommandIntentJSON(const RadioToSpotifyCommandIntentJSON &)
  {
    assert(false);
  }

RadioToSpotifyCommandIntentJSON &RadioToSpotifyCommandIntentJSON::operator=(const RadioToSpotifyCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RadioToSpotifyCommandIntentJSON::RadioToSpotifyCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RadioToSpotifyCommandIntentJSON::~RadioToSpotifyCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioToSpotifyCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "RadioToSpotify";
  }

RadioToSpotifyCommandIntentJSON *RadioToSpotifyCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToSpotifyCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToSpotifyCommandIntentJSON>, RadioToSpotifyCommandIntentJSON *, bool> generator("Type RadioToSpotifyCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
