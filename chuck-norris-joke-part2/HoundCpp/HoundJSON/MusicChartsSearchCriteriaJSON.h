/* file "MusicChartsSearchCriteriaJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICCHARTSSEARCHCRITERIAJSON_H
#define MUSICCHARTSSEARCHCRITERIAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "DateAndOrTimeJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "MusicGenreJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicChartsSearchCriteriaJSON : public ReferenceCounted
  {
  public:
    enum TypeEntityKnownValues
      {
        Entity_Tracks,
        Entity_Artists,
        Entity_Albums,
        Entity_Videos,
        Entity_ArtistsBornOn,
        Entity_Playlist,
        Entity__none
      };
    struct TypeEntity
      {
        bool in_known_list;
        std::string string_value;
        TypeEntityKnownValues list_value;

        TypeEntity(void);
        TypeEntity(const TypeEntity &other);
        TypeEntity(TypeEntityKnownValues other);
        bool  operator==(const TypeEntity &other) const;
        bool  operator!=(const TypeEntity &other) const;
        bool  operator<(const TypeEntity &other) const;
        bool  operator>(const TypeEntity &other) const;
        bool  operator>=(const TypeEntity &other) const;
        bool  operator<=(const TypeEntity &other) const;

      };

    static TypeEntityKnownValues  stringToEntity(const char *chars);
    static const char * stringFromEntity(TypeEntityKnownValues the_enum);
    enum TypeModifierKnownValues
      {
        Modifier_Top,
        Modifier_New,
        Modifier__none
      };
    struct TypeModifier
      {
        bool in_known_list;
        std::string string_value;
        TypeModifierKnownValues list_value;

        TypeModifier(void);
        TypeModifier(const TypeModifier &other);
        TypeModifier(TypeModifierKnownValues other);
        bool  operator==(const TypeModifier &other) const;
        bool  operator!=(const TypeModifier &other) const;
        bool  operator<(const TypeModifier &other) const;
        bool  operator>(const TypeModifier &other) const;
        bool  operator>=(const TypeModifier &other) const;
        bool  operator<=(const TypeModifier &other) const;

      };

    static TypeModifierKnownValues  stringToModifier(const char *chars);
    static const char * stringFromModifier(TypeModifierKnownValues the_enum);
    enum TypeTimePeriodTypeKnownValues
      {
        TimePeriodType_Day,
        TimePeriodType_Week,
        TimePeriodType_Month,
        TimePeriodType_Year,
        TimePeriodType_Decade,
        TimePeriodType_Century,
        TimePeriodType_None,
        TimePeriodType__none
      };
    struct TypeTimePeriodType
      {
        bool in_known_list;
        std::string string_value;
        TypeTimePeriodTypeKnownValues list_value;

        TypeTimePeriodType(void);
        TypeTimePeriodType(const TypeTimePeriodType &other);
        TypeTimePeriodType(TypeTimePeriodTypeKnownValues other);
        bool  operator==(const TypeTimePeriodType &other) const;
        bool  operator!=(const TypeTimePeriodType &other) const;
        bool  operator<(const TypeTimePeriodType &other) const;
        bool  operator>(const TypeTimePeriodType &other) const;
        bool  operator>=(const TypeTimePeriodType &other) const;
        bool  operator<=(const TypeTimePeriodType &other) const;

      };

    static TypeTimePeriodTypeKnownValues  stringToTimePeriodType(const char *chars);
    static const char * stringFromTimePeriodType(TypeTimePeriodTypeKnownValues the_enum);
    enum TypeGenreKnownValues
      {
        Genre_NoGenre,
        Genre_Rock,
        Genre_Country,
        Genre_Electronic,
        Genre_Urban,
        Genre_Latin,
        Genre_AllGenres,
        Genre_Avant_x20_Garde,
        Genre_Blues,
        Genre_Childs,
        Genre_Classical,
        Genre_Easy,
        Genre_Folk,
        Genre_Gospel,
        Genre_Holiday,
        Genre_Jazz,
        Genre_Movie_x20_Soundtrack,
        Genre_New_x20_Age,
        Genre_Rap,
        Genre_R_x26_B,
        Genre_Reggae,
        Genre_Sound_x20_Effects,
        Genre_Spoken_x20_Word,
        Genre_Vocal,
        Genre_World,
        Genre_AltGenre,
        Genre_AltGenreFrenchFolk,
        Genre_AltGenreWestCoast,
        Genre_AltGenreEastCoast,
        Genre_AltGenreBritishPunk,
        Genre_AltGenreVideoGame,
        Genre_AltGenreTVSoundtrack,
        Genre_AltGenreBossaNova,
        Genre__none
      };
    struct TypeGenre
      {
        bool in_known_list;
        std::string string_value;
        TypeGenreKnownValues list_value;

        TypeGenre(void);
        TypeGenre(const TypeGenre &other);
        TypeGenre(TypeGenreKnownValues other);
        bool  operator==(const TypeGenre &other) const;
        bool  operator!=(const TypeGenre &other) const;
        bool  operator<(const TypeGenre &other) const;
        bool  operator>(const TypeGenre &other) const;
        bool  operator>=(const TypeGenre &other) const;
        bool  operator<=(const TypeGenre &other) const;

      };

    static TypeGenreKnownValues  stringToGenre(const char *chars);
    static const char * stringFromGenre(TypeGenreKnownValues the_enum);
    enum TypePlaylistKnownValues
      {
        Playlist_NoPlaylist,
        Playlist_MemorialDay,
        Playlist_JulyFourth,
        Playlist_SummerHotSongs,
        Playlist_SummerUltimate,
        Playlist_SummerLastSummerHits,
        Playlist_Lollapalooza,
        Playlist_Olympics,
        Playlist_OutsideLands,
        Playlist_VMA,
        Playlist_AppleMusicFestival,
        Playlist_AustinCityLimits,
        Playlist_MTVEuropeAwards,
        Playlist_CMA,
        Playlist_LatinoGrammys,
        Playlist_AMA,
        Playlist_YearInReview,
        Playlist_Holidays,
        Playlist_NewYearsEve,
        Playlist_Halloween,
        Playlist_ValentinesDay,
        Playlist_StPatricksDay,
        Playlist_AprilFoolsDay,
        Playlist_MothersDay,
        Playlist_FathersDay,
        Playlist_BackToSchool,
        Playlist_LaborDay,
        Playlist_Thanksgiving,
        Playlist_BlackFriday,
        Playlist_Christmas,
        Playlist_Spring,
        Playlist_Summer,
        Playlist_Winter,
        Playlist_Fall,
        Playlist__none
      };
    struct TypePlaylist
      {
        bool in_known_list;
        std::string string_value;
        TypePlaylistKnownValues list_value;

        TypePlaylist(void);
        TypePlaylist(const TypePlaylist &other);
        TypePlaylist(TypePlaylistKnownValues other);
        bool  operator==(const TypePlaylist &other) const;
        bool  operator!=(const TypePlaylist &other) const;
        bool  operator<(const TypePlaylist &other) const;
        bool  operator>(const TypePlaylist &other) const;
        bool  operator>=(const TypePlaylist &other) const;
        bool  operator<=(const TypePlaylist &other) const;

      };

    static TypePlaylistKnownValues  stringToPlaylist(const char *chars);
    static const char * stringFromPlaylist(TypePlaylistKnownValues the_enum);
    enum TypeGeoScopeKnownValues
      {
        GeoScope_Country,
        GeoScope_Continent,
        GeoScope_World,
        GeoScope_None,
        GeoScope__none
      };
    struct TypeGeoScope
      {
        bool in_known_list;
        std::string string_value;
        TypeGeoScopeKnownValues list_value;

        TypeGeoScope(void);
        TypeGeoScope(const TypeGeoScope &other);
        TypeGeoScope(TypeGeoScopeKnownValues other);
        bool  operator==(const TypeGeoScope &other) const;
        bool  operator!=(const TypeGeoScope &other) const;
        bool  operator<(const TypeGeoScope &other) const;
        bool  operator>(const TypeGeoScope &other) const;
        bool  operator>=(const TypeGeoScope &other) const;
        bool  operator<=(const TypeGeoScope &other) const;

      };

    static TypeGeoScopeKnownValues  stringToGeoScope(const char *chars);
    static const char * stringFromGeoScope(TypeGeoScopeKnownValues the_enum);

  private:
    bool flagHasCurrentDateAndTime;
    DateAndOrTimeJSON * storeCurrentDateAndTime;
    bool flagHasEntity;
    TypeEntity storeEntity;
    bool flagHasModifier;
    TypeModifier storeModifier;
    bool flagHasTimePeriod;
    DateTimeRangeSpecJSON * storeTimePeriod;
    bool flagHasTimePeriodType;
    TypeTimePeriodType storeTimePeriodType;
    bool flagHasGenre;
    TypeGenre storeGenre;
    bool flagHasRequestedGenre;
    MusicGenreJSON * storeRequestedGenre;
    bool flagHasGenreMatch;
    bool storeGenreMatch;
    bool flagHasPlaylist;
    TypePlaylist storePlaylist;
    bool flagHasBirthday;
    DateTimeRangeSpecJSON * storeBirthday;
    bool flagHasLocation;
    MapLocationJSON * storeLocation;
    bool flagHasCountryCode;
    std::string storeCountryCode;
    bool flagHasCountryName;
    std::string storeCountryName;
    bool flagHasGeoScope;
    TypeGeoScope storeGeoScope;
    bool flagHasPlay;
    bool storePlay;
    bool flagHasShuffle;
    bool storeShuffle;
    bool flagHasHowMany;
    bool storeHowMany;
    bool flagHasRequestedNumberOfResults;
    OInteger storeRequestedNumberOfResults;
    bool flagHasTrackResultSHIDs;
    std::vector< double > storeTrackResultSHIDs;
    bool flagHasAlbumResultSHIDs;
    std::vector< double > storeAlbumResultSHIDs;
    bool flagHasArtistResultSHIDs;
    std::vector< double > storeArtistResultSHIDs;
    bool flagHasVideoResultIDs;
    std::vector< std::string > storeVideoResultIDs;

    MusicChartsSearchCriteriaJSON(const MusicChartsSearchCriteriaJSON &);
    MusicChartsSearchCriteriaJSON & operator=(const MusicChartsSearchCriteriaJSON &other);

    void  fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEntity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONModifier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimePeriod(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimePeriodType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGenre(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedGenre(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGenreMatch(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlaylist(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBirthday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCountryCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCountryName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGeoScope(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShuffle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHowMany(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedNumberOfResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackResultSHIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumResultSHIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistResultSHIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVideoResultIDs(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicChartsSearchCriteriaJSON(void);
    virtual ~MusicChartsSearchCriteriaJSON(void);
    bool  hasCurrentDateAndTime(void) const;
    DateAndOrTimeJSON *  getCurrentDateAndTime(void);
    const DateAndOrTimeJSON *  getCurrentDateAndTime(void) const;
    bool  hasEntity(void) const;
    TypeEntity  getEntity(void);
    const TypeEntity  getEntity(void) const;
    const char * getEntityAsChars(void) const;
    std::string  getEntityAsString(void) const;
    bool  hasModifier(void) const;
    TypeModifier  getModifier(void);
    const TypeModifier  getModifier(void) const;
    const char * getModifierAsChars(void) const;
    std::string  getModifierAsString(void) const;
    bool  hasTimePeriod(void) const;
    DateTimeRangeSpecJSON *  getTimePeriod(void);
    const DateTimeRangeSpecJSON *  getTimePeriod(void) const;
    bool  hasTimePeriodType(void) const;
    TypeTimePeriodType  getTimePeriodType(void);
    const TypeTimePeriodType  getTimePeriodType(void) const;
    const char * getTimePeriodTypeAsChars(void) const;
    std::string  getTimePeriodTypeAsString(void) const;
    bool  hasGenre(void) const;
    TypeGenre  getGenre(void);
    const TypeGenre  getGenre(void) const;
    const char * getGenreAsChars(void) const;
    std::string  getGenreAsString(void) const;
    bool  hasRequestedGenre(void) const;
    MusicGenreJSON *  getRequestedGenre(void);
    const MusicGenreJSON *  getRequestedGenre(void) const;
    bool  hasGenreMatch(void) const;
    bool  getGenreMatch(void);
    const bool  getGenreMatch(void) const;
    bool  hasPlaylist(void) const;
    TypePlaylist  getPlaylist(void);
    const TypePlaylist  getPlaylist(void) const;
    const char * getPlaylistAsChars(void) const;
    std::string  getPlaylistAsString(void) const;
    bool  hasBirthday(void) const;
    DateTimeRangeSpecJSON *  getBirthday(void);
    const DateTimeRangeSpecJSON *  getBirthday(void) const;
    bool  hasLocation(void) const;
    MapLocationJSON *  getLocation(void);
    const MapLocationJSON *  getLocation(void) const;
    bool  hasCountryCode(void) const;
    std::string  getCountryCode(void);
    const std::string  getCountryCode(void) const;
    bool  hasCountryName(void) const;
    std::string  getCountryName(void);
    const std::string  getCountryName(void) const;
    bool  hasGeoScope(void) const;
    TypeGeoScope  getGeoScope(void);
    const TypeGeoScope  getGeoScope(void) const;
    const char * getGeoScopeAsChars(void) const;
    std::string  getGeoScopeAsString(void) const;
    bool  hasPlay(void) const;
    bool  getPlay(void);
    const bool  getPlay(void) const;
    bool  hasShuffle(void) const;
    bool  getShuffle(void);
    const bool  getShuffle(void) const;
    bool  hasHowMany(void) const;
    bool  getHowMany(void);
    const bool  getHowMany(void) const;
    bool  hasRequestedNumberOfResults(void) const;
    OInteger  getRequestedNumberOfResults(void);
    const OInteger  getRequestedNumberOfResults(void) const;
    bool  hasTrackResultSHIDs(void) const;
    size_t  countOfTrackResultSHIDs(void) const;
    double  elementOfTrackResultSHIDs(size_t element_num);
    const double  elementOfTrackResultSHIDs(size_t element_num) const;
    std::vector< double >  getTrackResultSHIDs(void);
    const std::vector< double >  getTrackResultSHIDs(void) const;
    bool  hasAlbumResultSHIDs(void) const;
    size_t  countOfAlbumResultSHIDs(void) const;
    double  elementOfAlbumResultSHIDs(size_t element_num);
    const double  elementOfAlbumResultSHIDs(size_t element_num) const;
    std::vector< double >  getAlbumResultSHIDs(void);
    const std::vector< double >  getAlbumResultSHIDs(void) const;
    bool  hasArtistResultSHIDs(void) const;
    size_t  countOfArtistResultSHIDs(void) const;
    double  elementOfArtistResultSHIDs(size_t element_num);
    const double  elementOfArtistResultSHIDs(size_t element_num) const;
    std::vector< double >  getArtistResultSHIDs(void);
    const std::vector< double >  getArtistResultSHIDs(void) const;
    bool  hasVideoResultIDs(void) const;
    size_t  countOfVideoResultIDs(void) const;
    std::string  elementOfVideoResultIDs(size_t element_num);
    const std::string  elementOfVideoResultIDs(size_t element_num) const;
    std::vector< std::string >  getVideoResultIDs(void);
    const std::vector< std::string >  getVideoResultIDs(void) const;


    void setCurrentDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCurrentDateAndTime)
          {
            storeCurrentDateAndTime->remove_reference();
          }
        flagHasCurrentDateAndTime = true;
        storeCurrentDateAndTime = new_value;
      }
    void unsetCurrentDateAndTime(void)
      {
        if (flagHasCurrentDateAndTime)
          {
            storeCurrentDateAndTime->remove_reference();
          }
        flagHasCurrentDateAndTime = false;
      }
    void setEntity(TypeEntity new_value)
      {
        flagHasEntity = true;
        storeEntity = new_value;
      }
    void setEntity(const char *chars)
      {
        TypeEntityKnownValues known = stringToEntity(chars);
        TypeEntity new_value;
        if (known == Entity__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setEntity(new_value);
      }
    void setEntity(std::string the_string)
      {
        setEntity(the_string.c_str());
      }
    void setEntity(TypeEntityKnownValues new_value)
      {
        TypeEntity new_full_value;
        assert(new_value != Entity__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setEntity(new_full_value);
      }
    void unsetEntity(void)
      {
        flagHasEntity = false;
      }
    void setModifier(TypeModifier new_value)
      {
        flagHasModifier = true;
        storeModifier = new_value;
      }
    void setModifier(const char *chars)
      {
        TypeModifierKnownValues known = stringToModifier(chars);
        TypeModifier new_value;
        if (known == Modifier__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setModifier(new_value);
      }
    void setModifier(std::string the_string)
      {
        setModifier(the_string.c_str());
      }
    void setModifier(TypeModifierKnownValues new_value)
      {
        TypeModifier new_full_value;
        assert(new_value != Modifier__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setModifier(new_full_value);
      }
    void unsetModifier(void)
      {
        flagHasModifier = false;
      }
    void setTimePeriod(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTimePeriod)
          {
            storeTimePeriod->remove_reference();
          }
        flagHasTimePeriod = true;
        storeTimePeriod = new_value;
      }
    void unsetTimePeriod(void)
      {
        if (flagHasTimePeriod)
          {
            storeTimePeriod->remove_reference();
          }
        flagHasTimePeriod = false;
      }
    void setTimePeriodType(TypeTimePeriodType new_value)
      {
        flagHasTimePeriodType = true;
        storeTimePeriodType = new_value;
      }
    void setTimePeriodType(const char *chars)
      {
        TypeTimePeriodTypeKnownValues known = stringToTimePeriodType(chars);
        TypeTimePeriodType new_value;
        if (known == TimePeriodType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setTimePeriodType(new_value);
      }
    void setTimePeriodType(std::string the_string)
      {
        setTimePeriodType(the_string.c_str());
      }
    void setTimePeriodType(TypeTimePeriodTypeKnownValues new_value)
      {
        TypeTimePeriodType new_full_value;
        assert(new_value != TimePeriodType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setTimePeriodType(new_full_value);
      }
    void unsetTimePeriodType(void)
      {
        flagHasTimePeriodType = false;
      }
    void setGenre(TypeGenre new_value)
      {
        flagHasGenre = true;
        storeGenre = new_value;
      }
    void setGenre(const char *chars)
      {
        TypeGenreKnownValues known = stringToGenre(chars);
        TypeGenre new_value;
        if (known == Genre__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setGenre(new_value);
      }
    void setGenre(std::string the_string)
      {
        setGenre(the_string.c_str());
      }
    void setGenre(TypeGenreKnownValues new_value)
      {
        TypeGenre new_full_value;
        assert(new_value != Genre__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setGenre(new_full_value);
      }
    void unsetGenre(void)
      {
        flagHasGenre = false;
      }
    void setRequestedGenre(MusicGenreJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedGenre)
          {
            storeRequestedGenre->remove_reference();
          }
        flagHasRequestedGenre = true;
        storeRequestedGenre = new_value;
      }
    void unsetRequestedGenre(void)
      {
        if (flagHasRequestedGenre)
          {
            storeRequestedGenre->remove_reference();
          }
        flagHasRequestedGenre = false;
      }
    void setGenreMatch(bool new_value)
      {
        flagHasGenreMatch = true;
        storeGenreMatch = new_value;
      }
    void unsetGenreMatch(void)
      {
        flagHasGenreMatch = false;
      }
    void setPlaylist(TypePlaylist new_value)
      {
        flagHasPlaylist = true;
        storePlaylist = new_value;
      }
    void setPlaylist(const char *chars)
      {
        TypePlaylistKnownValues known = stringToPlaylist(chars);
        TypePlaylist new_value;
        if (known == Playlist__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPlaylist(new_value);
      }
    void setPlaylist(std::string the_string)
      {
        setPlaylist(the_string.c_str());
      }
    void setPlaylist(TypePlaylistKnownValues new_value)
      {
        TypePlaylist new_full_value;
        assert(new_value != Playlist__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setPlaylist(new_full_value);
      }
    void unsetPlaylist(void)
      {
        flagHasPlaylist = false;
      }
    void setBirthday(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBirthday)
          {
            storeBirthday->remove_reference();
          }
        flagHasBirthday = true;
        storeBirthday = new_value;
      }
    void unsetBirthday(void)
      {
        if (flagHasBirthday)
          {
            storeBirthday->remove_reference();
          }
        flagHasBirthday = false;
      }
    void setLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = true;
        storeLocation = new_value;
      }
    void unsetLocation(void)
      {
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = false;
      }
    void setCountryCode(std::string new_value)
      {
        flagHasCountryCode = true;
        storeCountryCode = new_value;
      }
    void unsetCountryCode(void)
      {
        flagHasCountryCode = false;
      }
    void setCountryName(std::string new_value)
      {
        flagHasCountryName = true;
        storeCountryName = new_value;
      }
    void unsetCountryName(void)
      {
        flagHasCountryName = false;
      }
    void setGeoScope(TypeGeoScope new_value)
      {
        flagHasGeoScope = true;
        storeGeoScope = new_value;
      }
    void setGeoScope(const char *chars)
      {
        TypeGeoScopeKnownValues known = stringToGeoScope(chars);
        TypeGeoScope new_value;
        if (known == GeoScope__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setGeoScope(new_value);
      }
    void setGeoScope(std::string the_string)
      {
        setGeoScope(the_string.c_str());
      }
    void setGeoScope(TypeGeoScopeKnownValues new_value)
      {
        TypeGeoScope new_full_value;
        assert(new_value != GeoScope__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setGeoScope(new_full_value);
      }
    void unsetGeoScope(void)
      {
        flagHasGeoScope = false;
      }
    void setPlay(bool new_value)
      {
        flagHasPlay = true;
        storePlay = new_value;
      }
    void unsetPlay(void)
      {
        flagHasPlay = false;
      }
    void setShuffle(bool new_value)
      {
        flagHasShuffle = true;
        storeShuffle = new_value;
      }
    void unsetShuffle(void)
      {
        flagHasShuffle = false;
      }
    void setHowMany(bool new_value)
      {
        flagHasHowMany = true;
        storeHowMany = new_value;
      }
    void unsetHowMany(void)
      {
        flagHasHowMany = false;
      }
    void setRequestedNumberOfResults(OInteger new_value)
      {
        flagHasRequestedNumberOfResults = true;
        if (new_value < 0)
            throw("The value for field RequestedNumberOfResults of MusicChartsSearchCriteriaJSON is less than the lower bound (0) for that field.");
        storeRequestedNumberOfResults = new_value;
      }
    void unsetRequestedNumberOfResults(void)
      {
        flagHasRequestedNumberOfResults = false;
      }
    void initTrackResultSHIDs(void)
      {
        flagHasTrackResultSHIDs = true;
        storeTrackResultSHIDs.clear();
      }
    void appendTrackResultSHIDs(double to_append)
      {
        if (!flagHasTrackResultSHIDs)
          {
            flagHasTrackResultSHIDs = true;
            storeTrackResultSHIDs.clear();
          }
        assert(flagHasTrackResultSHIDs);
        storeTrackResultSHIDs.push_back(to_append);
      }
    void unsetTrackResultSHIDs(void)
      {
        flagHasTrackResultSHIDs = false;
        storeTrackResultSHIDs.clear();
      }
    void initAlbumResultSHIDs(void)
      {
        flagHasAlbumResultSHIDs = true;
        storeAlbumResultSHIDs.clear();
      }
    void appendAlbumResultSHIDs(double to_append)
      {
        if (!flagHasAlbumResultSHIDs)
          {
            flagHasAlbumResultSHIDs = true;
            storeAlbumResultSHIDs.clear();
          }
        assert(flagHasAlbumResultSHIDs);
        storeAlbumResultSHIDs.push_back(to_append);
      }
    void unsetAlbumResultSHIDs(void)
      {
        flagHasAlbumResultSHIDs = false;
        storeAlbumResultSHIDs.clear();
      }
    void initArtistResultSHIDs(void)
      {
        flagHasArtistResultSHIDs = true;
        storeArtistResultSHIDs.clear();
      }
    void appendArtistResultSHIDs(double to_append)
      {
        if (!flagHasArtistResultSHIDs)
          {
            flagHasArtistResultSHIDs = true;
            storeArtistResultSHIDs.clear();
          }
        assert(flagHasArtistResultSHIDs);
        storeArtistResultSHIDs.push_back(to_append);
      }
    void unsetArtistResultSHIDs(void)
      {
        flagHasArtistResultSHIDs = false;
        storeArtistResultSHIDs.clear();
      }
    void initVideoResultIDs(void)
      {
        flagHasVideoResultIDs = true;
        storeVideoResultIDs.clear();
      }
    void appendVideoResultIDs(std::string to_append)
      {
        if (!flagHasVideoResultIDs)
          {
            flagHasVideoResultIDs = true;
            storeVideoResultIDs.clear();
          }
        assert(flagHasVideoResultIDs);
        storeVideoResultIDs.push_back(to_append);
      }
    void unsetVideoResultIDs(void)
      {
        flagHasVideoResultIDs = false;
        storeVideoResultIDs.clear();
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasCurrentDateAndTime)
          {
            handler->start_pair("CurrentDateAndTime");
            storeCurrentDateAndTime->write_as_json(handler);
          }
        assert(flagHasEntity);
        handler->start_pair("Entity");
        if (storeEntity.in_known_list)
          {
            switch (storeEntity.list_value)
              {
                case Entity_Tracks:
                    handler->string_value("Tracks");
                    break;
                case Entity_Artists:
                    handler->string_value("Artists");
                    break;
                case Entity_Albums:
                    handler->string_value("Albums");
                    break;
                case Entity_Videos:
                    handler->string_value("Videos");
                    break;
                case Entity_ArtistsBornOn:
                    handler->string_value("ArtistsBornOn");
                    break;
                case Entity_Playlist:
                    handler->string_value("Playlist");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeEntity.string_value);
          }
        assert(flagHasModifier);
        handler->start_pair("Modifier");
        if (storeModifier.in_known_list)
          {
            switch (storeModifier.list_value)
              {
                case Modifier_Top:
                    handler->string_value("Top");
                    break;
                case Modifier_New:
                    handler->string_value("New");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeModifier.string_value);
          }
        if (flagHasTimePeriod)
          {
            handler->start_pair("TimePeriod");
            storeTimePeriod->write_as_json(handler);
          }
        if (flagHasTimePeriodType)
          {
            handler->start_pair("TimePeriodType");
            if (storeTimePeriodType.in_known_list)
              {
                switch (storeTimePeriodType.list_value)
                  {
                    case TimePeriodType_Day:
                        handler->string_value("Day");
                        break;
                    case TimePeriodType_Week:
                        handler->string_value("Week");
                        break;
                    case TimePeriodType_Month:
                        handler->string_value("Month");
                        break;
                    case TimePeriodType_Year:
                        handler->string_value("Year");
                        break;
                    case TimePeriodType_Decade:
                        handler->string_value("Decade");
                        break;
                    case TimePeriodType_Century:
                        handler->string_value("Century");
                        break;
                    case TimePeriodType_None:
                        handler->string_value("None");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeTimePeriodType.string_value);
              }
          }
        if (flagHasGenre)
          {
            handler->start_pair("Genre");
            if (storeGenre.in_known_list)
              {
                switch (storeGenre.list_value)
                  {
                    case Genre_NoGenre:
                        handler->string_value("NoGenre");
                        break;
                    case Genre_Rock:
                        handler->string_value("Rock");
                        break;
                    case Genre_Country:
                        handler->string_value("Country");
                        break;
                    case Genre_Electronic:
                        handler->string_value("Electronic");
                        break;
                    case Genre_Urban:
                        handler->string_value("Urban");
                        break;
                    case Genre_Latin:
                        handler->string_value("Latin");
                        break;
                    case Genre_AllGenres:
                        handler->string_value("AllGenres");
                        break;
                    case Genre_Avant_x20_Garde:
                        handler->string_value("Avant Garde");
                        break;
                    case Genre_Blues:
                        handler->string_value("Blues");
                        break;
                    case Genre_Childs:
                        handler->string_value("Childs");
                        break;
                    case Genre_Classical:
                        handler->string_value("Classical");
                        break;
                    case Genre_Easy:
                        handler->string_value("Easy");
                        break;
                    case Genre_Folk:
                        handler->string_value("Folk");
                        break;
                    case Genre_Gospel:
                        handler->string_value("Gospel");
                        break;
                    case Genre_Holiday:
                        handler->string_value("Holiday");
                        break;
                    case Genre_Jazz:
                        handler->string_value("Jazz");
                        break;
                    case Genre_Movie_x20_Soundtrack:
                        handler->string_value("Movie Soundtrack");
                        break;
                    case Genre_New_x20_Age:
                        handler->string_value("New Age");
                        break;
                    case Genre_Rap:
                        handler->string_value("Rap");
                        break;
                    case Genre_R_x26_B:
                        handler->string_value("R&B");
                        break;
                    case Genre_Reggae:
                        handler->string_value("Reggae");
                        break;
                    case Genre_Sound_x20_Effects:
                        handler->string_value("Sound Effects");
                        break;
                    case Genre_Spoken_x20_Word:
                        handler->string_value("Spoken Word");
                        break;
                    case Genre_Vocal:
                        handler->string_value("Vocal");
                        break;
                    case Genre_World:
                        handler->string_value("World");
                        break;
                    case Genre_AltGenre:
                        handler->string_value("AltGenre");
                        break;
                    case Genre_AltGenreFrenchFolk:
                        handler->string_value("AltGenreFrenchFolk");
                        break;
                    case Genre_AltGenreWestCoast:
                        handler->string_value("AltGenreWestCoast");
                        break;
                    case Genre_AltGenreEastCoast:
                        handler->string_value("AltGenreEastCoast");
                        break;
                    case Genre_AltGenreBritishPunk:
                        handler->string_value("AltGenreBritishPunk");
                        break;
                    case Genre_AltGenreVideoGame:
                        handler->string_value("AltGenreVideoGame");
                        break;
                    case Genre_AltGenreTVSoundtrack:
                        handler->string_value("AltGenreTVSoundtrack");
                        break;
                    case Genre_AltGenreBossaNova:
                        handler->string_value("AltGenreBossaNova");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeGenre.string_value);
              }
          }
        if (flagHasRequestedGenre)
          {
            handler->start_pair("RequestedGenre");
            storeRequestedGenre->write_as_json(handler);
          }
        if (flagHasGenreMatch)
          {
            handler->start_pair("GenreMatch");
            handler->boolean_value(storeGenreMatch);
          }
        if (flagHasPlaylist)
          {
            handler->start_pair("Playlist");
            if (storePlaylist.in_known_list)
              {
                switch (storePlaylist.list_value)
                  {
                    case Playlist_NoPlaylist:
                        handler->string_value("NoPlaylist");
                        break;
                    case Playlist_MemorialDay:
                        handler->string_value("MemorialDay");
                        break;
                    case Playlist_JulyFourth:
                        handler->string_value("JulyFourth");
                        break;
                    case Playlist_SummerHotSongs:
                        handler->string_value("SummerHotSongs");
                        break;
                    case Playlist_SummerUltimate:
                        handler->string_value("SummerUltimate");
                        break;
                    case Playlist_SummerLastSummerHits:
                        handler->string_value("SummerLastSummerHits");
                        break;
                    case Playlist_Lollapalooza:
                        handler->string_value("Lollapalooza");
                        break;
                    case Playlist_Olympics:
                        handler->string_value("Olympics");
                        break;
                    case Playlist_OutsideLands:
                        handler->string_value("OutsideLands");
                        break;
                    case Playlist_VMA:
                        handler->string_value("VMA");
                        break;
                    case Playlist_AppleMusicFestival:
                        handler->string_value("AppleMusicFestival");
                        break;
                    case Playlist_AustinCityLimits:
                        handler->string_value("AustinCityLimits");
                        break;
                    case Playlist_MTVEuropeAwards:
                        handler->string_value("MTVEuropeAwards");
                        break;
                    case Playlist_CMA:
                        handler->string_value("CMA");
                        break;
                    case Playlist_LatinoGrammys:
                        handler->string_value("LatinoGrammys");
                        break;
                    case Playlist_AMA:
                        handler->string_value("AMA");
                        break;
                    case Playlist_YearInReview:
                        handler->string_value("YearInReview");
                        break;
                    case Playlist_Holidays:
                        handler->string_value("Holidays");
                        break;
                    case Playlist_NewYearsEve:
                        handler->string_value("NewYearsEve");
                        break;
                    case Playlist_Halloween:
                        handler->string_value("Halloween");
                        break;
                    case Playlist_ValentinesDay:
                        handler->string_value("ValentinesDay");
                        break;
                    case Playlist_StPatricksDay:
                        handler->string_value("StPatricksDay");
                        break;
                    case Playlist_AprilFoolsDay:
                        handler->string_value("AprilFoolsDay");
                        break;
                    case Playlist_MothersDay:
                        handler->string_value("MothersDay");
                        break;
                    case Playlist_FathersDay:
                        handler->string_value("FathersDay");
                        break;
                    case Playlist_BackToSchool:
                        handler->string_value("BackToSchool");
                        break;
                    case Playlist_LaborDay:
                        handler->string_value("LaborDay");
                        break;
                    case Playlist_Thanksgiving:
                        handler->string_value("Thanksgiving");
                        break;
                    case Playlist_BlackFriday:
                        handler->string_value("BlackFriday");
                        break;
                    case Playlist_Christmas:
                        handler->string_value("Christmas");
                        break;
                    case Playlist_Spring:
                        handler->string_value("Spring");
                        break;
                    case Playlist_Summer:
                        handler->string_value("Summer");
                        break;
                    case Playlist_Winter:
                        handler->string_value("Winter");
                        break;
                    case Playlist_Fall:
                        handler->string_value("Fall");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storePlaylist.string_value);
              }
          }
        if (flagHasBirthday)
          {
            handler->start_pair("Birthday");
            storeBirthday->write_as_json(handler);
          }
        if (flagHasLocation)
          {
            handler->start_pair("Location");
            storeLocation->write_as_json(handler);
          }
        if (flagHasCountryCode)
          {
            handler->start_pair("CountryCode");
            handler->string_value(storeCountryCode);
          }
        if (flagHasCountryName)
          {
            handler->start_pair("CountryName");
            handler->string_value(storeCountryName);
          }
        assert(flagHasGeoScope);
        handler->start_pair("GeoScope");
        if (storeGeoScope.in_known_list)
          {
            switch (storeGeoScope.list_value)
              {
                case GeoScope_Country:
                    handler->string_value("Country");
                    break;
                case GeoScope_Continent:
                    handler->string_value("Continent");
                    break;
                case GeoScope_World:
                    handler->string_value("World");
                    break;
                case GeoScope_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeGeoScope.string_value);
          }
        if (flagHasPlay)
          {
            handler->start_pair("Play");
            handler->boolean_value(storePlay);
          }
        if (flagHasShuffle)
          {
            handler->start_pair("Shuffle");
            handler->boolean_value(storeShuffle);
          }
        if (flagHasHowMany)
          {
            handler->start_pair("HowMany");
            handler->boolean_value(storeHowMany);
          }
        assert(flagHasRequestedNumberOfResults);
        handler->start_pair("RequestedNumberOfResults");
        handler->number_value(storeRequestedNumberOfResults.get_o_integer());
        if (flagHasTrackResultSHIDs)
          {
            handler->start_pair("TrackResultSHIDs");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTrackResultSHIDs.size(); ++num1)
              {
                if (((double)(long int)storeTrackResultSHIDs[num1]) == storeTrackResultSHIDs[num1])
                    handler->number_value((long int)storeTrackResultSHIDs[num1]);
                else
                    handler->number_value(storeTrackResultSHIDs[num1]);
              }
            handler->finish_array();
          }
        if (flagHasAlbumResultSHIDs)
          {
            handler->start_pair("AlbumResultSHIDs");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeAlbumResultSHIDs.size(); ++num2)
              {
                if (((double)(long int)storeAlbumResultSHIDs[num2]) == storeAlbumResultSHIDs[num2])
                    handler->number_value((long int)storeAlbumResultSHIDs[num2]);
                else
                    handler->number_value(storeAlbumResultSHIDs[num2]);
              }
            handler->finish_array();
          }
        if (flagHasArtistResultSHIDs)
          {
            handler->start_pair("ArtistResultSHIDs");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeArtistResultSHIDs.size(); ++num3)
              {
                if (((double)(long int)storeArtistResultSHIDs[num3]) == storeArtistResultSHIDs[num3])
                    handler->number_value((long int)storeArtistResultSHIDs[num3]);
                else
                    handler->number_value(storeArtistResultSHIDs[num3]);
              }
            handler->finish_array();
          }
        if (flagHasVideoResultIDs)
          {
            handler->start_pair("VideoResultIDs");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeVideoResultIDs.size(); ++num4)
              {
                handler->string_value(storeVideoResultIDs[num4]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasEntity()))
          {
            return "When parsing the object for %what%, the \"Entity\" field was missing.";
          }
        if (!(hasModifier()))
          {
            return "When parsing the object for %what%, the \"Modifier\" field was missing.";
          }
        if (!(hasGeoScope()))
          {
            return "When parsing the object for %what%, the \"GeoScope\" field was missing.";
          }
        if (!(hasRequestedNumberOfResults()))
          {
            return "When parsing the object for %what%, the \"RequestedNumberOfResults\" field was missing.";
          }
        return NULL;
      }

    static MusicChartsSearchCriteriaJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicChartsSearchCriteriaJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicChartsSearchCriteriaJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicChartsSearchCriteriaJSON>, MusicChartsSearchCriteriaJSON *, bool> generator("Type MusicChartsSearchCriteria", ignore_extras);
            parse_json_value(text, "Text for MusicChartsSearchCriteriaJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicChartsSearchCriteriaJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicChartsSearchCriteriaJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicChartsSearchCriteriaJSON>, MusicChartsSearchCriteriaJSON *, bool> generator("Type MusicChartsSearchCriteria", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorCurrentDateAndTime;
    class FieldGeneratorEntity : public JSONStringGenerator
          {
          protected:
            FieldGeneratorEntity(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorEntity(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeEntityKnownValues known = stringToEntity(result);
                TypeEntity new_value;
                if (known == Entity__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeEntity result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorEntity, TypeEntity, TypeEntity > fieldGeneratorEntity;
    class FieldGeneratorModifier : public JSONStringGenerator
          {
          protected:
            FieldGeneratorModifier(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorModifier(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeModifierKnownValues known = stringToModifier(result);
                TypeModifier new_value;
                if (known == Modifier__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeModifier result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorModifier, TypeModifier, TypeModifier > fieldGeneratorModifier;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorTimePeriod;
    class FieldGeneratorTimePeriodType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTimePeriodType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTimePeriodType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTimePeriodTypeKnownValues known = stringToTimePeriodType(result);
                TypeTimePeriodType new_value;
                if (known == TimePeriodType__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeTimePeriodType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorTimePeriodType, TypeTimePeriodType, TypeTimePeriodType > fieldGeneratorTimePeriodType;
    class FieldGeneratorGenre : public JSONStringGenerator
          {
          protected:
            FieldGeneratorGenre(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorGenre(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeGenreKnownValues known = stringToGenre(result);
                TypeGenre new_value;
                if (known == Genre__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeGenre result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorGenre, TypeGenre, TypeGenre > fieldGeneratorGenre;
        JSONHoldingGenerator<MusicGenreJSON::Generator, RCHandle<MusicGenreJSON>, MusicGenreJSON *, bool > fieldGeneratorRequestedGenre;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorGenreMatch;
    class FieldGeneratorPlaylist : public JSONStringGenerator
          {
          protected:
            FieldGeneratorPlaylist(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorPlaylist(void)
              {
              }
            void handle_result(const char *result)
              {
                TypePlaylistKnownValues known = stringToPlaylist(result);
                TypePlaylist new_value;
                if (known == Playlist__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypePlaylist result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorPlaylist, TypePlaylist, TypePlaylist > fieldGeneratorPlaylist;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorBirthday;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountryCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountryName;
    class FieldGeneratorGeoScope : public JSONStringGenerator
          {
          protected:
            FieldGeneratorGeoScope(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorGeoScope(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeGeoScopeKnownValues known = stringToGeoScope(result);
                TypeGeoScope new_value;
                if (known == GeoScope__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeGeoScope result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorGeoScope, TypeGeoScope, TypeGeoScope > fieldGeneratorGeoScope;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPlay;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorShuffle;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHowMany;
        static char lowerBoundRequestedNumberOfResults[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRequestedNumberOfResults>, OInteger, o_integer > fieldGeneratorRequestedNumberOfResults;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTrackResultSHIDs;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorAlbumResultSHIDs;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorArtistResultSHIDs;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorVideoResultIDs;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            MusicChartsSearchCriteriaJSON *result = new MusicChartsSearchCriteriaJSON();
            assert(result != NULL);
            RCHandle<MusicChartsSearchCriteriaJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicChartsSearchCriteriaJSON *result)
          {
            if (fieldGeneratorCurrentDateAndTime.have_value)
              {
                result->setCurrentDateAndTime(fieldGeneratorCurrentDateAndTime.value.referenced());
                fieldGeneratorCurrentDateAndTime.have_value = false;
              }
            if (fieldGeneratorEntity.have_value)
              {
                result->setEntity(fieldGeneratorEntity.value);
                fieldGeneratorEntity.have_value = false;
              }
            else if (!(result->hasEntity()))
              {
                error("When parsing the object for %what%, the \"Entity\" field was missing.");
              }
            if (fieldGeneratorModifier.have_value)
              {
                result->setModifier(fieldGeneratorModifier.value);
                fieldGeneratorModifier.have_value = false;
              }
            else if (!(result->hasModifier()))
              {
                error("When parsing the object for %what%, the \"Modifier\" field was missing.");
              }
            if (fieldGeneratorTimePeriod.have_value)
              {
                result->setTimePeriod(fieldGeneratorTimePeriod.value.referenced());
                fieldGeneratorTimePeriod.have_value = false;
              }
            if (fieldGeneratorTimePeriodType.have_value)
              {
                result->setTimePeriodType(fieldGeneratorTimePeriodType.value);
                fieldGeneratorTimePeriodType.have_value = false;
              }
            if (fieldGeneratorGenre.have_value)
              {
                result->setGenre(fieldGeneratorGenre.value);
                fieldGeneratorGenre.have_value = false;
              }
            if (fieldGeneratorRequestedGenre.have_value)
              {
                result->setRequestedGenre(fieldGeneratorRequestedGenre.value.referenced());
                fieldGeneratorRequestedGenre.have_value = false;
              }
            if (fieldGeneratorGenreMatch.have_value)
              {
                result->setGenreMatch(fieldGeneratorGenreMatch.value);
                fieldGeneratorGenreMatch.have_value = false;
              }
            if (fieldGeneratorPlaylist.have_value)
              {
                result->setPlaylist(fieldGeneratorPlaylist.value);
                fieldGeneratorPlaylist.have_value = false;
              }
            if (fieldGeneratorBirthday.have_value)
              {
                result->setBirthday(fieldGeneratorBirthday.value.referenced());
                fieldGeneratorBirthday.have_value = false;
              }
            if (fieldGeneratorLocation.have_value)
              {
                result->setLocation(fieldGeneratorLocation.value.referenced());
                fieldGeneratorLocation.have_value = false;
              }
            if (fieldGeneratorCountryCode.have_value)
              {
                result->setCountryCode(fieldGeneratorCountryCode.value);
                fieldGeneratorCountryCode.have_value = false;
              }
            if (fieldGeneratorCountryName.have_value)
              {
                result->setCountryName(fieldGeneratorCountryName.value);
                fieldGeneratorCountryName.have_value = false;
              }
            if (fieldGeneratorGeoScope.have_value)
              {
                result->setGeoScope(fieldGeneratorGeoScope.value);
                fieldGeneratorGeoScope.have_value = false;
              }
            else if (!(result->hasGeoScope()))
              {
                error("When parsing the object for %what%, the \"GeoScope\" field was missing.");
              }
            if (fieldGeneratorPlay.have_value)
              {
                result->setPlay(fieldGeneratorPlay.value);
                fieldGeneratorPlay.have_value = false;
              }
            if (fieldGeneratorShuffle.have_value)
              {
                result->setShuffle(fieldGeneratorShuffle.value);
                fieldGeneratorShuffle.have_value = false;
              }
            if (fieldGeneratorHowMany.have_value)
              {
                result->setHowMany(fieldGeneratorHowMany.value);
                fieldGeneratorHowMany.have_value = false;
              }
            if (fieldGeneratorRequestedNumberOfResults.have_value)
              {
                result->setRequestedNumberOfResults(fieldGeneratorRequestedNumberOfResults.value);
                fieldGeneratorRequestedNumberOfResults.have_value = false;
              }
            else if (!(result->hasRequestedNumberOfResults()))
              {
                error("When parsing the object for %what%, the \"RequestedNumberOfResults\" field was missing.");
              }
            if (fieldGeneratorTrackResultSHIDs.have_value)
              {
                result->initTrackResultSHIDs();
                size_t count = fieldGeneratorTrackResultSHIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTrackResultSHIDs(atof(fieldGeneratorTrackResultSHIDs.value[num].c_str()));
                  }
                fieldGeneratorTrackResultSHIDs.value.clear();
                fieldGeneratorTrackResultSHIDs.have_value = false;
              }
            if (fieldGeneratorAlbumResultSHIDs.have_value)
              {
                result->initAlbumResultSHIDs();
                size_t count = fieldGeneratorAlbumResultSHIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlbumResultSHIDs(atof(fieldGeneratorAlbumResultSHIDs.value[num].c_str()));
                  }
                fieldGeneratorAlbumResultSHIDs.value.clear();
                fieldGeneratorAlbumResultSHIDs.have_value = false;
              }
            if (fieldGeneratorArtistResultSHIDs.have_value)
              {
                result->initArtistResultSHIDs();
                size_t count = fieldGeneratorArtistResultSHIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendArtistResultSHIDs(atof(fieldGeneratorArtistResultSHIDs.value[num].c_str()));
                  }
                fieldGeneratorArtistResultSHIDs.value.clear();
                fieldGeneratorArtistResultSHIDs.have_value = false;
              }
            if (fieldGeneratorVideoResultIDs.have_value)
              {
                result->initVideoResultIDs();
                size_t count = fieldGeneratorVideoResultIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendVideoResultIDs(fieldGeneratorVideoResultIDs.value[num]);
                  }
                fieldGeneratorVideoResultIDs.value.clear();
                fieldGeneratorVideoResultIDs.have_value = false;
              }
          }
        virtual void handle_result(MusicChartsSearchCriteriaJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "bumResultSHIDs") == 0)
                                return &fieldGeneratorAlbumResultSHIDs;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "tistResultSHIDs") == 0)
                                return &fieldGeneratorArtistResultSHIDs;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'B':
                    if (strcmp(&(field_name[1]), "irthday") == 0)
                        return &fieldGeneratorBirthday;
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strncmp(&(field_name[2]), "untry", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[8]), "ode") == 0)
                                            return &fieldGeneratorCountryCode;
                                        break;
                                    case 'N':
                                        if (strcmp(&(field_name[8]), "ame") == 0)
                                            return &fieldGeneratorCountryName;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rrentDateAndTime") == 0)
                                return &fieldGeneratorCurrentDateAndTime;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "ntity") == 0)
                        return &fieldGeneratorEntity;
                    break;
                case 'G':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'n':
                                if (strncmp(&(field_name[3]), "re", 2) == 0)
                                  {
                                    switch ((unsigned char)(field_name[5]))
                                      {
                                        case 0:
                                            return &fieldGeneratorGenre;
                                        case 'M':
                                            if (strcmp(&(field_name[6]), "atch") == 0)
                                                return &fieldGeneratorGenreMatch;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'o':
                                if (strcmp(&(field_name[3]), "Scope") == 0)
                                    return &fieldGeneratorGeoScope;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "owMany") == 0)
                        return &fieldGeneratorHowMany;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorLocation;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "odifier") == 0)
                        return &fieldGeneratorModifier;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "lay", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorPlay;
                            case 'l':
                                if (strcmp(&(field_name[5]), "ist") == 0)
                                    return &fieldGeneratorPlaylist;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "equested", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'G':
                                if (strcmp(&(field_name[10]), "enre") == 0)
                                    return &fieldGeneratorRequestedGenre;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[10]), "umberOfResults") == 0)
                                    return &fieldGeneratorRequestedNumberOfResults;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "huffle") == 0)
                        return &fieldGeneratorShuffle;
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strncmp(&(field_name[2]), "mePeriod", 8) == 0)
                              {
                                switch ((unsigned char)(field_name[10]))
                                  {
                                    case 0:
                                        return &fieldGeneratorTimePeriod;
                                    case 'T':
                                        if (strcmp(&(field_name[11]), "ype") == 0)
                                            return &fieldGeneratorTimePeriodType;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "ackResultSHIDs") == 0)
                                return &fieldGeneratorTrackResultSHIDs;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "ideoResultIDs") == 0)
                        return &fieldGeneratorVideoResultIDs;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCurrentDateAndTime("field \"CurrentDateAndTime\" of the MusicChartsSearchCriteria class", ignore_extras), fieldGeneratorEntity("field \"Entity\" of the MusicChartsSearchCriteria class"), fieldGeneratorModifier("field \"Modifier\" of the MusicChartsSearchCriteria class"), fieldGeneratorTimePeriod("field \"TimePeriod\" of the MusicChartsSearchCriteria class", ignore_extras), fieldGeneratorTimePeriodType("field \"TimePeriodType\" of the MusicChartsSearchCriteria class"), fieldGeneratorGenre("field \"Genre\" of the MusicChartsSearchCriteria class"), fieldGeneratorRequestedGenre("field \"RequestedGenre\" of the MusicChartsSearchCriteria class", ignore_extras), fieldGeneratorGenreMatch("field \"GenreMatch\" of the MusicChartsSearchCriteria class"), fieldGeneratorPlaylist("field \"Playlist\" of the MusicChartsSearchCriteria class"), fieldGeneratorBirthday("field \"Birthday\" of the MusicChartsSearchCriteria class", ignore_extras), fieldGeneratorLocation("field \"Location\" of the MusicChartsSearchCriteria class", ignore_extras), fieldGeneratorCountryCode("field \"CountryCode\" of the MusicChartsSearchCriteria class"), fieldGeneratorCountryName("field \"CountryName\" of the MusicChartsSearchCriteria class"), fieldGeneratorGeoScope("field \"GeoScope\" of the MusicChartsSearchCriteria class"), fieldGeneratorPlay("field \"Play\" of the MusicChartsSearchCriteria class"), fieldGeneratorShuffle("field \"Shuffle\" of the MusicChartsSearchCriteria class"), fieldGeneratorHowMany("field \"HowMany\" of the MusicChartsSearchCriteria class"), fieldGeneratorRequestedNumberOfResults("field \"RequestedNumberOfResults\" of the MusicChartsSearchCriteria class"), fieldGeneratorTrackResultSHIDs("field \"TrackResultSHIDs\" of the MusicChartsSearchCriteria class"), fieldGeneratorAlbumResultSHIDs("field \"AlbumResultSHIDs\" of the MusicChartsSearchCriteria class"), fieldGeneratorArtistResultSHIDs("field \"ArtistResultSHIDs\" of the MusicChartsSearchCriteria class"), fieldGeneratorVideoResultIDs("field \"VideoResultIDs\" of the MusicChartsSearchCriteria class")
          {
            set_what("the MusicChartsSearchCriteria class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCurrentDateAndTime.reset();
            fieldGeneratorEntity.reset();
            fieldGeneratorModifier.reset();
            fieldGeneratorTimePeriod.reset();
            fieldGeneratorTimePeriodType.reset();
            fieldGeneratorGenre.reset();
            fieldGeneratorRequestedGenre.reset();
            fieldGeneratorGenreMatch.reset();
            fieldGeneratorPlaylist.reset();
            fieldGeneratorBirthday.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorCountryCode.reset();
            fieldGeneratorCountryName.reset();
            fieldGeneratorGeoScope.reset();
            fieldGeneratorPlay.reset();
            fieldGeneratorShuffle.reset();
            fieldGeneratorHowMany.reset();
            fieldGeneratorRequestedNumberOfResults.reset();
            fieldGeneratorTrackResultSHIDs.reset();
            fieldGeneratorAlbumResultSHIDs.reset();
            fieldGeneratorArtistResultSHIDs.reset();
            fieldGeneratorVideoResultIDs.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICCHARTSSEARCHCRITERIAJSON_H */
