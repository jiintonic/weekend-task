/* file "MusicVerticalStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicVerticalStateJSON.h"

#include "MusicVerticalStateJSON.h"


MusicVerticalStateJSON::MusicVerticalStateJSON(const MusicVerticalStateJSON &)
  {
    assert(false);
  }

MusicVerticalStateJSON &MusicVerticalStateJSON::operator=(const MusicVerticalStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MusicVerticalStateJSON::extraTrackIDToJSON(void) const
  {
    JSONStringValue *generated_string_TrackID = new JSONStringValue(storeTrackID.c_str());
    return generated_string_TrackID;
  }

JSONValue *MusicVerticalStateJSON::extraArtistIDToJSON(void) const
  {
    JSONStringValue *generated_string_ArtistID = new JSONStringValue(storeArtistID.c_str());
    return generated_string_ArtistID;
  }

JSONValue *MusicVerticalStateJSON::extraAlbumIDToJSON(void) const
  {
    JSONStringValue *generated_string_AlbumID = new JSONStringValue(storeAlbumID.c_str());
    return generated_string_AlbumID;
  }

JSONValue *MusicVerticalStateJSON::extraTrackIDsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_TrackIDs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeTrackIDs.size(); ++num1)
      {
        JSONStringValue *generated_string_TrackIDs = new JSONStringValue(storeTrackIDs[num1].c_str());
        generated_array_1_TrackIDs->appendComponent(generated_string_TrackIDs);
      }
    return generated_array_1_TrackIDs;
  }

JSONValue *MusicVerticalStateJSON::extraArtistIDsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_ArtistIDs = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeArtistIDs.size(); ++num2)
      {
        JSONStringValue *generated_string_ArtistIDs = new JSONStringValue(storeArtistIDs[num2].c_str());
        generated_array_2_ArtistIDs->appendComponent(generated_string_ArtistIDs);
      }
    return generated_array_2_ArtistIDs;
  }

JSONValue *MusicVerticalStateJSON::extraAlbumIDsToJSON(void) const
  {
    JSONArrayValue *generated_array_3_AlbumIDs = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeAlbumIDs.size(); ++num3)
      {
        JSONStringValue *generated_string_AlbumIDs = new JSONStringValue(storeAlbumIDs[num3].c_str());
        generated_array_3_AlbumIDs->appendComponent(generated_string_AlbumIDs);
      }
    return generated_array_3_AlbumIDs;
  }

void MusicVerticalStateJSON::fromJSONTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TrackID of MusicVerticalStateJSON is not a string.");
    setTrackID(std::string(json_string->getData()));
  }

void MusicVerticalStateJSON::fromJSONArtistID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistID of MusicVerticalStateJSON is not a string.");
    setArtistID(std::string(json_string->getData()));
  }

void MusicVerticalStateJSON::fromJSONAlbumID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumID of MusicVerticalStateJSON is not a string.");
    setAlbumID(std::string(json_string->getData()));
  }

void MusicVerticalStateJSON::fromJSONTrackIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TrackIDs of MusicVerticalStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_TrackIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field TrackIDs of MusicVerticalStateJSON is not a string.");
        vector_TrackIDs1[num1] = std::string(json_string->getData());
      }
    initTrackIDs();
    for (size_t num4 = 0; num4 < vector_TrackIDs1.size(); ++num4)
        appendTrackIDs(vector_TrackIDs1[num4]);
    for (size_t num1 = 0; num1 < vector_TrackIDs1.size(); ++num1)
      {
      }
  }

void MusicVerticalStateJSON::fromJSONArtistIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ArtistIDs of MusicVerticalStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_ArtistIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ArtistIDs of MusicVerticalStateJSON is not a string.");
        vector_ArtistIDs1[num1] = std::string(json_string->getData());
      }
    initArtistIDs();
    for (size_t num5 = 0; num5 < vector_ArtistIDs1.size(); ++num5)
        appendArtistIDs(vector_ArtistIDs1[num5]);
    for (size_t num1 = 0; num1 < vector_ArtistIDs1.size(); ++num1)
      {
      }
  }

void MusicVerticalStateJSON::fromJSONAlbumIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AlbumIDs of MusicVerticalStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_AlbumIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field AlbumIDs of MusicVerticalStateJSON is not a string.");
        vector_AlbumIDs1[num1] = std::string(json_string->getData());
      }
    initAlbumIDs();
    for (size_t num6 = 0; num6 < vector_AlbumIDs1.size(); ++num6)
        appendAlbumIDs(vector_AlbumIDs1[num6]);
    for (size_t num1 = 0; num1 < vector_AlbumIDs1.size(); ++num1)
      {
      }
  }

MusicVerticalStateJSON::MusicVerticalStateJSON(void) :
        flagHasTrackID(false),
        flagHasArtistID(false),
        flagHasAlbumID(false),
        flagHasTrackIDs(false),
        flagHasArtistIDs(false),
        flagHasAlbumIDs(false)
  {
    extraIndex = create_string_index();
  }

MusicVerticalStateJSON::~MusicVerticalStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MusicVerticalStateJSON::getClientVerticalStateKind(void) const
  {
    return "MusicVerticalState";
  }

bool MusicVerticalStateJSON::hasTrackID(void) const
  {
    return flagHasTrackID;
  }

std::string MusicVerticalStateJSON::getTrackID(void)
  {
    assert(flagHasTrackID);
    return storeTrackID;
  }

const std::string MusicVerticalStateJSON::getTrackID(void) const
  {
    assert(flagHasTrackID);
    return storeTrackID;
  }

bool MusicVerticalStateJSON::hasArtistID(void) const
  {
    return flagHasArtistID;
  }

std::string MusicVerticalStateJSON::getArtistID(void)
  {
    assert(flagHasArtistID);
    return storeArtistID;
  }

const std::string MusicVerticalStateJSON::getArtistID(void) const
  {
    assert(flagHasArtistID);
    return storeArtistID;
  }

bool MusicVerticalStateJSON::hasAlbumID(void) const
  {
    return flagHasAlbumID;
  }

std::string MusicVerticalStateJSON::getAlbumID(void)
  {
    assert(flagHasAlbumID);
    return storeAlbumID;
  }

const std::string MusicVerticalStateJSON::getAlbumID(void) const
  {
    assert(flagHasAlbumID);
    return storeAlbumID;
  }

bool MusicVerticalStateJSON::hasTrackIDs(void) const
  {
    return flagHasTrackIDs;
  }

size_t MusicVerticalStateJSON::countOfTrackIDs(void) const
  {
    assert(flagHasTrackIDs);
    return storeTrackIDs.size();
  }

std::string MusicVerticalStateJSON::elementOfTrackIDs(size_t element_num)
  {
    assert(flagHasTrackIDs);
    return storeTrackIDs[element_num];
  }

const std::string MusicVerticalStateJSON::elementOfTrackIDs(size_t element_num) const
  {
    assert(flagHasTrackIDs);
    return storeTrackIDs[element_num];
  }

std::vector< std::string > MusicVerticalStateJSON::getTrackIDs(void)
  {
    assert(flagHasTrackIDs);
    return storeTrackIDs;
  }

const std::vector< std::string > MusicVerticalStateJSON::getTrackIDs(void) const
  {
    assert(flagHasTrackIDs);
    return storeTrackIDs;
  }

bool MusicVerticalStateJSON::hasArtistIDs(void) const
  {
    return flagHasArtistIDs;
  }

size_t MusicVerticalStateJSON::countOfArtistIDs(void) const
  {
    assert(flagHasArtistIDs);
    return storeArtistIDs.size();
  }

std::string MusicVerticalStateJSON::elementOfArtistIDs(size_t element_num)
  {
    assert(flagHasArtistIDs);
    return storeArtistIDs[element_num];
  }

const std::string MusicVerticalStateJSON::elementOfArtistIDs(size_t element_num) const
  {
    assert(flagHasArtistIDs);
    return storeArtistIDs[element_num];
  }

std::vector< std::string > MusicVerticalStateJSON::getArtistIDs(void)
  {
    assert(flagHasArtistIDs);
    return storeArtistIDs;
  }

const std::vector< std::string > MusicVerticalStateJSON::getArtistIDs(void) const
  {
    assert(flagHasArtistIDs);
    return storeArtistIDs;
  }

bool MusicVerticalStateJSON::hasAlbumIDs(void) const
  {
    return flagHasAlbumIDs;
  }

size_t MusicVerticalStateJSON::countOfAlbumIDs(void) const
  {
    assert(flagHasAlbumIDs);
    return storeAlbumIDs.size();
  }

std::string MusicVerticalStateJSON::elementOfAlbumIDs(size_t element_num)
  {
    assert(flagHasAlbumIDs);
    return storeAlbumIDs[element_num];
  }

const std::string MusicVerticalStateJSON::elementOfAlbumIDs(size_t element_num) const
  {
    assert(flagHasAlbumIDs);
    return storeAlbumIDs[element_num];
  }

std::vector< std::string > MusicVerticalStateJSON::getAlbumIDs(void)
  {
    assert(flagHasAlbumIDs);
    return storeAlbumIDs;
  }

const std::vector< std::string > MusicVerticalStateJSON::getAlbumIDs(void) const
  {
    assert(flagHasAlbumIDs);
    return storeAlbumIDs;
  }

MusicVerticalStateJSON *MusicVerticalStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicVerticalStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicVerticalStateJSON>, MusicVerticalStateJSON *, bool> generator("Type MusicVerticalState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
