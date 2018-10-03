/* file "MusicVideoJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICVIDEOJSON_H
#define MUSICVIDEOJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "MusicTrackJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicVideoJSON : public ReferenceCounted
  {
  private:
    bool flagHasVideoID;
    std::string storeVideoID;
    bool flagHasAutoPlayPreview;
    bool storeAutoPlayPreview;
    bool flagHasTrack;
    MusicTrackJSON * storeTrack;

    MusicVideoJSON(const MusicVideoJSON &);
    MusicVideoJSON & operator=(const MusicVideoJSON &other);

    void  fromJSONVideoID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoPlayPreview(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrack(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicVideoJSON(void);
    virtual ~MusicVideoJSON(void);
    bool  hasVideoID(void) const;
    std::string  getVideoID(void);
    const std::string  getVideoID(void) const;
    bool  hasAutoPlayPreview(void) const;
    bool  getAutoPlayPreview(void);
    const bool  getAutoPlayPreview(void) const;
    bool  hasTrack(void) const;
    MusicTrackJSON *  getTrack(void);
    const MusicTrackJSON *  getTrack(void) const;


    void setVideoID(std::string new_value)
      {
        flagHasVideoID = true;
        storeVideoID = new_value;
      }
    void unsetVideoID(void)
      {
        flagHasVideoID = false;
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
    void setTrack(MusicTrackJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTrack)
          {
            storeTrack->remove_reference();
          }
        flagHasTrack = true;
        storeTrack = new_value;
      }
    void unsetTrack(void)
      {
        if (flagHasTrack)
          {
            storeTrack->remove_reference();
          }
        flagHasTrack = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasVideoID)
          {
            handler->start_pair("VideoID");
            handler->string_value(storeVideoID);
          }
        if (flagHasAutoPlayPreview)
          {
            handler->start_pair("AutoPlayPreview");
            handler->boolean_value(storeAutoPlayPreview);
          }
        if (flagHasTrack)
          {
            handler->start_pair("Track");
            storeTrack->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicVideoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicVideoJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicVideoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicVideoJSON>, MusicVideoJSON *, bool> generator("Type MusicVideo", ignore_extras);
            parse_json_value(text, "Text for MusicVideoJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicVideoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicVideoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicVideoJSON>, MusicVideoJSON *, bool> generator("Type MusicVideo", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorVideoID;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoPlayPreview;
        JSONHoldingGenerator<MusicTrackJSON::Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool > fieldGeneratorTrack;


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
            MusicVideoJSON *result = new MusicVideoJSON();
            assert(result != NULL);
            RCHandle<MusicVideoJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicVideoJSON *result)
          {
            if (fieldGeneratorVideoID.have_value)
              {
                result->setVideoID(fieldGeneratorVideoID.value);
                fieldGeneratorVideoID.have_value = false;
              }
            if (fieldGeneratorAutoPlayPreview.have_value)
              {
                result->setAutoPlayPreview(fieldGeneratorAutoPlayPreview.value);
                fieldGeneratorAutoPlayPreview.have_value = false;
              }
            if (fieldGeneratorTrack.have_value)
              {
                result->setTrack(fieldGeneratorTrack.value.referenced());
                fieldGeneratorTrack.have_value = false;
              }
          }
        virtual void handle_result(MusicVideoJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "utoPlayPreview") == 0)
                        return &fieldGeneratorAutoPlayPreview;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "rack") == 0)
                        return &fieldGeneratorTrack;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "ideoID") == 0)
                        return &fieldGeneratorVideoID;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorVideoID("field \"VideoID\" of the MusicVideo class"), fieldGeneratorAutoPlayPreview("field \"AutoPlayPreview\" of the MusicVideo class"), fieldGeneratorTrack("field \"Track\" of the MusicVideo class", ignore_extras)
          {
            set_what("the MusicVideo class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorVideoID.reset();
            fieldGeneratorAutoPlayPreview.reset();
            fieldGeneratorTrack.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICVIDEOJSON_H */
