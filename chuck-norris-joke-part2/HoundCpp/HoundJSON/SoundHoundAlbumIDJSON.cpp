/* file "SoundHoundAlbumIDJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SoundHoundAlbumIDJSON.h"

#include "SoundHoundAlbumIDJSON.h"


SoundHoundAlbumIDJSON::SoundHoundAlbumIDJSON(const SoundHoundAlbumIDJSON &)
  {
    assert(false);
  }

SoundHoundAlbumIDJSON &SoundHoundAlbumIDJSON::operator=(const SoundHoundAlbumIDJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SoundHoundAlbumIDJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint64_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Value of SoundHoundAlbumIDJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Value of SoundHoundAlbumIDJSON is not an integer.");
          }
        extracted_integer = (uint64_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint64_t)(json_integer->getUnsignedLongInt())    ;
      }
    setValue(extracted_integer);
  }

SoundHoundAlbumIDJSON::SoundHoundAlbumIDJSON(void) :
        flagHasValue(false)
  {
  }

SoundHoundAlbumIDJSON::SoundHoundAlbumIDJSON(uint64_t init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SoundHoundAlbumIDJSON::~SoundHoundAlbumIDJSON(void)
  {
  }

bool SoundHoundAlbumIDJSON::hasValue(void) const
  {
    return flagHasValue;
  }

uint64_t SoundHoundAlbumIDJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const uint64_t SoundHoundAlbumIDJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

SoundHoundAlbumIDJSON *SoundHoundAlbumIDJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SoundHoundAlbumIDJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SoundHoundAlbumIDJSON>, SoundHoundAlbumIDJSON *, bool> generator("Type SoundHoundAlbumID", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
