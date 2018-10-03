/* file "MusicRequestedFieldJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicRequestedFieldJSON.h"

#include "MusicRequestedFieldJSON.h"


MusicRequestedFieldJSON::TypeValue::TypeValue(void)
  {
  }

MusicRequestedFieldJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicRequestedFieldJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicRequestedFieldJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicRequestedFieldJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool MusicRequestedFieldJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicRequestedFieldJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool MusicRequestedFieldJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool MusicRequestedFieldJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

MusicRequestedFieldJSON::TypeValueKnownValues MusicRequestedFieldJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strncmp(&(chars[2]), "bum", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'B':
                                if (strcmp(&(chars[6]), "andMembers") == 0)
                                    return Value_AlbumBandMembers;
                                break;
                            case 'G':
                                if (strcmp(&(chars[6]), "enre") == 0)
                                    return Value_AlbumGenre;
                                break;
                            case 'M':
                                if (strcmp(&(chars[6]), "ostPopularTrack") == 0)
                                    return Value_AlbumMostPopularTrack;
                                break;
                            case 'N':
                                if (strcmp(&(chars[6]), "ame") == 0)
                                    return Value_AlbumName;
                                break;
                            case 'R':
                                if (strcmp(&(chars[6]), "eleaseDate") == 0)
                                    return Value_AlbumReleaseDate;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "tist", 4) == 0)
                      {
                        switch ((unsigned char)(chars[6]))
                          {
                            case '1':
                                if (strcmp(&(chars[7]), "InArtist2") == 0)
                                    return Value_Artist1InArtist2;
                                break;
                            case 'A':
                                if (strcmp(&(chars[7]), "ge") == 0)
                                    return Value_ArtistAge;
                                break;
                            case 'B':
                                switch ((unsigned char)(chars[7]))
                                  {
                                    case 'a':
                                        if (strcmp(&(chars[8]), "ndMembers") == 0)
                                            return Value_ArtistBandMembers;
                                        break;
                                    case 'i':
                                        switch ((unsigned char)(chars[8]))
                                          {
                                            case 'o':
                                                if (strcmp(&(chars[9]), "graphy") == 0)
                                                    return Value_ArtistBiography;
                                                break;
                                            case 'r':
                                                if (strncmp(&(chars[9]), "th", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(chars[11]))
                                                      {
                                                        case 'D':
                                                            if (strcmp(&(chars[12]), "ate") == 0)
                                                                return Value_ArtistBirthDate;
                                                            break;
                                                        case 'P':
                                                            if (strcmp(&(chars[12]), "lace") == 0)
                                                                return Value_ArtistBirthPlace;
                                                            break;
                                                        case 'd':
                                                            if (strcmp(&(chars[12]), "ay") == 0)
                                                                return Value_ArtistBirthday;
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
                                    default:
                                        break;
                                  }
                                break;
                            case 'C':
                                if (strcmp(&(chars[7]), "ollaborations") == 0)
                                    return Value_ArtistCollaborations;
                                break;
                            case 'D':
                                if (strncmp(&(chars[7]), "eath", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'D':
                                            if (strcmp(&(chars[12]), "ate") == 0)
                                                return Value_ArtistDeathDate;
                                            break;
                                        case 'P':
                                            if (strcmp(&(chars[12]), "lace") == 0)
                                                return Value_ArtistDeathPlace;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'F':
                                if (strncmp(&(chars[7]), "irst", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[11]))
                                      {
                                        case 'A':
                                            if (strcmp(&(chars[12]), "lbum") == 0)
                                                return Value_ArtistFirstAlbum;
                                            break;
                                        case 'T':
                                            if (strcmp(&(chars[12]), "rack") == 0)
                                                return Value_ArtistFirstTrack;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'G':
                                if (strcmp(&(chars[7]), "enre") == 0)
                                    return Value_ArtistGenre;
                                break;
                            case 'I':
                                if (strcmp(&(chars[7]), "mages") == 0)
                                    return Value_ArtistImages;
                                break;
                            case 'M':
                                if (strcmp(&(chars[7]), "ostRecentAlbum") == 0)
                                    return Value_ArtistMostRecentAlbum;
                                break;
                            case 'N':
                                if (strcmp(&(chars[7]), "ame") == 0)
                                    return Value_ArtistName;
                                break;
                            case 'R':
                                if (strcmp(&(chars[7]), "elatedArtists") == 0)
                                    return Value_ArtistRelatedArtists;
                                break;
                            case 'T':
                                if (strcmp(&(chars[7]), "opTracks") == 0)
                                    return Value_ArtistTopTracks;
                                break;
                            case 'W':
                                if (strncmp(&(chars[7]), "h", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[8]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[9]), "nActive") == 0)
                                                return Value_ArtistWhenActive;
                                            break;
                                        case 'i':
                                            if (strcmp(&(chars[9]), "chGroupsPlayedIn") == 0)
                                                return Value_ArtistWhichGroupsPlayedIn;
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
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "pTracks") == 0)
                        return Value_TopTracks;
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "ack", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'G':
                                if (strcmp(&(chars[6]), "enre") == 0)
                                    return Value_TrackGenre;
                                break;
                            case 'L':
                                if (strcmp(&(chars[6]), "yricsLookup") == 0)
                                    return Value_TrackLyricsLookup;
                                break;
                            case 'N':
                                if (strcmp(&(chars[6]), "ame") == 0)
                                    return Value_TrackName;
                                break;
                            case 'R':
                                if (strcmp(&(chars[6]), "eleaseDate") == 0)
                                    return Value_TrackReleaseDate;
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
        default:
            break;
      }
    return Value__none;
  }

const char *MusicRequestedFieldJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_ArtistName:
            return "ArtistName";
        case Value_AlbumName:
            return "AlbumName";
        case Value_TrackName:
            return "TrackName";
        case Value_ArtistAge:
            return "ArtistAge";
        case Value_ArtistBirthDate:
            return "ArtistBirthDate";
        case Value_ArtistBirthday:
            return "ArtistBirthday";
        case Value_ArtistBirthPlace:
            return "ArtistBirthPlace";
        case Value_ArtistDeathDate:
            return "ArtistDeathDate";
        case Value_ArtistDeathPlace:
            return "ArtistDeathPlace";
        case Value_ArtistBandMembers:
            return "ArtistBandMembers";
        case Value_ArtistFirstTrack:
            return "ArtistFirstTrack";
        case Value_ArtistFirstAlbum:
            return "ArtistFirstAlbum";
        case Value_ArtistWhenActive:
            return "ArtistWhenActive";
        case Value_ArtistMostRecentAlbum:
            return "ArtistMostRecentAlbum";
        case Value_ArtistWhichGroupsPlayedIn:
            return "ArtistWhichGroupsPlayedIn";
        case Value_ArtistGenre:
            return "ArtistGenre";
        case Value_ArtistRelatedArtists:
            return "ArtistRelatedArtists";
        case Value_ArtistCollaborations:
            return "ArtistCollaborations";
        case Value_AlbumGenre:
            return "AlbumGenre";
        case Value_AlbumReleaseDate:
            return "AlbumReleaseDate";
        case Value_AlbumBandMembers:
            return "AlbumBandMembers";
        case Value_TrackGenre:
            return "TrackGenre";
        case Value_TrackReleaseDate:
            return "TrackReleaseDate";
        case Value_Artist1InArtist2:
            return "Artist1InArtist2";
        case Value_TopTracks:
            return "TopTracks";
        case Value_AlbumMostPopularTrack:
            return "AlbumMostPopularTrack";
        case Value_ArtistTopTracks:
            return "ArtistTopTracks";
        case Value_TrackLyricsLookup:
            return "TrackLyricsLookup";
        case Value_ArtistImages:
            return "ArtistImages";
        case Value_ArtistBiography:
            return "ArtistBiography";
        default:
            assert(false);
            return NULL;
      }
  }

MusicRequestedFieldJSON::MusicRequestedFieldJSON(const MusicRequestedFieldJSON &)
  {
    assert(false);
  }

MusicRequestedFieldJSON &MusicRequestedFieldJSON::operator=(const MusicRequestedFieldJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicRequestedFieldJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of MusicRequestedFieldJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strncmp(&(json_string->getData()[2]), "bum", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'B':
                                if (strcmp(&(json_string->getData()[6]), "andMembers") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_AlbumBandMembers;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'G':
                                if (strcmp(&(json_string->getData()[6]), "enre") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_AlbumGenre;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[6]), "ostPopularTrack") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_AlbumMostPopularTrack;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'N':
                                if (strcmp(&(json_string->getData()[6]), "ame") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_AlbumName;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'R':
                                if (strcmp(&(json_string->getData()[6]), "eleaseDate") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_AlbumReleaseDate;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "tist", 4) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[6]))
                          {
                            case '1':
                                if (strcmp(&(json_string->getData()[7]), "InArtist2") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_Artist1InArtist2;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'A':
                                if (strcmp(&(json_string->getData()[7]), "ge") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ArtistAge;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'B':
                                switch ((unsigned char)(json_string->getData()[7]))
                                  {
                                    case 'a':
                                        if (strcmp(&(json_string->getData()[8]), "ndMembers") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_ArtistBandMembers;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'i':
                                        switch ((unsigned char)(json_string->getData()[8]))
                                          {
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[9]), "graphy") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Value_ArtistBiography;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'r':
                                                if (strncmp(&(json_string->getData()[9]), "th", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(json_string->getData()[11]))
                                                      {
                                                        case 'D':
                                                            if (strcmp(&(json_string->getData()[12]), "ate") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_ArtistBirthDate;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'P':
                                                            if (strcmp(&(json_string->getData()[12]), "lace") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_ArtistBirthPlace;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'd':
                                                            if (strcmp(&(json_string->getData()[12]), "ay") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = Value_ArtistBirthday;
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
                                    default:
                                        break;
                                  }
                                break;
                            case 'C':
                                if (strcmp(&(json_string->getData()[7]), "ollaborations") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ArtistCollaborations;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'D':
                                if (strncmp(&(json_string->getData()[7]), "eath", 4) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[12]), "ate") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArtistDeathDate;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'P':
                                            if (strcmp(&(json_string->getData()[12]), "lace") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArtistDeathPlace;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'F':
                                if (strncmp(&(json_string->getData()[7]), "irst", 4) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[11]))
                                      {
                                        case 'A':
                                            if (strcmp(&(json_string->getData()[12]), "lbum") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArtistFirstAlbum;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'T':
                                            if (strcmp(&(json_string->getData()[12]), "rack") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArtistFirstTrack;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'G':
                                if (strcmp(&(json_string->getData()[7]), "enre") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ArtistGenre;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[7]), "mages") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ArtistImages;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[7]), "ostRecentAlbum") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ArtistMostRecentAlbum;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'N':
                                if (strcmp(&(json_string->getData()[7]), "ame") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ArtistName;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'R':
                                if (strcmp(&(json_string->getData()[7]), "elatedArtists") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ArtistRelatedArtists;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[7]), "opTracks") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_ArtistTopTracks;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[7]), "h", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[8]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[9]), "nActive") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArtistWhenActive;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'i':
                                            if (strcmp(&(json_string->getData()[9]), "chGroupsPlayedIn") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_ArtistWhichGroupsPlayedIn;
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
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "pTracks") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_TopTracks;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "ack", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'G':
                                if (strcmp(&(json_string->getData()[6]), "enre") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TrackGenre;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'L':
                                if (strcmp(&(json_string->getData()[6]), "yricsLookup") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TrackLyricsLookup;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'N':
                                if (strcmp(&(json_string->getData()[6]), "ame") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TrackName;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'R':
                                if (strcmp(&(json_string->getData()[6]), "eleaseDate") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TrackReleaseDate;
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
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

MusicRequestedFieldJSON::MusicRequestedFieldJSON(void) :
        flagHasValue(false)
  {
  }

MusicRequestedFieldJSON::MusicRequestedFieldJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

MusicRequestedFieldJSON::MusicRequestedFieldJSON(const char *init_value) :
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

MusicRequestedFieldJSON::MusicRequestedFieldJSON(std::string init_value) :
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

MusicRequestedFieldJSON::MusicRequestedFieldJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

MusicRequestedFieldJSON::~MusicRequestedFieldJSON(void)
  {
  }

bool MusicRequestedFieldJSON::hasValue(void) const
  {
    return flagHasValue;
  }

MusicRequestedFieldJSON::TypeValue MusicRequestedFieldJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const MusicRequestedFieldJSON::TypeValue MusicRequestedFieldJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *MusicRequestedFieldJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicRequestedFieldJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

MusicRequestedFieldJSON *MusicRequestedFieldJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicRequestedFieldJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicRequestedFieldJSON>, MusicRequestedFieldJSON *, bool> generator("Type MusicRequestedField", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
