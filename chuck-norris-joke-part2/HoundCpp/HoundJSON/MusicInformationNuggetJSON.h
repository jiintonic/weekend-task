/* file "MusicInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICINFORMATIONNUGGETJSON_H
#define MUSICINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
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


class MusicInformationNuggetJSON : public InformationNuggetJSON
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
    bool flagHasUserRequestedAll;
    bool storeUserRequestedAll;
    bool flagHasEntitySpecificationType;
    TypeEntitySpecificationType storeEntitySpecificationType;
    bool flagHasMusicThirdParty;
    MusicThirdPartyJSON * storeMusicThirdParty;
    bool flagHasListPosition;
    OInteger storeListPosition;
    bool flagHasErrors;
    std::vector< MusicSearchErrorJSON * > storeErrors;

    MusicInformationNuggetJSON(const MusicInformationNuggetJSON &);
    MusicInformationNuggetJSON & operator=(const MusicInformationNuggetJSON &other);

    JSONValue * extraSearchParametersToJSON(void) const;
    JSONValue * extraAlbumsLabelToJSON(void) const;
    JSONValue * extraAlbumsToJSON(void) const;
    JSONValue * extraArtistsLabelToJSON(void) const;
    JSONValue * extraArtistsToJSON(void) const;
    JSONValue * extraTracksLabelToJSON(void) const;
    JSONValue * extraTracksToJSON(void) const;
    JSONValue * extraSupplementalTrackInfosToJSON(void) const;
    JSONValue * extraUserRequestedAllToJSON(void) const;
    JSONValue * extraEntitySpecificationTypeToJSON(void) const;
    JSONValue * extraMusicThirdPartyToJSON(void) const;
    JSONValue * extraListPositionToJSON(void) const;
    JSONValue * extraErrorsToJSON(void) const;

    void  fromJSONSearchParameters(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumsLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbums(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistsLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtists(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTracksLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTracks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSupplementalTrackInfos(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedAll(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEntitySpecificationType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicThirdParty(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONListPosition(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrors(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicInformationNuggetJSON(void);
    virtual ~MusicInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    virtual const char *getMusicNuggetKind(void) const = 0;
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
    bool  hasUserRequestedAll(void) const;
    bool  getUserRequestedAll(void);
    const bool  getUserRequestedAll(void) const;
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

    virtual size_t extraMusicInformationNuggetComponentCount(void) const = 0;
    virtual const char *extraMusicInformationNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraMusicInformationNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraMusicInformationNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraMusicInformationNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraMusicInformationNuggetLookup(const char *field_name) const = 0;
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasSearchParameters)
            ++result;
        if (flagHasAlbumsLabel)
            ++result;
        if (flagHasAlbums)
            ++result;
        if (flagHasArtistsLabel)
            ++result;
        if (flagHasArtists)
            ++result;
        if (flagHasTracksLabel)
            ++result;
        if (flagHasTracks)
            ++result;
        if (flagHasSupplementalTrackInfos)
            ++result;
        if (flagHasUserRequestedAll)
            ++result;
        if (flagHasEntitySpecificationType)
            ++result;
        if (flagHasMusicThirdParty)
            ++result;
        if (flagHasListPosition)
            ++result;
        if (flagHasErrors)
            ++result;
        result += extraMusicInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "MusicNuggetKind";
        size_t remainder = (component_num - 1);
        if (flagHasSearchParameters)
          {
            if (remainder == 0)
                return "SearchParameters";
            --remainder;
          }
        if (flagHasAlbumsLabel)
          {
            if (remainder == 0)
                return "AlbumsLabel";
            --remainder;
          }
        if (flagHasAlbums)
          {
            if (remainder == 0)
                return "Albums";
            --remainder;
          }
        if (flagHasArtistsLabel)
          {
            if (remainder == 0)
                return "ArtistsLabel";
            --remainder;
          }
        if (flagHasArtists)
          {
            if (remainder == 0)
                return "Artists";
            --remainder;
          }
        if (flagHasTracksLabel)
          {
            if (remainder == 0)
                return "TracksLabel";
            --remainder;
          }
        if (flagHasTracks)
          {
            if (remainder == 0)
                return "Tracks";
            --remainder;
          }
        if (flagHasSupplementalTrackInfos)
          {
            if (remainder == 0)
                return "SupplementalTrackInfos";
            --remainder;
          }
        if (flagHasUserRequestedAll)
          {
            if (remainder == 0)
                return "UserRequestedAll";
            --remainder;
          }
        if (flagHasEntitySpecificationType)
          {
            if (remainder == 0)
                return "EntitySpecificationType";
            --remainder;
          }
        if (flagHasMusicThirdParty)
          {
            if (remainder == 0)
                return "MusicThirdParty";
            --remainder;
          }
        if (flagHasListPosition)
          {
            if (remainder == 0)
                return "ListPosition";
            --remainder;
          }
        if (flagHasErrors)
          {
            if (remainder == 0)
                return "Errors";
            --remainder;
          }
        return extraMusicInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getMusicNuggetKind());
        size_t remainder = (component_num - 1);
        if (flagHasSearchParameters)
          {
            if (remainder == 0)
                return extraSearchParametersToJSON();
            --remainder;
          }
        if (flagHasAlbumsLabel)
          {
            if (remainder == 0)
                return extraAlbumsLabelToJSON();
            --remainder;
          }
        if (flagHasAlbums)
          {
            if (remainder == 0)
                return extraAlbumsToJSON();
            --remainder;
          }
        if (flagHasArtistsLabel)
          {
            if (remainder == 0)
                return extraArtistsLabelToJSON();
            --remainder;
          }
        if (flagHasArtists)
          {
            if (remainder == 0)
                return extraArtistsToJSON();
            --remainder;
          }
        if (flagHasTracksLabel)
          {
            if (remainder == 0)
                return extraTracksLabelToJSON();
            --remainder;
          }
        if (flagHasTracks)
          {
            if (remainder == 0)
                return extraTracksToJSON();
            --remainder;
          }
        if (flagHasSupplementalTrackInfos)
          {
            if (remainder == 0)
                return extraSupplementalTrackInfosToJSON();
            --remainder;
          }
        if (flagHasUserRequestedAll)
          {
            if (remainder == 0)
                return extraUserRequestedAllToJSON();
            --remainder;
          }
        if (flagHasEntitySpecificationType)
          {
            if (remainder == 0)
                return extraEntitySpecificationTypeToJSON();
            --remainder;
          }
        if (flagHasMusicThirdParty)
          {
            if (remainder == 0)
                return extraMusicThirdPartyToJSON();
            --remainder;
          }
        if (flagHasListPosition)
          {
            if (remainder == 0)
                return extraListPositionToJSON();
            --remainder;
          }
        if (flagHasErrors)
          {
            if (remainder == 0)
                return extraErrorsToJSON();
            --remainder;
          }
        return extraMusicInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getMusicNuggetKind());
        size_t remainder = (component_num - 1);
        if (flagHasSearchParameters)
          {
            if (remainder == 0)
                return extraSearchParametersToJSON();
            --remainder;
          }
        if (flagHasAlbumsLabel)
          {
            if (remainder == 0)
                return extraAlbumsLabelToJSON();
            --remainder;
          }
        if (flagHasAlbums)
          {
            if (remainder == 0)
                return extraAlbumsToJSON();
            --remainder;
          }
        if (flagHasArtistsLabel)
          {
            if (remainder == 0)
                return extraArtistsLabelToJSON();
            --remainder;
          }
        if (flagHasArtists)
          {
            if (remainder == 0)
                return extraArtistsToJSON();
            --remainder;
          }
        if (flagHasTracksLabel)
          {
            if (remainder == 0)
                return extraTracksLabelToJSON();
            --remainder;
          }
        if (flagHasTracks)
          {
            if (remainder == 0)
                return extraTracksToJSON();
            --remainder;
          }
        if (flagHasSupplementalTrackInfos)
          {
            if (remainder == 0)
                return extraSupplementalTrackInfosToJSON();
            --remainder;
          }
        if (flagHasUserRequestedAll)
          {
            if (remainder == 0)
                return extraUserRequestedAllToJSON();
            --remainder;
          }
        if (flagHasEntitySpecificationType)
          {
            if (remainder == 0)
                return extraEntitySpecificationTypeToJSON();
            --remainder;
          }
        if (flagHasMusicThirdParty)
          {
            if (remainder == 0)
                return extraMusicThirdPartyToJSON();
            --remainder;
          }
        if (flagHasListPosition)
          {
            if (remainder == 0)
                return extraListPositionToJSON();
            --remainder;
          }
        if (flagHasErrors)
          {
            if (remainder == 0)
                return extraErrorsToJSON();
            --remainder;
          }
        return extraMusicInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
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
                                    return (flagHasAlbums ? extraAlbumsToJSON() : NULL);
                                case 'L':
                                    if (strcmp(&(field_name[7]), "abel") == 0)
                                        return (flagHasAlbumsLabel ? extraAlbumsLabelToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'r':
                        if (strncmp(&(field_name[2]), "tists", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 0:
                                    return (flagHasArtists ? extraArtistsToJSON() : NULL);
                                case 'L':
                                    if (strcmp(&(field_name[8]), "abel") == 0)
                                        return (flagHasArtistsLabel ? extraArtistsLabelToJSON() : NULL);
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
                            return (flagHasEntitySpecificationType ? extraEntitySpecificationTypeToJSON() : NULL);
                        break;
                    case 'r':
                        if (strcmp(&(field_name[2]), "rors") == 0)
                            return (flagHasErrors ? extraErrorsToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "istPosition") == 0)
                    return (flagHasListPosition ? extraListPositionToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "usic", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'N':
                            if (strcmp(&(field_name[6]), "uggetKind") == 0)
                                return new JSONStringValue(getMusicNuggetKind());
                            break;
                        case 'T':
                            if (strcmp(&(field_name[6]), "hirdParty") == 0)
                                return (flagHasMusicThirdParty ? extraMusicThirdPartyToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "archParameters") == 0)
                            return (flagHasSearchParameters ? extraSearchParametersToJSON() : NULL);
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "pplementalTrackInfos") == 0)
                            return (flagHasSupplementalTrackInfos ? extraSupplementalTrackInfosToJSON() : NULL);
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
                            return (flagHasTracks ? extraTracksToJSON() : NULL);
                        case 'L':
                            if (strcmp(&(field_name[7]), "abel") == 0)
                                return (flagHasTracksLabel ? extraTracksLabelToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serRequestedAll") == 0)
                    return (flagHasUserRequestedAll ? extraUserRequestedAllToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMusicInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
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
                                    return (flagHasAlbums ? extraAlbumsToJSON() : NULL);
                                case 'L':
                                    if (strcmp(&(field_name[7]), "abel") == 0)
                                        return (flagHasAlbumsLabel ? extraAlbumsLabelToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'r':
                        if (strncmp(&(field_name[2]), "tists", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 0:
                                    return (flagHasArtists ? extraArtistsToJSON() : NULL);
                                case 'L':
                                    if (strcmp(&(field_name[8]), "abel") == 0)
                                        return (flagHasArtistsLabel ? extraArtistsLabelToJSON() : NULL);
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
                            return (flagHasEntitySpecificationType ? extraEntitySpecificationTypeToJSON() : NULL);
                        break;
                    case 'r':
                        if (strcmp(&(field_name[2]), "rors") == 0)
                            return (flagHasErrors ? extraErrorsToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "istPosition") == 0)
                    return (flagHasListPosition ? extraListPositionToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "usic", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'N':
                            if (strcmp(&(field_name[6]), "uggetKind") == 0)
                                return new JSONStringValue(getMusicNuggetKind());
                            break;
                        case 'T':
                            if (strcmp(&(field_name[6]), "hirdParty") == 0)
                                return (flagHasMusicThirdParty ? extraMusicThirdPartyToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "archParameters") == 0)
                            return (flagHasSearchParameters ? extraSearchParametersToJSON() : NULL);
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "pplementalTrackInfos") == 0)
                            return (flagHasSupplementalTrackInfos ? extraSupplementalTrackInfosToJSON() : NULL);
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
                            return (flagHasTracks ? extraTracksToJSON() : NULL);
                        case 'L':
                            if (strcmp(&(field_name[7]), "abel") == 0)
                                return (flagHasTracksLabel ? extraTracksLabelToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serRequestedAll") == 0)
                    return (flagHasUserRequestedAll ? extraUserRequestedAllToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMusicInformationNuggetLookup(field_name);
      }

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
            for (size_t num6 = 0; num6 < storeAlbums.size(); ++num6)
              {
                storeAlbums[num6]->remove_reference();
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
            for (size_t num7 = 0; num7 < storeAlbums.size(); ++num7)
              {
                storeAlbums[num7]->remove_reference();
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
            for (size_t num8 = 0; num8 < storeArtists.size(); ++num8)
              {
                storeArtists[num8]->remove_reference();
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
            for (size_t num9 = 0; num9 < storeArtists.size(); ++num9)
              {
                storeArtists[num9]->remove_reference();
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
            for (size_t num10 = 0; num10 < storeTracks.size(); ++num10)
              {
                storeTracks[num10]->remove_reference();
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
            for (size_t num11 = 0; num11 < storeTracks.size(); ++num11)
              {
                storeTracks[num11]->remove_reference();
              }
          }
        flagHasTracks = false;
        storeTracks.clear();
      }
    void initSupplementalTrackInfos(void)
      {
        if (flagHasSupplementalTrackInfos)
          {
            for (size_t num12 = 0; num12 < storeSupplementalTrackInfos.size(); ++num12)
              {
                storeSupplementalTrackInfos[num12]->remove_reference();
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
            for (size_t num13 = 0; num13 < storeSupplementalTrackInfos.size(); ++num13)
              {
                storeSupplementalTrackInfos[num13]->remove_reference();
              }
          }
        flagHasSupplementalTrackInfos = false;
        storeSupplementalTrackInfos.clear();
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
            for (size_t num14 = 0; num14 < storeErrors.size(); ++num14)
              {
                storeErrors[num14]->remove_reference();
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
            for (size_t num15 = 0; num15 < storeErrors.size(); ++num15)
              {
                storeErrors[num15]->remove_reference();
              }
          }
        flagHasErrors = false;
        storeErrors.clear();
      }

    virtual void extraMusicInformationNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraMusicInformationNuggetSetField(const char *key, JSONValue *new_component) = 0;
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        if (strncmp(&(key[2]), "bums", 4) == 0)
                          {
                            switch ((unsigned char)(key[6]))
                              {
                                case 0:
                                    {
                                    fromJSONAlbums(new_component, false);
                                    return;
                                    }
                                case 'L':
                                    if (strcmp(&(key[7]), "abel") == 0)
                                        {
                                        fromJSONAlbumsLabel(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'r':
                        if (strncmp(&(key[2]), "tists", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 0:
                                    {
                                    fromJSONArtists(new_component, false);
                                    return;
                                    }
                                case 'L':
                                    if (strcmp(&(key[8]), "abel") == 0)
                                        {
                                        fromJSONArtistsLabel(new_component, false);
                                        return;
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
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strcmp(&(key[2]), "titySpecificationType") == 0)
                            {
                            fromJSONEntitySpecificationType(new_component, false);
                            return;
                            }
                        break;
                    case 'r':
                        if (strcmp(&(key[2]), "rors") == 0)
                            {
                            fromJSONErrors(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(key[1]), "istPosition") == 0)
                    {
                    fromJSONListPosition(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "usic", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'N':
                            if (strcmp(&(key[6]), "uggetKind") == 0)
                                return;
                            break;
                        case 'T':
                            if (strcmp(&(key[6]), "hirdParty") == 0)
                                {
                                fromJSONMusicThirdParty(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "archParameters") == 0)
                            {
                            fromJSONSearchParameters(new_component, false);
                            return;
                            }
                        break;
                    case 'u':
                        if (strcmp(&(key[2]), "pplementalTrackInfos") == 0)
                            {
                            fromJSONSupplementalTrackInfos(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                if (strncmp(&(key[1]), "racks", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 0:
                            {
                            fromJSONTracks(new_component, false);
                            return;
                            }
                        case 'L':
                            if (strcmp(&(key[7]), "abel") == 0)
                                {
                                fromJSONTracksLabel(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'U':
                if (strcmp(&(key[1]), "serRequestedAll") == 0)
                    {
                    fromJSONUserRequestedAll(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMusicInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        if (strncmp(&(key[2]), "bums", 4) == 0)
                          {
                            switch ((unsigned char)(key[6]))
                              {
                                case 0:
                                    {
                                    fromJSONAlbums(new_component, false);
                                    return;
                                    }
                                case 'L':
                                    if (strcmp(&(key[7]), "abel") == 0)
                                        {
                                        fromJSONAlbumsLabel(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'r':
                        if (strncmp(&(key[2]), "tists", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 0:
                                    {
                                    fromJSONArtists(new_component, false);
                                    return;
                                    }
                                case 'L':
                                    if (strcmp(&(key[8]), "abel") == 0)
                                        {
                                        fromJSONArtistsLabel(new_component, false);
                                        return;
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
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strcmp(&(key[2]), "titySpecificationType") == 0)
                            {
                            fromJSONEntitySpecificationType(new_component, false);
                            return;
                            }
                        break;
                    case 'r':
                        if (strcmp(&(key[2]), "rors") == 0)
                            {
                            fromJSONErrors(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(key[1]), "istPosition") == 0)
                    {
                    fromJSONListPosition(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "usic", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'N':
                            if (strcmp(&(key[6]), "uggetKind") == 0)
                                return;
                            break;
                        case 'T':
                            if (strcmp(&(key[6]), "hirdParty") == 0)
                                {
                                fromJSONMusicThirdParty(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "archParameters") == 0)
                            {
                            fromJSONSearchParameters(new_component, false);
                            return;
                            }
                        break;
                    case 'u':
                        if (strcmp(&(key[2]), "pplementalTrackInfos") == 0)
                            {
                            fromJSONSupplementalTrackInfos(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                if (strncmp(&(key[1]), "racks", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 0:
                            {
                            fromJSONTracks(new_component, false);
                            return;
                            }
                        case 'L':
                            if (strcmp(&(key[7]), "abel") == 0)
                                {
                                fromJSONTracksLabel(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'U':
                if (strcmp(&(key[1]), "serRequestedAll") == 0)
                    {
                    fromJSONUserRequestedAll(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMusicInformationNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        InformationNuggetJSON::write_fields_as_json(handler);
        handler->pair("MusicNuggetKind", getMusicNuggetKind());
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
        if (flagHasUserRequestedAll)
          {
            handler->start_pair("UserRequestedAll");
            handler->boolean_value(storeUserRequestedAll);
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
            for (size_t num5 = 0; num5 < storeErrors.size(); ++num5)
              {
                storeErrors[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicInformationNuggetJSON>, MusicInformationNuggetJSON *, bool> generator("Type MusicInformationNugget", ignore_extras);
            parse_json_value(text, "Text for MusicInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicInformationNuggetJSON>, MusicInformationNuggetJSON *, bool> generator("Type MusicInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedAll;
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
                throw("The `MusicNuggetKind' field is missing.");
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "Music") == 0))
                throw("The key field has a value other than `Music'.");
            MusicInformationNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<MusicInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getMusicInformationNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `MusicNuggetKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((MusicInformationNuggetJSON *)new_result);
          }
        void finish(MusicInformationNuggetJSON *result)
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
            if (fieldGeneratorUserRequestedAll.have_value)
              {
                result->setUserRequestedAll(fieldGeneratorUserRequestedAll.value);
                fieldGeneratorUserRequestedAll.have_value = false;
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
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicInformationNuggetJSON *new_result) = 0;
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
                            if (strncmp(&(field_name[2]), "tists", 5) == 0)
                              {
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
                            case 'N':
                                if (strcmp(&(field_name[6]), "uggetKind") == 0)
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
                    if (strcmp(&(field_name[1]), "serRequestedAll") == 0)
                        return &fieldGeneratorUserRequestedAll;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorSearchParameters("field \"SearchParameters\" of the MusicInformationNugget class", ignore_extras), fieldGeneratorAlbumsLabel("field \"AlbumsLabel\" of the MusicInformationNugget class"), fieldGeneratorAlbums("field \"Albums\" of the MusicInformationNugget class", ignore_extras), fieldGeneratorArtistsLabel("field \"ArtistsLabel\" of the MusicInformationNugget class"), fieldGeneratorArtists("field \"Artists\" of the MusicInformationNugget class", ignore_extras), fieldGeneratorTracksLabel("field \"TracksLabel\" of the MusicInformationNugget class"), fieldGeneratorTracks("field \"Tracks\" of the MusicInformationNugget class", ignore_extras), fieldGeneratorSupplementalTrackInfos("field \"SupplementalTrackInfos\" of the MusicInformationNugget class", ignore_extras), fieldGeneratorUserRequestedAll("field \"UserRequestedAll\" of the MusicInformationNugget class"), fieldGeneratorEntitySpecificationType("field \"EntitySpecificationType\" of the MusicInformationNugget class"), fieldGeneratorMusicThirdParty("field \"MusicThirdParty\" of the MusicInformationNugget class", ignore_extras), fieldGeneratorListPosition("field \"ListPosition\" of the MusicInformationNugget class"), fieldGeneratorErrors("field \"Errors\" of the MusicInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"MusicNuggetKind\" of the MusicInformationNugget class")
          {
            set_what("the MusicInformationNugget class");
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
            fieldGeneratorUserRequestedAll.reset();
            fieldGeneratorEntitySpecificationType.reset();
            fieldGeneratorMusicThirdParty.reset();
            fieldGeneratorListPosition.reset();
            fieldGeneratorErrors.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static MusicInformationNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* MUSICINFORMATIONNUGGETJSON_H */
