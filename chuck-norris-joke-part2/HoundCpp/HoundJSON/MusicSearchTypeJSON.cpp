/* file "MusicSearchTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchTypeJSON.h"

#include "MusicSearchTypeJSON.h"


MusicSearchTypeJSON::TypeValue::TypeValue(void)
  {
  }

MusicSearchTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicSearchTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicSearchTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicSearchTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool MusicSearchTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicSearchTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool MusicSearchTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool MusicSearchTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

MusicSearchTypeJSON::TypeValueKnownValues MusicSearchTypeJSON::stringToValue(const char *chars)
  {
    if (strncmp(chars, "SearchFor", 9) == 0)
      {
        switch ((unsigned char)(chars[9]))
          {
            case 'A':
                switch ((unsigned char)(chars[10]))
                  {
                    case 'l':
                        switch ((unsigned char)(chars[11]))
                          {
                            case 'b':
                                if (strncmp(&(chars[12]), "ums", 3) == 0)
                                  {
                                    switch ((unsigned char)(chars[15]))
                                      {
                                        case 0:
                                            return Value_SearchForAlbums;
                                        case 'B':
                                            if (strcmp(&(chars[16]), "yArtist") == 0)
                                                return Value_SearchForAlbumsByArtist;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'l':
                                if (strcmp(&(chars[12]), "AlbumsByArtist") == 0)
                                    return Value_SearchForAllAlbumsByArtist;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'r':
                        if (strncmp(&(chars[11]), "tists", 5) == 0)
                          {
                            switch ((unsigned char)(chars[16]))
                              {
                                case 0:
                                    return Value_SearchForArtists;
                                case 'B':
                                    if (strcmp(&(chars[17]), "yTrack") == 0)
                                        return Value_SearchForArtistsByTrack;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'M':
                if (strcmp(&(chars[10]), "usicEntities") == 0)
                    return Value_SearchForMusicEntities;
                break;
            case 'T':
                if (strncmp(&(chars[10]), "racks", 5) == 0)
                  {
                    switch ((unsigned char)(chars[15]))
                      {
                        case 0:
                            return Value_SearchForTracks;
                        case 'B':
                            if (strncmp(&(chars[16]), "yArtist", 7) == 0)
                              {
                                switch ((unsigned char)(chars[23]))
                                  {
                                    case 0:
                                        return Value_SearchForTracksByArtist;
                                    case 'I':
                                        if (strcmp(&(chars[24]), "mplied") == 0)
                                            return Value_SearchForTracksByArtistImplied;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'O':
                            if (strcmp(&(chars[16]), "nAlbum") == 0)
                                return Value_SearchForTracksOnAlbum;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
      }
    return Value__none;
  }

const char *MusicSearchTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_SearchForTracksOnAlbum:
            return "SearchForTracksOnAlbum";
        case Value_SearchForTracksByArtist:
            return "SearchForTracksByArtist";
        case Value_SearchForTracksByArtistImplied:
            return "SearchForTracksByArtistImplied";
        case Value_SearchForTracks:
            return "SearchForTracks";
        case Value_SearchForArtists:
            return "SearchForArtists";
        case Value_SearchForArtistsByTrack:
            return "SearchForArtistsByTrack";
        case Value_SearchForAlbums:
            return "SearchForAlbums";
        case Value_SearchForAlbumsByArtist:
            return "SearchForAlbumsByArtist";
        case Value_SearchForAllAlbumsByArtist:
            return "SearchForAllAlbumsByArtist";
        case Value_SearchForMusicEntities:
            return "SearchForMusicEntities";
        default:
            assert(false);
            return NULL;
      }
  }

MusicSearchTypeJSON::MusicSearchTypeJSON(const MusicSearchTypeJSON &)
  {
    assert(false);
  }

MusicSearchTypeJSON &MusicSearchTypeJSON::operator=(const MusicSearchTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicSearchTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of MusicSearchTypeJSON is not a string.");
    TypeValue the_open_enum;
    if (strncmp(json_string->getData(), "SearchFor", 9) == 0)
      {
        switch ((unsigned char)(json_string->getData()[9]))
          {
            case 'A':
                switch ((unsigned char)(json_string->getData()[10]))
                  {
                    case 'l':
                        switch ((unsigned char)(json_string->getData()[11]))
                          {
                            case 'b':
                                if (strncmp(&(json_string->getData()[12]), "ums", 3) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[15]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SearchForAlbums;
                                                goto open_enum_is_done;
                                              }
                                        case 'B':
                                            if (strcmp(&(json_string->getData()[16]), "yArtist") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SearchForAlbumsByArtist;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'l':
                                if (strcmp(&(json_string->getData()[12]), "AlbumsByArtist") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SearchForAllAlbumsByArtist;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'r':
                        if (strncmp(&(json_string->getData()[11]), "tists", 5) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[16]))
                              {
                                case 0:
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_SearchForArtists;
                                        goto open_enum_is_done;
                                      }
                                case 'B':
                                    if (strcmp(&(json_string->getData()[17]), "yTrack") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_SearchForArtistsByTrack;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'M':
                if (strcmp(&(json_string->getData()[10]), "usicEntities") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Value_SearchForMusicEntities;
                        goto open_enum_is_done;
                      }
                break;
            case 'T':
                if (strncmp(&(json_string->getData()[10]), "racks", 5) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[15]))
                      {
                        case 0:
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_SearchForTracks;
                                goto open_enum_is_done;
                              }
                        case 'B':
                            if (strncmp(&(json_string->getData()[16]), "yArtist", 7) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[23]))
                                  {
                                    case 0:
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_SearchForTracksByArtist;
                                            goto open_enum_is_done;
                                          }
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[24]), "mplied") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SearchForTracksByArtistImplied;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'O':
                            if (strcmp(&(json_string->getData()[16]), "nAlbum") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_SearchForTracksOnAlbum;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

MusicSearchTypeJSON::MusicSearchTypeJSON(void) :
        flagHasValue(false)
  {
  }

MusicSearchTypeJSON::MusicSearchTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

MusicSearchTypeJSON::MusicSearchTypeJSON(const char *init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value);
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

MusicSearchTypeJSON::MusicSearchTypeJSON(std::string init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value.c_str());
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

MusicSearchTypeJSON::MusicSearchTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

MusicSearchTypeJSON::~MusicSearchTypeJSON(void)
  {
  }

bool MusicSearchTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

MusicSearchTypeJSON::TypeValue MusicSearchTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const MusicSearchTypeJSON::TypeValue MusicSearchTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *MusicSearchTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicSearchTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

MusicSearchTypeJSON *MusicSearchTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchTypeJSON>, MusicSearchTypeJSON *, bool> generator("Type MusicSearchType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
