/* file "CorrectTitleJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CorrectTitleJSON.h"

#include "CorrectTitleJSON.h"


CorrectTitleJSON::CorrectTitleJSON(const CorrectTitleJSON &)
  {
    assert(false);
  }

CorrectTitleJSON &CorrectTitleJSON::operator=(const CorrectTitleJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CorrectTitleJSON::fromJSONCorrectTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectTitle of CorrectTitleJSON is not a string.");
    setCorrectTitle(std::string(json_string->getData()));
  }

CorrectTitleJSON::CorrectTitleJSON(void) :
        flagHasCorrectTitle(false)
  {
    extraIndex = create_string_index();
  }

CorrectTitleJSON::~CorrectTitleJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CorrectTitleJSON::hasCorrectTitle(void) const
  {
    return flagHasCorrectTitle;
  }

std::string CorrectTitleJSON::getCorrectTitle(void)
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

const std::string CorrectTitleJSON::getCorrectTitle(void) const
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

CorrectTitleJSON *CorrectTitleJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CorrectTitleJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CorrectTitleJSON>, CorrectTitleJSON *, bool> generator("Type CorrectTitle", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
