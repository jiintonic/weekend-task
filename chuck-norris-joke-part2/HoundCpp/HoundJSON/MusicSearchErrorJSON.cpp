/* file "MusicSearchErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchErrorJSON.h"

#include "MusicSearchErrorJSON.h"


MusicSearchErrorJSON::TypeSearchErrorType::TypeSearchErrorType(void)
  {
  }

MusicSearchErrorJSON::TypeSearchErrorType::TypeSearchErrorType(const TypeSearchErrorType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicSearchErrorJSON::TypeSearchErrorType::TypeSearchErrorType(TypeSearchErrorTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicSearchErrorJSON::TypeSearchErrorType::operator==(const TypeSearchErrorType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicSearchErrorJSON::TypeSearchErrorType::operator!=(const TypeSearchErrorType &other) const
  {
    return !(operator==(other));
  }

bool MusicSearchErrorJSON::TypeSearchErrorType::operator<(const TypeSearchErrorType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicSearchErrorJSON::TypeSearchErrorType::operator>(const TypeSearchErrorType &other) const
  {
    return other.operator<(*this);
  }

bool MusicSearchErrorJSON::TypeSearchErrorType::operator>=(const TypeSearchErrorType &other) const
  {
    return !(operator<(other));
  }

bool MusicSearchErrorJSON::TypeSearchErrorType::operator<=(const TypeSearchErrorType &other) const
  {
    return !(other.operator<(*this));
  }

MusicSearchErrorJSON::TypeSearchErrorTypeKnownValues MusicSearchErrorJSON::stringToSearchErrorType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strcmp(&(chars[1]), "ONG_NOT_FOUND_BY_ARTIST") == 0)
                return SearchErrorType_SONG_NOT_FOUND_BY_ARTIST;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ARGET_TYPE_NOT_FOUND") == 0)
                return SearchErrorType_TARGET_TYPE_NOT_FOUND;
            break;
        default:
            break;
      }
    return SearchErrorType__none;
  }

const char *MusicSearchErrorJSON::stringFromSearchErrorType(TypeSearchErrorTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case SearchErrorType_SONG_NOT_FOUND_BY_ARTIST:
            return "SONG_NOT_FOUND_BY_ARTIST";
        case SearchErrorType_TARGET_TYPE_NOT_FOUND:
            return "TARGET_TYPE_NOT_FOUND";
        default:
            assert(false);
            return NULL;
      }
  }

MusicSearchErrorJSON::MusicSearchErrorJSON(const MusicSearchErrorJSON &)
  {
    assert(false);
  }

MusicSearchErrorJSON &MusicSearchErrorJSON::operator=(const MusicSearchErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicSearchErrorJSON::fromJSONSearchErrorType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SearchErrorType of MusicSearchErrorJSON is not a string.");
    TypeSearchErrorType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ONG_NOT_FOUND_BY_ARTIST") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SearchErrorType_SONG_NOT_FOUND_BY_ARTIST;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ARGET_TYPE_NOT_FOUND") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SearchErrorType_TARGET_TYPE_NOT_FOUND;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setSearchErrorType(the_open_enum);
  }

void MusicSearchErrorJSON::fromJSONArtist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicArtistBaseJSON *convert_classy = MusicArtistBaseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArtist(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchErrorJSON::fromJSONTrack(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicTrackBaseJSON *convert_classy = MusicTrackBaseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTrack(convert_classy);
    convert_classy->remove_reference();
  }

MusicSearchErrorJSON::MusicSearchErrorJSON(void) :
        flagHasSearchErrorType(false),
        flagHasArtist(false),
        flagHasTrack(false)
  {
  }

MusicSearchErrorJSON::~MusicSearchErrorJSON(void)
  {
    if (flagHasArtist)
      {
        storeArtist->remove_reference();
      }
    if (flagHasTrack)
      {
        storeTrack->remove_reference();
      }
  }

bool MusicSearchErrorJSON::hasSearchErrorType(void) const
  {
    return flagHasSearchErrorType;
  }

MusicSearchErrorJSON::TypeSearchErrorType MusicSearchErrorJSON::getSearchErrorType(void)
  {
    assert(flagHasSearchErrorType);
    return storeSearchErrorType;
  }

const MusicSearchErrorJSON::TypeSearchErrorType MusicSearchErrorJSON::getSearchErrorType(void) const
  {
    assert(flagHasSearchErrorType);
    return storeSearchErrorType;
  }

const char *MusicSearchErrorJSON::getSearchErrorTypeAsChars(void) const
  {
    TypeSearchErrorType result = getSearchErrorType();
    if (result.in_known_list)
        return stringFromSearchErrorType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicSearchErrorJSON::getSearchErrorTypeAsString(void) const
  {
    return getSearchErrorTypeAsChars();
  }

bool MusicSearchErrorJSON::hasArtist(void) const
  {
    return flagHasArtist;
  }

MusicArtistBaseJSON * MusicSearchErrorJSON::getArtist(void)
  {
    assert(flagHasArtist);
    return storeArtist;
  }

const MusicArtistBaseJSON * MusicSearchErrorJSON::getArtist(void) const
  {
    assert(flagHasArtist);
    return storeArtist;
  }

bool MusicSearchErrorJSON::hasTrack(void) const
  {
    return flagHasTrack;
  }

MusicTrackBaseJSON * MusicSearchErrorJSON::getTrack(void)
  {
    assert(flagHasTrack);
    return storeTrack;
  }

const MusicTrackBaseJSON * MusicSearchErrorJSON::getTrack(void) const
  {
    assert(flagHasTrack);
    return storeTrack;
  }

MusicSearchErrorJSON *MusicSearchErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchErrorJSON>, MusicSearchErrorJSON *, bool> generator("Type MusicSearchError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
