/* file "MusicArtistResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICARTISTRESULTJSON_H
#define MUSICARTISTRESULTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "SoundHoundArtistIDJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicArtistResultJSON : public ReferenceCounted
  {
  private:
    bool flagHasArtistName;
    std::string storeArtistName;
    bool flagHasSoundHoundId;
    SoundHoundArtistIDJSON * storeSoundHoundId;

    MusicArtistResultJSON(const MusicArtistResultJSON &);
    MusicArtistResultJSON & operator=(const MusicArtistResultJSON &other);

    void  fromJSONArtistName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundId(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicArtistResultJSON(void);
    virtual ~MusicArtistResultJSON(void);
    bool  hasArtistName(void) const;
    std::string  getArtistName(void);
    const std::string  getArtistName(void) const;
    bool  hasSoundHoundId(void) const;
    SoundHoundArtistIDJSON *  getSoundHoundId(void);
    const SoundHoundArtistIDJSON *  getSoundHoundId(void) const;
    uint64_t  getSoundHoundIdValue(void);
    const uint64_t  getSoundHoundIdValue(void) const;


    void setArtistName(std::string new_value)
      {
        flagHasArtistName = true;
        storeArtistName = new_value;
      }
    void unsetArtistName(void)
      {
        flagHasArtistName = false;
      }
    void setSoundHoundId(SoundHoundArtistIDJSON * new_value)
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
        setSoundHoundId(new SoundHoundArtistIDJSON(new_value));
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
        assert(flagHasArtistName);
        handler->start_pair("ArtistName");
        handler->string_value(storeArtistName);
        assert(flagHasSoundHoundId);
        handler->start_pair("SoundHoundId");
        storeSoundHoundId->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
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

    static MusicArtistResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicArtistResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicArtistResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicArtistResultJSON>, MusicArtistResultJSON *, bool> generator("Type MusicArtistResult", ignore_extras);
            parse_json_value(text, "Text for MusicArtistResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicArtistResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicArtistResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicArtistResultJSON>, MusicArtistResultJSON *, bool> generator("Type MusicArtistResult", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistName;
        JSONHoldingGenerator<SoundHoundArtistIDJSON::Generator, RCHandle<SoundHoundArtistIDJSON>, SoundHoundArtistIDJSON *, bool > fieldGeneratorSoundHoundId;


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
            MusicArtistResultJSON *result = new MusicArtistResultJSON();
            assert(result != NULL);
            RCHandle<MusicArtistResultJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicArtistResultJSON *result)
          {
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
        virtual void handle_result(MusicArtistResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rtistName") == 0)
                        return &fieldGeneratorArtistName;
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
        Generator(bool ignore_extras = false) : fieldGeneratorArtistName("field \"ArtistName\" of the MusicArtistResult class"), fieldGeneratorSoundHoundId("field \"SoundHoundId\" of the MusicArtistResult class", ignore_extras)
          {
            set_what("the MusicArtistResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArtistName.reset();
            fieldGeneratorSoundHoundId.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICARTISTRESULTJSON_H */
