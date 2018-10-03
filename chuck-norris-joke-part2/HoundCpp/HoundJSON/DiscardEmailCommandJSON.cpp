/* file "DiscardEmailCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DiscardEmailCommandJSON.h"

#include "DiscardEmailCommandJSON.h"


DiscardEmailCommandJSON::DiscardEmailCommandJSON(const DiscardEmailCommandJSON &)
  {
    assert(false);
  }

DiscardEmailCommandJSON &DiscardEmailCommandJSON::operator=(const DiscardEmailCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

DiscardEmailCommandJSON::DiscardEmailCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

DiscardEmailCommandJSON::~DiscardEmailCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DiscardEmailCommandJSON::getEmailCommandKind(void) const
  {
    return "DiscardEmailCommand";
  }

DiscardEmailCommandJSON *DiscardEmailCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DiscardEmailCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DiscardEmailCommandJSON>, DiscardEmailCommandJSON *, bool> generator("Type DiscardEmailCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
