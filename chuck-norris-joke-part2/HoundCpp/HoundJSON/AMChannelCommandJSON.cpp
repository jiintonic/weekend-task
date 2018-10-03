/* file "AMChannelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AMChannelCommandJSON.h"

#include "AMChannelCommandJSON.h"


AMChannelCommandJSON::AMChannelCommandJSON(const AMChannelCommandJSON &)
  {
    assert(false);
  }

AMChannelCommandJSON &AMChannelCommandJSON::operator=(const AMChannelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AMChannelCommandJSON::extraChannelToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Channel = new JSONIntegerValue(storeChannel);
    return generated_integer_Channel;
  }

JSONValue *AMChannelCommandJSON::extraAlreadyOnResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyOnResult;
    storeAlreadyOnResult->write_as_json(&handler_AlreadyOnResult);
    handler_AlreadyOnResult.result->add_reference();
    return handler_AlreadyOnResult.result;
  }

void AMChannelCommandJSON::fromJSONChannel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Channel of AMChannelCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Channel of AMChannelCommandJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setChannel(extracted_integer);
  }

void AMChannelCommandJSON::fromJSONAlreadyOnResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyOnResult(convert_classy);
    convert_classy->remove_reference();
  }

AMChannelCommandJSON::AMChannelCommandJSON(void) :
        flagHasChannel(false),
        flagHasAlreadyOnResult(false)
  {
    extraIndex = create_string_index();
  }

AMChannelCommandJSON::~AMChannelCommandJSON(void)
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

const char *AMChannelCommandJSON::getRadioCommandKind(void) const
  {
    return "AMChannel";
  }

bool AMChannelCommandJSON::hasChannel(void) const
  {
    return flagHasChannel;
  }

uint16_t AMChannelCommandJSON::getChannel(void)
  {
    assert(flagHasChannel);
    return storeChannel;
  }

const uint16_t AMChannelCommandJSON::getChannel(void) const
  {
    assert(flagHasChannel);
    return storeChannel;
  }

bool AMChannelCommandJSON::hasAlreadyOnResult(void) const
  {
    return flagHasAlreadyOnResult;
  }

DynamicResponseJSON * AMChannelCommandJSON::getAlreadyOnResult(void)
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

const DynamicResponseJSON * AMChannelCommandJSON::getAlreadyOnResult(void) const
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

AMChannelCommandJSON *AMChannelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AMChannelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AMChannelCommandJSON>, AMChannelCommandJSON *, bool> generator("Type AMChannelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
