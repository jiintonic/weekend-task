/* file "SportsResultScoreGenericJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsResultScoreGenericJSON.h"

#include "SportsResultScoreGenericJSON.h"


SportsResultScoreGenericJSON::SportsResultScoreGenericJSON(const SportsResultScoreGenericJSON &)
  {
    assert(false);
  }

SportsResultScoreGenericJSON &SportsResultScoreGenericJSON::operator=(const SportsResultScoreGenericJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

SportsResultScoreGenericJSON::SportsResultScoreGenericJSON(void)
  {
    extraIndex = create_string_index();
  }

SportsResultScoreGenericJSON::~SportsResultScoreGenericJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsResultScoreGenericJSON::getSportsResultScoreKind(void) const
  {
    return "Generic";
  }

SportsResultScoreGenericJSON *SportsResultScoreGenericJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsResultScoreGenericJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsResultScoreGenericJSON>, SportsResultScoreGenericJSON *, bool> generator("Type SportsResultScoreGeneric", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
