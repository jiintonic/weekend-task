/* file "MusicChartsSearchCriteriaJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicChartsSearchCriteriaJSON.h"

#include "MusicChartsSearchCriteriaJSON.h"


MusicChartsSearchCriteriaJSON::TypeEntity::TypeEntity(void)
  {
  }

MusicChartsSearchCriteriaJSON::TypeEntity::TypeEntity(const TypeEntity &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicChartsSearchCriteriaJSON::TypeEntity::TypeEntity(TypeEntityKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicChartsSearchCriteriaJSON::TypeEntity::operator==(const TypeEntity &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeEntity::operator!=(const TypeEntity &other) const
  {
    return !(operator==(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeEntity::operator<(const TypeEntity &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeEntity::operator>(const TypeEntity &other) const
  {
    return other.operator<(*this);
  }

bool MusicChartsSearchCriteriaJSON::TypeEntity::operator>=(const TypeEntity &other) const
  {
    return !(operator<(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeEntity::operator<=(const TypeEntity &other) const
  {
    return !(other.operator<(*this));
  }

MusicChartsSearchCriteriaJSON::TypeEntityKnownValues MusicChartsSearchCriteriaJSON::stringToEntity(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "bums") == 0)
                        return Entity_Albums;
                    break;
                case 'r':
                    if (strncmp(&(chars[2]), "tists", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 0:
                                return Entity_Artists;
                            case 'B':
                                if (strcmp(&(chars[8]), "ornOn") == 0)
                                    return Entity_ArtistsBornOn;
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
        case 'P':
            if (strcmp(&(chars[1]), "laylist") == 0)
                return Entity_Playlist;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "racks") == 0)
                return Entity_Tracks;
            break;
        case 'V':
            if (strcmp(&(chars[1]), "ideos") == 0)
                return Entity_Videos;
            break;
        default:
            break;
      }
    return Entity__none;
  }

const char *MusicChartsSearchCriteriaJSON::stringFromEntity(TypeEntityKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Entity_Tracks:
            return "Tracks";
        case Entity_Artists:
            return "Artists";
        case Entity_Albums:
            return "Albums";
        case Entity_Videos:
            return "Videos";
        case Entity_ArtistsBornOn:
            return "ArtistsBornOn";
        case Entity_Playlist:
            return "Playlist";
        default:
            assert(false);
            return NULL;
      }
  }

MusicChartsSearchCriteriaJSON::TypeModifier::TypeModifier(void)
  {
  }

MusicChartsSearchCriteriaJSON::TypeModifier::TypeModifier(const TypeModifier &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicChartsSearchCriteriaJSON::TypeModifier::TypeModifier(TypeModifierKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicChartsSearchCriteriaJSON::TypeModifier::operator==(const TypeModifier &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeModifier::operator!=(const TypeModifier &other) const
  {
    return !(operator==(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeModifier::operator<(const TypeModifier &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeModifier::operator>(const TypeModifier &other) const
  {
    return other.operator<(*this);
  }

bool MusicChartsSearchCriteriaJSON::TypeModifier::operator>=(const TypeModifier &other) const
  {
    return !(operator<(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeModifier::operator<=(const TypeModifier &other) const
  {
    return !(other.operator<(*this));
  }

MusicChartsSearchCriteriaJSON::TypeModifierKnownValues MusicChartsSearchCriteriaJSON::stringToModifier(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'N':
            if (strcmp(&(chars[1]), "ew") == 0)
                return Modifier_New;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "op") == 0)
                return Modifier_Top;
            break;
        default:
            break;
      }
    return Modifier__none;
  }

const char *MusicChartsSearchCriteriaJSON::stringFromModifier(TypeModifierKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Modifier_Top:
            return "Top";
        case Modifier_New:
            return "New";
        default:
            assert(false);
            return NULL;
      }
  }

MusicChartsSearchCriteriaJSON::TypeTimePeriodType::TypeTimePeriodType(void)
  {
  }

MusicChartsSearchCriteriaJSON::TypeTimePeriodType::TypeTimePeriodType(const TypeTimePeriodType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicChartsSearchCriteriaJSON::TypeTimePeriodType::TypeTimePeriodType(TypeTimePeriodTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicChartsSearchCriteriaJSON::TypeTimePeriodType::operator==(const TypeTimePeriodType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeTimePeriodType::operator!=(const TypeTimePeriodType &other) const
  {
    return !(operator==(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeTimePeriodType::operator<(const TypeTimePeriodType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeTimePeriodType::operator>(const TypeTimePeriodType &other) const
  {
    return other.operator<(*this);
  }

bool MusicChartsSearchCriteriaJSON::TypeTimePeriodType::operator>=(const TypeTimePeriodType &other) const
  {
    return !(operator<(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeTimePeriodType::operator<=(const TypeTimePeriodType &other) const
  {
    return !(other.operator<(*this));
  }

MusicChartsSearchCriteriaJSON::TypeTimePeriodTypeKnownValues MusicChartsSearchCriteriaJSON::stringToTimePeriodType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "entury") == 0)
                return TimePeriodType_Century;
            break;
        case 'D':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "y") == 0)
                        return TimePeriodType_Day;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "cade") == 0)
                        return TimePeriodType_Decade;
                    break;
                default:
                    break;
              }
            break;
        case 'M':
            if (strcmp(&(chars[1]), "onth") == 0)
                return TimePeriodType_Month;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return TimePeriodType_None;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "eek") == 0)
                return TimePeriodType_Week;
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "ear") == 0)
                return TimePeriodType_Year;
            break;
        default:
            break;
      }
    return TimePeriodType__none;
  }

const char *MusicChartsSearchCriteriaJSON::stringFromTimePeriodType(TypeTimePeriodTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case TimePeriodType_Day:
            return "Day";
        case TimePeriodType_Week:
            return "Week";
        case TimePeriodType_Month:
            return "Month";
        case TimePeriodType_Year:
            return "Year";
        case TimePeriodType_Decade:
            return "Decade";
        case TimePeriodType_Century:
            return "Century";
        case TimePeriodType_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

MusicChartsSearchCriteriaJSON::TypeGenre::TypeGenre(void)
  {
  }

MusicChartsSearchCriteriaJSON::TypeGenre::TypeGenre(const TypeGenre &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicChartsSearchCriteriaJSON::TypeGenre::TypeGenre(TypeGenreKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicChartsSearchCriteriaJSON::TypeGenre::operator==(const TypeGenre &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeGenre::operator!=(const TypeGenre &other) const
  {
    return !(operator==(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeGenre::operator<(const TypeGenre &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeGenre::operator>(const TypeGenre &other) const
  {
    return other.operator<(*this);
  }

bool MusicChartsSearchCriteriaJSON::TypeGenre::operator>=(const TypeGenre &other) const
  {
    return !(operator<(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeGenre::operator<=(const TypeGenre &other) const
  {
    return !(other.operator<(*this));
  }

MusicChartsSearchCriteriaJSON::TypeGenreKnownValues MusicChartsSearchCriteriaJSON::stringToGenre(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'l':
                            if (strcmp(&(chars[3]), "Genres") == 0)
                                return Genre_AllGenres;
                            break;
                        case 't':
                            if (strncmp(&(chars[3]), "Genre", 5) == 0)
                              {
                                switch ((unsigned char)(chars[8]))
                                  {
                                    case 0:
                                        return Genre_AltGenre;
                                    case 'B':
                                        switch ((unsigned char)(chars[9]))
                                          {
                                            case 'o':
                                                if (strcmp(&(chars[10]), "ssaNova") == 0)
                                                    return Genre_AltGenreBossaNova;
                                                break;
                                            case 'r':
                                                if (strcmp(&(chars[10]), "itishPunk") == 0)
                                                    return Genre_AltGenreBritishPunk;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'E':
                                        if (strcmp(&(chars[9]), "astCoast") == 0)
                                            return Genre_AltGenreEastCoast;
                                        break;
                                    case 'F':
                                        if (strcmp(&(chars[9]), "renchFolk") == 0)
                                            return Genre_AltGenreFrenchFolk;
                                        break;
                                    case 'T':
                                        if (strcmp(&(chars[9]), "VSoundtrack") == 0)
                                            return Genre_AltGenreTVSoundtrack;
                                        break;
                                    case 'V':
                                        if (strcmp(&(chars[9]), "ideoGame") == 0)
                                            return Genre_AltGenreVideoGame;
                                        break;
                                    case 'W':
                                        if (strcmp(&(chars[9]), "estCoast") == 0)
                                            return Genre_AltGenreWestCoast;
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
                case 'v':
                    if (strcmp(&(chars[2]), "ant Garde") == 0)
                        return Genre_Avant_x20_Garde;
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            if (strcmp(&(chars[1]), "lues") == 0)
                return Genre_Blues;
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'h':
                    if (strcmp(&(chars[2]), "ilds") == 0)
                        return Genre_Childs;
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "assical") == 0)
                        return Genre_Classical;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "untry") == 0)
                        return Genre_Country;
                    break;
                default:
                    break;
              }
            break;
        case 'E':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "sy") == 0)
                        return Genre_Easy;
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "ectronic") == 0)
                        return Genre_Electronic;
                    break;
                default:
                    break;
              }
            break;
        case 'F':
            if (strcmp(&(chars[1]), "olk") == 0)
                return Genre_Folk;
            break;
        case 'G':
            if (strcmp(&(chars[1]), "ospel") == 0)
                return Genre_Gospel;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "oliday") == 0)
                return Genre_Holiday;
            break;
        case 'J':
            if (strcmp(&(chars[1]), "azz") == 0)
                return Genre_Jazz;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "atin") == 0)
                return Genre_Latin;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "ovie Soundtrack") == 0)
                return Genre_Movie_x20_Soundtrack;
            break;
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "w Age") == 0)
                        return Genre_New_x20_Age;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "Genre") == 0)
                        return Genre_NoGenre;
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case '&':
                    if (strcmp(&(chars[2]), "B") == 0)
                        return Genre_R_x26_B;
                    break;
                case 'a':
                    if (strcmp(&(chars[2]), "p") == 0)
                        return Genre_Rap;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "ggae") == 0)
                        return Genre_Reggae;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ck") == 0)
                        return Genre_Rock;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "und Effects") == 0)
                        return Genre_Sound_x20_Effects;
                    break;
                case 'p':
                    if (strcmp(&(chars[2]), "oken Word") == 0)
                        return Genre_Spoken_x20_Word;
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(chars[1]), "rban") == 0)
                return Genre_Urban;
            break;
        case 'V':
            if (strcmp(&(chars[1]), "ocal") == 0)
                return Genre_Vocal;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "orld") == 0)
                return Genre_World;
            break;
        default:
            break;
      }
    return Genre__none;
  }

const char *MusicChartsSearchCriteriaJSON::stringFromGenre(TypeGenreKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Genre_NoGenre:
            return "NoGenre";
        case Genre_Rock:
            return "Rock";
        case Genre_Country:
            return "Country";
        case Genre_Electronic:
            return "Electronic";
        case Genre_Urban:
            return "Urban";
        case Genre_Latin:
            return "Latin";
        case Genre_AllGenres:
            return "AllGenres";
        case Genre_Avant_x20_Garde:
            return "Avant Garde";
        case Genre_Blues:
            return "Blues";
        case Genre_Childs:
            return "Childs";
        case Genre_Classical:
            return "Classical";
        case Genre_Easy:
            return "Easy";
        case Genre_Folk:
            return "Folk";
        case Genre_Gospel:
            return "Gospel";
        case Genre_Holiday:
            return "Holiday";
        case Genre_Jazz:
            return "Jazz";
        case Genre_Movie_x20_Soundtrack:
            return "Movie Soundtrack";
        case Genre_New_x20_Age:
            return "New Age";
        case Genre_Rap:
            return "Rap";
        case Genre_R_x26_B:
            return "R&B";
        case Genre_Reggae:
            return "Reggae";
        case Genre_Sound_x20_Effects:
            return "Sound Effects";
        case Genre_Spoken_x20_Word:
            return "Spoken Word";
        case Genre_Vocal:
            return "Vocal";
        case Genre_World:
            return "World";
        case Genre_AltGenre:
            return "AltGenre";
        case Genre_AltGenreFrenchFolk:
            return "AltGenreFrenchFolk";
        case Genre_AltGenreWestCoast:
            return "AltGenreWestCoast";
        case Genre_AltGenreEastCoast:
            return "AltGenreEastCoast";
        case Genre_AltGenreBritishPunk:
            return "AltGenreBritishPunk";
        case Genre_AltGenreVideoGame:
            return "AltGenreVideoGame";
        case Genre_AltGenreTVSoundtrack:
            return "AltGenreTVSoundtrack";
        case Genre_AltGenreBossaNova:
            return "AltGenreBossaNova";
        default:
            assert(false);
            return NULL;
      }
  }

MusicChartsSearchCriteriaJSON::TypePlaylist::TypePlaylist(void)
  {
  }

MusicChartsSearchCriteriaJSON::TypePlaylist::TypePlaylist(const TypePlaylist &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicChartsSearchCriteriaJSON::TypePlaylist::TypePlaylist(TypePlaylistKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicChartsSearchCriteriaJSON::TypePlaylist::operator==(const TypePlaylist &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicChartsSearchCriteriaJSON::TypePlaylist::operator!=(const TypePlaylist &other) const
  {
    return !(operator==(other));
  }

bool MusicChartsSearchCriteriaJSON::TypePlaylist::operator<(const TypePlaylist &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicChartsSearchCriteriaJSON::TypePlaylist::operator>(const TypePlaylist &other) const
  {
    return other.operator<(*this);
  }

bool MusicChartsSearchCriteriaJSON::TypePlaylist::operator>=(const TypePlaylist &other) const
  {
    return !(operator<(other));
  }

bool MusicChartsSearchCriteriaJSON::TypePlaylist::operator<=(const TypePlaylist &other) const
  {
    return !(other.operator<(*this));
  }

MusicChartsSearchCriteriaJSON::TypePlaylistKnownValues MusicChartsSearchCriteriaJSON::stringToPlaylist(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'M':
                    if (strcmp(&(chars[2]), "A") == 0)
                        return Playlist_AMA;
                    break;
                case 'p':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'p':
                            if (strcmp(&(chars[3]), "leMusicFestival") == 0)
                                return Playlist_AppleMusicFestival;
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "ilFoolsDay") == 0)
                                return Playlist_AprilFoolsDay;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "stinCityLimits") == 0)
                        return Playlist_AustinCityLimits;
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ckToSchool") == 0)
                        return Playlist_BackToSchool;
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "ackFriday") == 0)
                        return Playlist_BlackFriday;
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'M':
                    if (strcmp(&(chars[2]), "A") == 0)
                        return Playlist_CMA;
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "ristmas") == 0)
                        return Playlist_Christmas;
                    break;
                default:
                    break;
              }
            break;
        case 'F':
            if (strncmp(&(chars[1]), "a", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'l':
                        if (strcmp(&(chars[3]), "l") == 0)
                            return Playlist_Fall;
                        break;
                    case 't':
                        if (strcmp(&(chars[3]), "hersDay") == 0)
                            return Playlist_FathersDay;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'H':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "lloween") == 0)
                        return Playlist_Halloween;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "lidays") == 0)
                        return Playlist_Holidays;
                    break;
                default:
                    break;
              }
            break;
        case 'J':
            if (strcmp(&(chars[1]), "ulyFourth") == 0)
                return Playlist_JulyFourth;
            break;
        case 'L':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'b':
                            if (strcmp(&(chars[3]), "orDay") == 0)
                                return Playlist_LaborDay;
                            break;
                        case 't':
                            if (strcmp(&(chars[3]), "inoGrammys") == 0)
                                return Playlist_LatinoGrammys;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "llapalooza") == 0)
                        return Playlist_Lollapalooza;
                    break;
                default:
                    break;
              }
            break;
        case 'M':
            switch ((unsigned char)(chars[1]))
              {
                case 'T':
                    if (strcmp(&(chars[2]), "VEuropeAwards") == 0)
                        return Playlist_MTVEuropeAwards;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "morialDay") == 0)
                        return Playlist_MemorialDay;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "thersDay") == 0)
                        return Playlist_MothersDay;
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "wYearsEve") == 0)
                        return Playlist_NewYearsEve;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "Playlist") == 0)
                        return Playlist_NoPlaylist;
                    break;
                default:
                    break;
              }
            break;
        case 'O':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "ympics") == 0)
                        return Playlist_Olympics;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "tsideLands") == 0)
                        return Playlist_OutsideLands;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'p':
                    if (strcmp(&(chars[2]), "ring") == 0)
                        return Playlist_Spring;
                    break;
                case 't':
                    if (strcmp(&(chars[2]), "PatricksDay") == 0)
                        return Playlist_StPatricksDay;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "mmer", 4) == 0)
                      {
                        switch ((unsigned char)(chars[6]))
                          {
                            case 0:
                                return Playlist_Summer;
                            case 'H':
                                if (strcmp(&(chars[7]), "otSongs") == 0)
                                    return Playlist_SummerHotSongs;
                                break;
                            case 'L':
                                if (strcmp(&(chars[7]), "astSummerHits") == 0)
                                    return Playlist_SummerLastSummerHits;
                                break;
                            case 'U':
                                if (strcmp(&(chars[7]), "ltimate") == 0)
                                    return Playlist_SummerUltimate;
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
            if (strcmp(&(chars[1]), "hanksgiving") == 0)
                return Playlist_Thanksgiving;
            break;
        case 'V':
            switch ((unsigned char)(chars[1]))
              {
                case 'M':
                    if (strcmp(&(chars[2]), "A") == 0)
                        return Playlist_VMA;
                    break;
                case 'a':
                    if (strcmp(&(chars[2]), "lentinesDay") == 0)
                        return Playlist_ValentinesDay;
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            if (strcmp(&(chars[1]), "inter") == 0)
                return Playlist_Winter;
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "earInReview") == 0)
                return Playlist_YearInReview;
            break;
        default:
            break;
      }
    return Playlist__none;
  }

const char *MusicChartsSearchCriteriaJSON::stringFromPlaylist(TypePlaylistKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Playlist_NoPlaylist:
            return "NoPlaylist";
        case Playlist_MemorialDay:
            return "MemorialDay";
        case Playlist_JulyFourth:
            return "JulyFourth";
        case Playlist_SummerHotSongs:
            return "SummerHotSongs";
        case Playlist_SummerUltimate:
            return "SummerUltimate";
        case Playlist_SummerLastSummerHits:
            return "SummerLastSummerHits";
        case Playlist_Lollapalooza:
            return "Lollapalooza";
        case Playlist_Olympics:
            return "Olympics";
        case Playlist_OutsideLands:
            return "OutsideLands";
        case Playlist_VMA:
            return "VMA";
        case Playlist_AppleMusicFestival:
            return "AppleMusicFestival";
        case Playlist_AustinCityLimits:
            return "AustinCityLimits";
        case Playlist_MTVEuropeAwards:
            return "MTVEuropeAwards";
        case Playlist_CMA:
            return "CMA";
        case Playlist_LatinoGrammys:
            return "LatinoGrammys";
        case Playlist_AMA:
            return "AMA";
        case Playlist_YearInReview:
            return "YearInReview";
        case Playlist_Holidays:
            return "Holidays";
        case Playlist_NewYearsEve:
            return "NewYearsEve";
        case Playlist_Halloween:
            return "Halloween";
        case Playlist_ValentinesDay:
            return "ValentinesDay";
        case Playlist_StPatricksDay:
            return "StPatricksDay";
        case Playlist_AprilFoolsDay:
            return "AprilFoolsDay";
        case Playlist_MothersDay:
            return "MothersDay";
        case Playlist_FathersDay:
            return "FathersDay";
        case Playlist_BackToSchool:
            return "BackToSchool";
        case Playlist_LaborDay:
            return "LaborDay";
        case Playlist_Thanksgiving:
            return "Thanksgiving";
        case Playlist_BlackFriday:
            return "BlackFriday";
        case Playlist_Christmas:
            return "Christmas";
        case Playlist_Spring:
            return "Spring";
        case Playlist_Summer:
            return "Summer";
        case Playlist_Winter:
            return "Winter";
        case Playlist_Fall:
            return "Fall";
        default:
            assert(false);
            return NULL;
      }
  }

MusicChartsSearchCriteriaJSON::TypeGeoScope::TypeGeoScope(void)
  {
  }

MusicChartsSearchCriteriaJSON::TypeGeoScope::TypeGeoScope(const TypeGeoScope &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicChartsSearchCriteriaJSON::TypeGeoScope::TypeGeoScope(TypeGeoScopeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicChartsSearchCriteriaJSON::TypeGeoScope::operator==(const TypeGeoScope &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeGeoScope::operator!=(const TypeGeoScope &other) const
  {
    return !(operator==(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeGeoScope::operator<(const TypeGeoScope &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicChartsSearchCriteriaJSON::TypeGeoScope::operator>(const TypeGeoScope &other) const
  {
    return other.operator<(*this);
  }

bool MusicChartsSearchCriteriaJSON::TypeGeoScope::operator>=(const TypeGeoScope &other) const
  {
    return !(operator<(other));
  }

bool MusicChartsSearchCriteriaJSON::TypeGeoScope::operator<=(const TypeGeoScope &other) const
  {
    return !(other.operator<(*this));
  }

MusicChartsSearchCriteriaJSON::TypeGeoScopeKnownValues MusicChartsSearchCriteriaJSON::stringToGeoScope(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strncmp(&(chars[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'n':
                        if (strcmp(&(chars[3]), "tinent") == 0)
                            return GeoScope_Continent;
                        break;
                    case 'u':
                        if (strcmp(&(chars[3]), "ntry") == 0)
                            return GeoScope_Country;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return GeoScope_None;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "orld") == 0)
                return GeoScope_World;
            break;
        default:
            break;
      }
    return GeoScope__none;
  }

const char *MusicChartsSearchCriteriaJSON::stringFromGeoScope(TypeGeoScopeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case GeoScope_Country:
            return "Country";
        case GeoScope_Continent:
            return "Continent";
        case GeoScope_World:
            return "World";
        case GeoScope_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

MusicChartsSearchCriteriaJSON::MusicChartsSearchCriteriaJSON(const MusicChartsSearchCriteriaJSON &)
  {
    assert(false);
  }

MusicChartsSearchCriteriaJSON &MusicChartsSearchCriteriaJSON::operator=(const MusicChartsSearchCriteriaJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicChartsSearchCriteriaJSON::fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void MusicChartsSearchCriteriaJSON::fromJSONEntity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Entity of MusicChartsSearchCriteriaJSON is not a string.");
    TypeEntity the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "bums") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Entity_Albums;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strncmp(&(json_string->getData()[2]), "tists", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 0:
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Entity_Artists;
                                    goto open_enum_is_done;
                                  }
                            case 'B':
                                if (strcmp(&(json_string->getData()[8]), "ornOn") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Entity_ArtistsBornOn;
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
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "laylist") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Entity_Playlist;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "racks") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Entity_Tracks;
                    goto open_enum_is_done;
                  }
            break;
        case 'V':
            if (strcmp(&(json_string->getData()[1]), "ideos") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Entity_Videos;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setEntity(the_open_enum);
  }

void MusicChartsSearchCriteriaJSON::fromJSONModifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Modifier of MusicChartsSearchCriteriaJSON is not a string.");
    TypeModifier the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "ew") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Modifier_New;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "op") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Modifier_Top;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setModifier(the_open_enum);
  }

void MusicChartsSearchCriteriaJSON::fromJSONTimePeriod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTimePeriod(convert_classy);
    convert_classy->remove_reference();
  }

void MusicChartsSearchCriteriaJSON::fromJSONTimePeriodType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TimePeriodType of MusicChartsSearchCriteriaJSON is not a string.");
    TypeTimePeriodType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "entury") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TimePeriodType_Century;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "y") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = TimePeriodType_Day;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "cade") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = TimePeriodType_Decade;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "onth") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TimePeriodType_Month;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TimePeriodType_None;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "eek") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TimePeriodType_Week;
                    goto open_enum_is_done;
                  }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "ear") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TimePeriodType_Year;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setTimePeriodType(the_open_enum);
  }

void MusicChartsSearchCriteriaJSON::fromJSONGenre(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Genre of MusicChartsSearchCriteriaJSON is not a string.");
    TypeGenre the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'l':
                            if (strcmp(&(json_string->getData()[3]), "Genres") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Genre_AllGenres;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 't':
                            if (strncmp(&(json_string->getData()[3]), "Genre", 5) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[8]))
                                  {
                                    case 0:
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Genre_AltGenre;
                                            goto open_enum_is_done;
                                          }
                                    case 'B':
                                        switch ((unsigned char)(json_string->getData()[9]))
                                          {
                                            case 'o':
                                                if (strcmp(&(json_string->getData()[10]), "ssaNova") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Genre_AltGenreBossaNova;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'r':
                                                if (strcmp(&(json_string->getData()[10]), "itishPunk") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = Genre_AltGenreBritishPunk;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'E':
                                        if (strcmp(&(json_string->getData()[9]), "astCoast") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Genre_AltGenreEastCoast;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'F':
                                        if (strcmp(&(json_string->getData()[9]), "renchFolk") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Genre_AltGenreFrenchFolk;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'T':
                                        if (strcmp(&(json_string->getData()[9]), "VSoundtrack") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Genre_AltGenreTVSoundtrack;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'V':
                                        if (strcmp(&(json_string->getData()[9]), "ideoGame") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Genre_AltGenreVideoGame;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'W':
                                        if (strcmp(&(json_string->getData()[9]), "estCoast") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Genre_AltGenreWestCoast;
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
                case 'v':
                    if (strcmp(&(json_string->getData()[2]), "ant Garde") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Avant_x20_Garde;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "lues") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Blues;
                    goto open_enum_is_done;
                  }
            break;
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ilds") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Childs;
                            goto open_enum_is_done;
                          }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "assical") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Classical;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "untry") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Country;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'E':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "sy") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Easy;
                            goto open_enum_is_done;
                          }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "ectronic") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Electronic;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "olk") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Folk;
                    goto open_enum_is_done;
                  }
            break;
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "ospel") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Gospel;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "oliday") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Holiday;
                    goto open_enum_is_done;
                  }
            break;
        case 'J':
            if (strcmp(&(json_string->getData()[1]), "azz") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Jazz;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "atin") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Latin;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ovie Soundtrack") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Movie_x20_Soundtrack;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "w Age") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_New_x20_Age;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "Genre") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_NoGenre;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case '&':
                    if (strcmp(&(json_string->getData()[2]), "B") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_R_x26_B;
                            goto open_enum_is_done;
                          }
                    break;
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "p") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Rap;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ggae") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Reggae;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ck") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Rock;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "und Effects") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Sound_x20_Effects;
                            goto open_enum_is_done;
                          }
                    break;
                case 'p':
                    if (strcmp(&(json_string->getData()[2]), "oken Word") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Genre_Spoken_x20_Word;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "rban") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Urban;
                    goto open_enum_is_done;
                  }
            break;
        case 'V':
            if (strcmp(&(json_string->getData()[1]), "ocal") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_Vocal;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "orld") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Genre_World;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setGenre(the_open_enum);
  }

void MusicChartsSearchCriteriaJSON::fromJSONRequestedGenre(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicGenreJSON *convert_classy = MusicGenreJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedGenre(convert_classy);
    convert_classy->remove_reference();
  }

void MusicChartsSearchCriteriaJSON::fromJSONGenreMatch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field GenreMatch of MusicChartsSearchCriteriaJSON is not true for false.");
          }
      }
    setGenreMatch(the_bool);
  }

void MusicChartsSearchCriteriaJSON::fromJSONPlaylist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Playlist of MusicChartsSearchCriteriaJSON is not a string.");
    TypePlaylist the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'M':
                    if (strcmp(&(json_string->getData()[2]), "A") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_AMA;
                            goto open_enum_is_done;
                          }
                    break;
                case 'p':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'p':
                            if (strcmp(&(json_string->getData()[3]), "leMusicFestival") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Playlist_AppleMusicFestival;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "ilFoolsDay") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Playlist_AprilFoolsDay;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "stinCityLimits") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_AustinCityLimits;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "ckToSchool") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_BackToSchool;
                            goto open_enum_is_done;
                          }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "ackFriday") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_BlackFriday;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'M':
                    if (strcmp(&(json_string->getData()[2]), "A") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_CMA;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ristmas") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_Christmas;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'F':
            if (strncmp(&(json_string->getData()[1]), "a", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'l':
                        if (strcmp(&(json_string->getData()[3]), "l") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Playlist_Fall;
                                goto open_enum_is_done;
                              }
                        break;
                    case 't':
                        if (strcmp(&(json_string->getData()[3]), "hersDay") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Playlist_FathersDay;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'H':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "lloween") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_Halloween;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "lidays") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_Holidays;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'J':
            if (strcmp(&(json_string->getData()[1]), "ulyFourth") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Playlist_JulyFourth;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'b':
                            if (strcmp(&(json_string->getData()[3]), "orDay") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Playlist_LaborDay;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 't':
                            if (strcmp(&(json_string->getData()[3]), "inoGrammys") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Playlist_LatinoGrammys;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "llapalooza") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_Lollapalooza;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'M':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'T':
                    if (strcmp(&(json_string->getData()[2]), "VEuropeAwards") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_MTVEuropeAwards;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "morialDay") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_MemorialDay;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "thersDay") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_MothersDay;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "wYearsEve") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_NewYearsEve;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "Playlist") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_NoPlaylist;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'O':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "ympics") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_Olympics;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "tsideLands") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_OutsideLands;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'p':
                    if (strcmp(&(json_string->getData()[2]), "ring") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_Spring;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    if (strcmp(&(json_string->getData()[2]), "PatricksDay") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_StPatricksDay;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "mmer", 4) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[6]))
                          {
                            case 0:
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Playlist_Summer;
                                    goto open_enum_is_done;
                                  }
                            case 'H':
                                if (strcmp(&(json_string->getData()[7]), "otSongs") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Playlist_SummerHotSongs;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'L':
                                if (strcmp(&(json_string->getData()[7]), "astSummerHits") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Playlist_SummerLastSummerHits;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'U':
                                if (strcmp(&(json_string->getData()[7]), "ltimate") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Playlist_SummerUltimate;
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
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "hanksgiving") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Playlist_Thanksgiving;
                    goto open_enum_is_done;
                  }
            break;
        case 'V':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'M':
                    if (strcmp(&(json_string->getData()[2]), "A") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_VMA;
                            goto open_enum_is_done;
                          }
                    break;
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "lentinesDay") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Playlist_ValentinesDay;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "inter") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Playlist_Winter;
                    goto open_enum_is_done;
                  }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "earInReview") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Playlist_YearInReview;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setPlaylist(the_open_enum);
  }

void MusicChartsSearchCriteriaJSON::fromJSONBirthday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBirthday(convert_classy);
    convert_classy->remove_reference();
  }

void MusicChartsSearchCriteriaJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void MusicChartsSearchCriteriaJSON::fromJSONCountryCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CountryCode of MusicChartsSearchCriteriaJSON is not a string.");
    setCountryCode(std::string(json_string->getData()));
  }

void MusicChartsSearchCriteriaJSON::fromJSONCountryName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CountryName of MusicChartsSearchCriteriaJSON is not a string.");
    setCountryName(std::string(json_string->getData()));
  }

void MusicChartsSearchCriteriaJSON::fromJSONGeoScope(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GeoScope of MusicChartsSearchCriteriaJSON is not a string.");
    TypeGeoScope the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strncmp(&(json_string->getData()[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'n':
                        if (strcmp(&(json_string->getData()[3]), "tinent") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = GeoScope_Continent;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'u':
                        if (strcmp(&(json_string->getData()[3]), "ntry") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = GeoScope_Country;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = GeoScope_None;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "orld") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = GeoScope_World;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setGeoScope(the_open_enum);
  }

void MusicChartsSearchCriteriaJSON::fromJSONPlay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field Play of MusicChartsSearchCriteriaJSON is not true for false.");
          }
      }
    setPlay(the_bool);
  }

void MusicChartsSearchCriteriaJSON::fromJSONShuffle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field Shuffle of MusicChartsSearchCriteriaJSON is not true for false.");
          }
      }
    setShuffle(the_bool);
  }

void MusicChartsSearchCriteriaJSON::fromJSONHowMany(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field HowMany of MusicChartsSearchCriteriaJSON is not true for false.");
          }
      }
    setHowMany(the_bool);
  }

void MusicChartsSearchCriteriaJSON::fromJSONRequestedNumberOfResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field RequestedNumberOfResults of MusicChartsSearchCriteriaJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field RequestedNumberOfResults of MusicChartsSearchCriteriaJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRequestedNumberOfResults(extracted_integer);
  }

void MusicChartsSearchCriteriaJSON::fromJSONTrackResultSHIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TrackResultSHIDs of MusicChartsSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_TrackResultSHIDs1(count1);
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
                throw("The value for an element of field TrackResultSHIDs of MusicChartsSearchCriteriaJSON is not a number.");
              }
          }
        vector_TrackResultSHIDs1[num1] = the_double;
      }
    initTrackResultSHIDs();
    for (size_t num5 = 0; num5 < vector_TrackResultSHIDs1.size(); ++num5)
        appendTrackResultSHIDs(vector_TrackResultSHIDs1[num5]);
    for (size_t num1 = 0; num1 < vector_TrackResultSHIDs1.size(); ++num1)
      {
      }
  }

void MusicChartsSearchCriteriaJSON::fromJSONAlbumResultSHIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AlbumResultSHIDs of MusicChartsSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_AlbumResultSHIDs1(count1);
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
                throw("The value for an element of field AlbumResultSHIDs of MusicChartsSearchCriteriaJSON is not a number.");
              }
          }
        vector_AlbumResultSHIDs1[num1] = the_double;
      }
    initAlbumResultSHIDs();
    for (size_t num6 = 0; num6 < vector_AlbumResultSHIDs1.size(); ++num6)
        appendAlbumResultSHIDs(vector_AlbumResultSHIDs1[num6]);
    for (size_t num1 = 0; num1 < vector_AlbumResultSHIDs1.size(); ++num1)
      {
      }
  }

void MusicChartsSearchCriteriaJSON::fromJSONArtistResultSHIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ArtistResultSHIDs of MusicChartsSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_ArtistResultSHIDs1(count1);
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
                throw("The value for an element of field ArtistResultSHIDs of MusicChartsSearchCriteriaJSON is not a number.");
              }
          }
        vector_ArtistResultSHIDs1[num1] = the_double;
      }
    initArtistResultSHIDs();
    for (size_t num7 = 0; num7 < vector_ArtistResultSHIDs1.size(); ++num7)
        appendArtistResultSHIDs(vector_ArtistResultSHIDs1[num7]);
    for (size_t num1 = 0; num1 < vector_ArtistResultSHIDs1.size(); ++num1)
      {
      }
  }

void MusicChartsSearchCriteriaJSON::fromJSONVideoResultIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field VideoResultIDs of MusicChartsSearchCriteriaJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_VideoResultIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field VideoResultIDs of MusicChartsSearchCriteriaJSON is not a string.");
        vector_VideoResultIDs1[num1] = std::string(json_string->getData());
      }
    initVideoResultIDs();
    for (size_t num8 = 0; num8 < vector_VideoResultIDs1.size(); ++num8)
        appendVideoResultIDs(vector_VideoResultIDs1[num8]);
    for (size_t num1 = 0; num1 < vector_VideoResultIDs1.size(); ++num1)
      {
      }
  }

MusicChartsSearchCriteriaJSON::MusicChartsSearchCriteriaJSON(void) :
        flagHasCurrentDateAndTime(false),
        flagHasEntity(false),
        flagHasModifier(false),
        flagHasTimePeriod(false),
        flagHasTimePeriodType(false),
        flagHasGenre(false),
        flagHasRequestedGenre(false),
        flagHasGenreMatch(false),
        flagHasPlaylist(false),
        flagHasBirthday(false),
        flagHasLocation(false),
        flagHasCountryCode(false),
        flagHasCountryName(false),
        flagHasGeoScope(false),
        flagHasPlay(false),
        flagHasShuffle(false),
        flagHasHowMany(false),
        flagHasRequestedNumberOfResults(false),
        flagHasTrackResultSHIDs(false),
        flagHasAlbumResultSHIDs(false),
        flagHasArtistResultSHIDs(false),
        flagHasVideoResultIDs(false)
  {
  }

MusicChartsSearchCriteriaJSON::~MusicChartsSearchCriteriaJSON(void)
  {
    if (flagHasCurrentDateAndTime)
      {
        storeCurrentDateAndTime->remove_reference();
      }
    if (flagHasTimePeriod)
      {
        storeTimePeriod->remove_reference();
      }
    if (flagHasRequestedGenre)
      {
        storeRequestedGenre->remove_reference();
      }
    if (flagHasBirthday)
      {
        storeBirthday->remove_reference();
      }
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
      }
  }

bool MusicChartsSearchCriteriaJSON::hasCurrentDateAndTime(void) const
  {
    return flagHasCurrentDateAndTime;
  }

DateAndOrTimeJSON * MusicChartsSearchCriteriaJSON::getCurrentDateAndTime(void)
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

const DateAndOrTimeJSON * MusicChartsSearchCriteriaJSON::getCurrentDateAndTime(void) const
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

bool MusicChartsSearchCriteriaJSON::hasEntity(void) const
  {
    return flagHasEntity;
  }

MusicChartsSearchCriteriaJSON::TypeEntity MusicChartsSearchCriteriaJSON::getEntity(void)
  {
    assert(flagHasEntity);
    return storeEntity;
  }

const MusicChartsSearchCriteriaJSON::TypeEntity MusicChartsSearchCriteriaJSON::getEntity(void) const
  {
    assert(flagHasEntity);
    return storeEntity;
  }

const char *MusicChartsSearchCriteriaJSON::getEntityAsChars(void) const
  {
    TypeEntity result = getEntity();
    if (result.in_known_list)
        return stringFromEntity(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicChartsSearchCriteriaJSON::getEntityAsString(void) const
  {
    return getEntityAsChars();
  }

bool MusicChartsSearchCriteriaJSON::hasModifier(void) const
  {
    return flagHasModifier;
  }

MusicChartsSearchCriteriaJSON::TypeModifier MusicChartsSearchCriteriaJSON::getModifier(void)
  {
    assert(flagHasModifier);
    return storeModifier;
  }

const MusicChartsSearchCriteriaJSON::TypeModifier MusicChartsSearchCriteriaJSON::getModifier(void) const
  {
    assert(flagHasModifier);
    return storeModifier;
  }

const char *MusicChartsSearchCriteriaJSON::getModifierAsChars(void) const
  {
    TypeModifier result = getModifier();
    if (result.in_known_list)
        return stringFromModifier(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicChartsSearchCriteriaJSON::getModifierAsString(void) const
  {
    return getModifierAsChars();
  }

bool MusicChartsSearchCriteriaJSON::hasTimePeriod(void) const
  {
    return flagHasTimePeriod;
  }

DateTimeRangeSpecJSON * MusicChartsSearchCriteriaJSON::getTimePeriod(void)
  {
    assert(flagHasTimePeriod);
    return storeTimePeriod;
  }

const DateTimeRangeSpecJSON * MusicChartsSearchCriteriaJSON::getTimePeriod(void) const
  {
    assert(flagHasTimePeriod);
    return storeTimePeriod;
  }

bool MusicChartsSearchCriteriaJSON::hasTimePeriodType(void) const
  {
    return flagHasTimePeriodType;
  }

MusicChartsSearchCriteriaJSON::TypeTimePeriodType MusicChartsSearchCriteriaJSON::getTimePeriodType(void)
  {
    assert(flagHasTimePeriodType);
    return storeTimePeriodType;
  }

const MusicChartsSearchCriteriaJSON::TypeTimePeriodType MusicChartsSearchCriteriaJSON::getTimePeriodType(void) const
  {
    assert(flagHasTimePeriodType);
    return storeTimePeriodType;
  }

const char *MusicChartsSearchCriteriaJSON::getTimePeriodTypeAsChars(void) const
  {
    TypeTimePeriodType result = getTimePeriodType();
    if (result.in_known_list)
        return stringFromTimePeriodType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicChartsSearchCriteriaJSON::getTimePeriodTypeAsString(void) const
  {
    return getTimePeriodTypeAsChars();
  }

bool MusicChartsSearchCriteriaJSON::hasGenre(void) const
  {
    return flagHasGenre;
  }

MusicChartsSearchCriteriaJSON::TypeGenre MusicChartsSearchCriteriaJSON::getGenre(void)
  {
    assert(flagHasGenre);
    return storeGenre;
  }

const MusicChartsSearchCriteriaJSON::TypeGenre MusicChartsSearchCriteriaJSON::getGenre(void) const
  {
    assert(flagHasGenre);
    return storeGenre;
  }

const char *MusicChartsSearchCriteriaJSON::getGenreAsChars(void) const
  {
    TypeGenre result = getGenre();
    if (result.in_known_list)
        return stringFromGenre(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicChartsSearchCriteriaJSON::getGenreAsString(void) const
  {
    return getGenreAsChars();
  }

bool MusicChartsSearchCriteriaJSON::hasRequestedGenre(void) const
  {
    return flagHasRequestedGenre;
  }

MusicGenreJSON * MusicChartsSearchCriteriaJSON::getRequestedGenre(void)
  {
    assert(flagHasRequestedGenre);
    return storeRequestedGenre;
  }

const MusicGenreJSON * MusicChartsSearchCriteriaJSON::getRequestedGenre(void) const
  {
    assert(flagHasRequestedGenre);
    return storeRequestedGenre;
  }

bool MusicChartsSearchCriteriaJSON::hasGenreMatch(void) const
  {
    return flagHasGenreMatch;
  }

bool MusicChartsSearchCriteriaJSON::getGenreMatch(void)
  {
    assert(flagHasGenreMatch);
    return storeGenreMatch;
  }

const bool MusicChartsSearchCriteriaJSON::getGenreMatch(void) const
  {
    assert(flagHasGenreMatch);
    return storeGenreMatch;
  }

bool MusicChartsSearchCriteriaJSON::hasPlaylist(void) const
  {
    return flagHasPlaylist;
  }

MusicChartsSearchCriteriaJSON::TypePlaylist MusicChartsSearchCriteriaJSON::getPlaylist(void)
  {
    assert(flagHasPlaylist);
    return storePlaylist;
  }

const MusicChartsSearchCriteriaJSON::TypePlaylist MusicChartsSearchCriteriaJSON::getPlaylist(void) const
  {
    assert(flagHasPlaylist);
    return storePlaylist;
  }

const char *MusicChartsSearchCriteriaJSON::getPlaylistAsChars(void) const
  {
    TypePlaylist result = getPlaylist();
    if (result.in_known_list)
        return stringFromPlaylist(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicChartsSearchCriteriaJSON::getPlaylistAsString(void) const
  {
    return getPlaylistAsChars();
  }

bool MusicChartsSearchCriteriaJSON::hasBirthday(void) const
  {
    return flagHasBirthday;
  }

DateTimeRangeSpecJSON * MusicChartsSearchCriteriaJSON::getBirthday(void)
  {
    assert(flagHasBirthday);
    return storeBirthday;
  }

const DateTimeRangeSpecJSON * MusicChartsSearchCriteriaJSON::getBirthday(void) const
  {
    assert(flagHasBirthday);
    return storeBirthday;
  }

bool MusicChartsSearchCriteriaJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * MusicChartsSearchCriteriaJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * MusicChartsSearchCriteriaJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool MusicChartsSearchCriteriaJSON::hasCountryCode(void) const
  {
    return flagHasCountryCode;
  }

std::string MusicChartsSearchCriteriaJSON::getCountryCode(void)
  {
    assert(flagHasCountryCode);
    return storeCountryCode;
  }

const std::string MusicChartsSearchCriteriaJSON::getCountryCode(void) const
  {
    assert(flagHasCountryCode);
    return storeCountryCode;
  }

bool MusicChartsSearchCriteriaJSON::hasCountryName(void) const
  {
    return flagHasCountryName;
  }

std::string MusicChartsSearchCriteriaJSON::getCountryName(void)
  {
    assert(flagHasCountryName);
    return storeCountryName;
  }

const std::string MusicChartsSearchCriteriaJSON::getCountryName(void) const
  {
    assert(flagHasCountryName);
    return storeCountryName;
  }

bool MusicChartsSearchCriteriaJSON::hasGeoScope(void) const
  {
    return flagHasGeoScope;
  }

MusicChartsSearchCriteriaJSON::TypeGeoScope MusicChartsSearchCriteriaJSON::getGeoScope(void)
  {
    assert(flagHasGeoScope);
    return storeGeoScope;
  }

const MusicChartsSearchCriteriaJSON::TypeGeoScope MusicChartsSearchCriteriaJSON::getGeoScope(void) const
  {
    assert(flagHasGeoScope);
    return storeGeoScope;
  }

const char *MusicChartsSearchCriteriaJSON::getGeoScopeAsChars(void) const
  {
    TypeGeoScope result = getGeoScope();
    if (result.in_known_list)
        return stringFromGeoScope(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicChartsSearchCriteriaJSON::getGeoScopeAsString(void) const
  {
    return getGeoScopeAsChars();
  }

bool MusicChartsSearchCriteriaJSON::hasPlay(void) const
  {
    return flagHasPlay;
  }

bool MusicChartsSearchCriteriaJSON::getPlay(void)
  {
    assert(flagHasPlay);
    return storePlay;
  }

const bool MusicChartsSearchCriteriaJSON::getPlay(void) const
  {
    assert(flagHasPlay);
    return storePlay;
  }

bool MusicChartsSearchCriteriaJSON::hasShuffle(void) const
  {
    return flagHasShuffle;
  }

bool MusicChartsSearchCriteriaJSON::getShuffle(void)
  {
    assert(flagHasShuffle);
    return storeShuffle;
  }

const bool MusicChartsSearchCriteriaJSON::getShuffle(void) const
  {
    assert(flagHasShuffle);
    return storeShuffle;
  }

bool MusicChartsSearchCriteriaJSON::hasHowMany(void) const
  {
    return flagHasHowMany;
  }

bool MusicChartsSearchCriteriaJSON::getHowMany(void)
  {
    assert(flagHasHowMany);
    return storeHowMany;
  }

const bool MusicChartsSearchCriteriaJSON::getHowMany(void) const
  {
    assert(flagHasHowMany);
    return storeHowMany;
  }

bool MusicChartsSearchCriteriaJSON::hasRequestedNumberOfResults(void) const
  {
    return flagHasRequestedNumberOfResults;
  }

OInteger MusicChartsSearchCriteriaJSON::getRequestedNumberOfResults(void)
  {
    assert(flagHasRequestedNumberOfResults);
    return storeRequestedNumberOfResults;
  }

const OInteger MusicChartsSearchCriteriaJSON::getRequestedNumberOfResults(void) const
  {
    assert(flagHasRequestedNumberOfResults);
    return storeRequestedNumberOfResults;
  }

bool MusicChartsSearchCriteriaJSON::hasTrackResultSHIDs(void) const
  {
    return flagHasTrackResultSHIDs;
  }

size_t MusicChartsSearchCriteriaJSON::countOfTrackResultSHIDs(void) const
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs.size();
  }

double MusicChartsSearchCriteriaJSON::elementOfTrackResultSHIDs(size_t element_num)
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs[element_num];
  }

const double MusicChartsSearchCriteriaJSON::elementOfTrackResultSHIDs(size_t element_num) const
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs[element_num];
  }

std::vector< double > MusicChartsSearchCriteriaJSON::getTrackResultSHIDs(void)
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs;
  }

const std::vector< double > MusicChartsSearchCriteriaJSON::getTrackResultSHIDs(void) const
  {
    assert(flagHasTrackResultSHIDs);
    return storeTrackResultSHIDs;
  }

bool MusicChartsSearchCriteriaJSON::hasAlbumResultSHIDs(void) const
  {
    return flagHasAlbumResultSHIDs;
  }

size_t MusicChartsSearchCriteriaJSON::countOfAlbumResultSHIDs(void) const
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs.size();
  }

double MusicChartsSearchCriteriaJSON::elementOfAlbumResultSHIDs(size_t element_num)
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs[element_num];
  }

const double MusicChartsSearchCriteriaJSON::elementOfAlbumResultSHIDs(size_t element_num) const
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs[element_num];
  }

std::vector< double > MusicChartsSearchCriteriaJSON::getAlbumResultSHIDs(void)
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs;
  }

const std::vector< double > MusicChartsSearchCriteriaJSON::getAlbumResultSHIDs(void) const
  {
    assert(flagHasAlbumResultSHIDs);
    return storeAlbumResultSHIDs;
  }

bool MusicChartsSearchCriteriaJSON::hasArtistResultSHIDs(void) const
  {
    return flagHasArtistResultSHIDs;
  }

size_t MusicChartsSearchCriteriaJSON::countOfArtistResultSHIDs(void) const
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs.size();
  }

double MusicChartsSearchCriteriaJSON::elementOfArtistResultSHIDs(size_t element_num)
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs[element_num];
  }

const double MusicChartsSearchCriteriaJSON::elementOfArtistResultSHIDs(size_t element_num) const
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs[element_num];
  }

std::vector< double > MusicChartsSearchCriteriaJSON::getArtistResultSHIDs(void)
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs;
  }

const std::vector< double > MusicChartsSearchCriteriaJSON::getArtistResultSHIDs(void) const
  {
    assert(flagHasArtistResultSHIDs);
    return storeArtistResultSHIDs;
  }

bool MusicChartsSearchCriteriaJSON::hasVideoResultIDs(void) const
  {
    return flagHasVideoResultIDs;
  }

size_t MusicChartsSearchCriteriaJSON::countOfVideoResultIDs(void) const
  {
    assert(flagHasVideoResultIDs);
    return storeVideoResultIDs.size();
  }

std::string MusicChartsSearchCriteriaJSON::elementOfVideoResultIDs(size_t element_num)
  {
    assert(flagHasVideoResultIDs);
    return storeVideoResultIDs[element_num];
  }

const std::string MusicChartsSearchCriteriaJSON::elementOfVideoResultIDs(size_t element_num) const
  {
    assert(flagHasVideoResultIDs);
    return storeVideoResultIDs[element_num];
  }

std::vector< std::string > MusicChartsSearchCriteriaJSON::getVideoResultIDs(void)
  {
    assert(flagHasVideoResultIDs);
    return storeVideoResultIDs;
  }

const std::vector< std::string > MusicChartsSearchCriteriaJSON::getVideoResultIDs(void) const
  {
    assert(flagHasVideoResultIDs);
    return storeVideoResultIDs;
  }

char MusicChartsSearchCriteriaJSON::Generator::lowerBoundRequestedNumberOfResults[] = "0";
MusicChartsSearchCriteriaJSON *MusicChartsSearchCriteriaJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicChartsSearchCriteriaJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicChartsSearchCriteriaJSON>, MusicChartsSearchCriteriaJSON *, bool> generator("Type MusicChartsSearchCriteria", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
