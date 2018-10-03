/* file "MissingLocationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MissingLocationJSON.h"

#include "MissingLocationJSON.h"


MissingLocationJSON::MissingLocationJSON(const MissingLocationJSON &)
  {
    assert(false);
  }

MissingLocationJSON &MissingLocationJSON::operator=(const MissingLocationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

MissingLocationJSON::MissingLocationJSON(void)
  {
    extraIndex = create_string_index();
  }

MissingLocationJSON::~MissingLocationJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MissingLocationJSON::getErrorType(void) const
  {
    return "MissingLocation";
  }

MissingLocationJSON *MissingLocationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MissingLocationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MissingLocationJSON>, MissingLocationJSON *, bool> generator("Type MissingLocation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
