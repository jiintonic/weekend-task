/* file "MusicAlbumJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICALBUMJSON_H
#define MUSICALBUMJSON_H

#pragma interface

#include "MusicAlbumBaseJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "MusicArtistBaseJSON.h"
#include "MusicTrackBaseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicAlbumJSON : public MusicAlbumBaseJSON
  {
  private:
    bool flagHasArtists;
    std::vector< MusicArtistBaseJSON * > storeArtists;
    bool flagHasTracks;
    std::vector< MusicTrackBaseJSON * > storeTracks;

    MusicAlbumJSON(const MusicAlbumJSON &);
    MusicAlbumJSON & operator=(const MusicAlbumJSON &other);

    void  fromJSONArtists(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTracks(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicAlbumJSON(void);
    virtual ~MusicAlbumJSON(void);
    bool  hasArtists(void) const;
    size_t  countOfArtists(void) const;
    MusicArtistBaseJSON *  elementOfArtists(size_t element_num);
    const MusicArtistBaseJSON *  elementOfArtists(size_t element_num) const;
    std::vector< MusicArtistBaseJSON * >  getArtists(void);
    const std::vector< MusicArtistBaseJSON * >  getArtists(void) const;
    bool  hasTracks(void) const;
    size_t  countOfTracks(void) const;
    MusicTrackBaseJSON *  elementOfTracks(size_t element_num);
    const MusicTrackBaseJSON *  elementOfTracks(size_t element_num) const;
    std::vector< MusicTrackBaseJSON * >  getTracks(void);
    const std::vector< MusicTrackBaseJSON * >  getTracks(void) const;


    void initArtists(void)
      {
        if (flagHasArtists)
          {
            for (size_t num3 = 0; num3 < storeArtists.size(); ++num3)
              {
                storeArtists[num3]->remove_reference();
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
            for (size_t num4 = 0; num4 < storeArtists.size(); ++num4)
              {
                storeArtists[num4]->remove_reference();
              }
          }
        flagHasArtists = false;
        storeArtists.clear();
      }
    void initTracks(void)
      {
        if (flagHasTracks)
          {
            for (size_t num5 = 0; num5 < storeTracks.size(); ++num5)
              {
                storeTracks[num5]->remove_reference();
              }
          }
        flagHasTracks = true;
        storeTracks.clear();
      }
    void appendTracks(MusicTrackBaseJSON * to_append)
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
            for (size_t num6 = 0; num6 < storeTracks.size(); ++num6)
              {
                storeTracks[num6]->remove_reference();
              }
          }
        flagHasTracks = false;
        storeTracks.clear();
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        MusicAlbumBaseJSON::write_fields_as_json(handler);
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
        if (flagHasTracks)
          {
            handler->start_pair("Tracks");
            assert(storeTracks.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeTracks.size(); ++num2)
              {
                storeTracks[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicAlbumJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicAlbumJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicAlbumJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicAlbumJSON>, MusicAlbumJSON *, bool> generator("Type MusicAlbum", ignore_extras);
            parse_json_value(text, "Text for MusicAlbumJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicAlbumJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicAlbumJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicAlbumJSON>, MusicAlbumJSON *, bool> generator("Type MusicAlbum", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MusicAlbumBaseJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<MusicArtistBaseJSON::Generator, RCHandle<MusicArtistBaseJSON>, MusicArtistBaseJSON *, bool > fieldGeneratorArtists;
        JSONHoldingArrayGenerator<MusicTrackBaseJSON::Generator, RCHandle<MusicTrackBaseJSON>, MusicTrackBaseJSON *, bool > fieldGeneratorTracks;


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
            MusicAlbumJSON *result = new MusicAlbumJSON();
            assert(result != NULL);
            RCHandle<MusicAlbumJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(MusicAlbumBaseJSON *new_result)
          {
            handle_result((MusicAlbumJSON *)new_result);
          }
        void finish(MusicAlbumJSON *result)
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
            MusicAlbumBaseJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicAlbumJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rtists") == 0)
                        return &fieldGeneratorArtists;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "racks") == 0)
                        return &fieldGeneratorTracks;
                    break;
                default:
                    break;
              }
            return MusicAlbumBaseJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MusicAlbumBaseJSON::Generator(ignore_extras), fieldGeneratorArtists("field \"Artists\" of the MusicAlbum class", ignore_extras), fieldGeneratorTracks("field \"Tracks\" of the MusicAlbum class", ignore_extras)
          {
            set_what("the MusicAlbum class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArtists.reset();
            fieldGeneratorTracks.reset();
            MusicAlbumBaseJSON::Generator::reset();
          }
      };
    static MusicAlbumJSON *from_MusicAlbumBaseJSON_json(const MusicAlbumBaseJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        MusicAlbumJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicAlbumJSON>, MusicAlbumJSON *, bool> handler("Type MusicAlbum", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* MUSICALBUMJSON_H */
