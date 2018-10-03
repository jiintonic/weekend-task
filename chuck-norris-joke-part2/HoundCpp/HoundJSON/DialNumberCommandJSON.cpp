/* file "DialNumberCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DialNumberCommandJSON.h"

#include "DialNumberCommandJSON.h"


DialNumberCommandJSON::DialNumberCommandJSON(const DialNumberCommandJSON &)
  {
    assert(false);
  }

DialNumberCommandJSON &DialNumberCommandJSON::operator=(const DialNumberCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DialNumberCommandJSON::extraNumberToJSON(void) const
  {
    JSONStringValue *generated_string_Number = new JSONStringValue(storeNumber.c_str());
    return generated_string_Number;
  }

void DialNumberCommandJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of DialNumberCommandJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

DialNumberCommandJSON::DialNumberCommandJSON(void) :
        flagHasNumber(false)
  {
    extraIndex = create_string_index();
  }

DialNumberCommandJSON::~DialNumberCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DialNumberCommandJSON::getPhoneCommandKind(void) const
  {
    return "DialNumber";
  }

bool DialNumberCommandJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string DialNumberCommandJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string DialNumberCommandJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

DialNumberCommandJSON *DialNumberCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DialNumberCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DialNumberCommandJSON>, DialNumberCommandJSON *, bool> generator("Type DialNumberCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
