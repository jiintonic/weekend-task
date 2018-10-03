/* file "MusicTrackResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICTRACKRESULTJSON_H
#define MUSICTRACKRESULTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "SoundHoundTrackIDJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicTrackResultJSON : public ReferenceCounted
  {
  private:
    bool flagHasTrackName;
    std::string storeTrackName;
    bool flagHasArtistName;
    std::string storeArtistName;
    bool flagHasAlbumName;
    std::string storeAlbumName;
    bool flagHasSoundHoundId;
    SoundHoundTrackIDJSON * storeSoundHoundId;

    MusicTrackResultJSON(const MusicTrackResultJSON &);
    MusicTrackResultJSON & operator=(const MusicTrackResultJSON &other);

    void  fromJSONTrackName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundId(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicTrackResultJSON(void);
    virtual ~MusicTrackResultJSON(void);
    bool  hasTrackName(void) const;
    std::string  getTrackName(void);
    const std::string  getTrackName(void) const;
    bool  hasArtistName(void) const;
    std::string  getArtistName(void);
    const std::string  getArtistName(void) const;
    bool  hasAlbumName(void) const;
    std::string  getAlbumName(void);
    const std::string  getAlbumName(void) const;
    bool  hasSoundHoundId(void) const;
    SoundHoundTrackIDJSON *  getSoundHoundId(void);
    const SoundHoundTrackIDJSON *  getSoundHoundId(void) const;
    uint64_t  getSoundHoundIdValue(void);
    const uint64_t  getSoundHoundIdValue(void) const;


    void setTrackName(std::string new_value)
      {
        flagHasTrackName = true;
        storeTrackName = new_value;
      }
    void unsetTrackName(void)
      {
        flagHasTrackName = false;
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
    void setAlbumName(std::string new_value)
      {
        flagHasAlbumName = true;
        storeAlbumName = new_value;
      }
    void unsetAlbumName(void)
      {
        flagHasAlbumName = false;
      }
    void setSoundHoundId(SoundHoundTrackIDJSON * new_value)
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
        setSoundHoundId(new SoundHoundTrackIDJSON(new_value));
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
        assert(flagHasTrackName);
        handler->start_pair("TrackName");
        handler->string_value(storeTrackName);
        assert(flagHasArtistName);
        handler->start_pair("ArtistName");
        handler->string_value(storeArtistName);
        if (flagHasAlbumName)
          {
            handler->start_pair("AlbumName");
            handler->string_value(storeAlbumName);
          }
        assert(flagHasSoundHoundId);
        handler->start_pair("SoundHoundId");
        storeSoundHoundId->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTrackName()))
          {
            return "When parsing the object for %what%, the \"TrackName\" field was missing.";
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

    static MusicTrackResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicTrackResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicTrackResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackResultJSON>, MusicTrackResultJSON *, bool> generator("Type MusicTrackResult", ignore_extras);
            parse_json_value(text, "Text for MusicTrackResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicTrackResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicTrackResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackResultJSON>, MusicTrackResultJSON *, bool> generator("Type MusicTrackResult", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTrackName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumName;
        JSONHoldingGenerator<SoundHoundTrackIDJSON::Generator, RCHandle<SoundHoundTrackIDJSON>, SoundHoundTrackIDJSON *, bool > fieldGeneratorSoundHoundId;


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
            MusicTrackResultJSON *result = new MusicTrackResultJSON();
            assert(result != NULL);
            RCHandle<MusicTrackResultJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicTrackResultJSON *result)
          {
            if (fieldGeneratorTrackName.have_value)
              {
                result->setTrackName(fieldGeneratorTrackName.value);
                fieldGeneratorTrackName.have_value = false;
              }
            else if (!(result->hasTrackName()))
              {
                error("When parsing the object for %what%, the \"TrackName\" field was missing.");
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
            if (fieldGeneratorAlbumName.have_value)
              {
                result->setAlbumName(fieldGeneratorAlbumName.value);
                fieldGeneratorAlbumName.have_value = false;
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
        virtual void handle_result(MusicTrackResultJSON *new_result) = 0;
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
                case 'T':
                    if (strcmp(&(field_name[1]), "rackName") == 0)
                        return &fieldGeneratorTrackName;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTrackName("field \"TrackName\" of the MusicTrackResult class"), fieldGeneratorArtistName("field \"ArtistName\" of the MusicTrackResult class"), fieldGeneratorAlbumName("field \"AlbumName\" of the MusicTrackResult class"), fieldGeneratorSoundHoundId("field \"SoundHoundId\" of the MusicTrackResult class", ignore_extras)
          {
            set_what("the MusicTrackResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTrackName.reset();
            fieldGeneratorArtistName.reset();
            fieldGeneratorAlbumName.reset();
            fieldGeneratorSoundHoundId.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICTRACKRESULTJSON_H */
