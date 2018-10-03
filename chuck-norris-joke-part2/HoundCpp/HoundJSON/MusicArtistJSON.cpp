/* file "MusicArtistJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicArtistJSON.h"

#include "MusicArtistJSON.h"


MusicArtistJSON::MusicArtistJSON(const MusicArtistJSON &)
  {
    assert(false);
  }

MusicArtistJSON &MusicArtistJSON::operator=(const MusicArtistJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicArtistJSON::fromJSONAlbumsLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumsLabel of MusicArtistJSON is not a string.");
    setAlbumsLabel(std::string(json_string->getData()));
  }

void MusicArtistJSON::fromJSONAlbums(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Albums of MusicArtistJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Albums of MusicArtistJSON has too few elements.");
    std::vector< MusicAlbumBaseJSON * > vector_Albums1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicAlbumBaseJSON *convert_classy = MusicAlbumBaseJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Albums1[num1] = convert_classy;
      }
    assert(vector_Albums1.size() >= 1);
    initAlbums();
    for (size_t num3 = 0; num3 < vector_Albums1.size(); ++num3)
        appendAlbums(vector_Albums1[num3]);
    for (size_t num1 = 0; num1 < vector_Albums1.size(); ++num1)
      {
        vector_Albums1[num1]->remove_reference();
      }
  }

void MusicArtistJSON::fromJSONTracksLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TracksLabel of MusicArtistJSON is not a string.");
    setTracksLabel(std::string(json_string->getData()));
  }

void MusicArtistJSON::fromJSONTracks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Tracks of MusicArtistJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Tracks of MusicArtistJSON has too few elements.");
    std::vector< MusicTrackBaseJSON * > vector_Tracks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicTrackBaseJSON *convert_classy = MusicTrackBaseJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Tracks1[num1] = convert_classy;
      }
    assert(vector_Tracks1.size() >= 1);
    initTracks();
    for (size_t num4 = 0; num4 < vector_Tracks1.size(); ++num4)
        appendTracks(vector_Tracks1[num4]);
    for (size_t num1 = 0; num1 < vector_Tracks1.size(); ++num1)
      {
        vector_Tracks1[num1]->remove_reference();
      }
  }

MusicArtistJSON::MusicArtistJSON(void) :
        flagHasAlbumsLabel(false),
        flagHasAlbums(false),
        flagHasTracksLabel(false),
        flagHasTracks(false)
  {
  }

MusicArtistJSON::~MusicArtistJSON(void)
  {
    if (flagHasAlbums)
      {
        for (size_t num7 = 0; num7 < storeAlbums.size(); ++num7)
          {
            storeAlbums[num7]->remove_reference();
          }
      }
    if (flagHasTracks)
      {
        for (size_t num8 = 0; num8 < storeTracks.size(); ++num8)
          {
            storeTracks[num8]->remove_reference();
          }
      }
  }

bool MusicArtistJSON::hasAlbumsLabel(void) const
  {
    return flagHasAlbumsLabel;
  }

std::string MusicArtistJSON::getAlbumsLabel(void)
  {
    assert(flagHasAlbumsLabel);
    return storeAlbumsLabel;
  }

const std::string MusicArtistJSON::getAlbumsLabel(void) const
  {
    assert(flagHasAlbumsLabel);
    return storeAlbumsLabel;
  }

bool MusicArtistJSON::hasAlbums(void) const
  {
    return flagHasAlbums;
  }

size_t MusicArtistJSON::countOfAlbums(void) const
  {
    assert(flagHasAlbums);
    return storeAlbums.size();
  }

MusicAlbumBaseJSON * MusicArtistJSON::elementOfAlbums(size_t element_num)
  {
    assert(flagHasAlbums);
    return storeAlbums[element_num];
  }

const MusicAlbumBaseJSON * MusicArtistJSON::elementOfAlbums(size_t element_num) const
  {
    assert(flagHasAlbums);
    return storeAlbums[element_num];
  }

std::vector< MusicAlbumBaseJSON * > MusicArtistJSON::getAlbums(void)
  {
    assert(flagHasAlbums);
    return storeAlbums;
  }

const std::vector< MusicAlbumBaseJSON * > MusicArtistJSON::getAlbums(void) const
  {
    assert(flagHasAlbums);
    return storeAlbums;
  }

bool MusicArtistJSON::hasTracksLabel(void) const
  {
    return flagHasTracksLabel;
  }

std::string MusicArtistJSON::getTracksLabel(void)
  {
    assert(flagHasTracksLabel);
    return storeTracksLabel;
  }

const std::string MusicArtistJSON::getTracksLabel(void) const
  {
    assert(flagHasTracksLabel);
    return storeTracksLabel;
  }

bool MusicArtistJSON::hasTracks(void) const
  {
    return flagHasTracks;
  }

size_t MusicArtistJSON::countOfTracks(void) const
  {
    assert(flagHasTracks);
    return storeTracks.size();
  }

MusicTrackBaseJSON * MusicArtistJSON::elementOfTracks(size_t element_num)
  {
    assert(flagHasTracks);
    return storeTracks[element_num];
  }

const MusicTrackBaseJSON * MusicArtistJSON::elementOfTracks(size_t element_num) const
  {
    assert(flagHasTracks);
    return storeTracks[element_num];
  }

std::vector< MusicTrackBaseJSON * > MusicArtistJSON::getTracks(void)
  {
    assert(flagHasTracks);
    return storeTracks;
  }

const std::vector< MusicTrackBaseJSON * > MusicArtistJSON::getTracks(void) const
  {
    assert(flagHasTracks);
    return storeTracks;
  }

MusicArtistJSON *MusicArtistJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicArtistJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicArtistJSON>, MusicArtistJSON *, bool> generator("Type MusicArtist", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
