/* file "MusicSearchCriteriaJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchCriteriaJSON.h"

#include "MusicSearchCriteriaJSON.h"


MusicSearchCriteriaJSON::MusicSearchCriteriaJSON(const MusicSearchCriteriaJSON &)
  {
    assert(false);
  }

MusicSearchCriteriaJSON &MusicSearchCriteriaJSON::operator=(const MusicSearchCriteriaJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicSearchCriteriaJSON::fromJSONSearchCriteriaType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchTypeJSON *convert_classy = MusicSearchTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSearchCriteriaType(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchCriteriaJSON::fromJSONTrackResultIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TrackResultIDs of MusicSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_TrackResultIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
        double the_double;
        if (json_rational != NULL)
          {
            the_double = json_rational->getDouble();
          }
        else
          {
            const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
            if (json_integer != NULL)
              {
                the_double = json_integer->getLongInt();
              }
            else
              {
                throw("The value for an element of field TrackResultIDs of MusicSearchCriteriaJSON is not a number.");
              }
          }
        vector_TrackResultIDs1[num1] = the_double;
      }
    initTrackResultIDs();
    for (size_t num7 = 0; num7 < vector_TrackResultIDs1.size(); ++num7)
        appendTrackResultIDs(vector_TrackResultIDs1[num7]);
    for (size_t num1 = 0; num1 < vector_TrackResultIDs1.size(); ++num1)
      {
      }
  }

void MusicSearchCriteriaJSON::fromJSONArtistResultIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ArtistResultIDs of MusicSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_ArtistResultIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
        double the_double;
        if (json_rational != NULL)
          {
            the_double = json_rational->getDouble();
          }
        else
          {
            const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
            if (json_integer != NULL)
              {
                the_double = json_integer->getLongInt();
              }
            else
              {
                throw("The value for an element of field ArtistResultIDs of MusicSearchCriteriaJSON is not a number.");
              }
          }
        vector_ArtistResultIDs1[num1] = the_double;
      }
    initArtistResultIDs();
    for (size_t num8 = 0; num8 < vector_ArtistResultIDs1.size(); ++num8)
        appendArtistResultIDs(vector_ArtistResultIDs1[num8]);
    for (size_t num1 = 0; num1 < vector_ArtistResultIDs1.size(); ++num1)
      {
      }
  }

void MusicSearchCriteriaJSON::fromJSONAlbumResultIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AlbumResultIDs of MusicSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_AlbumResultIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
        double the_double;
        if (json_rational != NULL)
          {
            the_double = json_rational->getDouble();
          }
        else
          {
            const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
            if (json_integer != NULL)
              {
                the_double = json_integer->getLongInt();
              }
            else
              {
                throw("The value for an element of field AlbumResultIDs of MusicSearchCriteriaJSON is not a number.");
              }
          }
        vector_AlbumResultIDs1[num1] = the_double;
      }
    initAlbumResultIDs();
    for (size_t num9 = 0; num9 < vector_AlbumResultIDs1.size(); ++num9)
        appendAlbumResultIDs(vector_AlbumResultIDs1[num9]);
    for (size_t num1 = 0; num1 < vector_AlbumResultIDs1.size(); ++num1)
      {
      }
  }

void MusicSearchCriteriaJSON::fromJSONTrackResultSHIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TrackResultSHIDs of MusicSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SoundHoundTrackIDJSON * > vector_TrackResultSHIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SoundHoundTrackIDJSON *convert_classy = SoundHoundTrackIDJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_TrackResultSHIDs1[num1] = convert_classy;
      }
    initTrackResultSHIDs();
    for (size_t num10 = 0; num10 < vector_TrackResultSHIDs1.size(); ++num10)
        appendTrackResultSHIDs(vector_TrackResultSHIDs1[num10]);
    for (size_t num1 = 0; num1 < vector_TrackResultSHIDs1.size(); ++num1)
      {
        vector_TrackResultSHIDs1[num1]->remove_reference();
      }
  }

void MusicSearchCriteriaJSON::fromJSONArtistResultSHIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ArtistResultSHIDs of MusicSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SoundHoundArtistIDJSON * > vector_ArtistResultSHIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SoundHoundArtistIDJSON *convert_classy = SoundHoundArtistIDJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ArtistResultSHIDs1[num1] = convert_classy;
      }
    initArtistResultSHIDs();
    for (size_t num11 = 0; num11 < vector_ArtistResultSHIDs1.size(); ++num11)
        appendArtistResultSHIDs(vector_ArtistResultSHIDs1[num11]);
    for (size_t num1 = 0; num1 < vector_ArtistResultSHIDs1.size(); ++num1)
      {
        vector_ArtistResultSHIDs1[num1]->remove_reference();
      }
  }

void MusicSearchCriteriaJSON::fromJSONAlbumResultSHIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AlbumResultSHIDs of MusicSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SoundHoundAlbumIDJSON * > vector_AlbumResultSHIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SoundHoundAlbumIDJSON *convert_classy = SoundHoundAlbumIDJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AlbumResultSHIDs1[num1] = convert_classy;
      }
    initAlbumResultSHIDs();
    for (size_t num12 = 0; num12 < vector_AlbumResultSHIDs1.size(); ++num12)
        appendAlbumResultSHIDs(vector_AlbumResultSHIDs1[num12]);
    for (size_t num1 = 0; num1 < vector_AlbumResultSHIDs1.size(); ++num1)
      {
        vector_AlbumResultSHIDs1[num1]->remove_reference();
      }
  }

void MusicSearchCriteriaJSON::fromJSONDateRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateRange(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchCriteriaJSON::fromJSONTrackCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TrackCount of MusicSearchCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TrackCount of MusicSearchCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTrackCount(extracted_integer);
  }

void MusicSearchCriteriaJSON::fromJSONAlbumCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AlbumCount of MusicSearchCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AlbumCount of MusicSearchCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAlbumCount(extracted_integer);
  }

void MusicSearchCriteriaJSON::fromJSONMusicSearchTargetType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchTypeJSON *convert_classy = MusicSearchTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicSearchTargetType(convert_classy);
    convert_classy->remove_reference();
  }

MusicSearchCriteriaJSON::MusicSearchCriteriaJSON(void) :
        flagHasSearchCriteriaType(false),
        flagHasTrackResultIDs(false),
        flagHasArtistResultIDs(false),
        flagHasAlbumResultIDs(false),
        flagHasTrackResultSHIDs(false),
        flagHasArtistResultSHIDs(false),
        flagHasAlbumResultSHIDs(false),
        flagHasDateRange(false),
        flagHasTrackCount(false),
        flagHasAlbumCount(false),
        flagHasMusicSearchTargetType(false)
  {
  }

MusicSearchCriteriaJSON::~MusicSearchCriteriaJSON(void)
  {
    if (flagHasSearchCriteriaType)
      {
        storeSearchCriteriaType->remove_reference();
      }
    if (flagHasTrackResultSHIDs)
      {
        for (size_t num10 = 0; num10 < storeTrackResultSHIDs.size(); ++num10)
          {
            storeTrackResultSHIDs[num10]->remove_reference();
          }
      }
    if (flagHasArtistResultSHIDs)
      {
        for (size_t num11 = 0; num11 < storeArtistResultSHIDs.size(); ++num11)
          {
            storeArtistResultSHIDs[num11]->remove_reference();
          }
      }
    if (flagHasAlbumResultSHIDs)
      {
        for (size_t num12 = 0; num12 < storeAlbumResultSHIDs.size(); ++num12)
          {
            storeAlbumResultSHIDs[num12]->remove_reference();
          }
      }
    if (flagHasDateRange)
      {
        storeDateRange->remove_reference();
      }
    if (flagHasMusicSearchTargetType)
      {
        storeMusicSearchTargetType->remove_reference();
      }
  }

bool MusicSearchCriteriaJSON::hasSearchCriteriaType(void) const
  {
    return flagHasSearchCriteriaType;
  }

MusicSearchTypeJSON * MusicSearchCriteriaJSON::getSearchCriteriaType(void)
  {
    assert(flagHasSearchCriteriaType);
    return storeSearchCriteriaType;
  }

const MusicSearchTypeJSON * MusicSearchCriteriaJSON::getSearchCriteriaType(void) const
  {
    assert(flagHasSearchCriteriaType);
    return storeSearchCriteriaType;
  }

MusicSearchTypeJSON::TypeValue MusicSearchCriteriaJSON::getSearchCriteriaTypeValue(void)
  {
    return getSearchCriteriaType()->getValue();
  }

const MusicSearchTypeJSON::TypeValue MusicSearchCriteriaJSON::getSearchCriteriaTypeValue(void) const
  {
    return getSearchCriteriaType()->getValue();
  }

const char *MusicSearchCriteriaJSON::getSearchCriteriaTypeAsChars(void) const
  {
    return getSearchCriteriaType()->getValueAsChars();
  }

std::string MusicSearchCriteriaJSON::getSearchCriteriaTypeAsString(void) const
  {
    return getSearchCriteriaType()->getValueAsString();
  }

bool MusicSearchCriteriaJSON::hasTrackResultIDs(void) const
  {
    return flagHasTrackResultIDs;
  }

size_t MusicSearchCriteriaJSON::countOfTrackResultIDs(void) const
  {
    assert(flagHasTrackResultIDs);
    return storeTrackResultIDs.size();
  }

double MusicSearchCriteriaJSON::elementOfTrackResultIDs(size_t element_num)
  {
    assert(flagHasTrackResultIDs);
    return storeTrackResultIDs[element_num];
  }

const double MusicSearchCriteriaJSON::elementOfTrackResultIDs(size_t element_num) const
  {
    assert(flagHasTrackResultIDs);
    return storeTrackResultIDs[element_num];
  }

std::vector< double > MusicSearchCriteriaJSON::getTrackResultIDs(void)
  {
    assert(flagHasTrackResultIDs);
    return storeTrackResultIDs;
  }

const std::vector< double > MusicSearchCriteriaJSON::getTrackResultIDs(void) const
  {
    assert(flagHasTrackResultIDs);
    return storeTrackResultIDs;
  }

bool MusicSearchCriteriaJSON::hasArtistResultIDs(void) const
  {
    return flagHasArtistResultIDs;
  }

size_t MusicSearchCriteriaJSON::countOfArtistResultIDs(void) const
  {
    assert(flagHasArtistResultIDs);
    return storeArtistResultIDs.size();
  }

double MusicSearchCriteriaJSON::elementOfArtistResultIDs(size_t element_num)
  {
    assert(flagHasArtistResultIDs);
    return storeArtistResultIDs[element_num];
  }

const double MusicSearchCriteriaJSON::elementOfArtistResultIDs(size_t element_num) const
  {
    assert(flagHasArtistResultIDs);
    return storeArtistResultIDs[element_num];
  }

std::vector< double > MusicSearchCriteriaJSON::getArtistResultIDs(void)
  {
    assert(flagHasArtistResultIDs);
    return storeArtistResultIDs;
  }

const std::vector< double > MusicSearchCriteriaJSON::getArtistResultIDs(void) const
  {
    assert(flagHasArtistResultIDs);
    return storeArtistResultIDs;
  }

bool MusicSearchCriteriaJSON::hasAlbumResultIDs(void) const
  {
    return flagHasAlbumResultIDs;
  }

size_t MusicSearchCriteriaJSON::countOfAlbumResultIDs(void) const
  {
    assert(flagHasAlbumResultIDs);
    return storeAlbumResultIDs.size();
  }

double MusicSearchCriteriaJSON::elementOfAlbumResultIDs(size_t element_num)
  {
    assert(flagHasAlbumResultIDs);
    return storeAlbumResultIDs[element_num];
  }

const double MusicSearchCriteriaJSON::elementOfAlbumResultIDs(size_t element_num) const
  {
    assert(flagHasAlbumResultIDs);
    return storeAlbumResultIDs[element_num];
  }

std::vector< double > MusicSearchCriteriaJSON::getAlbumResultIDs(void)
  {
    assert(flagHasAlbumResultIDs);
    return storeAlbumResultIDs;
  }

const std::vector< double > MusicSearchCriteriaJSON::getAlbumResultIDs(void) const
  {
    assert(flagHasAlbumResultIDs);
    return storeAlbumResultIDs;
  }

bool MusicSearchCriteriaJSON::hasTrackResultSHIDs(void) const
  {
    return flagHasTrackResultSHIDs;
  }

size_t MusicSearchCriteriaJSON::countOfTrackResultSHIDs(void) const
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs.size();
  }

SoundHoundTrackIDJSON * MusicSearchCriteriaJSON::elementOfTrackResultSHIDs(size_t element_num)
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs[element_num];
  }

const SoundHoundTrackIDJSON * MusicSearchCriteriaJSON::elementOfTrackResultSHIDs(size_t element_num) const
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs[element_num];
  }

std::vector< SoundHoundTrackIDJSON * > MusicSearchCriteriaJSON::getTrackResultSHIDs(void)
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs;
  }

const std::vector< SoundHoundTrackIDJSON * > MusicSearchCriteriaJSON::getTrackResultSHIDs(void) const
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs;
  }

bool MusicSearchCriteriaJSON::hasArtistResultSHIDs(void) const
  {
    return flagHasArtistResultSHIDs;
  }

size_t MusicSearchCriteriaJSON::countOfArtistResultSHIDs(void) const
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs.size();
  }

SoundHoundArtistIDJSON * MusicSearchCriteriaJSON::elementOfArtistResultSHIDs(size_t element_num)
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs[element_num];
  }

const SoundHoundArtistIDJSON * MusicSearchCriteriaJSON::elementOfArtistResultSHIDs(size_t element_num) const
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs[element_num];
  }

std::vector< SoundHoundArtistIDJSON * > MusicSearchCriteriaJSON::getArtistResultSHIDs(void)
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs;
  }

const std::vector< SoundHoundArtistIDJSON * > MusicSearchCriteriaJSON::getArtistResultSHIDs(void) const
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs;
  }

bool MusicSearchCriteriaJSON::hasAlbumResultSHIDs(void) const
  {
    return flagHasAlbumResultSHIDs;
  }

size_t MusicSearchCriteriaJSON::countOfAlbumResultSHIDs(void) const
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs.size();
  }

SoundHoundAlbumIDJSON * MusicSearchCriteriaJSON::elementOfAlbumResultSHIDs(size_t element_num)
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs[element_num];
  }

const SoundHoundAlbumIDJSON * MusicSearchCriteriaJSON::elementOfAlbumResultSHIDs(size_t element_num) const
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs[element_num];
  }

std::vector< SoundHoundAlbumIDJSON * > MusicSearchCriteriaJSON::getAlbumResultSHIDs(void)
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs;
  }

const std::vector< SoundHoundAlbumIDJSON * > MusicSearchCriteriaJSON::getAlbumResultSHIDs(void) const
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs;
  }

bool MusicSearchCriteriaJSON::hasDateRange(void) const
  {
    return flagHasDateRange;
  }

DateTimeRangeSpecJSON * MusicSearchCriteriaJSON::getDateRange(void)
  {
    assert(flagHasDateRange);
    return storeDateRange;
  }

const DateTimeRangeSpecJSON * MusicSearchCriteriaJSON::getDateRange(void) const
  {
    assert(flagHasDateRange);
    return storeDateRange;
  }

bool MusicSearchCriteriaJSON::hasTrackCount(void) const
  {
    return flagHasTrackCount;
  }

OInteger MusicSearchCriteriaJSON::getTrackCount(void)
  {
    assert(flagHasTrackCount);
    return storeTrackCount;
  }

const OInteger MusicSearchCriteriaJSON::getTrackCount(void) const
  {
    assert(flagHasTrackCount);
    return storeTrackCount;
  }

bool MusicSearchCriteriaJSON::hasAlbumCount(void) const
  {
    return flagHasAlbumCount;
  }

OInteger MusicSearchCriteriaJSON::getAlbumCount(void)
  {
    assert(flagHasAlbumCount);
    return storeAlbumCount;
  }

const OInteger MusicSearchCriteriaJSON::getAlbumCount(void) const
  {
    assert(flagHasAlbumCount);
    return storeAlbumCount;
  }

bool MusicSearchCriteriaJSON::hasMusicSearchTargetType(void) const
  {
    return flagHasMusicSearchTargetType;
  }

MusicSearchTypeJSON * MusicSearchCriteriaJSON::getMusicSearchTargetType(void)
  {
    assert(flagHasMusicSearchTargetType);
    return storeMusicSearchTargetType;
  }

const MusicSearchTypeJSON * MusicSearchCriteriaJSON::getMusicSearchTargetType(void) const
  {
    assert(flagHasMusicSearchTargetType);
    return storeMusicSearchTargetType;
  }

MusicSearchTypeJSON::TypeValue MusicSearchCriteriaJSON::getMusicSearchTargetTypeValue(void)
  {
    return getMusicSearchTargetType()->getValue();
  }

const MusicSearchTypeJSON::TypeValue MusicSearchCriteriaJSON::getMusicSearchTargetTypeValue(void) const
  {
    return getMusicSearchTargetType()->getValue();
  }

const char *MusicSearchCriteriaJSON::getMusicSearchTargetTypeAsChars(void) const
  {
    return getMusicSearchTargetType()->getValueAsChars();
  }

std::string MusicSearchCriteriaJSON::getMusicSearchTargetTypeAsString(void) const
  {
    return getMusicSearchTargetType()->getValueAsString();
  }

MusicSearchCriteriaJSON *MusicSearchCriteriaJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchCriteriaJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchCriteriaJSON>, MusicSearchCriteriaJSON *, bool> generator("Type MusicSearchCriteria", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
