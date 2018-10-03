/* file "MusicTrackJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicTrackJSON.h"

#include "MusicTrackJSON.h"


MusicTrackJSON::MusicTrackJSON(const MusicTrackJSON &)
  {
    assert(false);
  }

MusicTrackJSON &MusicTrackJSON::operator=(const MusicTrackJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicTrackJSON::fromJSONArtists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Artists of MusicTrackJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Artists of MusicTrackJSON has too few elements.");
    std::vector< MusicArtistBaseJSON * > vector_Artists1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicArtistBaseJSON *convert_classy = MusicArtistBaseJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Artists1[num1] = convert_classy;
      }
    assert(vector_Artists1.size() >= 1);
    initArtists();
    for (size_t num2 = 0; num2 < vector_Artists1.size(); ++num2)
        appendArtists(vector_Artists1[num2]);
    for (size_t num1 = 0; num1 < vector_Artists1.size(); ++num1)
      {
        vector_Artists1[num1]->remove_reference();
      }
  }

void MusicTrackJSON::fromJSONAlbum(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicAlbumBaseJSON *convert_classy = MusicAlbumBaseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlbum(convert_classy);
    convert_classy->remove_reference();
  }

MusicTrackJSON::MusicTrackJSON(void) :
        flagHasArtists(false),
        flagHasAlbum(false)
  {
  }

MusicTrackJSON::~MusicTrackJSON(void)
  {
    if (flagHasArtists)
      {
        for (size_t num4 = 0; num4 < storeArtists.size(); ++num4)
          {
            storeArtists[num4]->remove_reference();
          }
      }
    if (flagHasAlbum)
      {
        storeAlbum->remove_reference();
      }
  }

bool MusicTrackJSON::hasArtists(void) const
  {
    return flagHasArtists;
  }

size_t MusicTrackJSON::countOfArtists(void) const
  {
    assert(flagHasArtists);
    return storeArtists.size();
  }

MusicArtistBaseJSON * MusicTrackJSON::elementOfArtists(size_t element_num)
  {
    assert(flagHasArtists);
    return storeArtists[element_num];
  }

const MusicArtistBaseJSON * MusicTrackJSON::elementOfArtists(size_t element_num) const
  {
    assert(flagHasArtists);
    return storeArtists[element_num];
  }

std::vector< MusicArtistBaseJSON * > MusicTrackJSON::getArtists(void)
  {
    assert(flagHasArtists);
    return storeArtists;
  }

const std::vector< MusicArtistBaseJSON * > MusicTrackJSON::getArtists(void) const
  {
    assert(flagHasArtists);
    return storeArtists;
  }

bool MusicTrackJSON::hasAlbum(void) const
  {
    return flagHasAlbum;
  }

MusicAlbumBaseJSON * MusicTrackJSON::getAlbum(void)
  {
    assert(flagHasAlbum);
    return storeAlbum;
  }

const MusicAlbumBaseJSON * MusicTrackJSON::getAlbum(void) const
  {
    assert(flagHasAlbum);
    return storeAlbum;
  }

MusicTrackJSON *MusicTrackJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicTrackJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool> generator("Type MusicTrack", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
