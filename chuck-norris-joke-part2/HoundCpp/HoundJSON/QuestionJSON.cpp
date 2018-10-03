/* file "QuestionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "QuestionJSON.h"

#include "QuestionJSON.h"


QuestionJSON::QuestionJSON(const QuestionJSON &)
  {
    assert(false);
  }

QuestionJSON &QuestionJSON::operator=(const QuestionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void QuestionJSON::fromJSONQuestion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Question of QuestionJSON is not a string.");
    setQuestion(std::string(json_string->getData()));
  }

QuestionJSON::QuestionJSON(void) :
        flagHasQuestion(false)
  {
    extraIndex = create_string_index();
  }

QuestionJSON::~QuestionJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool QuestionJSON::hasQuestion(void) const
  {
    return flagHasQuestion;
  }

std::string QuestionJSON::getQuestion(void)
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

const std::string QuestionJSON::getQuestion(void) const
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

QuestionJSON *QuestionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    QuestionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<QuestionJSON>, QuestionJSON *, bool> generator("Type Question", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
