/* file "GuessThatLyricQuitGameCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GuessThatLyricQuitGameCommandJSON.h"

#include "GuessThatLyricQuitGameCommandJSON.h"


GuessThatLyricQuitGameCommandJSON::GuessThatLyricQuitGameCommandJSON(const GuessThatLyricQuitGameCommandJSON &)
  {
    assert(false);
  }

GuessThatLyricQuitGameCommandJSON &GuessThatLyricQuitGameCommandJSON::operator=(const GuessThatLyricQuitGameCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

GuessThatLyricQuitGameCommandJSON::GuessThatLyricQuitGameCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

GuessThatLyricQuitGameCommandJSON::~GuessThatLyricQuitGameCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *GuessThatLyricQuitGameCommandJSON::getCommandKind(void) const
  {
    return "GuessThatLyricQuitGameCommand";
  }

GuessThatLyricQuitGameCommandJSON *GuessThatLyricQuitGameCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GuessThatLyricQuitGameCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricQuitGameCommandJSON>, GuessThatLyricQuitGameCommandJSON *, bool> generator("Type GuessThatLyricQuitGameCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
