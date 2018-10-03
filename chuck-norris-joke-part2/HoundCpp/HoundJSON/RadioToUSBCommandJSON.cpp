/* file "RadioToUSBCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToUSBCommandJSON.h"

#include "RadioToUSBCommandJSON.h"


RadioToUSBCommandJSON::RadioToUSBCommandJSON(const RadioToUSBCommandJSON &)
  {
    assert(false);
  }

RadioToUSBCommandJSON &RadioToUSBCommandJSON::operator=(const RadioToUSBCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RadioToUSBCommandJSON::extraAlreadyOnResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyOnResult;
    storeAlreadyOnResult->write_as_json(&handler_AlreadyOnResult);
    handler_AlreadyOnResult.result->add_reference();
    return handler_AlreadyOnResult.result;
  }

void RadioToUSBCommandJSON::fromJSONAlreadyOnResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyOnResult(convert_classy);
    convert_classy->remove_reference();
  }

RadioToUSBCommandJSON::RadioToUSBCommandJSON(void) :
        flagHasAlreadyOnResult(false)
  {
    extraIndex = create_string_index();
  }

RadioToUSBCommandJSON::~RadioToUSBCommandJSON(void)
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

const char *RadioToUSBCommandJSON::getRadioCommandKind(void) const
  {
    return "RadioToUSB";
  }

bool RadioToUSBCommandJSON::hasAlreadyOnResult(void) const
  {
    return flagHasAlreadyOnResult;
  }

DynamicResponseJSON * RadioToUSBCommandJSON::getAlreadyOnResult(void)
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

const DynamicResponseJSON * RadioToUSBCommandJSON::getAlreadyOnResult(void) const
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

RadioToUSBCommandJSON *RadioToUSBCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToUSBCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToUSBCommandJSON>, RadioToUSBCommandJSON *, bool> generator("Type RadioToUSBCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
