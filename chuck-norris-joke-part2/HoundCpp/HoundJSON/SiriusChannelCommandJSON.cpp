/* file "SiriusChannelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SiriusChannelCommandJSON.h"

#include "SiriusChannelCommandJSON.h"


SiriusChannelCommandJSON::SiriusChannelCommandJSON(const SiriusChannelCommandJSON &)
  {
    assert(false);
  }

SiriusChannelCommandJSON &SiriusChannelCommandJSON::operator=(const SiriusChannelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SiriusChannelCommandJSON::extraChannelToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Channel = new JSONIntegerValue(storeChannel);
    return generated_integer_Channel;
  }

void SiriusChannelCommandJSON::fromJSONChannel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Channel of SiriusChannelCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Channel of SiriusChannelCommandJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setChannel(extracted_integer);
  }

SiriusChannelCommandJSON::SiriusChannelCommandJSON(void) :
        flagHasChannel(false)
  {
    extraIndex = create_string_index();
  }

SiriusChannelCommandJSON::~SiriusChannelCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SiriusChannelCommandJSON::getRadioCommandKind(void) const
  {
    return "SiriusChannel";
  }

bool SiriusChannelCommandJSON::hasChannel(void) const
  {
    return flagHasChannel;
  }

uint8_t SiriusChannelCommandJSON::getChannel(void)
  {
    assert(flagHasChannel);
    return storeChannel;
  }

const uint8_t SiriusChannelCommandJSON::getChannel(void) const
  {
    assert(flagHasChannel);
    return storeChannel;
  }

SiriusChannelCommandJSON *SiriusChannelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SiriusChannelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SiriusChannelCommandJSON>, SiriusChannelCommandJSON *, bool> generator("Type SiriusChannelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
