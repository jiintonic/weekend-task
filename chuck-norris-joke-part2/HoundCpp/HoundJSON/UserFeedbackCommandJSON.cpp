/* file "UserFeedbackCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserFeedbackCommandJSON.h"

#include "UserFeedbackCommandJSON.h"


UserFeedbackCommandJSON::UserFeedbackCommandJSON(const UserFeedbackCommandJSON &)
  {
    assert(false);
  }

UserFeedbackCommandJSON &UserFeedbackCommandJSON::operator=(const UserFeedbackCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UserFeedbackCommandJSON::UserFeedbackCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

UserFeedbackCommandJSON::~UserFeedbackCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserFeedbackCommandJSON::getCommandKind(void) const
  {
    return "UserFeedbackCommand";
  }

UserFeedbackCommandJSON *UserFeedbackCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserFeedbackCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserFeedbackCommandJSON>, UserFeedbackCommandJSON *, bool> generator("Type UserFeedbackCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
