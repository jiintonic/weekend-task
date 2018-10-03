/* file "SoundHoundTrackIDJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SoundHoundTrackIDJSON.h"

#include "SoundHoundTrackIDJSON.h"


SoundHoundTrackIDJSON::SoundHoundTrackIDJSON(const SoundHoundTrackIDJSON &)
  {
    assert(false);
  }

SoundHoundTrackIDJSON &SoundHoundTrackIDJSON::operator=(const SoundHoundTrackIDJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SoundHoundTrackIDJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint64_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Value of SoundHoundTrackIDJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Value of SoundHoundTrackIDJSON is not an integer.");
          }
        extracted_integer = (uint64_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint64_t)(json_integer->getUnsignedLongInt())    ;
      }
    setValue(extracted_integer);
  }

SoundHoundTrackIDJSON::SoundHoundTrackIDJSON(void) :
        flagHasValue(false)
  {
  }

SoundHoundTrackIDJSON::SoundHoundTrackIDJSON(uint64_t init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SoundHoundTrackIDJSON::~SoundHoundTrackIDJSON(void)
  {
  }

bool SoundHoundTrackIDJSON::hasValue(void) const
  {
    return flagHasValue;
  }

uint64_t SoundHoundTrackIDJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const uint64_t SoundHoundTrackIDJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

SoundHoundTrackIDJSON *SoundHoundTrackIDJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SoundHoundTrackIDJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SoundHoundTrackIDJSON>, SoundHoundTrackIDJSON *, bool> generator("Type SoundHoundTrackID", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }