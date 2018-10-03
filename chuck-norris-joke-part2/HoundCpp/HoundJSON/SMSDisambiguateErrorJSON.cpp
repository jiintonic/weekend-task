/* file "SMSDisambiguateErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSDisambiguateErrorJSON.h"

#include "SMSDisambiguateErrorJSON.h"


SMSDisambiguateErrorJSON::SMSDisambiguateErrorJSON(const SMSDisambiguateErrorJSON &)
  {
    assert(false);
  }

SMSDisambiguateErrorJSON &SMSDisambiguateErrorJSON::operator=(const SMSDisambiguateErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

SMSDisambiguateErrorJSON::SMSDisambiguateErrorJSON(void)
  {
    extraIndex = create_string_index();
  }

SMSDisambiguateErrorJSON::~SMSDisambiguateErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SMSDisambiguateErrorJSON::getErrorType(void) const
  {
    return "SMSDisambiguateError";
  }

SMSDisambiguateErrorJSON *SMSDisambiguateErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSDisambiguateErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSDisambiguateErrorJSON>, SMSDisambiguateErrorJSON *, bool> generator("Type SMSDisambiguateError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
