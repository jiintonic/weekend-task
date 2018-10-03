/* file "RadioToAMCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToAMCommandJSON.h"

#include "RadioToAMCommandJSON.h"


RadioToAMCommandJSON::RadioToAMCommandJSON(const RadioToAMCommandJSON &)
  {
    assert(false);
  }

RadioToAMCommandJSON &RadioToAMCommandJSON::operator=(const RadioToAMCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RadioToAMCommandJSON::extraAlreadyOnResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyOnResult;
    storeAlreadyOnResult->write_as_json(&handler_AlreadyOnResult);
    handler_AlreadyOnResult.result->add_reference();
    return handler_AlreadyOnResult.result;
  }

void RadioToAMCommandJSON::fromJSONAlreadyOnResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyOnResult(convert_classy);
    convert_classy->remove_reference();
  }

RadioToAMCommandJSON::RadioToAMCommandJSON(void) :
        flagHasAlreadyOnResult(false)
  {
    extraIndex = create_string_index();
  }

RadioToAMCommandJSON::~RadioToAMCommandJSON(void)
  {
    if (flagHasAlreadyOnResult)
      {
        storeAlreadyOnResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioToAMCommandJSON::getRadioCommandKind(void) const
  {
    return "RadioToAM";
  }

bool RadioToAMCommandJSON::hasAlreadyOnResult(void) const
  {
    return flagHasAlreadyOnResult;
  }

DynamicResponseJSON * RadioToAMCommandJSON::getAlreadyOnResult(void)
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

const DynamicResponseJSON * RadioToAMCommandJSON::getAlreadyOnResult(void) const
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

RadioToAMCommandJSON *RadioToAMCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToAMCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToAMCommandJSON>, RadioToAMCommandJSON *, bool> generator("Type RadioToAMCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
