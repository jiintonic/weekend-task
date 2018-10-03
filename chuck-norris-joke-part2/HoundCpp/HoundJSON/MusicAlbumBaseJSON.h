/* file "MusicAlbumBaseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICALBUMBASEJSON_H
#define MUSICALBUMBASEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "SoundHoundAlbumIDJSON.h"
#include "SoundHoundArtistIDJSON.h"
#include "MusicBuyLinkJSON.h"
#include "MusicThirdPartyIdListJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicAlbumBaseJSON : public ReferenceCounted
  {
  private:
    bool flagHasAlbumID;
    SoundHoundAlbumIDJSON * storeAlbumID;
    bool flagHasAlbumName;
    std::string storeAlbumName;
    bool flagHasAlbumImageURL;
    std::string storeAlbumImageURL;
    bool flagHasAlbumDate;
    std::string storeAlbumDate;
    bool flagHasAlbumReview;
    std::string storeAlbumReview;
    bool flagHasArtistName;
    std::string storeArtistName;
    bool flagHasArtistID;
    SoundHoundArtistIDJSON * storeArtistID;
    bool flagHasArtistImageURL;
    std::string storeArtistImageURL;
    bool flagHasBuyLinks;
    std::vector< MusicBuyLinkJSON * > storeBuyLinks;
    bool flagHasMusicThirdPartyIds;
    std::vector< MusicThirdPartyIdListJSON * > storeMusicThirdPartyIds;

    MusicAlbumBaseJSON(const MusicAlbumBaseJSON &);
    MusicAlbumBaseJSON & operator=(const MusicAlbumBaseJSON &other);

    void  fromJSONAlbumID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumImageURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumReview(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistImageURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBuyLinks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicThirdPartyIds(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicAlbumBaseJSON(void);
    virtual ~MusicAlbumBaseJSON(void);
    bool  hasAlbumID(void) const;
    SoundHoundAlbumIDJSON *  getAlbumID(void);
    const SoundHoundAlbumIDJSON *  getAlbumID(void) const;
    uint64_t  getAlbumIDValue(void);
    const uint64_t  getAlbumIDValue(void) const;
    bool  hasAlbumName(void) const;
    std::string  getAlbumName(void);
    const std::string  getAlbumName(void) const;
    bool  hasAlbumImageURL(void) const;
    std::string  getAlbumImageURL(void);
    const std::string  getAlbumImageURL(void) const;
    bool  hasAlbumDate(void) const;
    std::string  getAlbumDate(void);
    const std::string  getAlbumDate(void) const;
    bool  hasAlbumReview(void) const;
    std::string  getAlbumReview(void);
    const std::string  getAlbumReview(void) const;
    bool  hasArtistName(void) const;
    std::string  getArtistName(void);
    const std::string  getArtistName(void) const;
    bool  hasArtistID(void) const;
    SoundHoundArtistIDJSON *  getArtistID(void);
    const SoundHoundArtistIDJSON *  getArtistID(void) const;
    uint64_t  getArtistIDValue(void);
    const uint64_t  getArtistIDValue(void) const;
    bool  hasArtistImageURL(void) const;
    std::string  getArtistImageURL(void);
    const std::string  getArtistImageURL(void) const;
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
    void setAlbumName(std::string new_value)
      {
        flagHasAlbumName = true;
        storeAlbumName = new_value;
      }
    void unsetAlbumName(void)
      {
        flagHasAlbumName = false;
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
    void setAlbumDate(std::string new_value)
      {
        flagHasAlbumDate = true;
        storeAlbumDate = new_value;
      }
    void unsetAlbumDate(void)
      {
        flagHasAlbumDate = false;
      }
    void setAlbumReview(std::string new_value)
      {
        flagHasAlbumReview = true;
        storeAlbumReview = new_value;
      }
    void unsetAlbumReview(void)
      {
        flagHasAlbumReview = false;
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
    void setArtistImageURL(std::string new_value)
      {
        flagHasArtistImageURL = true;
        storeArtistImageURL = new_value;
      }
    void unsetArtistImageURL(void)
      {
        flagHasArtistImageURL = false;
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


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasAlbumID)
          {
            handler->start_pair("AlbumID");
            storeAlbumID->write_as_json(handler);
          }
        if (flagHasAlbumName)
          {
            handler->start_pair("AlbumName");
            handler->string_value(storeAlbumName);
          }
        if (flagHasAlbumImageURL)
          {
            handler->start_pair("AlbumImageURL");
            handler->string_value(storeAlbumImageURL);
          }
        if (flagHasAlbumDate)
          {
            handler->start_pair("AlbumDate");
            handler->string_value(storeAlbumDate);
          }
        if (flagHasAlbumReview)
          {
            handler->start_pair("AlbumReview");
            handler->string_value(storeAlbumReview);
          }
        if (flagHasArtistName)
          {
            handler->start_pair("ArtistName");
            handler->string_value(storeArtistName);
          }
        if (flagHasArtistID)
          {
            handler->start_pair("ArtistID");
            storeArtistID->write_as_json(handler);
          }
        if (flagHasArtistImageURL)
          {
            handler->start_pair("ArtistImageURL");
            handler->string_value(storeArtistImageURL);
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
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicAlbumBaseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicAlbumBaseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicAlbumBaseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicAlbumBaseJSON>, MusicAlbumBaseJSON *, bool> generator("Type MusicAlbumBase", ignore_extras);
            parse_json_value(text, "Text for MusicAlbumBaseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicAlbumBaseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicAlbumBaseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicAlbumBaseJSON>, MusicAlbumBaseJSON *, bool> generator("Type MusicAlbumBase", ignore_extras);
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
        JSONHoldingGenerator<SoundHoundAlbumIDJSON::Generator, RCHandle<SoundHoundAlbumIDJSON>, SoundHoundAlbumIDJSON *, bool > fieldGeneratorAlbumID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumImageURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumReview;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistName;
        JSONHoldingGenerator<SoundHoundArtistIDJSON::Generator, RCHandle<SoundHoundArtistIDJSON>, SoundHoundArtistIDJSON *, bool > fieldGeneratorArtistID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistImageURL;
        JSONHoldingArrayGenerator<MusicBuyLinkJSON::Generator, RCHandle<MusicBuyLinkJSON>, MusicBuyLinkJSON *, bool > fieldGeneratorBuyLinks;
        JSONHoldingArrayGenerator<MusicThirdPartyIdListJSON::Generator, RCHandle<MusicThirdPartyIdListJSON>, MusicThirdPartyIdListJSON *, bool > fieldGeneratorMusicThirdPartyIds;


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
            MusicAlbumBaseJSON *result = new MusicAlbumBaseJSON();
            assert(result != NULL);
            RCHandle<MusicAlbumBaseJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicAlbumBaseJSON *result)
          {
            if (fieldGeneratorAlbumID.have_value)
              {
                result->setAlbumID(fieldGeneratorAlbumID.value.referenced());
                fieldGeneratorAlbumID.have_value = false;
              }
            if (fieldGeneratorAlbumName.have_value)
              {
                result->setAlbumName(fieldGeneratorAlbumName.value);
                fieldGeneratorAlbumName.have_value = false;
              }
            if (fieldGeneratorAlbumImageURL.have_value)
              {
                result->setAlbumImageURL(fieldGeneratorAlbumImageURL.value);
                fieldGeneratorAlbumImageURL.have_value = false;
              }
            if (fieldGeneratorAlbumDate.have_value)
              {
                result->setAlbumDate(fieldGeneratorAlbumDate.value);
                fieldGeneratorAlbumDate.have_value = false;
              }
            if (fieldGeneratorAlbumReview.have_value)
              {
                result->setAlbumReview(fieldGeneratorAlbumReview.value);
                fieldGeneratorAlbumReview.have_value = false;
              }
            if (fieldGeneratorArtistName.have_value)
              {
                result->setArtistName(fieldGeneratorArtistName.value);
                fieldGeneratorArtistName.have_value = false;
              }
            if (fieldGeneratorArtistID.have_value)
              {
                result->setArtistID(fieldGeneratorArtistID.value.referenced());
                fieldGeneratorArtistID.have_value = false;
              }
            if (fieldGeneratorArtistImageURL.have_value)
              {
                result->setArtistImageURL(fieldGeneratorArtistImageURL.value);
                fieldGeneratorArtistImageURL.have_value = false;
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
          }
        virtual void handle_result(MusicAlbumBaseJSON *new_result) = 0;
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
                                    case 'R':
                                        if (strcmp(&(field_name[6]), "eview") == 0)
                                            return &fieldGeneratorAlbumReview;
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
                        default:
                            break;
                      }
                    break;
                case 'B':
                    if (strcmp(&(field_name[1]), "uyLinks") == 0)
                        return &fieldGeneratorBuyLinks;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "usicThirdPartyIds") == 0)
                        return &fieldGeneratorMusicThirdPartyIds;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAlbumID("field \"AlbumID\" of the MusicAlbumBase class", ignore_extras), fieldGeneratorAlbumName("field \"AlbumName\" of the MusicAlbumBase class"), fieldGeneratorAlbumImageURL("field \"AlbumImageURL\" of the MusicAlbumBase class"), fieldGeneratorAlbumDate("field \"AlbumDate\" of the MusicAlbumBase class"), fieldGeneratorAlbumReview("field \"AlbumReview\" of the MusicAlbumBase class"), fieldGeneratorArtistName("field \"ArtistName\" of the MusicAlbumBase class"), fieldGeneratorArtistID("field \"ArtistID\" of the MusicAlbumBase class", ignore_extras), fieldGeneratorArtistImageURL("field \"ArtistImageURL\" of the MusicAlbumBase class"), fieldGeneratorBuyLinks("field \"BuyLinks\" of the MusicAlbumBase class", ignore_extras), fieldGeneratorMusicThirdPartyIds("field \"MusicThirdPartyIds\" of the MusicAlbumBase class", ignore_extras)
          {
            set_what("the MusicAlbumBase class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAlbumID.reset();
            fieldGeneratorAlbumName.reset();
            fieldGeneratorAlbumImageURL.reset();
            fieldGeneratorAlbumDate.reset();
            fieldGeneratorAlbumReview.reset();
            fieldGeneratorArtistName.reset();
            fieldGeneratorArtistID.reset();
            fieldGeneratorArtistImageURL.reset();
            fieldGeneratorBuyLinks.reset();
            fieldGeneratorMusicThirdPartyIds.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICALBUMBASEJSON_H */
