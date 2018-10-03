/* file "DiscardSMSCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DiscardSMSCommandJSON.h"

#include "DiscardSMSCommandJSON.h"


DiscardSMSCommandJSON::DiscardSMSCommandJSON(const DiscardSMSCommandJSON &)
  {
    assert(false);
  }

DiscardSMSCommandJSON &DiscardSMSCommandJSON::operator=(const DiscardSMSCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

DiscardSMSCommandJSON::DiscardSMSCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

DiscardSMSCommandJSON::~DiscardSMSCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DiscardSMSCommandJSON::getSMSCommandKind(void) const
  {
    return "DiscardSMSCommand";
  }

DiscardSMSCommandJSON *DiscardSMSCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DiscardSMSCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DiscardSMSCommandJSON>, DiscardSMSCommandJSON *, bool> generator("Type DiscardSMSCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
