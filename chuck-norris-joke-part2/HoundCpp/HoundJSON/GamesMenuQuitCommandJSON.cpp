/* file "GamesMenuQuitCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GamesMenuQuitCommandJSON.h"

#include "GamesMenuQuitCommandJSON.h"


GamesMenuQuitCommandJSON::GamesMenuQuitCommandJSON(const GamesMenuQuitCommandJSON &)
  {
    assert(false);
  }

GamesMenuQuitCommandJSON &GamesMenuQuitCommandJSON::operator=(const GamesMenuQuitCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

GamesMenuQuitCommandJSON::GamesMenuQuitCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

GamesMenuQuitCommandJSON::~GamesMenuQuitCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *GamesMenuQuitCommandJSON::getGamesMenuCommandKind(void) const
  {
    return "GamesMenuQuitCommand";
  }

GamesMenuQuitCommandJSON *GamesMenuQuitCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GamesMenuQuitCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GamesMenuQuitCommandJSON>, GamesMenuQuitCommandJSON *, bool> generator("Type GamesMenuQuitCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
