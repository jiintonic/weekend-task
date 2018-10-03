/* file "MusicTrackResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicTrackResultJSON.h"

#include "MusicTrackResultJSON.h"


MusicTrackResultJSON::MusicTrackResultJSON(const MusicTrackResultJSON &)
  {
    assert(false);
  }

MusicTrackResultJSON &MusicTrackResultJSON::operator=(const MusicTrackResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicTrackResultJSON::fromJSONTrackName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TrackName of MusicTrackResultJSON is not a string.");
    setTrackName(std::string(json_string->getData()));
  }

void MusicTrackResultJSON::fromJSONArtistName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistName of MusicTrackResultJSON is not a string.");
    setArtistName(std::string(json_string->getData()));
  }

void MusicTrackResultJSON::fromJSONAlbumName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumName of MusicTrackResultJSON is not a string.");
    setAlbumName(std::string(json_string->getData()));
  }

void MusicTrackResultJSON::fromJSONSoundHoundId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundTrackIDJSON *convert_classy = SoundHoundTrackIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSoundHoundId(convert_classy);
    convert_classy->remove_reference();
  }

MusicTrackResultJSON::MusicTrackResultJSON(void) :
        flagHasTrackName(false),
        flagHasArtistName(false),
        flagHasAlbumName(false),
        flagHasSoundHoundId(false)
  {
  }

MusicTrackResultJSON::~MusicTrackResultJSON(void)
  {
    if (flagHasSoundHoundId)
      {
        storeSoundHoundId->remove_reference();
      }
  }

bool MusicTrackResultJSON::hasTrackName(void) const
  {
    return flagHasTrackName;
  }

std::string MusicTrackResultJSON::getTrackName(void)
  {
    assert(flagHasTrackName);
    return storeTrackName;
  }

const std::string MusicTrackResultJSON::getTrackName(void) const
  {
    assert(flagHasTrackName);
    return storeTrackName;
  }

bool MusicTrackResultJSON::hasArtistName(void) const
  {
    return flagHasArtistName;
  }

std::string MusicTrackResultJSON::getArtistName(void)
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

const std::string MusicTrackResultJSON::getArtistName(void) const
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

bool MusicTrackResultJSON::hasAlbumName(void) const
  {
    return flagHasAlbumName;
  }

std::string MusicTrackResultJSON::getAlbumName(void)
  {
    assert(flagHasAlbumName);
    return storeAlbumName;
  }

const std::string MusicTrackResultJSON::getAlbumName(void) const
  {
    assert(flagHasAlbumName);
    return storeAlbumName;
  }

bool MusicTrackResultJSON::hasSoundHoundId(void) const
  {
    return flagHasSoundHoundId;
  }

SoundHoundTrackIDJSON * MusicTrackResultJSON::getSoundHoundId(void)
  {
    assert(flagHasSoundHoundId);
    return storeSoundHoundId;
  }

const SoundHoundTrackIDJSON * MusicTrackResultJSON::getSoundHoundId(void) const
  {
    assert(flagHasSoundHoundId);
    return storeSoundHoundId;
  }

uint64_t MusicTrackResultJSON::getSoundHoundIdValue(void)
  {
    return getSoundHoundId()->getValue();
  }

const uint64_t MusicTrackResultJSON::getSoundHoundIdValue(void) const
  {
    return getSoundHoundId()->getValue();
  }

MusicTrackResultJSON *MusicTrackResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicTrackResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicTrackResultJSON>, MusicTrackResultJSON *, bool> generator("Type MusicTrackResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
