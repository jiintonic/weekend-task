/* file "RadioOnCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioOnCommandJSON.h"

#include "RadioOnCommandJSON.h"


RadioOnCommandJSON::RadioOnCommandJSON(const RadioOnCommandJSON &)
  {
    assert(false);
  }

RadioOnCommandJSON &RadioOnCommandJSON::operator=(const RadioOnCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RadioOnCommandJSON::extraAlreadyOnResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyOnResult;
    storeAlreadyOnResult->write_as_json(&handler_AlreadyOnResult);
    handler_AlreadyOnResult.result->add_reference();
    return handler_AlreadyOnResult.result;
  }

void RadioOnCommandJSON::fromJSONAlreadyOnResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyOnResult(convert_classy);
    convert_classy->remove_reference();
  }

RadioOnCommandJSON::RadioOnCommandJSON(void) :
        flagHasAlreadyOnResult(false)
  {
    extraIndex = create_string_index();
  }

RadioOnCommandJSON::~RadioOnCommandJSON(void)
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

const char *RadioOnCommandJSON::getRadioCommandKind(void) const
  {
    return "RadioOn";
  }

bool RadioOnCommandJSON::hasAlreadyOnResult(void) const
  {
    return flagHasAlreadyOnResult;
  }

DynamicResponseJSON * RadioOnCommandJSON::getAlreadyOnResult(void)
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

const DynamicResponseJSON * RadioOnCommandJSON::getAlreadyOnResult(void) const
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

RadioOnCommandJSON *RadioOnCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioOnCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioOnCommandJSON>, RadioOnCommandJSON *, bool> generator("Type RadioOnCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
