/* file "RadioOffCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioOffCommandJSON.h"

#include "RadioOffCommandJSON.h"


RadioOffCommandJSON::RadioOffCommandJSON(const RadioOffCommandJSON &)
  {
    assert(false);
  }

RadioOffCommandJSON &RadioOffCommandJSON::operator=(const RadioOffCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RadioOffCommandJSON::extraAlreadyOffResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyOffResult;
    storeAlreadyOffResult->write_as_json(&handler_AlreadyOffResult);
    handler_AlreadyOffResult.result->add_reference();
    return handler_AlreadyOffResult.result;
  }

void RadioOffCommandJSON::fromJSONAlreadyOffResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyOffResult(convert_classy);
    convert_classy->remove_reference();
  }

RadioOffCommandJSON::RadioOffCommandJSON(void) :
        flagHasAlreadyOffResult(false)
  {
    extraIndex = create_string_index();
  }

RadioOffCommandJSON::~RadioOffCommandJSON(void)
  {
    if (flagHasAlreadyOffResult)
      {
        storeAlreadyOffResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioOffCommandJSON::getRadioCommandKind(void) const
  {
    return "RadioOff";
  }

bool RadioOffCommandJSON::hasAlreadyOffResult(void) const
  {
    return flagHasAlreadyOffResult;
  }

DynamicResponseJSON * RadioOffCommandJSON::getAlreadyOffResult(void)
  {
    assert(flagHasAlreadyOffResult);
    return storeAlreadyOffResult;
  }

const DynamicResponseJSON * RadioOffCommandJSON::getAlreadyOffResult(void) const
  {
    assert(flagHasAlreadyOffResult);
    return storeAlreadyOffResult;
  }

RadioOffCommandJSON *RadioOffCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioOffCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioOffCommandJSON>, RadioOffCommandJSON *, bool> generator("Type RadioOffCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
