/* file "SportsOlympicsMedalStandingsArgumentLastJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentLastJSON.h"

#include "SportsOlympicsMedalStandingsArgumentLastJSON.h"


SportsOlympicsMedalStandingsArgumentLastJSON::SportsOlympicsMedalStandingsArgumentLastJSON(const SportsOlympicsMedalStandingsArgumentLastJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentLastJSON &SportsOlympicsMedalStandingsArgumentLastJSON::operator=(const SportsOlympicsMedalStandingsArgumentLastJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

SportsOlympicsMedalStandingsArgumentLastJSON::SportsOlympicsMedalStandingsArgumentLastJSON(void)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsArgumentLastJSON::~SportsOlympicsMedalStandingsArgumentLastJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsMedalStandingsArgumentLastJSON::getSportsOlympicsMedalStandingsArgumentKind(void) const
  {
    return "Last";
  }

SportsOlympicsMedalStandingsArgumentLastJSON *SportsOlympicsMedalStandingsArgumentLastJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentLastJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentLastJSON>, SportsOlympicsMedalStandingsArgumentLastJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentLast", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
