/* file "ContactSaveErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ContactSaveErrorJSON.h"

#include "ContactSaveErrorJSON.h"


ContactSaveErrorJSON::ContactSaveErrorJSON(const ContactSaveErrorJSON &)
  {
    assert(false);
  }

ContactSaveErrorJSON &ContactSaveErrorJSON::operator=(const ContactSaveErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ContactSaveErrorJSON::ContactSaveErrorJSON(void)
  {
    extraIndex = create_string_index();
  }

ContactSaveErrorJSON::~ContactSaveErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ContactSaveErrorJSON::getErrorType(void) const
  {
    return "ContactSaveError";
  }

ContactSaveErrorJSON *ContactSaveErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ContactSaveErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ContactSaveErrorJSON>, ContactSaveErrorJSON *, bool> generator("Type ContactSaveError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
