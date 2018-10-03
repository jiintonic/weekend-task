/* file "MusicTrackJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICTRACKJSON_H
#define MUSICTRACKJSON_H

#pragma interface

#include "MusicTrackBaseJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "MusicArtistBaseJSON.h"
#include "MusicAlbumBaseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicTrackJSON : public MusicTrackBaseJSON
  {
  private:
    bool flagHasArtists;
    std::vector< MusicArtistBaseJSON * > storeArtists;
    bool flagHasAlbum;
    MusicAlbumBaseJSON * storeAlbum;

    MusicTrackJSON(const MusicTrackJSON &);
    MusicTrackJSON & operator=(const MusicTrackJSON &other);

    void  fromJSONArtists(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbum(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicTrackJSON(void);
    virtual ~MusicTrackJSON(void);
    bool  hasArtists(void) const;
    size_t  countOfArtists(void) const;
    MusicArtistBaseJSON *  elementOfArtists(size_t element_num);
    const MusicArtistBaseJSON *  elementOfArtists(size_t element_num) const;
    std::vector< MusicArtistBaseJSON * >  getArtists(void);
    const std::vector< MusicArtistBaseJSON * >  getArtists(void) const;
    bool  hasAlbum(void) const;
    MusicAlbumBaseJSON *  getAlbum(void);
    const MusicAlbumBaseJSON *  getAlbum(void) const;


    void initArtists(void)
      {
        if (flagHasArtists)
          {
            for (size_t num2 = 0; num2 < storeArtists.size(); ++num2)
              {
                storeArtists[num2]->remove_reference();
              }
          }
        flagHasArtists = true;
        storeArtists.clear();
      }
    void appendArtists(MusicArtistBaseJSON * to_append)
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
            for (size_t num3 = 0; num3 < storeArtists.size(); ++num3)
              {
                storeArtists[num3]->remove_reference();
              }
          }
        flagHasArtists = false;
        storeArtists.clear();
      }
    void setAlbum(MusicAlbumBaseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAlbum)
          {
            storeAlbum->remove_reference();
          }
        flagHasAlbum = true;
        storeAlbum = new_value;
      }
    void unsetAlbum(void)
      {
        if (flagHasAlbum)
          {
            storeAlbum->remove_reference();
          }
        flagHasAlbum = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        MusicTrackBaseJSON::write_fields_as_json(handler);
        if (flagHasArtists)
          {
            handler->start_pair("Artists");
            assert(storeArtists.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeArtists.size(); ++num1)
              {
                storeArtists[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAlbum)
          {
            handler->start_pair("Album");
            storeAlbum->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicTrackJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicTrackJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicTrackJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool> generator("Type MusicTrack", ignore_extras);
            parse_json_value(text, "Text for MusicTrackJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicTrackJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicTrackJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool> generator("Type MusicTrack", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MusicTrackBaseJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<MusicArtistBaseJSON::Generator, RCHandle<MusicArtistBaseJSON>, MusicArtistBaseJSON *, bool > fieldGeneratorArtists;
        JSONHoldingGenerator<MusicAlbumBaseJSON::Generator, RCHandle<MusicAlbumBaseJSON>, MusicAlbumBaseJSON *, bool > fieldGeneratorAlbum;


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
            MusicTrackJSON *result = new MusicTrackJSON();
            assert(result != NULL);
            RCHandle<MusicTrackJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(MusicTrackBaseJSON *new_result)
          {
            handle_result((MusicTrackJSON *)new_result);
          }
        void finish(MusicTrackJSON *result)
          {
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
            if (fieldGeneratorAlbum.have_value)
              {
                result->setAlbum(fieldGeneratorAlbum.value.referenced());
                fieldGeneratorAlbum.have_value = false;
              }
            MusicTrackBaseJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicTrackJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "A", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        if (strcmp(&(field_name[2]), "bum") == 0)
                            return &fieldGeneratorAlbum;
                        break;
                    case 'r':
                        if (strcmp(&(field_name[2]), "tists") == 0)
                            return &fieldGeneratorArtists;
                        break;
                    default:
                        break;
                  }
              }
            return MusicTrackBaseJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MusicTrackBaseJSON::Generator(ignore_extras), fieldGeneratorArtists("field \"Artists\" of the MusicTrack class", ignore_extras), fieldGeneratorAlbum("field \"Album\" of the MusicTrack class", ignore_extras)
          {
            set_what("the MusicTrack class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArtists.reset();
            fieldGeneratorAlbum.reset();
            MusicTrackBaseJSON::Generator::reset();
          }
      };
    static MusicTrackJSON *from_MusicTrackBaseJSON_json(const MusicTrackBaseJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        MusicTrackJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool> handler("Type MusicTrack", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* MUSICTRACKJSON_H */
