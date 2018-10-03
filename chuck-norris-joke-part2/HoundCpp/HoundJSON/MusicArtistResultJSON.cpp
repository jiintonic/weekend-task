/* file "MusicArtistResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicArtistResultJSON.h"

#include "MusicArtistResultJSON.h"


MusicArtistResultJSON::MusicArtistResultJSON(const MusicArtistResultJSON &)
  {
    assert(false);
  }

MusicArtistResultJSON &MusicArtistResultJSON::operator=(const MusicArtistResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicArtistResultJSON::fromJSONArtistName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistName of MusicArtistResultJSON is not a string.");
    setArtistName(std::string(json_string->getData()));
  }

void MusicArtistResultJSON::fromJSONSoundHoundId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundArtistIDJSON *convert_classy = SoundHoundArtistIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSoundHoundId(convert_classy);
    convert_classy->remove_reference();
  }

MusicArtistResultJSON::MusicArtistResultJSON(void) :
        flagHasArtistName(false),
        flagHasSoundHoundId(false)
  {
  }

MusicArtistResultJSON::~MusicArtistResultJSON(void)
  {
    if (flagHasSoundHoundId)
      {
        storeSoundHoundId->remove_reference();
      }
  }

bool MusicArtistResultJSON::hasArtistName(void) const
  {
    return flagHasArtistName;
  }

std::string MusicArtistResultJSON::getArtistName(void)
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

const std::string MusicArtistResultJSON::getArtistName(void) const
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

bool MusicArtistResultJSON::hasSoundHoundId(void) const
  {
    return flagHasSoundHoundId;
  }

SoundHoundArtistIDJSON * MusicArtistResultJSON::getSoundHoundId(void)
  {
    assert(flagHasSoundHoundId);
    return storeSoundHoundId;
  }

const SoundHoundArtistIDJSON * MusicArtistResultJSON::getSoundHoundId(void) const
  {
    assert(flagHasSoundHoundId);
    return storeSoundHoundId;
  }

uint64_t MusicArtistResultJSON::getSoundHoundIdValue(void)
  {
    return getSoundHoundId()->getValue();
  }

const uint64_t MusicArtistResultJSON::getSoundHoundIdValue(void) const
  {
    return getSoundHoundId()->getValue();
  }

MusicArtistResultJSON *MusicArtistResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicArtistResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicArtistResultJSON>, MusicArtistResultJSON *, bool> generator("Type MusicArtistResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
