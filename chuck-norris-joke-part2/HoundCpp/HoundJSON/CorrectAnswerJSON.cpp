/* file "CorrectAnswerJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CorrectAnswerJSON.h"

#include "CorrectAnswerJSON.h"


CorrectAnswerJSON::CorrectAnswerJSON(const CorrectAnswerJSON &)
  {
    assert(false);
  }

CorrectAnswerJSON &CorrectAnswerJSON::operator=(const CorrectAnswerJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CorrectAnswerJSON::fromJSONCorrectAnswer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectAnswer of CorrectAnswerJSON is not a string.");
    setCorrectAnswer(std::string(json_string->getData()));
  }

CorrectAnswerJSON::CorrectAnswerJSON(void) :
        flagHasCorrectAnswer(false)
  {
    extraIndex = create_string_index();
  }

CorrectAnswerJSON::~CorrectAnswerJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CorrectAnswerJSON::hasCorrectAnswer(void) const
  {
    return flagHasCorrectAnswer;
  }

std::string CorrectAnswerJSON::getCorrectAnswer(void)
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

const std::string CorrectAnswerJSON::getCorrectAnswer(void) const
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

CorrectAnswerJSON *CorrectAnswerJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CorrectAnswerJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CorrectAnswerJSON>, CorrectAnswerJSON *, bool> generator("Type CorrectAnswer", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
