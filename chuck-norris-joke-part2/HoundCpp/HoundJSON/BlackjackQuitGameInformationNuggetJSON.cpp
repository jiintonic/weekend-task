/* file "BlackjackQuitGameInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BlackjackQuitGameInformationNuggetJSON.h"

#include "BlackjackQuitGameInformationNuggetJSON.h"


BlackjackQuitGameInformationNuggetJSON::BlackjackQuitGameInformationNuggetJSON(const BlackjackQuitGameInformationNuggetJSON &)
  {
    assert(false);
  }

BlackjackQuitGameInformationNuggetJSON &BlackjackQuitGameInformationNuggetJSON::operator=(const BlackjackQuitGameInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

BlackjackQuitGameInformationNuggetJSON::BlackjackQuitGameInformationNuggetJSON(void)
  {
    extraIndex = create_string_index();
  }

BlackjackQuitGameInformationNuggetJSON::~BlackjackQuitGameInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BlackjackQuitGameInformationNuggetJSON::getBlackjackNuggetKind(void) const
  {
    return "BlackjackQuitGameCommand";
  }

BlackjackQuitGameInformationNuggetJSON *BlackjackQuitGameInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BlackjackQuitGameInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BlackjackQuitGameInformationNuggetJSON>, BlackjackQuitGameInformationNuggetJSON *, bool> generator("Type BlackjackQuitGameInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
