/* file "GamesMenuQuitInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GamesMenuQuitInformationNuggetJSON.h"

#include "GamesMenuQuitInformationNuggetJSON.h"


GamesMenuQuitInformationNuggetJSON::GamesMenuQuitInformationNuggetJSON(const GamesMenuQuitInformationNuggetJSON &)
  {
    assert(false);
  }

GamesMenuQuitInformationNuggetJSON &GamesMenuQuitInformationNuggetJSON::operator=(const GamesMenuQuitInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

GamesMenuQuitInformationNuggetJSON::GamesMenuQuitInformationNuggetJSON(void)
  {
    extraIndex = create_string_index();
  }

GamesMenuQuitInformationNuggetJSON::~GamesMenuQuitInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *GamesMenuQuitInformationNuggetJSON::getGamesMenuNuggetKind(void) const
  {
    return "GamesMenuQuitCommand";
  }

GamesMenuQuitInformationNuggetJSON *GamesMenuQuitInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GamesMenuQuitInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GamesMenuQuitInformationNuggetJSON>, GamesMenuQuitInformationNuggetJSON *, bool> generator("Type GamesMenuQuitInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
