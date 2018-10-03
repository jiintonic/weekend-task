/* file "MusicSearchErrorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICSEARCHERRORJSON_H
#define MUSICSEARCHERRORJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
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


class MusicSearchErrorJSON : public ReferenceCounted
  {
  public:
    enum TypeSearchErrorTypeKnownValues
      {
        SearchErrorType_SONG_NOT_FOUND_BY_ARTIST,
        SearchErrorType_TARGET_TYPE_NOT_FOUND,
        SearchErrorType__none
      };
    struct TypeSearchErrorType
      {
        bool in_known_list;
        std::string string_value;
        TypeSearchErrorTypeKnownValues list_value;

        TypeSearchErrorType(void);
        TypeSearchErrorType(const TypeSearchErrorType &other);
        TypeSearchErrorType(TypeSearchErrorTypeKnownValues other);
        bool  operator==(const TypeSearchErrorType &other) const;
        bool  operator!=(const TypeSearchErrorType &other) const;
        bool  operator<(const TypeSearchErrorType &other) const;
        bool  operator>(const TypeSearchErrorType &other) const;
        bool  operator>=(const TypeSearchErrorType &other) const;
        bool  operator<=(const TypeSearchErrorType &other) const;

      };

    static TypeSearchErrorTypeKnownValues  stringToSearchErrorType(const char *chars);
    static const char * stringFromSearchErrorType(TypeSearchErrorTypeKnownValues the_enum);

  private:
    bool flagHasSearchErrorType;
    TypeSearchErrorType storeSearchErrorType;
    bool flagHasArtist;
    MusicArtistBaseJSON * storeArtist;
    bool flagHasTrack;
    MusicTrackBaseJSON * storeTrack;

    MusicSearchErrorJSON(const MusicSearchErrorJSON &);
    MusicSearchErrorJSON & operator=(const MusicSearchErrorJSON &other);

    void  fromJSONSearchErrorType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtist(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrack(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicSearchErrorJSON(void);
    virtual ~MusicSearchErrorJSON(void);
    bool  hasSearchErrorType(void) const;
    TypeSearchErrorType  getSearchErrorType(void);
    const TypeSearchErrorType  getSearchErrorType(void) const;
    const char * getSearchErrorTypeAsChars(void) const;
    std::string  getSearchErrorTypeAsString(void) const;
    bool  hasArtist(void) const;
    MusicArtistBaseJSON *  getArtist(void);
    const MusicArtistBaseJSON *  getArtist(void) const;
    bool  hasTrack(void) const;
    MusicTrackBaseJSON *  getTrack(void);
    const MusicTrackBaseJSON *  getTrack(void) const;


    void setSearchErrorType(TypeSearchErrorType new_value)
      {
        flagHasSearchErrorType = true;
        storeSearchErrorType = new_value;
      }
    void setSearchErrorType(const char *chars)
      {
        TypeSearchErrorTypeKnownValues known = stringToSearchErrorType(chars);
        TypeSearchErrorType new_value;
        if (known == SearchErrorType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSearchErrorType(new_value);
      }
    void setSearchErrorType(std::string the_string)
      {
        setSearchErrorType(the_string.c_str());
      }
    void setSearchErrorType(TypeSearchErrorTypeKnownValues new_value)
      {
        TypeSearchErrorType new_full_value;
        assert(new_value != SearchErrorType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setSearchErrorType(new_full_value);
      }
    void unsetSearchErrorType(void)
      {
        flagHasSearchErrorType = false;
      }
    void setArtist(MusicArtistBaseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasArtist)
          {
            storeArtist->remove_reference();
          }
        flagHasArtist = true;
        storeArtist = new_value;
      }
    void unsetArtist(void)
      {
        if (flagHasArtist)
          {
            storeArtist->remove_reference();
          }
        flagHasArtist = false;
      }
    void setTrack(MusicTrackBaseJSON * new_value)
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
        assert(flagHasSearchErrorType);
        handler->start_pair("SearchErrorType");
        if (storeSearchErrorType.in_known_list)
          {
            switch (storeSearchErrorType.list_value)
              {
                case SearchErrorType_SONG_NOT_FOUND_BY_ARTIST:
                    handler->string_value("SONG_NOT_FOUND_BY_ARTIST");
                    break;
                case SearchErrorType_TARGET_TYPE_NOT_FOUND:
                    handler->string_value("TARGET_TYPE_NOT_FOUND");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeSearchErrorType.string_value);
          }
        if (flagHasArtist)
          {
            handler->start_pair("Artist");
            storeArtist->write_as_json(handler);
          }
        if (flagHasTrack)
          {
            handler->start_pair("Track");
            storeTrack->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSearchErrorType()))
          {
            return "When parsing the object for %what%, the \"SearchErrorType\" field was missing.";
          }
        return NULL;
      }

    static MusicSearchErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicSearchErrorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicSearchErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchErrorJSON>, MusicSearchErrorJSON *, bool> generator("Type MusicSearchError", ignore_extras);
            parse_json_value(text, "Text for MusicSearchErrorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicSearchErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicSearchErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchErrorJSON>, MusicSearchErrorJSON *, bool> generator("Type MusicSearchError", ignore_extras);
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
    class FieldGeneratorSearchErrorType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSearchErrorType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSearchErrorType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeSearchErrorTypeKnownValues known = stringToSearchErrorType(result);
                TypeSearchErrorType new_value;
                if (known == SearchErrorType__none)
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
            virtual void handle_result(TypeSearchErrorType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSearchErrorType, TypeSearchErrorType, TypeSearchErrorType > fieldGeneratorSearchErrorType;
        JSONHoldingGenerator<MusicArtistBaseJSON::Generator, RCHandle<MusicArtistBaseJSON>, MusicArtistBaseJSON *, bool > fieldGeneratorArtist;
        JSONHoldingGenerator<MusicTrackBaseJSON::Generator, RCHandle<MusicTrackBaseJSON>, MusicTrackBaseJSON *, bool > fieldGeneratorTrack;


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
            MusicSearchErrorJSON *result = new MusicSearchErrorJSON();
            assert(result != NULL);
            RCHandle<MusicSearchErrorJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicSearchErrorJSON *result)
          {
            if (fieldGeneratorSearchErrorType.have_value)
              {
                result->setSearchErrorType(fieldGeneratorSearchErrorType.value);
                fieldGeneratorSearchErrorType.have_value = false;
              }
            else if (!(result->hasSearchErrorType()))
              {
                error("When parsing the object for %what%, the \"SearchErrorType\" field was missing.");
              }
            if (fieldGeneratorArtist.have_value)
              {
                result->setArtist(fieldGeneratorArtist.value.referenced());
                fieldGeneratorArtist.have_value = false;
              }
            if (fieldGeneratorTrack.have_value)
              {
                result->setTrack(fieldGeneratorTrack.value.referenced());
                fieldGeneratorTrack.have_value = false;
              }
          }
        virtual void handle_result(MusicSearchErrorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rtist") == 0)
                        return &fieldGeneratorArtist;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "earchErrorType") == 0)
                        return &fieldGeneratorSearchErrorType;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "rack") == 0)
                        return &fieldGeneratorTrack;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSearchErrorType("field \"SearchErrorType\" of the MusicSearchError class"), fieldGeneratorArtist("field \"Artist\" of the MusicSearchError class", ignore_extras), fieldGeneratorTrack("field \"Track\" of the MusicSearchError class", ignore_extras)
          {
            set_what("the MusicSearchError class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSearchErrorType.reset();
            fieldGeneratorArtist.reset();
            fieldGeneratorTrack.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICSEARCHERRORJSON_H */
