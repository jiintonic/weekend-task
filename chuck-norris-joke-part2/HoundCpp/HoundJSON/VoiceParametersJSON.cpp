/* file "VoiceParametersJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "VoiceParametersJSON.h"

#include "VoiceParametersJSON.h"


VoiceParametersJSON::VoiceParametersJSON(const VoiceParametersJSON &)
  {
    assert(false);
  }

VoiceParametersJSON &VoiceParametersJSON::operator=(const VoiceParametersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void VoiceParametersJSON::fromJSONSpeed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Speed of VoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Speed of VoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setSpeed(extracted_integer);
  }

void VoiceParametersJSON::fromJSONVolume(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Volume of VoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Volume of VoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setVolume(extracted_integer);
  }

void VoiceParametersJSON::fromJSONPitch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Pitch of VoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Pitch of VoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setPitch(extracted_integer);
  }

VoiceParametersJSON::VoiceParametersJSON(void) :
        flagHasSpeed(false),
        flagHasVolume(false),
        flagHasPitch(false)
  {
    storeSpeed = 100;
    storeVolume = 100;
    storePitch = 100;
    extraIndex = create_string_index();
  }

VoiceParametersJSON::~VoiceParametersJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool VoiceParametersJSON::hasSpeed(void) const
  {
    return flagHasSpeed;
  }

uint8_t VoiceParametersJSON::getSpeed(void)
  {
    return storeSpeed;
  }

const uint8_t VoiceParametersJSON::getSpeed(void) const
  {
    return storeSpeed;
  }

bool VoiceParametersJSON::hasVolume(void) const
  {
    return flagHasVolume;
  }

uint16_t VoiceParametersJSON::getVolume(void)
  {
    return storeVolume;
  }

const uint16_t VoiceParametersJSON::getVolume(void) const
  {
    return storeVolume;
  }

bool VoiceParametersJSON::hasPitch(void) const
  {
    return flagHasPitch;
  }

uint8_t VoiceParametersJSON::getPitch(void)
  {
    return storePitch;
  }

const uint8_t VoiceParametersJSON::getPitch(void) const
  {
    return storePitch;
  }

VoiceParametersJSON *VoiceParametersJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    VoiceParametersJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<VoiceParametersJSON>, VoiceParametersJSON *, bool> generator("Type VoiceParameters", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
