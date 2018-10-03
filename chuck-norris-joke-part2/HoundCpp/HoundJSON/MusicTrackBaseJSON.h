/* file "MusicTrackBaseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICTRACKBASEJSON_H
#define MUSICTRACKBASEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "SoundHoundTrackIDJSON.h"
#include "SoundHoundAlbumIDJSON.h"
#include "SoundHoundArtistIDJSON.h"
#include "MusicBuyLinkJSON.h"
#include "MusicThirdPartyIdListJSON.h"
#include "MusicPreviewLinkJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicTrackBaseJSON : public ReferenceCounted
  {
  private:
    bool flagHasTrackID;
    SoundHoundTrackIDJSON * storeTrackID;
    bool flagHasAlbumID;
    SoundHoundAlbumIDJSON * storeAlbumID;
    bool flagHasArtistID;
    SoundHoundArtistIDJSON * storeArtistID;
    bool flagHasTrackName;
    std::string storeTrackName;
    bool flagHasAlbumName;
    std::string storeAlbumName;
    bool flagHasArtistName;
    std::string storeArtistName;
    bool flagHasAlbumImageURL;
    std::string storeAlbumImageURL;
    bool flagHasArtistImageURL;
    std::string storeArtistImageURL;
    bool flagHasAlbumDate;
    std::string storeAlbumDate;
    bool flagHasAudioPreviewURL;
    std::string storeAudioPreviewURL;
    bool flagHasAutoPlayPreview;
    bool storeAutoPlayPreview;
    bool flagHasAutoPlay;
    bool storeAutoPlay;
    bool flagHasLyrics;
    std::string storeLyrics;
    bool flagHasLyricsURL;
    std::string storeLyricsURL;
    bool flagHasBuyLinks;
    std::vector< MusicBuyLinkJSON * > storeBuyLinks;
    bool flagHasMusicThirdPartyIds;
    std::vector< MusicThirdPartyIdListJSON * > storeMusicThirdPartyIds;
    bool flagHasPreviewLinks;
    std::vector< MusicPreviewLinkJSON * > storePreviewLinks;

    MusicTrackBaseJSON(const MusicTrackBaseJSON &);
    MusicTrackBaseJSON & operator=(const MusicTrackBaseJSON &other);

    void  fromJSONTrackID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumImageURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistImageURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAudioPreviewURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoPlayPreview(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoPlay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLyrics(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLyricsURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBuyLinks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicThirdPartyIds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreviewLinks(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicTrackBaseJSON(void);
    virtual ~MusicTrackBaseJSON(void);
    bool  hasTrackID(void) const;
    SoundHoundTrackIDJSON *  getTrackID(void);
    const SoundHoundTrackIDJSON *  getTrackID(void) const;
    uint64_t  getTrackIDValue(void);
    const uint64_t  getTrackIDValue(void) const;
    bool  hasAlbumID(void) const;
    SoundHoundAlbumIDJSON *  getAlbumID(void);
    const SoundHoundAlbumIDJSON *  getAlbumID(void) const;
    uint64_t  getAlbumIDValue(void);
    const uint64_t  getAlbumIDValue(void) const;
    bool  hasArtistID(void) const;
    SoundHoundArtistIDJSON *  getArtistID(void);
    const SoundHoundArtistIDJSON *  getArtistID(void) const;
    uint64_t  getArtistIDValue(void);
    const uint64_t  getArtistIDValue(void) const;
    bool  hasTrackName(void) const;
    std::string  getTrackName(void);
    const std::string  getTrackName(void) const;
    bool  hasAlbumName(void) const;
    std::string  getAlbumName(void);
    const std::string  getAlbumName(void) const;
    bool  hasArtistName(void) const;
    std::string  getArtistName(void);
    const std::string  getArtistName(void) const;
    bool  hasAlbumImageURL(void) const;
    std::string  getAlbumImageURL(void);
    const std::string  getAlbumImageURL(void) const;
    bool  hasArtistImageURL(void) const;
    std::string  getArtistImageURL(void);
    const std::string  getArtistImageURL(void) const;
    bool  hasAlbumDate(void) const;
    std::string  getAlbumDate(void);
    const std::string  getAlbumDate(void) const;
    bool  hasAudioPreviewURL(void) const;
    std::string  getAudioPreviewURL(void);
    const std::string  getAudioPreviewURL(void) const;
    bool  hasAutoPlayPreview(void) const;
    bool  getAutoPlayPreview(void);
    const bool  getAutoPlayPreview(void) const;
    bool  hasAutoPlay(void) const;
    bool  getAutoPlay(void);
    const bool  getAutoPlay(void) const;
    bool  hasLyrics(void) const;
    std::string  getLyrics(void);
    const std::string  getLyrics(void) const;
    bool  hasLyricsURL(void) const;
    std::string  getLyricsURL(void);
    const std::string  getLyricsURL(void) const;
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
    bool  hasPreviewLinks(void) const;
    size_t  countOfPreviewLinks(void) const;
    MusicPreviewLinkJSON *  elementOfPreviewLinks(size_t element_num);
    const MusicPreviewLinkJSON *  elementOfPreviewLinks(size_t element_num) const;
    std::vector< MusicPreviewLinkJSON * >  getPreviewLinks(void);
    const std::vector< MusicPreviewLinkJSON * >  getPreviewLinks(void) const;


    void setTrackID(SoundHoundTrackIDJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTrackID)
          {
            storeTrackID->remove_reference();
          }
        flagHasTrackID = true;
        storeTrackID = new_value;
      }
    void setTrackID(uint64_t new_value)
      {
        setTrackID(new SoundHoundTrackIDJSON(new_value));
      }
    void unsetTrackID(void)
      {
        if (flagHasTrackID)
          {
            storeTrackID->remove_reference();
          }
        flagHasTrackID = false;
      }
    void setAlbumID(SoundHoundAlbumIDJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAlbumID)
          {
            storeAlbumID->remove_reference();
          }
        flagHasAlbumID = true;
        storeAlbumID = new_value;
      }
    void setAlbumID(uint64_t new_value)
      {
        setAlbumID(new SoundHoundAlbumIDJSON(new_value));
      }
    void unsetAlbumID(void)
      {
        if (flagHasAlbumID)
          {
            storeAlbumID->remove_reference();
          }
        flagHasAlbumID = false;
      }
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
    void setTrackName(std::string new_value)
      {
        flagHasTrackName = true;
        storeTrackName = new_value;
      }
    void unsetTrackName(void)
      {
        flagHasTrackName = false;
      }
    void setAlbumName(std::string new_value)
      {
        flagHasAlbumName = true;
        storeAlbumName = new_value;
      }
    void unsetAlbumName(void)
      {
        flagHasAlbumName = false;
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
    void setAlbumImageURL(std::string new_value)
      {
        flagHasAlbumImageURL = true;
        storeAlbumImageURL = new_value;
      }
    void unsetAlbumImageURL(void)
      {
        flagHasAlbumImageURL = false;
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
    void setAlbumDate(std::string new_value)
      {
        flagHasAlbumDate = true;
        storeAlbumDate = new_value;
      }
    void unsetAlbumDate(void)
      {
        flagHasAlbumDate = false;
      }
    void setAudioPreviewURL(std::string new_value)
      {
        flagHasAudioPreviewURL = true;
        storeAudioPreviewURL = new_value;
      }
    void unsetAudioPreviewURL(void)
      {
        flagHasAudioPreviewURL = false;
      }
    void setAutoPlayPreview(bool new_value)
      {
        flagHasAutoPlayPreview = true;
        storeAutoPlayPreview = new_value;
      }
    void unsetAutoPlayPreview(void)
      {
        flagHasAutoPlayPreview = false;
      }
    void setAutoPlay(bool new_value)
      {
        flagHasAutoPlay = true;
        storeAutoPlay = new_value;
      }
    void unsetAutoPlay(void)
      {
        flagHasAutoPlay = false;
      }
    void setLyrics(std::string new_value)
      {
        flagHasLyrics = true;
        storeLyrics = new_value;
      }
    void unsetLyrics(void)
      {
        flagHasLyrics = false;
      }
    void setLyricsURL(std::string new_value)
      {
        flagHasLyricsURL = true;
        storeLyricsURL = new_value;
      }
    void unsetLyricsURL(void)
      {
        flagHasLyricsURL = false;
      }
    void initBuyLinks(void)
      {
        if (flagHasBuyLinks)
          {
            for (size_t num4 = 0; num4 < storeBuyLinks.size(); ++num4)
              {
                storeBuyLinks[num4]->remove_reference();
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
            for (size_t num5 = 0; num5 < storeBuyLinks.size(); ++num5)
              {
                storeBuyLinks[num5]->remove_reference();
              }
          }
        flagHasBuyLinks = false;
        storeBuyLinks.clear();
      }
    void initMusicThirdPartyIds(void)
      {
        if (flagHasMusicThirdPartyIds)
          {
            for (size_t num6 = 0; num6 < storeMusicThirdPartyIds.size(); ++num6)
              {
                storeMusicThirdPartyIds[num6]->remove_reference();
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
            for (size_t num7 = 0; num7 < storeMusicThirdPartyIds.size(); ++num7)
              {
                storeMusicThirdPartyIds[num7]->remove_reference();
              }
          }
        flagHasMusicThirdPartyIds = false;
        storeMusicThirdPartyIds.clear();
      }
    void initPreviewLinks(void)
      {
        if (flagHasPreviewLinks)
          {
            for (size_t num8 = 0; num8 < storePreviewLinks.size(); ++num8)
              {
                storePreviewLinks[num8]->remove_reference();
              }
          }
        flagHasPreviewLinks = true;
        storePreviewLinks.clear();
      }
    void appendPreviewLinks(MusicPreviewLinkJSON * to_append)
      {
        if (!flagHasPreviewLinks)
          {
            flagHasPreviewLinks = true;
            storePreviewLinks.clear();
          }
        assert(flagHasPreviewLinks);
        to_append->add_reference();
        storePreviewLinks.push_back(to_append);
      }
    void unsetPreviewLinks(void)
      {
        if (flagHasPreviewLinks)
          {
            for (size_t num9 = 0; num9 < storePreviewLinks.size(); ++num9)
              {
                storePreviewLinks[num9]->remove_reference();
              }
          }
        flagHasPreviewLinks = false;
        storePreviewLinks.clear();
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasTrackID)
          {
            handler->start_pair("TrackID");
            storeTrackID->write_as_json(handler);
          }
        if (flagHasAlbumID)
          {
            handler->start_pair("AlbumID");
            storeAlbumID->write_as_json(handler);
          }
        if (flagHasArtistID)
          {
            handler->start_pair("ArtistID");
            storeArtistID->write_as_json(handler);
          }
        if (flagHasTrackName)
          {
            handler->start_pair("TrackName");
            handler->string_value(storeTrackName);
          }
        if (flagHasAlbumName)
          {
            handler->start_pair("AlbumName");
            handler->string_value(storeAlbumName);
          }
        if (flagHasArtistName)
          {
            handler->start_pair("ArtistName");
            handler->string_value(storeArtistName);
          }
        if (flagHasAlbumImageURL)
          {
            handler->start_pair("AlbumImageURL");
            handler->string_value(storeAlbumImageURL);
          }
        if (flagHasArtistImageURL)
          {
            handler->start_pair("ArtistImageURL");
            handler->string_value(storeArtistImageURL);
          }
        if (flagHasAlbumDate)
          {
            handler->start_pair("AlbumDate");
            handler->string_value(storeAlbumDate);
          }
        if (flagHasAudioPreviewURL)
          {
            handler->start_pair("AudioPreviewURL");
            handler->string_value(storeAudioPreviewURL);
          }
        if (flagHasAutoPlayPreview)
          {
            handler->start_pair("AutoPlayPreview");
            handler->boolean_value(storeAutoPlayPreview);
          }
        if (flagHasAutoPlay)
          {
            handler->start_pair("AutoPlay");
            handler->boolean_value(storeAutoPlay);
          }
        if (flagHasLyrics)
          {
            handler->start_pair("Lyrics");
            handler->string_value(storeLyrics);
          }
        if (flagHasLyricsURL)
          {
            handler->start_pair("LyricsURL");
            handler->string_value(storeLyricsURL);
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
        if (flagHasPreviewLinks)
          {
            handler->start_pair("PreviewLinks");
            assert(storePreviewLinks.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storePreviewLinks.size(); ++num3)
              {
                storePreviewLinks[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicTrackBaseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicTrackBaseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicTrackBaseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackBaseJSON>, MusicTrackBaseJSON *, bool> generator("Type MusicTrackBase", ignore_extras);
            parse_json_value(text, "Text for MusicTrackBaseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicTrackBaseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicTrackBaseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackBaseJSON>, MusicTrackBaseJSON *, bool> generator("Type MusicTrackBase", ignore_extras);
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
        JSONHoldingGenerator<SoundHoundTrackIDJSON::Generator, RCHandle<SoundHoundTrackIDJSON>, SoundHoundTrackIDJSON *, bool > fieldGeneratorTrackID;
        JSONHoldingGenerator<SoundHoundAlbumIDJSON::Generator, RCHandle<SoundHoundAlbumIDJSON>, SoundHoundAlbumIDJSON *, bool > fieldGeneratorAlbumID;
        JSONHoldingGenerator<SoundHoundArtistIDJSON::Generator, RCHandle<SoundHoundArtistIDJSON>, SoundHoundArtistIDJSON *, bool > fieldGeneratorArtistID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTrackName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumImageURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistImageURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAudioPreviewURL;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoPlayPreview;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoPlay;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLyrics;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLyricsURL;
        JSONHoldingArrayGenerator<MusicBuyLinkJSON::Generator, RCHandle<MusicBuyLinkJSON>, MusicBuyLinkJSON *, bool > fieldGeneratorBuyLinks;
        JSONHoldingArrayGenerator<MusicThirdPartyIdListJSON::Generator, RCHandle<MusicThirdPartyIdListJSON>, MusicThirdPartyIdListJSON *, bool > fieldGeneratorMusicThirdPartyIds;
        JSONHoldingArrayGenerator<MusicPreviewLinkJSON::Generator, RCHandle<MusicPreviewLinkJSON>, MusicPreviewLinkJSON *, bool > fieldGeneratorPreviewLinks;


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
            MusicTrackBaseJSON *result = new MusicTrackBaseJSON();
            assert(result != NULL);
            RCHandle<MusicTrackBaseJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicTrackBaseJSON *result)
          {
            if (fieldGeneratorTrackID.have_value)
              {
                result->setTrackID(fieldGeneratorTrackID.value.referenced());
                fieldGeneratorTrackID.have_value = false;
              }
            if (fieldGeneratorAlbumID.have_value)
              {
                result->setAlbumID(fieldGeneratorAlbumID.value.referenced());
                fieldGeneratorAlbumID.have_value = false;
              }
            if (fieldGeneratorArtistID.have_value)
              {
                result->setArtistID(fieldGeneratorArtistID.value.referenced());
                fieldGeneratorArtistID.have_value = false;
              }
            if (fieldGeneratorTrackName.have_value)
              {
                result->setTrackName(fieldGeneratorTrackName.value);
                fieldGeneratorTrackName.have_value = false;
              }
            if (fieldGeneratorAlbumName.have_value)
              {
                result->setAlbumName(fieldGeneratorAlbumName.value);
                fieldGeneratorAlbumName.have_value = false;
              }
            if (fieldGeneratorArtistName.have_value)
              {
                result->setArtistName(fieldGeneratorArtistName.value);
                fieldGeneratorArtistName.have_value = false;
              }
            if (fieldGeneratorAlbumImageURL.have_value)
              {
                result->setAlbumImageURL(fieldGeneratorAlbumImageURL.value);
                fieldGeneratorAlbumImageURL.have_value = false;
              }
            if (fieldGeneratorArtistImageURL.have_value)
              {
                result->setArtistImageURL(fieldGeneratorArtistImageURL.value);
                fieldGeneratorArtistImageURL.have_value = false;
              }
            if (fieldGeneratorAlbumDate.have_value)
              {
                result->setAlbumDate(fieldGeneratorAlbumDate.value);
                fieldGeneratorAlbumDate.have_value = false;
              }
            if (fieldGeneratorAudioPreviewURL.have_value)
              {
                result->setAudioPreviewURL(fieldGeneratorAudioPreviewURL.value);
                fieldGeneratorAudioPreviewURL.have_value = false;
              }
            if (fieldGeneratorAutoPlayPreview.have_value)
              {
                result->setAutoPlayPreview(fieldGeneratorAutoPlayPreview.value);
                fieldGeneratorAutoPlayPreview.have_value = false;
              }
            if (fieldGeneratorAutoPlay.have_value)
              {
                result->setAutoPlay(fieldGeneratorAutoPlay.value);
                fieldGeneratorAutoPlay.have_value = false;
              }
            if (fieldGeneratorLyrics.have_value)
              {
                result->setLyrics(fieldGeneratorLyrics.value);
                fieldGeneratorLyrics.have_value = false;
              }
            if (fieldGeneratorLyricsURL.have_value)
              {
                result->setLyricsURL(fieldGeneratorLyricsURL.value);
                fieldGeneratorLyricsURL.have_value = false;
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
            if (fieldGeneratorPreviewLinks.have_value)
              {
                result->initPreviewLinks();
                size_t count = fieldGeneratorPreviewLinks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPreviewLinks(fieldGeneratorPreviewLinks.value[num].referenced());
                  }
                fieldGeneratorPreviewLinks.value.clear();
                fieldGeneratorPreviewLinks.have_value = false;
              }
          }
        virtual void handle_result(MusicTrackBaseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[2]), "bum", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[6]), "ate") == 0)
                                            return &fieldGeneratorAlbumDate;
                                        break;
                                    case 'I':
                                        switch ((unsigned char)(field_name[6]))
                                          {
                                            case 'D':
                                                if (field_name[7] == 0)
                                                    return &fieldGeneratorAlbumID;
                                                break;
                                            case 'm':
                                                if (strcmp(&(field_name[7]), "ageURL") == 0)
                                                    return &fieldGeneratorAlbumImageURL;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'N':
                                        if (strcmp(&(field_name[6]), "ame") == 0)
                                            return &fieldGeneratorAlbumName;
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
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'd':
                                    if (strcmp(&(field_name[3]), "ioPreviewURL") == 0)
                                        return &fieldGeneratorAudioPreviewURL;
                                    break;
                                case 't':
                                    if (strncmp(&(field_name[3]), "oPlay", 5) == 0)
                                      {
                                        switch ((unsigned char)(field_name[8]))
                                          {
                                            case 0:
                                                return &fieldGeneratorAutoPlay;
                                            case 'P':
                                                if (strcmp(&(field_name[9]), "review") == 0)
                                                    return &fieldGeneratorAutoPlayPreview;
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
                case 'B':
                    if (strcmp(&(field_name[1]), "uyLinks") == 0)
                        return &fieldGeneratorBuyLinks;
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "yrics", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 0:
                                return &fieldGeneratorLyrics;
                            case 'U':
                                if (strcmp(&(field_name[7]), "RL") == 0)
                                    return &fieldGeneratorLyricsURL;
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
                case 'P':
                    if (strcmp(&(field_name[1]), "reviewLinks") == 0)
                        return &fieldGeneratorPreviewLinks;
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "rack", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[6]), "D") == 0)
                                    return &fieldGeneratorTrackID;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[6]), "ame") == 0)
                                    return &fieldGeneratorTrackName;
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
        Generator(bool ignore_extras = false) : fieldGeneratorTrackID("field \"TrackID\" of the MusicTrackBase class", ignore_extras), fieldGeneratorAlbumID("field \"AlbumID\" of the MusicTrackBase class", ignore_extras), fieldGeneratorArtistID("field \"ArtistID\" of the MusicTrackBase class", ignore_extras), fieldGeneratorTrackName("field \"TrackName\" of the MusicTrackBase class"), fieldGeneratorAlbumName("field \"AlbumName\" of the MusicTrackBase class"), fieldGeneratorArtistName("field \"ArtistName\" of the MusicTrackBase class"), fieldGeneratorAlbumImageURL("field \"AlbumImageURL\" of the MusicTrackBase class"), fieldGeneratorArtistImageURL("field \"ArtistImageURL\" of the MusicTrackBase class"), fieldGeneratorAlbumDate("field \"AlbumDate\" of the MusicTrackBase class"), fieldGeneratorAudioPreviewURL("field \"AudioPreviewURL\" of the MusicTrackBase class"), fieldGeneratorAutoPlayPreview("field \"AutoPlayPreview\" of the MusicTrackBase class"), fieldGeneratorAutoPlay("field \"AutoPlay\" of the MusicTrackBase class"), fieldGeneratorLyrics("field \"Lyrics\" of the MusicTrackBase class"), fieldGeneratorLyricsURL("field \"LyricsURL\" of the MusicTrackBase class"), fieldGeneratorBuyLinks("field \"BuyLinks\" of the MusicTrackBase class", ignore_extras), fieldGeneratorMusicThirdPartyIds("field \"MusicThirdPartyIds\" of the MusicTrackBase class", ignore_extras), fieldGeneratorPreviewLinks("field \"PreviewLinks\" of the MusicTrackBase class", ignore_extras)
          {
            set_what("the MusicTrackBase class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTrackID.reset();
            fieldGeneratorAlbumID.reset();
            fieldGeneratorArtistID.reset();
            fieldGeneratorTrackName.reset();
            fieldGeneratorAlbumName.reset();
            fieldGeneratorArtistName.reset();
            fieldGeneratorAlbumImageURL.reset();
            fieldGeneratorArtistImageURL.reset();
            fieldGeneratorAlbumDate.reset();
            fieldGeneratorAudioPreviewURL.reset();
            fieldGeneratorAutoPlayPreview.reset();
            fieldGeneratorAutoPlay.reset();
            fieldGeneratorLyrics.reset();
            fieldGeneratorLyricsURL.reset();
            fieldGeneratorBuyLinks.reset();
            fieldGeneratorMusicThirdPartyIds.reset();
            fieldGeneratorPreviewLinks.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICTRACKBASEJSON_H */
