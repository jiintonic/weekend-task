/* file "SportsOlympicsEventSchedulesAndResultsArgumentLastJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentLastJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentLastJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentLastJSON::SportsOlympicsEventSchedulesAndResultsArgumentLastJSON(const SportsOlympicsEventSchedulesAndResultsArgumentLastJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentLastJSON &SportsOlympicsEventSchedulesAndResultsArgumentLastJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentLastJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

SportsOlympicsEventSchedulesAndResultsArgumentLastJSON::SportsOlympicsEventSchedulesAndResultsArgumentLastJSON(void)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentLastJSON::~SportsOlympicsEventSchedulesAndResultsArgumentLastJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentLastJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "Last";
  }

SportsOlympicsEventSchedulesAndResultsArgumentLastJSON *SportsOlympicsEventSchedulesAndResultsArgumentLastJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentLastJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentLastJSON>, SportsOlympicsEventSchedulesAndResultsArgumentLastJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentLast", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
