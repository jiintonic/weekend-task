/* file "SportsOlympicsBasicAttributeArgumentLastJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeArgumentLastJSON.h"

#include "SportsOlympicsBasicAttributeArgumentLastJSON.h"


SportsOlympicsBasicAttributeArgumentLastJSON::SportsOlympicsBasicAttributeArgumentLastJSON(const SportsOlympicsBasicAttributeArgumentLastJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeArgumentLastJSON &SportsOlympicsBasicAttributeArgumentLastJSON::operator=(const SportsOlympicsBasicAttributeArgumentLastJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

SportsOlympicsBasicAttributeArgumentLastJSON::SportsOlympicsBasicAttributeArgumentLastJSON(void)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsBasicAttributeArgumentLastJSON::~SportsOlympicsBasicAttributeArgumentLastJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsBasicAttributeArgumentLastJSON::getSportsOlympicsBasicAttributeArgumentKind(void) const
  {
    return "Last";
  }

SportsOlympicsBasicAttributeArgumentLastJSON *SportsOlympicsBasicAttributeArgumentLastJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeArgumentLastJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentLastJSON>, SportsOlympicsBasicAttributeArgumentLastJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentLast", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
