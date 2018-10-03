/* file "SportsGameGenericJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGameGenericJSON.h"

#include "SportsGameGenericJSON.h"


SportsGameGenericJSON::SportsGameGenericJSON(const SportsGameGenericJSON &)
  {
    assert(false);
  }

SportsGameGenericJSON &SportsGameGenericJSON::operator=(const SportsGameGenericJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

SportsGameGenericJSON::SportsGameGenericJSON(void)
  {
    extraIndex = create_string_index();
  }

SportsGameGenericJSON::~SportsGameGenericJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsGameGenericJSON::getSportsGameKind(void) const
  {
    return "Generic";
  }

SportsGameGenericJSON *SportsGameGenericJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGameGenericJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGameGenericJSON>, SportsGameGenericJSON *, bool> generator("Type SportsGameGeneric", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
