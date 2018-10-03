/* file "MusicAlbumResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicAlbumResultJSON.h"

#include "MusicAlbumResultJSON.h"


MusicAlbumResultJSON::MusicAlbumResultJSON(const MusicAlbumResultJSON &)
  {
    assert(false);
  }

MusicAlbumResultJSON &MusicAlbumResultJSON::operator=(const MusicAlbumResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicAlbumResultJSON::fromJSONAlbumName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumName of MusicAlbumResultJSON is not a string.");
    setAlbumName(std::string(json_string->getData()));
  }

void MusicAlbumResultJSON::fromJSONArtistName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistName of MusicAlbumResultJSON is not a string.");
    setArtistName(std::string(json_string->getData()));
  }

void MusicAlbumResultJSON::fromJSONSoundHoundId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundAlbumIDJSON *convert_classy = SoundHoundAlbumIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSoundHoundId(convert_classy);
    convert_classy->remove_reference();
  }

MusicAlbumResultJSON::MusicAlbumResultJSON(void) :
        flagHasAlbumName(false),
        flagHasArtistName(false),
        flagHasSoundHoundId(false)
  {
  }

MusicAlbumResultJSON::~MusicAlbumResultJSON(void)
  {
    if (flagHasSoundHoundId)
      {
        storeSoundHoundId->remove_reference();
      }
  }

bool MusicAlbumResultJSON::hasAlbumName(void) const
  {
    return flagHasAlbumName;
  }

std::string MusicAlbumResultJSON::getAlbumName(void)
  {
    assert(flagHasAlbumName);
    return storeAlbumName;
  }

const std::string MusicAlbumResultJSON::getAlbumName(void) const
  {
    assert(flagHasAlbumName);
    return storeAlbumName;
  }

bool MusicAlbumResultJSON::hasArtistName(void) const
  {
    return flagHasArtistName;
  }

std::string MusicAlbumResultJSON::getArtistName(void)
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

const std::string MusicAlbumResultJSON::getArtistName(void) const
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

bool MusicAlbumResultJSON::hasSoundHoundId(void) const
  {
    return flagHasSoundHoundId;
  }

SoundHoundAlbumIDJSON * MusicAlbumResultJSON::getSoundHoundId(void)
  {
    assert(flagHasSoundHoundId);
    return storeSoundHoundId;
  }

const SoundHoundAlbumIDJSON * MusicAlbumResultJSON::getSoundHoundId(void) const
  {
    assert(flagHasSoundHoundId);
    return storeSoundHoundId;
  }

uint64_t MusicAlbumResultJSON::getSoundHoundIdValue(void)
  {
    return getSoundHoundId()->getValue();
  }

const uint64_t MusicAlbumResultJSON::getSoundHoundIdValue(void) const
  {
    return getSoundHoundId()->getValue();
  }

MusicAlbumResultJSON *MusicAlbumResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicAlbumResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicAlbumResultJSON>, MusicAlbumResultJSON *, bool> generator("Type MusicAlbumResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
