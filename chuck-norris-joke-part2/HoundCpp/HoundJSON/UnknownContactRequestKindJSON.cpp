/* file "UnknownContactRequestKindJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnknownContactRequestKindJSON.h"

#include "UnknownContactRequestKindJSON.h"


UnknownContactRequestKindJSON::UnknownContactRequestKindJSON(const UnknownContactRequestKindJSON &)
  {
    assert(false);
  }

UnknownContactRequestKindJSON &UnknownContactRequestKindJSON::operator=(const UnknownContactRequestKindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UnknownContactRequestKindJSON::UnknownContactRequestKindJSON(void)
  {
    extraIndex = create_string_index();
  }

UnknownContactRequestKindJSON::~UnknownContactRequestKindJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UnknownContactRequestKindJSON::getErrorType(void) const
  {
    return "UnknownContactRequestKind";
  }

UnknownContactRequestKindJSON *UnknownContactRequestKindJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnknownContactRequestKindJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnknownContactRequestKindJSON>, UnknownContactRequestKindJSON *, bool> generator("Type UnknownContactRequestKind", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
