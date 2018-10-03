/* file "MusicCommandNativeDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICCOMMANDNATIVEDATAJSON_H
#define MUSICCOMMANDNATIVEDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "MusicSearchParametersJSON.h"
#include "MusicAlbumJSON.h"
#include "MusicArtistJSON.h"
#include "MusicTrackJSON.h"
#include "MusicTrackSupplementalInfoJSON.h"
#include "MusicArtistJSON.h"
#include "MusicThirdPartyJSON.h"
#include "MusicSearchErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicCommandNativeDataJSON : public ReferenceCounted
  {
  public:
    enum TypeEntitySpecificationTypeKnownValues
      {
        EntitySpecificationType_Explicit,
        EntitySpecificationType_This,
        EntitySpecificationType_ListPosition,
        EntitySpecificationType_Relative,
        EntitySpecificationType__none
      };
    struct TypeEntitySpecificationType
      {
        bool in_known_list;
        std::string string_value;
        TypeEntitySpecificationTypeKnownValues list_value;

        TypeEntitySpecificationType(void);
        TypeEntitySpecificationType(const TypeEntitySpecificationType &other);
        TypeEntitySpecificationType(TypeEntitySpecificationTypeKnownValues other);
        bool  operator==(const TypeEntitySpecificationType &other) const;
        bool  operator!=(const TypeEntitySpecificationType &other) const;
        bool  operator<(const TypeEntitySpecificationType &other) const;
        bool  operator>(const TypeEntitySpecificationType &other) const;
        bool  operator>=(const TypeEntitySpecificationType &other) const;
        bool  operator<=(const TypeEntitySpecificationType &other) const;

      };

    static TypeEntitySpecificationTypeKnownValues  stringToEntitySpecificationType(const char *chars);
    static const char * stringFromEntitySpecificationType(TypeEntitySpecificationTypeKnownValues the_enum);
    enum TypeOrderToDisplayKnownValues
      {
        OrderToDisplay_Album,
        OrderToDisplay_Artist,
        OrderToDisplay_Track,
        OrderToDisplay_Video,
        OrderToDisplay__none
      };
    struct TypeOrderToDisplay
      {
        bool in_known_list;
        std::string string_value;
        TypeOrderToDisplayKnownValues list_value;

        TypeOrderToDisplay(void);
        TypeOrderToDisplay(const TypeOrderToDisplay &other);
        TypeOrderToDisplay(TypeOrderToDisplayKnownValues other);
        bool  operator==(const TypeOrderToDisplay &other) const;
        bool  operator!=(const TypeOrderToDisplay &other) const;
        bool  operator<(const TypeOrderToDisplay &other) const;
        bool  operator>(const TypeOrderToDisplay &other) const;
        bool  operator>=(const TypeOrderToDisplay &other) const;
        bool  operator<=(const TypeOrderToDisplay &other) const;

      };

    static TypeOrderToDisplayKnownValues  stringToOrderToDisplay(const char *chars);
    static const char * stringFromOrderToDisplay(TypeOrderToDisplayKnownValues the_enum);

  private:
    bool flagHasSearchParameters;
    MusicSearchParametersJSON * storeSearchParameters;
    bool flagHasAlbumsLabel;
    std::string storeAlbumsLabel;
    bool flagHasAlbums;
    std::vector< MusicAlbumJSON * > storeAlbums;
    bool flagHasArtistsLabel;
    std::string storeArtistsLabel;
    bool flagHasArtists;
    std::vector< MusicArtistJSON * > storeArtists;
    bool flagHasTracksLabel;
    std::string storeTracksLabel;
    bool flagHasTracks;
    std::vector< MusicTrackJSON * > storeTracks;
    bool flagHasSupplementalTrackInfos;
    std::vector< MusicTrackSupplementalInfoJSON * > storeSupplementalTrackInfos;
    bool flagHasUserRequestedAutoPlay;
    bool storeUserRequestedAutoPlay;
    bool flagHasUserRequestedAirplay;
    bool storeUserRequestedAirplay;
    bool flagHasUserRequestedRepeat;
    bool storeUserRequestedRepeat;
    bool flagHasUserRequestedShuffle;
    bool storeUserRequestedShuffle;
    bool flagHasUserRequestedAll;
    bool storeUserRequestedAll;
    bool flagHasArtistSpecified;
    bool storeArtistSpecified;
    bool flagHasQueryArtists;
    std::vector< MusicArtistJSON * > storeQueryArtists;
    bool flagHasEntitySpecificationType;
    TypeEntitySpecificationType storeEntitySpecificationType;
    bool flagHasMusicThirdParty;
    MusicThirdPartyJSON * storeMusicThirdParty;
    bool flagHasListPosition;
    OInteger storeListPosition;
    bool flagHasErrors;
    std::vector< MusicSearchErrorJSON * > storeErrors;
    bool flagHasOrderToDisplay;
    std::vector< TypeOrderToDisplay > storeOrderToDisplay;

    MusicCommandNativeDataJSON(const MusicCommandNativeDataJSON &);
    MusicCommandNativeDataJSON & operator=(const MusicCommandNativeDataJSON &other);

    void  fromJSONSearchParameters(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumsLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbums(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistsLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtists(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTracksLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTracks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSupplementalTrackInfos(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedAutoPlay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedAirplay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedRepeat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedShuffle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedAll(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistSpecified(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQueryArtists(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEntitySpecificationType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicThirdParty(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONListPosition(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrors(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrderToDisplay(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicCommandNativeDataJSON(void);
    virtual ~MusicCommandNativeDataJSON(void);
    virtual const char *getMusicCommandNativeDataKind(void) const = 0;
    bool  hasSearchParameters(void) const;
    MusicSearchParametersJSON *  getSearchParameters(void);
    const MusicSearchParametersJSON *  getSearchParameters(void) const;
    bool  hasAlbumsLabel(void) const;
    std::string  getAlbumsLabel(void);
    const std::string  getAlbumsLabel(void) const;
    bool  hasAlbums(void) const;
    size_t  countOfAlbums(void) const;
    MusicAlbumJSON *  elementOfAlbums(size_t element_num);
    const MusicAlbumJSON *  elementOfAlbums(size_t element_num) const;
    std::vector< MusicAlbumJSON * >  getAlbums(void);
    const std::vector< MusicAlbumJSON * >  getAlbums(void) const;
    bool  hasArtistsLabel(void) const;
    std::string  getArtistsLabel(void);
    const std::string  getArtistsLabel(void) const;
    bool  hasArtists(void) const;
    size_t  countOfArtists(void) const;
    MusicArtistJSON *  elementOfArtists(size_t element_num);
    const MusicArtistJSON *  elementOfArtists(size_t element_num) const;
    std::vector< MusicArtistJSON * >  getArtists(void);
    const std::vector< MusicArtistJSON * >  getArtists(void) const;
    bool  hasTracksLabel(void) const;
    std::string  getTracksLabel(void);
    const std::string  getTracksLabel(void) const;
    bool  hasTracks(void) const;
    size_t  countOfTracks(void) const;
    MusicTrackJSON *  elementOfTracks(size_t element_num);
    const MusicTrackJSON *  elementOfTracks(size_t element_num) const;
    std::vector< MusicTrackJSON * >  getTracks(void);
    const std::vector< MusicTrackJSON * >  getTracks(void) const;
    bool  hasSupplementalTrackInfos(void) const;
    size_t  countOfSupplementalTrackInfos(void) const;
    MusicTrackSupplementalInfoJSON *  elementOfSupplementalTrackInfos(size_t element_num);
    const MusicTrackSupplementalInfoJSON *  elementOfSupplementalTrackInfos(size_t element_num) const;
    std::vector< MusicTrackSupplementalInfoJSON * >  getSupplementalTrackInfos(void);
    const std::vector< MusicTrackSupplementalInfoJSON * >  getSupplementalTrackInfos(void) const;
    bool  hasUserRequestedAutoPlay(void) const;
    bool  getUserRequestedAutoPlay(void);
    const bool  getUserRequestedAutoPlay(void) const;
    bool  hasUserRequestedAirplay(void) const;
    bool  getUserRequestedAirplay(void);
    const bool  getUserRequestedAirplay(void) const;
    bool  hasUserRequestedRepeat(void) const;
    bool  getUserRequestedRepeat(void);
    const bool  getUserRequestedRepeat(void) const;
    bool  hasUserRequestedShuffle(void) const;
    bool  getUserRequestedShuffle(void);
    const bool  getUserRequestedShuffle(void) const;
    bool  hasUserRequestedAll(void) const;
    bool  getUserRequestedAll(void);
    const bool  getUserRequestedAll(void) const;
    bool  hasArtistSpecified(void) const;
    bool  getArtistSpecified(void);
    const bool  getArtistSpecified(void) const;
    bool  hasQueryArtists(void) const;
    size_t  countOfQueryArtists(void) const;
    MusicArtistJSON *  elementOfQueryArtists(size_t element_num);
    const MusicArtistJSON *  elementOfQueryArtists(size_t element_num) const;
    std::vector< MusicArtistJSON * >  getQueryArtists(void);
    const std::vector< MusicArtistJSON * >  getQueryArtists(void) const;
    bool  hasEntitySpecificationType(void) const;
    TypeEntitySpecificationType  getEntitySpecificationType(void);
    const TypeEntitySpecificationType  getEntitySpecificationType(void) const;
    const char * getEntitySpecificationTypeAsChars(void) const;
    std::string  getEntitySpecificationTypeAsString(void) const;
    bool  hasMusicThirdParty(void) const;
    MusicThirdPartyJSON *  getMusicThirdParty(void);
    const MusicThirdPartyJSON *  getMusicThirdParty(void) const;
    bool  hasListPosition(void) const;
    OInteger  getListPosition(void);
    const OInteger  getListPosition(void) const;
    bool  hasErrors(void) const;
    size_t  countOfErrors(void) const;
    MusicSearchErrorJSON *  elementOfErrors(size_t element_num);
    const MusicSearchErrorJSON *  elementOfErrors(size_t element_num) const;
    std::vector< MusicSearchErrorJSON * >  getErrors(void);
    const std::vector< MusicSearchErrorJSON * >  getErrors(void) const;
    bool  hasOrderToDisplay(void) const;
    size_t  countOfOrderToDisplay(void) const;
    TypeOrderToDisplay  elementOfOrderToDisplay(size_t element_num);
    const TypeOrderToDisplay  elementOfOrderToDisplay(size_t element_num) const;
    std::vector< TypeOrderToDisplay >  getOrderToDisplay(void);
    const std::vector< TypeOrderToDisplay >  getOrderToDisplay(void) const;

    virtual size_t extraMusicCommandNativeDataComponentCount(void) const = 0;
    virtual const char *extraMusicCommandNativeDataComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraMusicCommandNativeDataComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraMusicCommandNativeDataComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraMusicCommandNativeDataLookup(const char *field_name) = 0;
    virtual const JSONValue *extraMusicCommandNativeDataLookup(const char *field_name) const = 0;

    void setSearchParameters(MusicSearchParametersJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSearchParameters)
          {
            storeSearchParameters->remove_reference();
          }
        flagHasSearchParameters = true;
        storeSearchParameters = new_value;
      }
    void unsetSearchParameters(void)
      {
        if (flagHasSearchParameters)
          {
            storeSearchParameters->remove_reference();
          }
        flagHasSearchParameters = false;
      }
    void setAlbumsLabel(std::string new_value)
      {
        flagHasAlbumsLabel = true;
        storeAlbumsLabel = new_value;
      }
    void unsetAlbumsLabel(void)
      {
        flagHasAlbumsLabel = false;
      }
    void initAlbums(void)
      {
        if (flagHasAlbums)
          {
            for (size_t num7 = 0; num7 < storeAlbums.size(); ++num7)
              {
                storeAlbums[num7]->remove_reference();
              }
          }
        flagHasAlbums = true;
        storeAlbums.clear();
      }
    void appendAlbums(MusicAlbumJSON * to_append)
      {
        if (!flagHasAlbums)
          {
            flagHasAlbums = true;
            storeAlbums.clear();
          }
        assert(flagHasAlbums);
        to_append->add_reference();
        storeAlbums.push_back(to_append);
      }
    void unsetAlbums(void)
      {
        if (flagHasAlbums)
          {
            for (size_t num8 = 0; num8 < storeAlbums.size(); ++num8)
              {
                storeAlbums[num8]->remove_reference();
              }
          }
        flagHasAlbums = false;
        storeAlbums.clear();
      }
    void setArtistsLabel(std::string new_value)
      {
        flagHasArtistsLabel = true;
        storeArtistsLabel = new_value;
      }
    void unsetArtistsLabel(void)
      {
        flagHasArtistsLabel = false;
      }
    void initArtists(void)
      {
        if (flagHasArtists)
          {
            for (size_t num9 = 0; num9 < storeArtists.size(); ++num9)
              {
                storeArtists[num9]->remove_reference();
              }
          }
        flagHasArtists = true;
        storeArtists.clear();
      }
    void appendArtists(MusicArtistJSON * to_append)
      {
        if (!flagHasArtists)
          {
            flagHasArtists = true;
            storeArtists.clear();
          }
        assert(flagHasArtists);
        to_append->add_reference();
        storeArtists.push_back(to_append);
      }
    void unsetArtists(void)
      {
        if (flagHasArtists)
          {
            for (size_t num10 = 0; num10 < storeArtists.size(); ++num10)
              {
                storeArtists[num10]->remove_reference();
              }
          }
        flagHasArtists = false;
        storeArtists.clear();
      }
    void setTracksLabel(std::string new_value)
      {
        flagHasTracksLabel = true;
        storeTracksLabel = new_value;
      }
    void unsetTracksLabel(void)
      {
        flagHasTracksLabel = false;
      }
    void initTracks(void)
      {
        if (flagHasTracks)
          {
            for (size_t num11 = 0; num11 < storeTracks.size(); ++num11)
              {
                storeTracks[num11]->remove_reference();
              }
          }
        flagHasTracks = true;
        storeTracks.clear();
      }
    void appendTracks(MusicTrackJSON * to_append)
      {
        if (!flagHasTracks)
          {
            flagHasTracks = true;
            storeTracks.clear();
          }
        assert(flagHasTracks);
        to_append->add_reference();
        storeTracks.push_back(to_append);
      }
    void unsetTracks(void)
      {
        if (flagHasTracks)
          {
            for (size_t num12 = 0; num12 < storeTracks.size(); ++num12)
              {
                storeTracks[num12]->remove_reference();
              }
          }
        flagHasTracks = false;
        storeTracks.clear();
      }
    void initSupplementalTrackInfos(void)
      {
        if (flagHasSupplementalTrackInfos)
          {
            for (size_t num13 = 0; num13 < storeSupplementalTrackInfos.size(); ++num13)
              {
                storeSupplementalTrackInfos[num13]->remove_reference();
              }
          }
        flagHasSupplementalTrackInfos = true;
        storeSupplementalTrackInfos.clear();
      }
    void appendSupplementalTrackInfos(MusicTrackSupplementalInfoJSON * to_append)
      {
        if (!flagHasSupplementalTrackInfos)
          {
            flagHasSupplementalTrackInfos = true;
            storeSupplementalTrackInfos.clear();
          }
        assert(flagHasSupplementalTrackInfos);
        to_append->add_reference();
        storeSupplementalTrackInfos.push_back(to_append);
      }
    void unsetSupplementalTrackInfos(void)
      {
        if (flagHasSupplementalTrackInfos)
          {
            for (size_t num14 = 0; num14 < storeSupplementalTrackInfos.size(); ++num14)
              {
                storeSupplementalTrackInfos[num14]->remove_reference();
              }
          }
        flagHasSupplementalTrackInfos = false;
        storeSupplementalTrackInfos.clear();
      }
    void setUserRequestedAutoPlay(bool new_value)
      {
        flagHasUserRequestedAutoPlay = true;
        storeUserRequestedAutoPlay = new_value;
      }
    void unsetUserRequestedAutoPlay(void)
      {
        flagHasUserRequestedAutoPlay = false;
      }
    void setUserRequestedAirplay(bool new_value)
      {
        flagHasUserRequestedAirplay = true;
        storeUserRequestedAirplay = new_value;
      }
    void unsetUserRequestedAirplay(void)
      {
        flagHasUserRequestedAirplay = false;
      }
    void setUserRequestedRepeat(bool new_value)
      {
        flagHasUserRequestedRepeat = true;
        storeUserRequestedRepeat = new_value;
      }
    void unsetUserRequestedRepeat(void)
      {
        flagHasUserRequestedRepeat = false;
      }
    void setUserRequestedShuffle(bool new_value)
      {
        flagHasUserRequestedShuffle = true;
        storeUserRequestedShuffle = new_value;
      }
    void unsetUserRequestedShuffle(void)
      {
        flagHasUserRequestedShuffle = false;
      }
    void setUserRequestedAll(bool new_value)
      {
        flagHasUserRequestedAll = true;
        storeUserRequestedAll = new_value;
      }
    void unsetUserRequestedAll(void)
      {
        flagHasUserRequestedAll = false;
      }
    void setArtistSpecified(bool new_value)
      {
        flagHasArtistSpecified = true;
        storeArtistSpecified = new_value;
      }
    void unsetArtistSpecified(void)
      {
        flagHasArtistSpecified = false;
      }
    void initQueryArtists(void)
      {
        if (flagHasQueryArtists)
          {
            for (size_t num15 = 0; num15 < storeQueryArtists.size(); ++num15)
              {
                storeQueryArtists[num15]->remove_reference();
              }
          }
        flagHasQueryArtists = true;
        storeQueryArtists.clear();
      }
    void appendQueryArtists(MusicArtistJSON * to_append)
      {
        if (!flagHasQueryArtists)
          {
            flagHasQueryArtists = true;
            storeQueryArtists.clear();
          }
        assert(flagHasQueryArtists);
        to_append->add_reference();
        storeQueryArtists.push_back(to_append);
      }
    void unsetQueryArtists(void)
      {
        if (flagHasQueryArtists)
          {
            for (size_t num16 = 0; num16 < storeQueryArtists.size(); ++num16)
              {
                storeQueryArtists[num16]->remove_reference();
              }
          }
        flagHasQueryArtists = false;
        storeQueryArtists.clear();
      }
    void setEntitySpecificationType(TypeEntitySpecificationType new_value)
      {
        flagHasEntitySpecificationType = true;
        storeEntitySpecificationType = new_value;
      }
    void setEntitySpecificationType(const char *chars)
      {
        TypeEntitySpecificationTypeKnownValues known = stringToEntitySpecificationType(chars);
        TypeEntitySpecificationType new_value;
        if (known == EntitySpecificationType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setEntitySpecificationType(new_value);
      }
    void setEntitySpecificationType(std::string the_string)
      {
        setEntitySpecificationType(the_string.c_str());
      }
    void setEntitySpecificationType(TypeEntitySpecificationTypeKnownValues new_value)
      {
        TypeEntitySpecificationType new_full_value;
        assert(new_value != EntitySpecificationType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setEntitySpecificationType(new_full_value);
      }
    void unsetEntitySpecificationType(void)
      {
        flagHasEntitySpecificationType = false;
      }
    void setMusicThirdParty(MusicThirdPartyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMusicThirdParty)
          {
            storeMusicThirdParty->remove_reference();
          }
        flagHasMusicThirdParty = true;
        storeMusicThirdParty = new_value;
      }
    void unsetMusicThirdParty(void)
      {
        if (flagHasMusicThirdParty)
          {
            storeMusicThirdParty->remove_reference();
          }
        flagHasMusicThirdParty = false;
      }
    void setListPosition(OInteger new_value)
      {
        flagHasListPosition = true;
        storeListPosition = new_value;
      }
    void unsetListPosition(void)
      {
        flagHasListPosition = false;
      }
    void initErrors(void)
      {
        if (flagHasErrors)
          {
            for (size_t num17 = 0; num17 < storeErrors.size(); ++num17)
              {
                storeErrors[num17]->remove_reference();
              }
          }
        flagHasErrors = true;
        storeErrors.clear();
      }
    void appendErrors(MusicSearchErrorJSON * to_append)
      {
        if (!flagHasErrors)
          {
            flagHasErrors = true;
            storeErrors.clear();
          }
        assert(flagHasErrors);
        to_append->add_reference();
        storeErrors.push_back(to_append);
      }
    void unsetErrors(void)
      {
        if (flagHasErrors)
          {
            for (size_t num18 = 0; num18 < storeErrors.size(); ++num18)
              {
                storeErrors[num18]->remove_reference();
              }
          }
        flagHasErrors = false;
        storeErrors.clear();
      }
    void initOrderToDisplay(void)
      {
        flagHasOrderToDisplay = true;
        storeOrderToDisplay.clear();
      }
    void appendOrderToDisplay(TypeOrderToDisplay to_append)
      {
        if (!flagHasOrderToDisplay)
          {
            flagHasOrderToDisplay = true;
            storeOrderToDisplay.clear();
          }
        assert(flagHasOrderToDisplay);
        storeOrderToDisplay.push_back(to_append);
      }
    void appendOrderToDisplay(const char *chars)
      {
        TypeOrderToDisplayKnownValues known = stringToOrderToDisplay(chars);
        TypeOrderToDisplay new_value;
        if (known == OrderToDisplay__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendOrderToDisplay(new_value);
      }
    void appendOrderToDisplay(std::string the_string)
      {
        appendOrderToDisplay(the_string.c_str());
      }
    void appendOrderToDisplay(TypeOrderToDisplayKnownValues new_value)
      {
        TypeOrderToDisplay new_full_value;
        assert(new_value != OrderToDisplay__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        appendOrderToDisplay(new_full_value);
      }
    void unsetOrderToDisplay(void)
      {
        flagHasOrderToDisplay = false;
        storeOrderToDisplay.clear();
      }

    virtual void extraMusicCommandNativeDataAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraMusicCommandNativeDataSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("MusicCommandNativeDataKind", getMusicCommandNativeDataKind());
        if (flagHasSearchParameters)
          {
            handler->start_pair("SearchParameters");
            storeSearchParameters->write_as_json(handler);
          }
        if (flagHasAlbumsLabel)
          {
            handler->start_pair("AlbumsLabel");
            handler->string_value(storeAlbumsLabel);
          }
        if (flagHasAlbums)
          {
            handler->start_pair("Albums");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAlbums.size(); ++num1)
              {
                storeAlbums[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasArtistsLabel)
          {
            handler->start_pair("ArtistsLabel");
            handler->string_value(storeArtistsLabel);
          }
        if (flagHasArtists)
          {
            handler->start_pair("Artists");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeArtists.size(); ++num2)
              {
                storeArtists[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasTracksLabel)
          {
            handler->start_pair("TracksLabel");
            handler->string_value(storeTracksLabel);
          }
        if (flagHasTracks)
          {
            handler->start_pair("Tracks");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeTracks.size(); ++num3)
              {
                storeTracks[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSupplementalTrackInfos)
          {
            handler->start_pair("SupplementalTrackInfos");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeSupplementalTrackInfos.size(); ++num4)
              {
                storeSupplementalTrackInfos[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasUserRequestedAutoPlay)
          {
            handler->start_pair("UserRequestedAutoPlay");
            handler->boolean_value(storeUserRequestedAutoPlay);
          }
        if (flagHasUserRequestedAirplay)
          {
            handler->start_pair("UserRequestedAirplay");
            handler->boolean_value(storeUserRequestedAirplay);
          }
        if (flagHasUserRequestedRepeat)
          {
            handler->start_pair("UserRequestedRepeat");
            handler->boolean_value(storeUserRequestedRepeat);
          }
        if (flagHasUserRequestedShuffle)
          {
            handler->start_pair("UserRequestedShuffle");
            handler->boolean_value(storeUserRequestedShuffle);
          }
        if (flagHasUserRequestedAll)
          {
            handler->start_pair("UserRequestedAll");
            handler->boolean_value(storeUserRequestedAll);
          }
        if (flagHasArtistSpecified)
          {
            handler->start_pair("ArtistSpecified");
            handler->boolean_value(storeArtistSpecified);
          }
        if (flagHasQueryArtists)
          {
            handler->start_pair("QueryArtists");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeQueryArtists.size(); ++num5)
              {
                storeQueryArtists[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasEntitySpecificationType)
          {
            handler->start_pair("EntitySpecificationType");
            if (storeEntitySpecificationType.in_known_list)
              {
                switch (storeEntitySpecificationType.list_value)
                  {
                    case EntitySpecificationType_Explicit:
                        handler->string_value("Explicit");
                        break;
                    case EntitySpecificationType_This:
                        handler->string_value("This");
                        break;
                    case EntitySpecificationType_ListPosition:
                        handler->string_value("ListPosition");
                        break;
                    case EntitySpecificationType_Relative:
                        handler->string_value("Relative");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeEntitySpecificationType.string_value);
              }
          }
        if (flagHasMusicThirdParty)
          {
            handler->start_pair("MusicThirdParty");
            storeMusicThirdParty->write_as_json(handler);
          }
        if (flagHasListPosition)
          {
            handler->start_pair("ListPosition");
            handler->number_value(storeListPosition.get_o_integer());
          }
        if (flagHasErrors)
          {
            handler->start_pair("Errors");
            assert(storeErrors.size() >= 1);
            handler->start_array();
            for (size_t num6 = 0; num6 < storeErrors.size(); ++num6)
              {
                storeErrors[num6]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasOrderToDisplay)
          {
            handler->start_pair("OrderToDisplay");
            assert(storeOrderToDisplay.size() >= 3);
            handler->start_array();
            for (size_t num7 = 0; num7 < storeOrderToDisplay.size(); ++num7)
              {
                if (storeOrderToDisplay[num7].in_known_list)
                  {
                    switch (storeOrderToDisplay[num7].list_value)
                      {
                        case OrderToDisplay_Album:
                            handler->string_value("Album");
                            break;
                        case OrderToDisplay_Artist:
                            handler->string_value("Artist");
                            break;
                        case OrderToDisplay_Track:
                            handler->string_value("Track");
                            break;
                        case OrderToDisplay_Video:
                            handler->string_value("Video");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeOrderToDisplay[num7].string_value);
                  }
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicCommandNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicCommandNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicCommandNativeDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicCommandNativeDataJSON>, MusicCommandNativeDataJSON *, bool> generator("Type MusicCommandNativeData", ignore_extras);
            parse_json_value(text, "Text for MusicCommandNativeDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicCommandNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicCommandNativeDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicCommandNativeDataJSON>, MusicCommandNativeDataJSON *, bool> generator("Type MusicCommandNativeData", ignore_extras);
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
        JSONHoldingGenerator<MusicSearchParametersJSON::Generator, RCHandle<MusicSearchParametersJSON>, MusicSearchParametersJSON *, bool > fieldGeneratorSearchParameters;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumsLabel;
        JSONHoldingArrayGenerator<MusicAlbumJSON::Generator, RCHandle<MusicAlbumJSON>, MusicAlbumJSON *, bool > fieldGeneratorAlbums;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistsLabel;
        JSONHoldingArrayGenerator<MusicArtistJSON::Generator, RCHandle<MusicArtistJSON>, MusicArtistJSON *, bool > fieldGeneratorArtists;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTracksLabel;
        JSONHoldingArrayGenerator<MusicTrackJSON::Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool > fieldGeneratorTracks;
        JSONHoldingArrayGenerator<MusicTrackSupplementalInfoJSON::Generator, RCHandle<MusicTrackSupplementalInfoJSON>, MusicTrackSupplementalInfoJSON *, bool > fieldGeneratorSupplementalTrackInfos;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedAutoPlay;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedAirplay;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedRepeat;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedShuffle;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedAll;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorArtistSpecified;
        JSONHoldingArrayGenerator<MusicArtistJSON::Generator, RCHandle<MusicArtistJSON>, MusicArtistJSON *, bool > fieldGeneratorQueryArtists;
    class FieldGeneratorEntitySpecificationType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorEntitySpecificationType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorEntitySpecificationType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeEntitySpecificationTypeKnownValues known = stringToEntitySpecificationType(result);
                TypeEntitySpecificationType new_value;
                if (known == EntitySpecificationType__none)
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
            virtual void handle_result(TypeEntitySpecificationType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorEntitySpecificationType, TypeEntitySpecificationType, TypeEntitySpecificationType > fieldGeneratorEntitySpecificationType;
        JSONHoldingGenerator<MusicThirdPartyJSON::Generator, RCHandle<MusicThirdPartyJSON>, MusicThirdPartyJSON *, bool > fieldGeneratorMusicThirdParty;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorListPosition;
        JSONHoldingArrayGenerator<MusicSearchErrorJSON::Generator, RCHandle<MusicSearchErrorJSON>, MusicSearchErrorJSON *, bool > fieldGeneratorErrors;
    class FieldGeneratorOrderToDisplay : public JSONStringGenerator
          {
          protected:
            FieldGeneratorOrderToDisplay(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorOrderToDisplay(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeOrderToDisplayKnownValues known = stringToOrderToDisplay(result);
                TypeOrderToDisplay new_value;
                if (known == OrderToDisplay__none)
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
            virtual void handle_result(TypeOrderToDisplay result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorOrderToDisplay, TypeOrderToDisplay, TypeOrderToDisplay > fieldGeneratorOrderToDisplay;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `MusicCommandNativeDataKind' field is missing.");
            MusicCommandNativeDataJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<MusicCommandNativeDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicCommandNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getMusicCommandNativeDataJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `MusicCommandNativeDataKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(MusicCommandNativeDataJSON *result)
          {
            if (fieldGeneratorSearchParameters.have_value)
              {
                result->setSearchParameters(fieldGeneratorSearchParameters.value.referenced());
                fieldGeneratorSearchParameters.have_value = false;
              }
            if (fieldGeneratorAlbumsLabel.have_value)
              {
                result->setAlbumsLabel(fieldGeneratorAlbumsLabel.value);
                fieldGeneratorAlbumsLabel.have_value = false;
              }
            if (fieldGeneratorAlbums.have_value)
              {
                result->initAlbums();
                size_t count = fieldGeneratorAlbums.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlbums(fieldGeneratorAlbums.value[num].referenced());
                  }
                fieldGeneratorAlbums.value.clear();
                fieldGeneratorAlbums.have_value = false;
              }
            if (fieldGeneratorArtistsLabel.have_value)
              {
                result->setArtistsLabel(fieldGeneratorArtistsLabel.value);
                fieldGeneratorArtistsLabel.have_value = false;
              }
            if (fieldGeneratorArtists.have_value)
              {
                result->initArtists();
                size_t count = fieldGeneratorArtists.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendArtists(fieldGeneratorArtists.value[num].referenced());
                  }
                fieldGeneratorArtists.value.clear();
                fieldGeneratorArtists.have_value = false;
              }
            if (fieldGeneratorTracksLabel.have_value)
              {
                result->setTracksLabel(fieldGeneratorTracksLabel.value);
                fieldGeneratorTracksLabel.have_value = false;
              }
            if (fieldGeneratorTracks.have_value)
              {
                result->initTracks();
                size_t count = fieldGeneratorTracks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTracks(fieldGeneratorTracks.value[num].referenced());
                  }
                fieldGeneratorTracks.value.clear();
                fieldGeneratorTracks.have_value = false;
              }
            if (fieldGeneratorSupplementalTrackInfos.have_value)
              {
                result->initSupplementalTrackInfos();
                size_t count = fieldGeneratorSupplementalTrackInfos.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSupplementalTrackInfos(fieldGeneratorSupplementalTrackInfos.value[num].referenced());
                  }
                fieldGeneratorSupplementalTrackInfos.value.clear();
                fieldGeneratorSupplementalTrackInfos.have_value = false;
              }
            if (fieldGeneratorUserRequestedAutoPlay.have_value)
              {
                result->setUserRequestedAutoPlay(fieldGeneratorUserRequestedAutoPlay.value);
                fieldGeneratorUserRequestedAutoPlay.have_value = false;
              }
            if (fieldGeneratorUserRequestedAirplay.have_value)
              {
                result->setUserRequestedAirplay(fieldGeneratorUserRequestedAirplay.value);
                fieldGeneratorUserRequestedAirplay.have_value = false;
              }
            if (fieldGeneratorUserRequestedRepeat.have_value)
              {
                result->setUserRequestedRepeat(fieldGeneratorUserRequestedRepeat.value);
                fieldGeneratorUserRequestedRepeat.have_value = false;
              }
            if (fieldGeneratorUserRequestedShuffle.have_value)
              {
                result->setUserRequestedShuffle(fieldGeneratorUserRequestedShuffle.value);
                fieldGeneratorUserRequestedShuffle.have_value = false;
              }
            if (fieldGeneratorUserRequestedAll.have_value)
              {
                result->setUserRequestedAll(fieldGeneratorUserRequestedAll.value);
                fieldGeneratorUserRequestedAll.have_value = false;
              }
            if (fieldGeneratorArtistSpecified.have_value)
              {
                result->setArtistSpecified(fieldGeneratorArtistSpecified.value);
                fieldGeneratorArtistSpecified.have_value = false;
              }
            if (fieldGeneratorQueryArtists.have_value)
              {
                result->initQueryArtists();
                size_t count = fieldGeneratorQueryArtists.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryArtists(fieldGeneratorQueryArtists.value[num].referenced());
                  }
                fieldGeneratorQueryArtists.value.clear();
                fieldGeneratorQueryArtists.have_value = false;
              }
            if (fieldGeneratorEntitySpecificationType.have_value)
              {
                result->setEntitySpecificationType(fieldGeneratorEntitySpecificationType.value);
                fieldGeneratorEntitySpecificationType.have_value = false;
              }
            if (fieldGeneratorMusicThirdParty.have_value)
              {
                result->setMusicThirdParty(fieldGeneratorMusicThirdParty.value.referenced());
                fieldGeneratorMusicThirdParty.have_value = false;
              }
            if (fieldGeneratorListPosition.have_value)
              {
                result->setListPosition(fieldGeneratorListPosition.value);
                fieldGeneratorListPosition.have_value = false;
              }
            if (fieldGeneratorErrors.have_value)
              {
                result->initErrors();
                size_t count = fieldGeneratorErrors.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendErrors(fieldGeneratorErrors.value[num].referenced());
                  }
                fieldGeneratorErrors.value.clear();
                fieldGeneratorErrors.have_value = false;
              }
            if (fieldGeneratorOrderToDisplay.have_value)
              {
                result->initOrderToDisplay();
                size_t count = fieldGeneratorOrderToDisplay.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOrderToDisplay(fieldGeneratorOrderToDisplay.value[num]);
                  }
                fieldGeneratorOrderToDisplay.value.clear();
                fieldGeneratorOrderToDisplay.have_value = false;
              }
          }
        virtual void handle_result(MusicCommandNativeDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[2]), "bums", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 0:
                                        return &fieldGeneratorAlbums;
                                    case 'L':
                                        if (strcmp(&(field_name[7]), "abel") == 0)
                                            return &fieldGeneratorAlbumsLabel;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "tist", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'S':
                                        if (strcmp(&(field_name[7]), "pecified") == 0)
                                            return &fieldGeneratorArtistSpecified;
                                        break;
                                    case 's':
                                        switch ((unsigned char)(field_name[7]))
                                          {
                                            case 0:
                                                return &fieldGeneratorArtists;
                                            case 'L':
                                                if (strcmp(&(field_name[8]), "abel") == 0)
                                                    return &fieldGeneratorArtistsLabel;
                                                break;
                                            default:
                                                break;
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
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strcmp(&(field_name[2]), "titySpecificationType") == 0)
                                return &fieldGeneratorEntitySpecificationType;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "rors") == 0)
                                return &fieldGeneratorErrors;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "istPosition") == 0)
                        return &fieldGeneratorListPosition;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "usic", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[6]), "ommandNativeDataKind") == 0)
                                    {
                                    keyGenerator.reset();
                                    return &keyGenerator;
                                    }
                                break;
                            case 'T':
                                if (strcmp(&(field_name[6]), "hirdParty") == 0)
                                    return &fieldGeneratorMusicThirdParty;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "rderToDisplay") == 0)
                        return &fieldGeneratorOrderToDisplay;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryArtists") == 0)
                        return &fieldGeneratorQueryArtists;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "archParameters") == 0)
                                return &fieldGeneratorSearchParameters;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "pplementalTrackInfos") == 0)
                                return &fieldGeneratorSupplementalTrackInfos;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "racks", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 0:
                                return &fieldGeneratorTracks;
                            case 'L':
                                if (strcmp(&(field_name[7]), "abel") == 0)
                                    return &fieldGeneratorTracksLabel;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "serRequested", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 'A':
                                switch ((unsigned char)(field_name[14]))
                                  {
                                    case 'i':
                                        if (strcmp(&(field_name[15]), "rplay") == 0)
                                            return &fieldGeneratorUserRequestedAirplay;
                                        break;
                                    case 'l':
                                        if (strcmp(&(field_name[15]), "l") == 0)
                                            return &fieldGeneratorUserRequestedAll;
                                        break;
                                    case 'u':
                                        if (strcmp(&(field_name[15]), "toPlay") == 0)
                                            return &fieldGeneratorUserRequestedAutoPlay;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'R':
                                if (strcmp(&(field_name[14]), "epeat") == 0)
                                    return &fieldGeneratorUserRequestedRepeat;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[14]), "huffle") == 0)
                                    return &fieldGeneratorUserRequestedShuffle;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSearchParameters("field \"SearchParameters\" of the MusicCommandNativeData class", ignore_extras), fieldGeneratorAlbumsLabel("field \"AlbumsLabel\" of the MusicCommandNativeData class"), fieldGeneratorAlbums("field \"Albums\" of the MusicCommandNativeData class", ignore_extras), fieldGeneratorArtistsLabel("field \"ArtistsLabel\" of the MusicCommandNativeData class"), fieldGeneratorArtists("field \"Artists\" of the MusicCommandNativeData class", ignore_extras), fieldGeneratorTracksLabel("field \"TracksLabel\" of the MusicCommandNativeData class"), fieldGeneratorTracks("field \"Tracks\" of the MusicCommandNativeData class", ignore_extras), fieldGeneratorSupplementalTrackInfos("field \"SupplementalTrackInfos\" of the MusicCommandNativeData class", ignore_extras), fieldGeneratorUserRequestedAutoPlay("field \"UserRequestedAutoPlay\" of the MusicCommandNativeData class"), fieldGeneratorUserRequestedAirplay("field \"UserRequestedAirplay\" of the MusicCommandNativeData class"), fieldGeneratorUserRequestedRepeat("field \"UserRequestedRepeat\" of the MusicCommandNativeData class"), fieldGeneratorUserRequestedShuffle("field \"UserRequestedShuffle\" of the MusicCommandNativeData class"), fieldGeneratorUserRequestedAll("field \"UserRequestedAll\" of the MusicCommandNativeData class"), fieldGeneratorArtistSpecified("field \"ArtistSpecified\" of the MusicCommandNativeData class"), fieldGeneratorQueryArtists("field \"QueryArtists\" of the MusicCommandNativeData class", ignore_extras), fieldGeneratorEntitySpecificationType("field \"EntitySpecificationType\" of the MusicCommandNativeData class"), fieldGeneratorMusicThirdParty("field \"MusicThirdParty\" of the MusicCommandNativeData class", ignore_extras), fieldGeneratorListPosition("field \"ListPosition\" of the MusicCommandNativeData class"), fieldGeneratorErrors("field \"Errors\" of the MusicCommandNativeData class", ignore_extras), fieldGeneratorOrderToDisplay("field \"OrderToDisplay\" of the MusicCommandNativeData class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"MusicCommandNativeDataKind\" of the MusicCommandNativeData class")
          {
            set_what("the MusicCommandNativeData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSearchParameters.reset();
            fieldGeneratorAlbumsLabel.reset();
            fieldGeneratorAlbums.reset();
            fieldGeneratorArtistsLabel.reset();
            fieldGeneratorArtists.reset();
            fieldGeneratorTracksLabel.reset();
            fieldGeneratorTracks.reset();
            fieldGeneratorSupplementalTrackInfos.reset();
            fieldGeneratorUserRequestedAutoPlay.reset();
            fieldGeneratorUserRequestedAirplay.reset();
            fieldGeneratorUserRequestedRepeat.reset();
            fieldGeneratorUserRequestedShuffle.reset();
            fieldGeneratorUserRequestedAll.reset();
            fieldGeneratorArtistSpecified.reset();
            fieldGeneratorQueryArtists.reset();
            fieldGeneratorEntitySpecificationType.reset();
            fieldGeneratorMusicThirdParty.reset();
            fieldGeneratorListPosition.reset();
            fieldGeneratorErrors.reset();
            fieldGeneratorOrderToDisplay.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static MusicCommandNativeDataJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* MUSICCOMMANDNATIVEDATAJSON_H */
