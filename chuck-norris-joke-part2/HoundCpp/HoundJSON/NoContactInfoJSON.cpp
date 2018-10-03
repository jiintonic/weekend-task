/* file "NoContactInfoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NoContactInfoJSON.h"

#include "NoContactInfoJSON.h"


NoContactInfoJSON::NoContactInfoJSON(const NoContactInfoJSON &)
  {
    assert(false);
  }

NoContactInfoJSON &NoContactInfoJSON::operator=(const NoContactInfoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NoContactInfoJSON::NoContactInfoJSON(void)
  {
    extraIndex = create_string_index();
  }

NoContactInfoJSON::~NoContactInfoJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NoContactInfoJSON::getErrorType(void) const
  {
    return "NoContactInfo";
  }

NoContactInfoJSON *NoContactInfoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NoContactInfoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NoContactInfoJSON>, NoContactInfoJSON *, bool> generator("Type NoContactInfo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
