/* file "MusicSearchResultsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchResultsJSON.h"

#include "MusicSearchResultsJSON.h"


MusicSearchResultsJSON::TypeLatestListType::TypeLatestListType(void)
  {
  }

MusicSearchResultsJSON::TypeLatestListType::TypeLatestListType(const TypeLatestListType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicSearchResultsJSON::TypeLatestListType::TypeLatestListType(TypeLatestListTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicSearchResultsJSON::TypeLatestListType::operator==(const TypeLatestListType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicSearchResultsJSON::TypeLatestListType::operator!=(const TypeLatestListType &other) const
  {
    return !(operator==(other));
  }

bool MusicSearchResultsJSON::TypeLatestListType::operator<(const TypeLatestListType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicSearchResultsJSON::TypeLatestListType::operator>(const TypeLatestListType &other) const
  {
    return other.operator<(*this);
  }

bool MusicSearchResultsJSON::TypeLatestListType::operator>=(const TypeLatestListType &other) const
  {
    return !(operator<(other));
  }

bool MusicSearchResultsJSON::TypeLatestListType::operator<=(const TypeLatestListType &other) const
  {
    return !(other.operator<(*this));
  }

MusicSearchResultsJSON::TypeLatestListTypeKnownValues MusicSearchResultsJSON::stringToLatestListType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "bum") == 0)
                        return LatestListType_Album;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "tist") == 0)
                        return LatestListType_Artist;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "rack") == 0)
                return LatestListType_Track;
            break;
        default:
            break;
      }
    return LatestListType__none;
  }

const char *MusicSearchResultsJSON::stringFromLatestListType(TypeLatestListTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case LatestListType_Track:
            return "Track";
        case LatestListType_Artist:
            return "Artist";
        case LatestListType_Album:
            return "Album";
        default:
            assert(false);
            return NULL;
      }
  }

MusicSearchResultsJSON::MusicSearchResultsJSON(const MusicSearchResultsJSON &)
  {
    assert(false);
  }

MusicSearchResultsJSON &MusicSearchResultsJSON::operator=(const MusicSearchResultsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicSearchResultsJSON::fromJSONTrackResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TrackResults of MusicSearchResultsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field TrackResults of MusicSearchResultsJSON has too few elements.");
    std::vector< MusicTrackResultJSON * > vector_TrackResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicTrackResultJSON *convert_classy = MusicTrackResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_TrackResults1[num1] = convert_classy;
      }
    assert(vector_TrackResults1.size() >= 1);
    initTrackResults();
    for (size_t num4 = 0; num4 < vector_TrackResults1.size(); ++num4)
        appendTrackResults(vector_TrackResults1[num4]);
    for (size_t num1 = 0; num1 < vector_TrackResults1.size(); ++num1)
      {
        vector_TrackResults1[num1]->remove_reference();
      }
  }

void MusicSearchResultsJSON::fromJSONArtistResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ArtistResults of MusicSearchResultsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ArtistResults of MusicSearchResultsJSON has too few elements.");
    std::vector< MusicArtistResultJSON * > vector_ArtistResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicArtistResultJSON *convert_classy = MusicArtistResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ArtistResults1[num1] = convert_classy;
      }
    assert(vector_ArtistResults1.size() >= 1);
    initArtistResults();
    for (size_t num5 = 0; num5 < vector_ArtistResults1.size(); ++num5)
        appendArtistResults(vector_ArtistResults1[num5]);
    for (size_t num1 = 0; num1 < vector_ArtistResults1.size(); ++num1)
      {
        vector_ArtistResults1[num1]->remove_reference();
      }
  }

void MusicSearchResultsJSON::fromJSONAlbumResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AlbumResults of MusicSearchResultsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field AlbumResults of MusicSearchResultsJSON has too few elements.");
    std::vector< MusicAlbumResultJSON * > vector_AlbumResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicAlbumResultJSON *convert_classy = MusicAlbumResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AlbumResults1[num1] = convert_classy;
      }
    assert(vector_AlbumResults1.size() >= 1);
    initAlbumResults();
    for (size_t num6 = 0; num6 < vector_AlbumResults1.size(); ++num6)
        appendAlbumResults(vector_AlbumResults1[num6]);
    for (size_t num1 = 0; num1 < vector_AlbumResults1.size(); ++num1)
      {
        vector_AlbumResults1[num1]->remove_reference();
      }
  }

void MusicSearchResultsJSON::fromJSONLatestListType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LatestListType of MusicSearchResultsJSON is not a string.");
    TypeLatestListType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "bum") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = LatestListType_Album;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "tist") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = LatestListType_Artist;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "rack") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = LatestListType_Track;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setLatestListType(the_open_enum);
  }

void MusicSearchResultsJSON::fromJSONLastTrackListIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LastTrackListIndex of MusicSearchResultsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LastTrackListIndex of MusicSearchResultsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLastTrackListIndex(extracted_integer);
  }

void MusicSearchResultsJSON::fromJSONLastArtistListIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LastArtistListIndex of MusicSearchResultsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LastArtistListIndex of MusicSearchResultsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLastArtistListIndex(extracted_integer);
  }

void MusicSearchResultsJSON::fromJSONLastAlbumListIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LastAlbumListIndex of MusicSearchResultsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LastAlbumListIndex of MusicSearchResultsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLastAlbumListIndex(extracted_integer);
  }

MusicSearchResultsJSON::MusicSearchResultsJSON(void) :
        flagHasTrackResults(false),
        flagHasArtistResults(false),
        flagHasAlbumResults(false),
        flagHasLatestListType(false),
        flagHasLastTrackListIndex(false),
        flagHasLastArtistListIndex(false),
        flagHasLastAlbumListIndex(false)
  {
  }

MusicSearchResultsJSON::~MusicSearchResultsJSON(void)
  {
    if (flagHasTrackResults)
      {
        for (size_t num10 = 0; num10 < storeTrackResults.size(); ++num10)
          {
            storeTrackResults[num10]->remove_reference();
          }
      }
    if (flagHasArtistResults)
      {
        for (size_t num11 = 0; num11 < storeArtistResults.size(); ++num11)
          {
            storeArtistResults[num11]->remove_reference();
          }
      }
    if (flagHasAlbumResults)
      {
        for (size_t num12 = 0; num12 < storeAlbumResults.size(); ++num12)
          {
            storeAlbumResults[num12]->remove_reference();
          }
      }
  }

bool MusicSearchResultsJSON::hasTrackResults(void) const
  {
    return flagHasTrackResults;
  }

size_t MusicSearchResultsJSON::countOfTrackResults(void) const
  {
    assert(flagHasTrackResults);
    return storeTrackResults.size();
  }

MusicTrackResultJSON * MusicSearchResultsJSON::elementOfTrackResults(size_t element_num)
  {
    assert(flagHasTrackResults);
    return storeTrackResults[element_num];
  }

const MusicTrackResultJSON * MusicSearchResultsJSON::elementOfTrackResults(size_t element_num) const
  {
    assert(flagHasTrackResults);
    return storeTrackResults[element_num];
  }

std::vector< MusicTrackResultJSON * > MusicSearchResultsJSON::getTrackResults(void)
  {
    assert(flagHasTrackResults);
    return storeTrackResults;
  }

const std::vector< MusicTrackResultJSON * > MusicSearchResultsJSON::getTrackResults(void) const
  {
    assert(flagHasTrackResults);
    return storeTrackResults;
  }

bool MusicSearchResultsJSON::hasArtistResults(void) const
  {
    return flagHasArtistResults;
  }

size_t MusicSearchResultsJSON::countOfArtistResults(void) const
  {
    assert(flagHasArtistResults);
    return storeArtistResults.size();
  }

MusicArtistResultJSON * MusicSearchResultsJSON::elementOfArtistResults(size_t element_num)
  {
    assert(flagHasArtistResults);
    return storeArtistResults[element_num];
  }

const MusicArtistResultJSON * MusicSearchResultsJSON::elementOfArtistResults(size_t element_num) const
  {
    assert(flagHasArtistResults);
    return storeArtistResults[element_num];
  }

std::vector< MusicArtistResultJSON * > MusicSearchResultsJSON::getArtistResults(void)
  {
    assert(flagHasArtistResults);
    return storeArtistResults;
  }

const std::vector< MusicArtistResultJSON * > MusicSearchResultsJSON::getArtistResults(void) const
  {
    assert(flagHasArtistResults);
    return storeArtistResults;
  }

bool MusicSearchResultsJSON::hasAlbumResults(void) const
  {
    return flagHasAlbumResults;
  }

size_t MusicSearchResultsJSON::countOfAlbumResults(void) const
  {
    assert(flagHasAlbumResults);
    return storeAlbumResults.size();
  }

MusicAlbumResultJSON * MusicSearchResultsJSON::elementOfAlbumResults(size_t element_num)
  {
    assert(flagHasAlbumResults);
    return storeAlbumResults[element_num];
  }

const MusicAlbumResultJSON * MusicSearchResultsJSON::elementOfAlbumResults(size_t element_num) const
  {
    assert(flagHasAlbumResults);
    return storeAlbumResults[element_num];
  }

std::vector< MusicAlbumResultJSON * > MusicSearchResultsJSON::getAlbumResults(void)
  {
    assert(flagHasAlbumResults);
    return storeAlbumResults;
  }

const std::vector< MusicAlbumResultJSON * > MusicSearchResultsJSON::getAlbumResults(void) const
  {
    assert(flagHasAlbumResults);
    return storeAlbumResults;
  }

bool MusicSearchResultsJSON::hasLatestListType(void) const
  {
    return flagHasLatestListType;
  }

MusicSearchResultsJSON::TypeLatestListType MusicSearchResultsJSON::getLatestListType(void)
  {
    assert(flagHasLatestListType);
    return storeLatestListType;
  }

const MusicSearchResultsJSON::TypeLatestListType MusicSearchResultsJSON::getLatestListType(void) const
  {
    assert(flagHasLatestListType);
    return storeLatestListType;
  }

const char *MusicSearchResultsJSON::getLatestListTypeAsChars(void) const
  {
    TypeLatestListType result = getLatestListType();
    if (result.in_known_list)
        return stringFromLatestListType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicSearchResultsJSON::getLatestListTypeAsString(void) const
  {
    return getLatestListTypeAsChars();
  }

bool MusicSearchResultsJSON::hasLastTrackListIndex(void) const
  {
    return flagHasLastTrackListIndex;
  }

OInteger MusicSearchResultsJSON::getLastTrackListIndex(void)
  {
    assert(flagHasLastTrackListIndex);
    return storeLastTrackListIndex;
  }

const OInteger MusicSearchResultsJSON::getLastTrackListIndex(void) const
  {
    assert(flagHasLastTrackListIndex);
    return storeLastTrackListIndex;
  }

bool MusicSearchResultsJSON::hasLastArtistListIndex(void) const
  {
    return flagHasLastArtistListIndex;
  }

OInteger MusicSearchResultsJSON::getLastArtistListIndex(void)
  {
    assert(flagHasLastArtistListIndex);
    return storeLastArtistListIndex;
  }

const OInteger MusicSearchResultsJSON::getLastArtistListIndex(void) const
  {
    assert(flagHasLastArtistListIndex);
    return storeLastArtistListIndex;
  }

bool MusicSearchResultsJSON::hasLastAlbumListIndex(void) const
  {
    return flagHasLastAlbumListIndex;
  }

OInteger MusicSearchResultsJSON::getLastAlbumListIndex(void)
  {
    assert(flagHasLastAlbumListIndex);
    return storeLastAlbumListIndex;
  }

const OInteger MusicSearchResultsJSON::getLastAlbumListIndex(void) const
  {
    assert(flagHasLastAlbumListIndex);
    return storeLastAlbumListIndex;
  }

MusicSearchResultsJSON *MusicSearchResultsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchResultsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchResultsJSON>, MusicSearchResultsJSON *, bool> generator("Type MusicSearchResults", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
