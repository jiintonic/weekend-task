/* file "MusicArtistBaseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICARTISTBASEJSON_H
#define MUSICARTISTBASEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "SoundHoundArtistIDJSON.h"
#include "MusicBuyLinkJSON.h"
#include "MusicThirdPartyIdListJSON.h"
#include "MusicTrackBaseJSON.h"
#include "MusicTrackBaseJSON.h"
#include "MusicAlbumBaseJSON.h"
#include "MusicAlbumBaseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicArtistBaseJSON : public ReferenceCounted
  {
  public:
    enum TypeArtistTypeKnownValues
      {
        ArtistType_Individual,
        ArtistType_Group,
        ArtistType__none
      };
    struct TypeArtistType
      {
        bool in_known_list;
        std::string string_value;
        TypeArtistTypeKnownValues list_value;

        TypeArtistType(void);
        TypeArtistType(const TypeArtistType &other);
        TypeArtistType(TypeArtistTypeKnownValues other);
        bool  operator==(const TypeArtistType &other) const;
        bool  operator!=(const TypeArtistType &other) const;
        bool  operator<(const TypeArtistType &other) const;
        bool  operator>(const TypeArtistType &other) const;
        bool  operator>=(const TypeArtistType &other) const;
        bool  operator<=(const TypeArtistType &other) const;

      };

    static TypeArtistTypeKnownValues  stringToArtistType(const char *chars);
    static const char * stringFromArtistType(TypeArtistTypeKnownValues the_enum);

  private:
    bool flagHasArtistID;
    SoundHoundArtistIDJSON * storeArtistID;
    bool flagHasArtistName;
    std::string storeArtistName;
    bool flagHasArtistImageURL;
    std::string storeArtistImageURL;
    bool flagHasBiography;
    std::string storeBiography;
    bool flagHasBirthPlace;
    std::string storeBirthPlace;
    bool flagHasBirthDate;
    std::string storeBirthDate;
    bool flagHasDeathPlace;
    std::string storeDeathPlace;
    bool flagHasDeathDate;
    std::string storeDeathDate;
    bool flagHasArtistType;
    TypeArtistType storeArtistType;
    bool flagHasBuyLinks;
    std::vector< MusicBuyLinkJSON * > storeBuyLinks;
    bool flagHasMusicThirdPartyIds;
    std::vector< MusicThirdPartyIdListJSON * > storeMusicThirdPartyIds;
    bool flagHasStyles;
    std::vector< std::string > storeStyles;
    bool flagHasEarliestTrack;
    MusicTrackBaseJSON * storeEarliestTrack;
    bool flagHasLatestTrack;
    MusicTrackBaseJSON * storeLatestTrack;
    bool flagHasEarliestAlbum;
    MusicAlbumBaseJSON * storeEarliestAlbum;
    bool flagHasLatestAlbum;
    MusicAlbumBaseJSON * storeLatestAlbum;

    MusicArtistBaseJSON(const MusicArtistBaseJSON &);
    MusicArtistBaseJSON & operator=(const MusicArtistBaseJSON &other);

    void  fromJSONArtistID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistImageURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBiography(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBirthPlace(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBirthDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeathPlace(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeathDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBuyLinks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicThirdPartyIds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStyles(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEarliestTrack(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatestTrack(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEarliestAlbum(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatestAlbum(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicArtistBaseJSON(void);
    virtual ~MusicArtistBaseJSON(void);
    bool  hasArtistID(void) const;
    SoundHoundArtistIDJSON *  getArtistID(void);
    const SoundHoundArtistIDJSON *  getArtistID(void) const;
    uint64_t  getArtistIDValue(void);
    const uint64_t  getArtistIDValue(void) const;
    bool  hasArtistName(void) const;
    std::string  getArtistName(void);
    const std::string  getArtistName(void) const;
    bool  hasArtistImageURL(void) const;
    std::string  getArtistImageURL(void);
    const std::string  getArtistImageURL(void) const;
    bool  hasBiography(void) const;
    std::string  getBiography(void);
    const std::string  getBiography(void) const;
    bool  hasBirthPlace(void) const;
    std::string  getBirthPlace(void);
    const std::string  getBirthPlace(void) const;
    bool  hasBirthDate(void) const;
    std::string  getBirthDate(void);
    const std::string  getBirthDate(void) const;
    bool  hasDeathPlace(void) const;
    std::string  getDeathPlace(void);
    const std::string  getDeathPlace(void) const;
    bool  hasDeathDate(void) const;
    std::string  getDeathDate(void);
    const std::string  getDeathDate(void) const;
    bool  hasArtistType(void) const;
    TypeArtistType  getArtistType(void);
    const TypeArtistType  getArtistType(void) const;
    const char * getArtistTypeAsChars(void) const;
    std::string  getArtistTypeAsString(void) const;
    bool  hasBuyLinks(void) const;
    size_t  countOfBuyLinks(void) const;
    MusicBuyLinkJSON *  elementOfBuyLinks(size_t element_num);
    const MusicBuyLinkJSON *  elementOfBuyLinks(size_t element_num) const;
    std::vector< MusicBuyLinkJSON * >  getBuyLinks(void);
    const std::vector< MusicBuyLinkJSON * >  getBuyLinks(void) const;
    bool  hasMusicThirdPartyIds(void) const;
    size_t  countOfMusicThirdPartyIds(void) const;
    MusicThirdPartyIdListJSON *  elementOfMusicThirdPartyIds(size_t element_num);
    const MusicThirdPartyIdListJSON *  elementOfMusicThirdPartyIds(size_t element_num) const;
    std::vector< MusicThirdPartyIdListJSON * >  getMusicThirdPartyIds(void);
    const std::vector< MusicThirdPartyIdListJSON * >  getMusicThirdPartyIds(void) const;
    bool  hasStyles(void) const;
    size_t  countOfStyles(void) const;
    std::string  elementOfStyles(size_t element_num);
    const std::string  elementOfStyles(size_t element_num) const;
    std::vector< std::string >  getStyles(void);
    const std::vector< std::string >  getStyles(void) const;
    bool  hasEarliestTrack(void) const;
    MusicTrackBaseJSON *  getEarliestTrack(void);
    const MusicTrackBaseJSON *  getEarliestTrack(void) const;
    bool  hasLatestTrack(void) const;
    MusicTrackBaseJSON *  getLatestTrack(void);
    const MusicTrackBaseJSON *  getLatestTrack(void) const;
    bool  hasEarliestAlbum(void) const;
    MusicAlbumBaseJSON *  getEarliestAlbum(void);
    const MusicAlbumBaseJSON *  getEarliestAlbum(void) const;
    bool  hasLatestAlbum(void) const;
    MusicAlbumBaseJSON *  getLatestAlbum(void);
    const MusicAlbumBaseJSON *  getLatestAlbum(void) const;


    void setArtistID(SoundHoundArtistIDJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasArtistID)
          {
            storeArtistID->remove_reference();
          }
        flagHasArtistID = true;
        storeArtistID = new_value;
      }
    void setArtistID(uint64_t new_value)
      {
        setArtistID(new SoundHoundArtistIDJSON(new_value));
      }
    void unsetArtistID(void)
      {
        if (flagHasArtistID)
          {
            storeArtistID->remove_reference();
          }
        flagHasArtistID = false;
      }
    void setArtistName(std::string new_value)
      {
        flagHasArtistName = true;
        storeArtistName = new_value;
      }
    void unsetArtistName(void)
      {
        flagHasArtistName = false;
      }
    void setArtistImageURL(std::string new_value)
      {
        flagHasArtistImageURL = true;
        storeArtistImageURL = new_value;
      }
    void unsetArtistImageURL(void)
      {
        flagHasArtistImageURL = false;
      }
    void setBiography(std::string new_value)
      {
        flagHasBiography = true;
        storeBiography = new_value;
      }
    void unsetBiography(void)
      {
        flagHasBiography = false;
      }
    void setBirthPlace(std::string new_value)
      {
        flagHasBirthPlace = true;
        storeBirthPlace = new_value;
      }
    void unsetBirthPlace(void)
      {
        flagHasBirthPlace = false;
      }
    void setBirthDate(std::string new_value)
      {
        flagHasBirthDate = true;
        storeBirthDate = new_value;
      }
    void unsetBirthDate(void)
      {
        flagHasBirthDate = false;
      }
    void setDeathPlace(std::string new_value)
      {
        flagHasDeathPlace = true;
        storeDeathPlace = new_value;
      }
    void unsetDeathPlace(void)
      {
        flagHasDeathPlace = false;
      }
    void setDeathDate(std::string new_value)
      {
        flagHasDeathDate = true;
        storeDeathDate = new_value;
      }
    void unsetDeathDate(void)
      {
        flagHasDeathDate = false;
      }
    void setArtistType(TypeArtistType new_value)
      {
        flagHasArtistType = true;
        storeArtistType = new_value;
      }
    void setArtistType(const char *chars)
      {
        TypeArtistTypeKnownValues known = stringToArtistType(chars);
        TypeArtistType new_value;
        if (known == ArtistType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setArtistType(new_value);
      }
    void setArtistType(std::string the_string)
      {
        setArtistType(the_string.c_str());
      }
    void setArtistType(TypeArtistTypeKnownValues new_value)
      {
        TypeArtistType new_full_value;
        assert(new_value != ArtistType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setArtistType(new_full_value);
      }
    void unsetArtistType(void)
      {
        flagHasArtistType = false;
      }
    void initBuyLinks(void)
      {
        if (flagHasBuyLinks)
          {
            for (size_t num3 = 0; num3 < storeBuyLinks.size(); ++num3)
              {
                storeBuyLinks[num3]->remove_reference();
              }
          }
        flagHasBuyLinks = true;
        storeBuyLinks.clear();
      }
    void appendBuyLinks(MusicBuyLinkJSON * to_append)
      {
        if (!flagHasBuyLinks)
          {
            flagHasBuyLinks = true;
            storeBuyLinks.clear();
          }
        assert(flagHasBuyLinks);
        to_append->add_reference();
        storeBuyLinks.push_back(to_append);
      }
    void unsetBuyLinks(void)
      {
        if (flagHasBuyLinks)
          {
            for (size_t num4 = 0; num4 < storeBuyLinks.size(); ++num4)
              {
                storeBuyLinks[num4]->remove_reference();
              }
          }
        flagHasBuyLinks = false;
        storeBuyLinks.clear();
      }
    void initMusicThirdPartyIds(void)
      {
        if (flagHasMusicThirdPartyIds)
          {
            for (size_t num5 = 0; num5 < storeMusicThirdPartyIds.size(); ++num5)
              {
                storeMusicThirdPartyIds[num5]->remove_reference();
              }
          }
        flagHasMusicThirdPartyIds = true;
        storeMusicThirdPartyIds.clear();
      }
    void appendMusicThirdPartyIds(MusicThirdPartyIdListJSON * to_append)
      {
        if (!flagHasMusicThirdPartyIds)
          {
            flagHasMusicThirdPartyIds = true;
            storeMusicThirdPartyIds.clear();
          }
        assert(flagHasMusicThirdPartyIds);
        to_append->add_reference();
        storeMusicThirdPartyIds.push_back(to_append);
      }
    void unsetMusicThirdPartyIds(void)
      {
        if (flagHasMusicThirdPartyIds)
          {
            for (size_t num6 = 0; num6 < storeMusicThirdPartyIds.size(); ++num6)
              {
                storeMusicThirdPartyIds[num6]->remove_reference();
              }
          }
        flagHasMusicThirdPartyIds = false;
        storeMusicThirdPartyIds.clear();
      }
    void initStyles(void)
      {
        flagHasStyles = true;
        storeStyles.clear();
      }
    void appendStyles(std::string to_append)
      {
        if (!flagHasStyles)
          {
            flagHasStyles = true;
            storeStyles.clear();
          }
        assert(flagHasStyles);
        storeStyles.push_back(to_append);
      }
    void unsetStyles(void)
      {
        flagHasStyles = false;
        storeStyles.clear();
      }
    void setEarliestTrack(MusicTrackBaseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEarliestTrack)
          {
            storeEarliestTrack->remove_reference();
          }
        flagHasEarliestTrack = true;
        storeEarliestTrack = new_value;
      }
    void unsetEarliestTrack(void)
      {
        if (flagHasEarliestTrack)
          {
            storeEarliestTrack->remove_reference();
          }
        flagHasEarliestTrack = false;
      }
    void setLatestTrack(MusicTrackBaseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLatestTrack)
          {
            storeLatestTrack->remove_reference();
          }
        flagHasLatestTrack = true;
        storeLatestTrack = new_value;
      }
    void unsetLatestTrack(void)
      {
        if (flagHasLatestTrack)
          {
            storeLatestTrack->remove_reference();
          }
        flagHasLatestTrack = false;
      }
    void setEarliestAlbum(MusicAlbumBaseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEarliestAlbum)
          {
            storeEarliestAlbum->remove_reference();
          }
        flagHasEarliestAlbum = true;
        storeEarliestAlbum = new_value;
      }
    void unsetEarliestAlbum(void)
      {
        if (flagHasEarliestAlbum)
          {
            storeEarliestAlbum->remove_reference();
          }
        flagHasEarliestAlbum = false;
      }
    void setLatestAlbum(MusicAlbumBaseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLatestAlbum)
          {
            storeLatestAlbum->remove_reference();
          }
        flagHasLatestAlbum = true;
        storeLatestAlbum = new_value;
      }
    void unsetLatestAlbum(void)
      {
        if (flagHasLatestAlbum)
          {
            storeLatestAlbum->remove_reference();
          }
        flagHasLatestAlbum = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasArtistID)
          {
            handler->start_pair("ArtistID");
            storeArtistID->write_as_json(handler);
          }
        if (flagHasArtistName)
          {
            handler->start_pair("ArtistName");
            handler->string_value(storeArtistName);
          }
        if (flagHasArtistImageURL)
          {
            handler->start_pair("ArtistImageURL");
            handler->string_value(storeArtistImageURL);
          }
        if (flagHasBiography)
          {
            handler->start_pair("Biography");
            handler->string_value(storeBiography);
          }
        if (flagHasBirthPlace)
          {
            handler->start_pair("BirthPlace");
            handler->string_value(storeBirthPlace);
          }
        if (flagHasBirthDate)
          {
            handler->start_pair("BirthDate");
            handler->string_value(storeBirthDate);
          }
        if (flagHasDeathPlace)
          {
            handler->start_pair("DeathPlace");
            handler->string_value(storeDeathPlace);
          }
        if (flagHasDeathDate)
          {
            handler->start_pair("DeathDate");
            handler->string_value(storeDeathDate);
          }
        if (flagHasArtistType)
          {
            handler->start_pair("ArtistType");
            if (storeArtistType.in_known_list)
              {
                switch (storeArtistType.list_value)
                  {
                    case ArtistType_Individual:
                        handler->string_value("Individual");
                        break;
                    case ArtistType_Group:
                        handler->string_value("Group");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeArtistType.string_value);
              }
          }
        if (flagHasBuyLinks)
          {
            handler->start_pair("BuyLinks");
            assert(storeBuyLinks.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeBuyLinks.size(); ++num1)
              {
                storeBuyLinks[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasMusicThirdPartyIds)
          {
            handler->start_pair("MusicThirdPartyIds");
            assert(storeMusicThirdPartyIds.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeMusicThirdPartyIds.size(); ++num2)
              {
                storeMusicThirdPartyIds[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasStyles)
          {
            handler->start_pair("Styles");
            assert(storeStyles.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeStyles.size(); ++num3)
              {
                handler->string_value(storeStyles[num3]);
              }
            handler->finish_array();
          }
        if (flagHasEarliestTrack)
          {
            handler->start_pair("EarliestTrack");
            storeEarliestTrack->write_as_json(handler);
          }
        if (flagHasLatestTrack)
          {
            handler->start_pair("LatestTrack");
            storeLatestTrack->write_as_json(handler);
          }
        if (flagHasEarliestAlbum)
          {
            handler->start_pair("EarliestAlbum");
            storeEarliestAlbum->write_as_json(handler);
          }
        if (flagHasLatestAlbum)
          {
            handler->start_pair("LatestAlbum");
            storeLatestAlbum->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicArtistBaseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicArtistBaseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicArtistBaseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicArtistBaseJSON>, MusicArtistBaseJSON *, bool> generator("Type MusicArtistBase", ignore_extras);
            parse_json_value(text, "Text for MusicArtistBaseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicArtistBaseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicArtistBaseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicArtistBaseJSON>, MusicArtistBaseJSON *, bool> generator("Type MusicArtistBase", ignore_extras);
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
        JSONHoldingGenerator<SoundHoundArtistIDJSON::Generator, RCHandle<SoundHoundArtistIDJSON>, SoundHoundArtistIDJSON *, bool > fieldGeneratorArtistID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistImageURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBiography;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBirthPlace;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBirthDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDeathPlace;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDeathDate;
    class FieldGeneratorArtistType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorArtistType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorArtistType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeArtistTypeKnownValues known = stringToArtistType(result);
                TypeArtistType new_value;
                if (known == ArtistType__none)
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
            virtual void handle_result(TypeArtistType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorArtistType, TypeArtistType, TypeArtistType > fieldGeneratorArtistType;
        JSONHoldingArrayGenerator<MusicBuyLinkJSON::Generator, RCHandle<MusicBuyLinkJSON>, MusicBuyLinkJSON *, bool > fieldGeneratorBuyLinks;
        JSONHoldingArrayGenerator<MusicThirdPartyIdListJSON::Generator, RCHandle<MusicThirdPartyIdListJSON>, MusicThirdPartyIdListJSON *, bool > fieldGeneratorMusicThirdPartyIds;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStyles;
        JSONHoldingGenerator<MusicTrackBaseJSON::Generator, RCHandle<MusicTrackBaseJSON>, MusicTrackBaseJSON *, bool > fieldGeneratorEarliestTrack;
        JSONHoldingGenerator<MusicTrackBaseJSON::Generator, RCHandle<MusicTrackBaseJSON>, MusicTrackBaseJSON *, bool > fieldGeneratorLatestTrack;
        JSONHoldingGenerator<MusicAlbumBaseJSON::Generator, RCHandle<MusicAlbumBaseJSON>, MusicAlbumBaseJSON *, bool > fieldGeneratorEarliestAlbum;
        JSONHoldingGenerator<MusicAlbumBaseJSON::Generator, RCHandle<MusicAlbumBaseJSON>, MusicAlbumBaseJSON *, bool > fieldGeneratorLatestAlbum;


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
            MusicArtistBaseJSON *result = new MusicArtistBaseJSON();
            assert(result != NULL);
            RCHandle<MusicArtistBaseJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicArtistBaseJSON *result)
          {
            if (fieldGeneratorArtistID.have_value)
              {
                result->setArtistID(fieldGeneratorArtistID.value.referenced());
                fieldGeneratorArtistID.have_value = false;
              }
            if (fieldGeneratorArtistName.have_value)
              {
                result->setArtistName(fieldGeneratorArtistName.value);
                fieldGeneratorArtistName.have_value = false;
              }
            if (fieldGeneratorArtistImageURL.have_value)
              {
                result->setArtistImageURL(fieldGeneratorArtistImageURL.value);
                fieldGeneratorArtistImageURL.have_value = false;
              }
            if (fieldGeneratorBiography.have_value)
              {
                result->setBiography(fieldGeneratorBiography.value);
                fieldGeneratorBiography.have_value = false;
              }
            if (fieldGeneratorBirthPlace.have_value)
              {
                result->setBirthPlace(fieldGeneratorBirthPlace.value);
                fieldGeneratorBirthPlace.have_value = false;
              }
            if (fieldGeneratorBirthDate.have_value)
              {
                result->setBirthDate(fieldGeneratorBirthDate.value);
                fieldGeneratorBirthDate.have_value = false;
              }
            if (fieldGeneratorDeathPlace.have_value)
              {
                result->setDeathPlace(fieldGeneratorDeathPlace.value);
                fieldGeneratorDeathPlace.have_value = false;
              }
            if (fieldGeneratorDeathDate.have_value)
              {
                result->setDeathDate(fieldGeneratorDeathDate.value);
                fieldGeneratorDeathDate.have_value = false;
              }
            if (fieldGeneratorArtistType.have_value)
              {
                result->setArtistType(fieldGeneratorArtistType.value);
                fieldGeneratorArtistType.have_value = false;
              }
            if (fieldGeneratorBuyLinks.have_value)
              {
                result->initBuyLinks();
                size_t count = fieldGeneratorBuyLinks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendBuyLinks(fieldGeneratorBuyLinks.value[num].referenced());
                  }
                fieldGeneratorBuyLinks.value.clear();
                fieldGeneratorBuyLinks.have_value = false;
              }
            if (fieldGeneratorMusicThirdPartyIds.have_value)
              {
                result->initMusicThirdPartyIds();
                size_t count = fieldGeneratorMusicThirdPartyIds.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMusicThirdPartyIds(fieldGeneratorMusicThirdPartyIds.value[num].referenced());
                  }
                fieldGeneratorMusicThirdPartyIds.value.clear();
                fieldGeneratorMusicThirdPartyIds.have_value = false;
              }
            if (fieldGeneratorStyles.have_value)
              {
                result->initStyles();
                size_t count = fieldGeneratorStyles.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStyles(fieldGeneratorStyles.value[num]);
                  }
                fieldGeneratorStyles.value.clear();
                fieldGeneratorStyles.have_value = false;
              }
            if (fieldGeneratorEarliestTrack.have_value)
              {
                result->setEarliestTrack(fieldGeneratorEarliestTrack.value.referenced());
                fieldGeneratorEarliestTrack.have_value = false;
              }
            if (fieldGeneratorLatestTrack.have_value)
              {
                result->setLatestTrack(fieldGeneratorLatestTrack.value.referenced());
                fieldGeneratorLatestTrack.have_value = false;
              }
            if (fieldGeneratorEarliestAlbum.have_value)
              {
                result->setEarliestAlbum(fieldGeneratorEarliestAlbum.value.referenced());
                fieldGeneratorEarliestAlbum.have_value = false;
              }
            if (fieldGeneratorLatestAlbum.have_value)
              {
                result->setLatestAlbum(fieldGeneratorLatestAlbum.value.referenced());
                fieldGeneratorLatestAlbum.have_value = false;
              }
          }
        virtual void handle_result(MusicArtistBaseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "rtist", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'I':
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'D':
                                        if (field_name[8] == 0)
                                            return &fieldGeneratorArtistID;
                                        break;
                                    case 'm':
                                        if (strcmp(&(field_name[8]), "ageURL") == 0)
                                            return &fieldGeneratorArtistImageURL;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'N':
                                if (strcmp(&(field_name[7]), "ame") == 0)
                                    return &fieldGeneratorArtistName;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "ype") == 0)
                                    return &fieldGeneratorArtistType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'B':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'o':
                                    if (strcmp(&(field_name[3]), "graphy") == 0)
                                        return &fieldGeneratorBiography;
                                    break;
                                case 'r':
                                    if (strncmp(&(field_name[3]), "th", 2) == 0)
                                      {
                                        switch ((unsigned char)(field_name[5]))
                                          {
                                            case 'D':
                                                if (strcmp(&(field_name[6]), "ate") == 0)
                                                    return &fieldGeneratorBirthDate;
                                                break;
                                            case 'P':
                                                if (strcmp(&(field_name[6]), "lace") == 0)
                                                    return &fieldGeneratorBirthPlace;
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
                        case 'u':
                            if (strcmp(&(field_name[2]), "yLinks") == 0)
                                return &fieldGeneratorBuyLinks;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "eath", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[6]), "ate") == 0)
                                    return &fieldGeneratorDeathDate;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[6]), "lace") == 0)
                                    return &fieldGeneratorDeathPlace;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strncmp(&(field_name[1]), "arliest", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[9]), "lbum") == 0)
                                    return &fieldGeneratorEarliestAlbum;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[9]), "rack") == 0)
                                    return &fieldGeneratorEarliestTrack;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "atest", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[7]), "lbum") == 0)
                                    return &fieldGeneratorLatestAlbum;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "rack") == 0)
                                    return &fieldGeneratorLatestTrack;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "usicThirdPartyIds") == 0)
                        return &fieldGeneratorMusicThirdPartyIds;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tyles") == 0)
                        return &fieldGeneratorStyles;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorArtistID("field \"ArtistID\" of the MusicArtistBase class", ignore_extras), fieldGeneratorArtistName("field \"ArtistName\" of the MusicArtistBase class"), fieldGeneratorArtistImageURL("field \"ArtistImageURL\" of the MusicArtistBase class"), fieldGeneratorBiography("field \"Biography\" of the MusicArtistBase class"), fieldGeneratorBirthPlace("field \"BirthPlace\" of the MusicArtistBase class"), fieldGeneratorBirthDate("field \"BirthDate\" of the MusicArtistBase class"), fieldGeneratorDeathPlace("field \"DeathPlace\" of the MusicArtistBase class"), fieldGeneratorDeathDate("field \"DeathDate\" of the MusicArtistBase class"), fieldGeneratorArtistType("field \"ArtistType\" of the MusicArtistBase class"), fieldGeneratorBuyLinks("field \"BuyLinks\" of the MusicArtistBase class", ignore_extras), fieldGeneratorMusicThirdPartyIds("field \"MusicThirdPartyIds\" of the MusicArtistBase class", ignore_extras), fieldGeneratorStyles("field \"Styles\" of the MusicArtistBase class"), fieldGeneratorEarliestTrack("field \"EarliestTrack\" of the MusicArtistBase class", ignore_extras), fieldGeneratorLatestTrack("field \"LatestTrack\" of the MusicArtistBase class", ignore_extras), fieldGeneratorEarliestAlbum("field \"EarliestAlbum\" of the MusicArtistBase class", ignore_extras), fieldGeneratorLatestAlbum("field \"LatestAlbum\" of the MusicArtistBase class", ignore_extras)
          {
            set_what("the MusicArtistBase class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArtistID.reset();
            fieldGeneratorArtistName.reset();
            fieldGeneratorArtistImageURL.reset();
            fieldGeneratorBiography.reset();
            fieldGeneratorBirthPlace.reset();
            fieldGeneratorBirthDate.reset();
            fieldGeneratorDeathPlace.reset();
            fieldGeneratorDeathDate.reset();
            fieldGeneratorArtistType.reset();
            fieldGeneratorBuyLinks.reset();
            fieldGeneratorMusicThirdPartyIds.reset();
            fieldGeneratorStyles.reset();
            fieldGeneratorEarliestTrack.reset();
            fieldGeneratorLatestTrack.reset();
            fieldGeneratorEarliestAlbum.reset();
            fieldGeneratorLatestAlbum.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICARTISTBASEJSON_H */
