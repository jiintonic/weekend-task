/* file "MusicClientStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicClientStateJSON.h"

#include "MusicClientStateJSON.h"


MusicClientStateJSON::MusicClientStateJSON(const MusicClientStateJSON &)
  {
    assert(false);
  }

MusicClientStateJSON &MusicClientStateJSON::operator=(const MusicClientStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicClientStateJSON::fromJSONSoundHoundTrackId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundHoundTrackId of MusicClientStateJSON is not a string.");
    setSoundHoundTrackId(std::string(json_string->getData()));
  }

void MusicClientStateJSON::fromJSONSoundHoundArtistId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundHoundArtistId of MusicClientStateJSON is not a string.");
    setSoundHoundArtistId(std::string(json_string->getData()));
  }

void MusicClientStateJSON::fromJSONSoundHoundAlbumId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundHoundAlbumId of MusicClientStateJSON is not a string.");
    setSoundHoundAlbumId(std::string(json_string->getData()));
  }

void MusicClientStateJSON::fromJSONSoundHoundTrackIdList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SoundHoundTrackIdList of MusicClientStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SoundHoundTrackIdList of MusicClientStateJSON has too few elements.");
    std::vector< std::string > vector_SoundHoundTrackIdList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SoundHoundTrackIdList of MusicClientStateJSON is not a string.");
        vector_SoundHoundTrackIdList1[num1] = std::string(json_string->getData());
      }
    assert(vector_SoundHoundTrackIdList1.size() >= 1);
    initSoundHoundTrackIdList();
    for (size_t num5 = 0; num5 < vector_SoundHoundTrackIdList1.size(); ++num5)
        appendSoundHoundTrackIdList(vector_SoundHoundTrackIdList1[num5]);
    for (size_t num1 = 0; num1 < vector_SoundHoundTrackIdList1.size(); ++num1)
      {
      }
  }

void MusicClientStateJSON::fromJSONSoundHoundArtistIdList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SoundHoundArtistIdList of MusicClientStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SoundHoundArtistIdList of MusicClientStateJSON has too few elements.");
    std::vector< std::string > vector_SoundHoundArtistIdList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SoundHoundArtistIdList of MusicClientStateJSON is not a string.");
        vector_SoundHoundArtistIdList1[num1] = std::string(json_string->getData());
      }
    assert(vector_SoundHoundArtistIdList1.size() >= 1);
    initSoundHoundArtistIdList();
    for (size_t num6 = 0; num6 < vector_SoundHoundArtistIdList1.size(); ++num6)
        appendSoundHoundArtistIdList(vector_SoundHoundArtistIdList1[num6]);
    for (size_t num1 = 0; num1 < vector_SoundHoundArtistIdList1.size(); ++num1)
      {
      }
  }

void MusicClientStateJSON::fromJSONSoundHoundAlbumIdList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SoundHoundAlbumIdList of MusicClientStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SoundHoundAlbumIdList of MusicClientStateJSON has too few elements.");
    std::vector< std::string > vector_SoundHoundAlbumIdList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SoundHoundAlbumIdList of MusicClientStateJSON is not a string.");
        vector_SoundHoundAlbumIdList1[num1] = std::string(json_string->getData());
      }
    assert(vector_SoundHoundAlbumIdList1.size() >= 1);
    initSoundHoundAlbumIdList();
    for (size_t num7 = 0; num7 < vector_SoundHoundAlbumIdList1.size(); ++num7)
        appendSoundHoundAlbumIdList(vector_SoundHoundAlbumIdList1[num7]);
    for (size_t num1 = 0; num1 < vector_SoundHoundAlbumIdList1.size(); ++num1)
      {
      }
  }

void MusicClientStateJSON::fromJSONTrackList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicTrackResultJSON *convert_classy = MusicTrackResultJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTrackList(convert_classy);
    convert_classy->remove_reference();
  }

void MusicClientStateJSON::fromJSONTrackListPosition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TrackListPosition of MusicClientStateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TrackListPosition of MusicClientStateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTrackListPosition(extracted_integer);
  }

void MusicClientStateJSON::fromJSONPlaylist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PlaylistStateItemJSON *convert_classy = PlaylistStateItemJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlaylist(convert_classy);
    convert_classy->remove_reference();
  }

void MusicClientStateJSON::fromJSONPlaylists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Playlists of MusicClientStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< PlaylistStateItemJSON * > vector_Playlists1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        PlaylistStateItemJSON *convert_classy = PlaylistStateItemJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Playlists1[num1] = convert_classy;
      }
    initPlaylists();
    for (size_t num8 = 0; num8 < vector_Playlists1.size(); ++num8)
        appendPlaylists(vector_Playlists1[num8]);
    for (size_t num1 = 0; num1 < vector_Playlists1.size(); ++num1)
      {
        vector_Playlists1[num1]->remove_reference();
      }
  }

MusicClientStateJSON::MusicClientStateJSON(void) :
        flagHasSoundHoundTrackId(false),
        flagHasSoundHoundArtistId(false),
        flagHasSoundHoundAlbumId(false),
        flagHasSoundHoundTrackIdList(false),
        flagHasSoundHoundArtistIdList(false),
        flagHasSoundHoundAlbumIdList(false),
        flagHasTrackList(false),
        flagHasTrackListPosition(false),
        flagHasPlaylist(false),
        flagHasPlaylists(false)
  {
    extraIndex = create_string_index();
  }

MusicClientStateJSON::~MusicClientStateJSON(void)
  {
    if (flagHasTrackList)
      {
        storeTrackList->remove_reference();
      }
    if (flagHasPlaylist)
      {
        storePlaylist->remove_reference();
      }
    if (flagHasPlaylists)
      {
        for (size_t num4 = 0; num4 < storePlaylists.size(); ++num4)
          {
            storePlaylists[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MusicClientStateJSON::hasSoundHoundTrackId(void) const
  {
    return flagHasSoundHoundTrackId;
  }

std::string MusicClientStateJSON::getSoundHoundTrackId(void)
  {
    assert(flagHasSoundHoundTrackId);
    return storeSoundHoundTrackId;
  }

const std::string MusicClientStateJSON::getSoundHoundTrackId(void) const
  {
    assert(flagHasSoundHoundTrackId);
    return storeSoundHoundTrackId;
  }

bool MusicClientStateJSON::hasSoundHoundArtistId(void) const
  {
    return flagHasSoundHoundArtistId;
  }

std::string MusicClientStateJSON::getSoundHoundArtistId(void)
  {
    assert(flagHasSoundHoundArtistId);
    return storeSoundHoundArtistId;
  }

const std::string MusicClientStateJSON::getSoundHoundArtistId(void) const
  {
    assert(flagHasSoundHoundArtistId);
    return storeSoundHoundArtistId;
  }

bool MusicClientStateJSON::hasSoundHoundAlbumId(void) const
  {
    return flagHasSoundHoundAlbumId;
  }

std::string MusicClientStateJSON::getSoundHoundAlbumId(void)
  {
    assert(flagHasSoundHoundAlbumId);
    return storeSoundHoundAlbumId;
  }

const std::string MusicClientStateJSON::getSoundHoundAlbumId(void) const
  {
    assert(flagHasSoundHoundAlbumId);
    return storeSoundHoundAlbumId;
  }

bool MusicClientStateJSON::hasSoundHoundTrackIdList(void) const
  {
    return flagHasSoundHoundTrackIdList;
  }

size_t MusicClientStateJSON::countOfSoundHoundTrackIdList(void) const
  {
    assert(flagHasSoundHoundTrackIdList);
    return storeSoundHoundTrackIdList.size();
  }

std::string MusicClientStateJSON::elementOfSoundHoundTrackIdList(size_t element_num)
  {
    assert(flagHasSoundHoundTrackIdList);
    return storeSoundHoundTrackIdList[element_num];
  }

const std::string MusicClientStateJSON::elementOfSoundHoundTrackIdList(size_t element_num) const
  {
    assert(flagHasSoundHoundTrackIdList);
    return storeSoundHoundTrackIdList[element_num];
  }

std::vector< std::string > MusicClientStateJSON::getSoundHoundTrackIdList(void)
  {
    assert(flagHasSoundHoundTrackIdList);
    return storeSoundHoundTrackIdList;
  }

const std::vector< std::string > MusicClientStateJSON::getSoundHoundTrackIdList(void) const
  {
    assert(flagHasSoundHoundTrackIdList);
    return storeSoundHoundTrackIdList;
  }

bool MusicClientStateJSON::hasSoundHoundArtistIdList(void) const
  {
    return flagHasSoundHoundArtistIdList;
  }

size_t MusicClientStateJSON::countOfSoundHoundArtistIdList(void) const
  {
    assert(flagHasSoundHoundArtistIdList);
    return storeSoundHoundArtistIdList.size();
  }

std::string MusicClientStateJSON::elementOfSoundHoundArtistIdList(size_t element_num)
  {
    assert(flagHasSoundHoundArtistIdList);
    return storeSoundHoundArtistIdList[element_num];
  }

const std::string MusicClientStateJSON::elementOfSoundHoundArtistIdList(size_t element_num) const
  {
    assert(flagHasSoundHoundArtistIdList);
    return storeSoundHoundArtistIdList[element_num];
  }

std::vector< std::string > MusicClientStateJSON::getSoundHoundArtistIdList(void)
  {
    assert(flagHasSoundHoundArtistIdList);
    return storeSoundHoundArtistIdList;
  }

const std::vector< std::string > MusicClientStateJSON::getSoundHoundArtistIdList(void) const
  {
    assert(flagHasSoundHoundArtistIdList);
    return storeSoundHoundArtistIdList;
  }

bool MusicClientStateJSON::hasSoundHoundAlbumIdList(void) const
  {
    return flagHasSoundHoundAlbumIdList;
  }

size_t MusicClientStateJSON::countOfSoundHoundAlbumIdList(void) const
  {
    assert(flagHasSoundHoundAlbumIdList);
    return storeSoundHoundAlbumIdList.size();
  }

std::string MusicClientStateJSON::elementOfSoundHoundAlbumIdList(size_t element_num)
  {
    assert(flagHasSoundHoundAlbumIdList);
    return storeSoundHoundAlbumIdList[element_num];
  }

const std::string MusicClientStateJSON::elementOfSoundHoundAlbumIdList(size_t element_num) const
  {
    assert(flagHasSoundHoundAlbumIdList);
    return storeSoundHoundAlbumIdList[element_num];
  }

std::vector< std::string > MusicClientStateJSON::getSoundHoundAlbumIdList(void)
  {
    assert(flagHasSoundHoundAlbumIdList);
    return storeSoundHoundAlbumIdList;
  }

const std::vector< std::string > MusicClientStateJSON::getSoundHoundAlbumIdList(void) const
  {
    assert(flagHasSoundHoundAlbumIdList);
    return storeSoundHoundAlbumIdList;
  }

bool MusicClientStateJSON::hasTrackList(void) const
  {
    return flagHasTrackList;
  }

MusicTrackResultJSON * MusicClientStateJSON::getTrackList(void)
  {
    assert(flagHasTrackList);
    return storeTrackList;
  }

const MusicTrackResultJSON * MusicClientStateJSON::getTrackList(void) const
  {
    assert(flagHasTrackList);
    return storeTrackList;
  }

bool MusicClientStateJSON::hasTrackListPosition(void) const
  {
    return flagHasTrackListPosition;
  }

OInteger MusicClientStateJSON::getTrackListPosition(void)
  {
    assert(flagHasTrackListPosition);
    return storeTrackListPosition;
  }

const OInteger MusicClientStateJSON::getTrackListPosition(void) const
  {
    assert(flagHasTrackListPosition);
    return storeTrackListPosition;
  }

bool MusicClientStateJSON::hasPlaylist(void) const
  {
    return flagHasPlaylist;
  }

PlaylistStateItemJSON * MusicClientStateJSON::getPlaylist(void)
  {
    assert(flagHasPlaylist);
    return storePlaylist;
  }

const PlaylistStateItemJSON * MusicClientStateJSON::getPlaylist(void) const
  {
    assert(flagHasPlaylist);
    return storePlaylist;
  }

bool MusicClientStateJSON::hasPlaylists(void) const
  {
    return flagHasPlaylists;
  }

size_t MusicClientStateJSON::countOfPlaylists(void) const
  {
    assert(flagHasPlaylists);
    return storePlaylists.size();
  }

PlaylistStateItemJSON * MusicClientStateJSON::elementOfPlaylists(size_t element_num)
  {
    assert(flagHasPlaylists);
    return storePlaylists[element_num];
  }

const PlaylistStateItemJSON * MusicClientStateJSON::elementOfPlaylists(size_t element_num) const
  {
    assert(flagHasPlaylists);
    return storePlaylists[element_num];
  }

std::vector< PlaylistStateItemJSON * > MusicClientStateJSON::getPlaylists(void)
  {
    assert(flagHasPlaylists);
    return storePlaylists;
  }

const std::vector< PlaylistStateItemJSON * > MusicClientStateJSON::getPlaylists(void) const
  {
    assert(flagHasPlaylists);
    return storePlaylists;
  }

MusicClientStateJSON *MusicClientStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicClientStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicClientStateJSON>, MusicClientStateJSON *, bool> generator("Type MusicClientState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
