/* file "MusicAlbumJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicAlbumJSON.h"

#include "MusicAlbumJSON.h"


MusicAlbumJSON::MusicAlbumJSON(const MusicAlbumJSON &)
  {
    assert(false);
  }

MusicAlbumJSON &MusicAlbumJSON::operator=(const MusicAlbumJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicAlbumJSON::fromJSONArtists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Artists of MusicAlbumJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Artists of MusicAlbumJSON has too few elements.");
    std::vector< MusicArtistBaseJSON * > vector_Artists1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicArtistBaseJSON *convert_classy = MusicArtistBaseJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Artists1[num1] = convert_classy;
      }
    assert(vector_Artists1.size() >= 1);
    initArtists();
    for (size_t num3 = 0; num3 < vector_Artists1.size(); ++num3)
        appendArtists(vector_Artists1[num3]);
    for (size_t num1 = 0; num1 < vector_Artists1.size(); ++num1)
      {
        vector_Artists1[num1]->remove_reference();
      }
  }

void MusicAlbumJSON::fromJSONTracks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Tracks of MusicAlbumJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Tracks of MusicAlbumJSON has too few elements.");
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

MusicAlbumJSON::MusicAlbumJSON(void) :
        flagHasArtists(false),
        flagHasTracks(false)
  {
  }

MusicAlbumJSON::~MusicAlbumJSON(void)
  {
    if (flagHasArtists)
      {
        for (size_t num7 = 0; num7 < storeArtists.size(); ++num7)
          {
            storeArtists[num7]->remove_reference();
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

bool MusicAlbumJSON::hasArtists(void) const
  {
    return flagHasArtists;
  }

size_t MusicAlbumJSON::countOfArtists(void) const
  {
    assert(flagHasArtists);
    return storeArtists.size();
  }

MusicArtistBaseJSON * MusicAlbumJSON::elementOfArtists(size_t element_num)
  {
    assert(flagHasArtists);
    return storeArtists[element_num];
  }

const MusicArtistBaseJSON * MusicAlbumJSON::elementOfArtists(size_t element_num) const
  {
    assert(flagHasArtists);
    return storeArtists[element_num];
  }

std::vector< MusicArtistBaseJSON * > MusicAlbumJSON::getArtists(void)
  {
    assert(flagHasArtists);
    return storeArtists;
  }

const std::vector< MusicArtistBaseJSON * > MusicAlbumJSON::getArtists(void) const
  {
    assert(flagHasArtists);
    return storeArtists;
  }

bool MusicAlbumJSON::hasTracks(void) const
  {
    return flagHasTracks;
  }

size_t MusicAlbumJSON::countOfTracks(void) const
  {
    assert(flagHasTracks);
    return storeTracks.size();
  }

MusicTrackBaseJSON * MusicAlbumJSON::elementOfTracks(size_t element_num)
  {
    assert(flagHasTracks);
    return storeTracks[element_num];
  }

const MusicTrackBaseJSON * MusicAlbumJSON::elementOfTracks(size_t element_num) const
  {
    assert(flagHasTracks);
    return storeTracks[element_num];
  }

std::vector< MusicTrackBaseJSON * > MusicAlbumJSON::getTracks(void)
  {
    assert(flagHasTracks);
    return storeTracks;
  }

const std::vector< MusicTrackBaseJSON * > MusicAlbumJSON::getTracks(void) const
  {
    assert(flagHasTracks);
    return storeTracks;
  }

MusicAlbumJSON *MusicAlbumJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicAlbumJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicAlbumJSON>, MusicAlbumJSON *, bool> generator("Type MusicAlbum", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
