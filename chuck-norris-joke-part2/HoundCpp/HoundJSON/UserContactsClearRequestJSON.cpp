/* file "UserContactsClearRequestJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserContactsClearRequestJSON.h"

#include "UserContactsClearRequestJSON.h"


UserContactsClearRequestJSON::UserContactsClearRequestJSON(const UserContactsClearRequestJSON &)
  {
    assert(false);
  }

UserContactsClearRequestJSON &UserContactsClearRequestJSON::operator=(const UserContactsClearRequestJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UserContactsClearRequestJSON::UserContactsClearRequestJSON(void)
  {
    extraIndex = create_string_index();
  }

UserContactsClearRequestJSON::~UserContactsClearRequestJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserContactsClearRequestJSON::getRequestKind(void) const
  {
    return "Clear";
  }

UserContactsClearRequestJSON *UserContactsClearRequestJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserContactsClearRequestJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserContactsClearRequestJSON>, UserContactsClearRequestJSON *, bool> generator("Type UserContactsClearRequest", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
