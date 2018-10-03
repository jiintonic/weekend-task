/* file "MusicArtistJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICARTISTJSON_H
#define MUSICARTISTJSON_H

#pragma interface

#include "MusicArtistBaseJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "MusicAlbumBaseJSON.h"
#include "MusicTrackBaseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicArtistJSON : public MusicArtistBaseJSON
  {
  private:
    bool flagHasAlbumsLabel;
    std::string storeAlbumsLabel;
    bool flagHasAlbums;
    std::vector< MusicAlbumBaseJSON * > storeAlbums;
    bool flagHasTracksLabel;
    std::string storeTracksLabel;
    bool flagHasTracks;
    std::vector< MusicTrackBaseJSON * > storeTracks;

    MusicArtistJSON(const MusicArtistJSON &);
    MusicArtistJSON & operator=(const MusicArtistJSON &other);

    void  fromJSONAlbumsLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbums(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTracksLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTracks(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicArtistJSON(void);
    virtual ~MusicArtistJSON(void);
    bool  hasAlbumsLabel(void) const;
    std::string  getAlbumsLabel(void);
    const std::string  getAlbumsLabel(void) const;
    bool  hasAlbums(void) const;
    size_t  countOfAlbums(void) const;
    MusicAlbumBaseJSON *  elementOfAlbums(size_t element_num);
    const MusicAlbumBaseJSON *  elementOfAlbums(size_t element_num) const;
    std::vector< MusicAlbumBaseJSON * >  getAlbums(void);
    const std::vector< MusicAlbumBaseJSON * >  getAlbums(void) const;
    bool  hasTracksLabel(void) const;
    std::string  getTracksLabel(void);
    const std::string  getTracksLabel(void) const;
    bool  hasTracks(void) const;
    size_t  countOfTracks(void) const;
    MusicTrackBaseJSON *  elementOfTracks(size_t element_num);
    const MusicTrackBaseJSON *  elementOfTracks(size_t element_num) const;
    std::vector< MusicTrackBaseJSON * >  getTracks(void);
    const std::vector< MusicTrackBaseJSON * >  getTracks(void) const;


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
            for (size_t num3 = 0; num3 < storeAlbums.size(); ++num3)
              {
                storeAlbums[num3]->remove_reference();
              }
          }
        flagHasAlbums = true;
        storeAlbums.clear();
      }
    void appendAlbums(MusicAlbumBaseJSON * to_append)
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
            for (size_t num4 = 0; num4 < storeAlbums.size(); ++num4)
              {
                storeAlbums[num4]->remove_reference();
              }
          }
        flagHasAlbums = false;
        storeAlbums.clear();
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
        MusicArtistBaseJSON::write_fields_as_json(handler);
        if (flagHasAlbumsLabel)
          {
            handler->start_pair("AlbumsLabel");
            handler->string_value(storeAlbumsLabel);
          }
        if (flagHasAlbums)
          {
            handler->start_pair("Albums");
            assert(storeAlbums.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAlbums.size(); ++num1)
              {
                storeAlbums[num1]->write_as_json(handler);
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

    static MusicArtistJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicArtistJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicArtistJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicArtistJSON>, MusicArtistJSON *, bool> generator("Type MusicArtist", ignore_extras);
            parse_json_value(text, "Text for MusicArtistJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicArtistJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicArtistJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicArtistJSON>, MusicArtistJSON *, bool> generator("Type MusicArtist", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MusicArtistBaseJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumsLabel;
        JSONHoldingArrayGenerator<MusicAlbumBaseJSON::Generator, RCHandle<MusicAlbumBaseJSON>, MusicAlbumBaseJSON *, bool > fieldGeneratorAlbums;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTracksLabel;
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
            MusicArtistJSON *result = new MusicArtistJSON();
            assert(result != NULL);
            RCHandle<MusicArtistJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(MusicArtistBaseJSON *new_result)
          {
            handle_result((MusicArtistJSON *)new_result);
          }
        void finish(MusicArtistJSON *result)
          {
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
            MusicArtistBaseJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicArtistJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "lbums", 5) == 0)
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
                default:
                    break;
              }
            return MusicArtistBaseJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MusicArtistBaseJSON::Generator(ignore_extras), fieldGeneratorAlbumsLabel("field \"AlbumsLabel\" of the MusicArtist class"), fieldGeneratorAlbums("field \"Albums\" of the MusicArtist class", ignore_extras), fieldGeneratorTracksLabel("field \"TracksLabel\" of the MusicArtist class"), fieldGeneratorTracks("field \"Tracks\" of the MusicArtist class", ignore_extras)
          {
            set_what("the MusicArtist class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAlbumsLabel.reset();
            fieldGeneratorAlbums.reset();
            fieldGeneratorTracksLabel.reset();
            fieldGeneratorTracks.reset();
            MusicArtistBaseJSON::Generator::reset();
          }
      };
    static MusicArtistJSON *from_MusicArtistBaseJSON_json(const MusicArtistBaseJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        MusicArtistJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicArtistJSON>, MusicArtistJSON *, bool> handler("Type MusicArtist", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* MUSICARTISTJSON_H */
