/* file "AMChannelCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AMChannelCommandIntentJSON.h"

#include "AMChannelCommandIntentJSON.h"


AMChannelCommandIntentJSON::AMChannelCommandIntentJSON(const AMChannelCommandIntentJSON &)
  {
    assert(false);
  }

AMChannelCommandIntentJSON &AMChannelCommandIntentJSON::operator=(const AMChannelCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AMChannelCommandIntentJSON::extraChannelToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Channel = new JSONIntegerValue(storeChannel);
    return generated_integer_Channel;
  }

void AMChannelCommandIntentJSON::fromJSONChannel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Channel of AMChannelCommandIntentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Channel of AMChannelCommandIntentJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setChannel(extracted_integer);
  }

AMChannelCommandIntentJSON::AMChannelCommandIntentJSON(void) :
        flagHasChannel(false)
  {
    extraIndex = create_string_index();
  }

AMChannelCommandIntentJSON::~AMChannelCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AMChannelCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "AMChannel";
  }

bool AMChannelCommandIntentJSON::hasChannel(void) const
  {
    return flagHasChannel;
  }

uint16_t AMChannelCommandIntentJSON::getChannel(void)
  {
    assert(flagHasChannel);
    return storeChannel;
  }

const uint16_t AMChannelCommandIntentJSON::getChannel(void) const
  {
    assert(flagHasChannel);
    return storeChannel;
  }

AMChannelCommandIntentJSON *AMChannelCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AMChannelCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AMChannelCommandIntentJSON>, AMChannelCommandIntentJSON *, bool> generator("Type AMChannelCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
