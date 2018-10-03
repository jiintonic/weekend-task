/* file "MusicAlbumResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICALBUMRESULTJSON_H
#define MUSICALBUMRESULTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "SoundHoundAlbumIDJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicAlbumResultJSON : public ReferenceCounted
  {
  private:
    bool flagHasAlbumName;
    std::string storeAlbumName;
    bool flagHasArtistName;
    std::string storeArtistName;
    bool flagHasSoundHoundId;
    SoundHoundAlbumIDJSON * storeSoundHoundId;

    MusicAlbumResultJSON(const MusicAlbumResultJSON &);
    MusicAlbumResultJSON & operator=(const MusicAlbumResultJSON &other);

    void  fromJSONAlbumName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundId(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicAlbumResultJSON(void);
    virtual ~MusicAlbumResultJSON(void);
    bool  hasAlbumName(void) const;
    std::string  getAlbumName(void);
    const std::string  getAlbumName(void) const;
    bool  hasArtistName(void) const;
    std::string  getArtistName(void);
    const std::string  getArtistName(void) const;
    bool  hasSoundHoundId(void) const;
    SoundHoundAlbumIDJSON *  getSoundHoundId(void);
    const SoundHoundAlbumIDJSON *  getSoundHoundId(void) const;
    uint64_t  getSoundHoundIdValue(void);
    const uint64_t  getSoundHoundIdValue(void) const;


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
    void setSoundHoundId(SoundHoundAlbumIDJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSoundHoundId)
          {
            storeSoundHoundId->remove_reference();
          }
        flagHasSoundHoundId = true;
        storeSoundHoundId = new_value;
      }
    void setSoundHoundId(uint64_t new_value)
      {
        setSoundHoundId(new SoundHoundAlbumIDJSON(new_value));
      }
    void unsetSoundHoundId(void)
      {
        if (flagHasSoundHoundId)
          {
            storeSoundHoundId->remove_reference();
          }
        flagHasSoundHoundId = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasAlbumName);
        handler->start_pair("AlbumName");
        handler->string_value(storeAlbumName);
        assert(flagHasArtistName);
        handler->start_pair("ArtistName");
        handler->string_value(storeArtistName);
        assert(flagHasSoundHoundId);
        handler->start_pair("SoundHoundId");
        storeSoundHoundId->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAlbumName()))
          {
            return "When parsing the object for %what%, the \"AlbumName\" field was missing.";
          }
        if (!(hasArtistName()))
          {
            return "When parsing the object for %what%, the \"ArtistName\" field was missing.";
          }
        if (!(hasSoundHoundId()))
          {
            return "When parsing the object for %what%, the \"SoundHoundId\" field was missing.";
          }
        return NULL;
      }

    static MusicAlbumResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicAlbumResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicAlbumResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicAlbumResultJSON>, MusicAlbumResultJSON *, bool> generator("Type MusicAlbumResult", ignore_extras);
            parse_json_value(text, "Text for MusicAlbumResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicAlbumResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicAlbumResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicAlbumResultJSON>, MusicAlbumResultJSON *, bool> generator("Type MusicAlbumResult", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistName;
        JSONHoldingGenerator<SoundHoundAlbumIDJSON::Generator, RCHandle<SoundHoundAlbumIDJSON>, SoundHoundAlbumIDJSON *, bool > fieldGeneratorSoundHoundId;


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
            MusicAlbumResultJSON *result = new MusicAlbumResultJSON();
            assert(result != NULL);
            RCHandle<MusicAlbumResultJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicAlbumResultJSON *result)
          {
            if (fieldGeneratorAlbumName.have_value)
              {
                result->setAlbumName(fieldGeneratorAlbumName.value);
                fieldGeneratorAlbumName.have_value = false;
              }
            else if (!(result->hasAlbumName()))
              {
                error("When parsing the object for %what%, the \"AlbumName\" field was missing.");
              }
            if (fieldGeneratorArtistName.have_value)
              {
                result->setArtistName(fieldGeneratorArtistName.value);
                fieldGeneratorArtistName.have_value = false;
              }
            else if (!(result->hasArtistName()))
              {
                error("When parsing the object for %what%, the \"ArtistName\" field was missing.");
              }
            if (fieldGeneratorSoundHoundId.have_value)
              {
                result->setSoundHoundId(fieldGeneratorSoundHoundId.value.referenced());
                fieldGeneratorSoundHoundId.have_value = false;
              }
            else if (!(result->hasSoundHoundId()))
              {
                error("When parsing the object for %what%, the \"SoundHoundId\" field was missing.");
              }
          }
        virtual void handle_result(MusicAlbumResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "bumName") == 0)
                                return &fieldGeneratorAlbumName;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "tistName") == 0)
                                return &fieldGeneratorArtistName;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "oundHoundId") == 0)
                        return &fieldGeneratorSoundHoundId;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAlbumName("field \"AlbumName\" of the MusicAlbumResult class"), fieldGeneratorArtistName("field \"ArtistName\" of the MusicAlbumResult class"), fieldGeneratorSoundHoundId("field \"SoundHoundId\" of the MusicAlbumResult class", ignore_extras)
          {
            set_what("the MusicAlbumResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAlbumName.reset();
            fieldGeneratorArtistName.reset();
            fieldGeneratorSoundHoundId.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICALBUMRESULTJSON_H */
