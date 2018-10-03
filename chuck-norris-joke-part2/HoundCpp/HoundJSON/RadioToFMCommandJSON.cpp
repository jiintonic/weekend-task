/* file "RadioToFMCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToFMCommandJSON.h"

#include "RadioToFMCommandJSON.h"


RadioToFMCommandJSON::RadioToFMCommandJSON(const RadioToFMCommandJSON &)
  {
    assert(false);
  }

RadioToFMCommandJSON &RadioToFMCommandJSON::operator=(const RadioToFMCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RadioToFMCommandJSON::extraAlreadyOnResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyOnResult;
    storeAlreadyOnResult->write_as_json(&handler_AlreadyOnResult);
    handler_AlreadyOnResult.result->add_reference();
    return handler_AlreadyOnResult.result;
  }

void RadioToFMCommandJSON::fromJSONAlreadyOnResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyOnResult(convert_classy);
    convert_classy->remove_reference();
  }

RadioToFMCommandJSON::RadioToFMCommandJSON(void) :
        flagHasAlreadyOnResult(false)
  {
    extraIndex = create_string_index();
  }

RadioToFMCommandJSON::~RadioToFMCommandJSON(void)
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

const char *RadioToFMCommandJSON::getRadioCommandKind(void) const
  {
    return "RadioToFM";
  }

bool RadioToFMCommandJSON::hasAlreadyOnResult(void) const
  {
    return flagHasAlreadyOnResult;
  }

DynamicResponseJSON * RadioToFMCommandJSON::getAlreadyOnResult(void)
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

const DynamicResponseJSON * RadioToFMCommandJSON::getAlreadyOnResult(void) const
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

RadioToFMCommandJSON *RadioToFMCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToFMCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToFMCommandJSON>, RadioToFMCommandJSON *, bool> generator("Type RadioToFMCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
