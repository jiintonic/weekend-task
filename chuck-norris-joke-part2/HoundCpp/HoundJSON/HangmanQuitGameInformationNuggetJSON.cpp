/* file "HangmanQuitGameInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HangmanQuitGameInformationNuggetJSON.h"

#include "HangmanQuitGameInformationNuggetJSON.h"


HangmanQuitGameInformationNuggetJSON::HangmanQuitGameInformationNuggetJSON(const HangmanQuitGameInformationNuggetJSON &)
  {
    assert(false);
  }

HangmanQuitGameInformationNuggetJSON &HangmanQuitGameInformationNuggetJSON::operator=(const HangmanQuitGameInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

HangmanQuitGameInformationNuggetJSON::HangmanQuitGameInformationNuggetJSON(void)
  {
    extraIndex = create_string_index();
  }

HangmanQuitGameInformationNuggetJSON::~HangmanQuitGameInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HangmanQuitGameInformationNuggetJSON::getHangmanNuggetKind(void) const
  {
    return "HangmanQuitGameCommand";
  }

HangmanQuitGameInformationNuggetJSON *HangmanQuitGameInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HangmanQuitGameInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HangmanQuitGameInformationNuggetJSON>, HangmanQuitGameInformationNuggetJSON *, bool> generator("Type HangmanQuitGameInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
