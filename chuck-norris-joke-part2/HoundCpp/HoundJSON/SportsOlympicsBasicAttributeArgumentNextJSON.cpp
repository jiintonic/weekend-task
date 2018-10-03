/* file "SportsOlympicsBasicAttributeArgumentNextJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeArgumentNextJSON.h"

#include "SportsOlympicsBasicAttributeArgumentNextJSON.h"


SportsOlympicsBasicAttributeArgumentNextJSON::SportsOlympicsBasicAttributeArgumentNextJSON(const SportsOlympicsBasicAttributeArgumentNextJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeArgumentNextJSON &SportsOlympicsBasicAttributeArgumentNextJSON::operator=(const SportsOlympicsBasicAttributeArgumentNextJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

SportsOlympicsBasicAttributeArgumentNextJSON::SportsOlympicsBasicAttributeArgumentNextJSON(void)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsBasicAttributeArgumentNextJSON::~SportsOlympicsBasicAttributeArgumentNextJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsBasicAttributeArgumentNextJSON::getSportsOlympicsBasicAttributeArgumentKind(void) const
  {
    return "Next";
  }

SportsOlympicsBasicAttributeArgumentNextJSON *SportsOlympicsBasicAttributeArgumentNextJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeArgumentNextJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentNextJSON>, SportsOlympicsBasicAttributeArgumentNextJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentNext", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
