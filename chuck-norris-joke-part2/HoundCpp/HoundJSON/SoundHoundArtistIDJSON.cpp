/* file "SoundHoundArtistIDJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SoundHoundArtistIDJSON.h"

#include "SoundHoundArtistIDJSON.h"


SoundHoundArtistIDJSON::SoundHoundArtistIDJSON(const SoundHoundArtistIDJSON &)
  {
    assert(false);
  }

SoundHoundArtistIDJSON &SoundHoundArtistIDJSON::operator=(const SoundHoundArtistIDJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SoundHoundArtistIDJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint64_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Value of SoundHoundArtistIDJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Value of SoundHoundArtistIDJSON is not an integer.");
          }
        extracted_integer = (uint64_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint64_t)(json_integer->getUnsignedLongInt())    ;
      }
    setValue(extracted_integer);
  }

SoundHoundArtistIDJSON::SoundHoundArtistIDJSON(void) :
        flagHasValue(false)
  {
  }

SoundHoundArtistIDJSON::SoundHoundArtistIDJSON(uint64_t init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SoundHoundArtistIDJSON::~SoundHoundArtistIDJSON(void)
  {
  }

bool SoundHoundArtistIDJSON::hasValue(void) const
  {
    return flagHasValue;
  }

uint64_t SoundHoundArtistIDJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const uint64_t SoundHoundArtistIDJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

SoundHoundArtistIDJSON *SoundHoundArtistIDJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SoundHoundArtistIDJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SoundHoundArtistIDJSON>, SoundHoundArtistIDJSON *, bool> generator("Type SoundHoundArtistID", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
