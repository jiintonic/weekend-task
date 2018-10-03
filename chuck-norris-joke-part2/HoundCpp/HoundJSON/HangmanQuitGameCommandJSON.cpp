/* file "HangmanQuitGameCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HangmanQuitGameCommandJSON.h"

#include "HangmanQuitGameCommandJSON.h"


HangmanQuitGameCommandJSON::HangmanQuitGameCommandJSON(const HangmanQuitGameCommandJSON &)
  {
    assert(false);
  }

HangmanQuitGameCommandJSON &HangmanQuitGameCommandJSON::operator=(const HangmanQuitGameCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

HangmanQuitGameCommandJSON::HangmanQuitGameCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

HangmanQuitGameCommandJSON::~HangmanQuitGameCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HangmanQuitGameCommandJSON::getHangmanCommandKind(void) const
  {
    return "HangmanQuitGameCommand";
  }

HangmanQuitGameCommandJSON *HangmanQuitGameCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HangmanQuitGameCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HangmanQuitGameCommandJSON>, HangmanQuitGameCommandJSON *, bool> generator("Type HangmanQuitGameCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
