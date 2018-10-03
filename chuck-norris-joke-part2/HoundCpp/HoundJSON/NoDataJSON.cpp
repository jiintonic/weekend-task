/* file "NoDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NoDataJSON.h"

#include "NoDataJSON.h"


NoDataJSON::NoDataJSON(const NoDataJSON &)
  {
    assert(false);
  }

NoDataJSON &NoDataJSON::operator=(const NoDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NoDataJSON::NoDataJSON(void)
  {
    extraIndex = create_string_index();
  }

NoDataJSON::~NoDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NoDataJSON::getErrorType(void) const
  {
    return "NoData";
  }

NoDataJSON *NoDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NoDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NoDataJSON>, NoDataJSON *, bool> generator("Type NoData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
