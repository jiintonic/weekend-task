/* file "UserFeedbackFreeformTextJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserFeedbackFreeformTextJSON.h"

#include "UserFeedbackFreeformTextJSON.h"


UserFeedbackFreeformTextJSON::UserFeedbackFreeformTextJSON(const UserFeedbackFreeformTextJSON &)
  {
    assert(false);
  }

UserFeedbackFreeformTextJSON &UserFeedbackFreeformTextJSON::operator=(const UserFeedbackFreeformTextJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserFeedbackFreeformTextJSON::extraAnswerToJSON(void) const
  {
    JSONStringValue *generated_string_Answer = new JSONStringValue(storeAnswer.c_str());
    return generated_string_Answer;
  }

void UserFeedbackFreeformTextJSON::fromJSONAnswer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Answer of UserFeedbackFreeformTextJSON is not a string.");
    setAnswer(std::string(json_string->getData()));
  }

UserFeedbackFreeformTextJSON::UserFeedbackFreeformTextJSON(void) :
        flagHasAnswer(false)
  {
    extraIndex = create_string_index();
  }

UserFeedbackFreeformTextJSON::~UserFeedbackFreeformTextJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserFeedbackFreeformTextJSON::getFeedbackKind(void) const
  {
    return "FreeformText";
  }

bool UserFeedbackFreeformTextJSON::hasAnswer(void) const
  {
    return flagHasAnswer;
  }

std::string UserFeedbackFreeformTextJSON::getAnswer(void)
  {
    assert(flagHasAnswer);
    return storeAnswer;
  }

const std::string UserFeedbackFreeformTextJSON::getAnswer(void) const
  {
    assert(flagHasAnswer);
    return storeAnswer;
  }

UserFeedbackFreeformTextJSON *UserFeedbackFreeformTextJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserFeedbackFreeformTextJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserFeedbackFreeformTextJSON>, UserFeedbackFreeformTextJSON *, bool> generator("Type UserFeedbackFreeformText", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
