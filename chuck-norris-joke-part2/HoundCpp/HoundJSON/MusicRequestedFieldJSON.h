/* file "MusicRequestedFieldJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICREQUESTEDFIELDJSON_H
#define MUSICREQUESTEDFIELDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicRequestedFieldJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_ArtistName,
        Value_AlbumName,
        Value_TrackName,
        Value_ArtistAge,
        Value_ArtistBirthDate,
        Value_ArtistBirthday,
        Value_ArtistBirthPlace,
        Value_ArtistDeathDate,
        Value_ArtistDeathPlace,
        Value_ArtistBandMembers,
        Value_ArtistFirstTrack,
        Value_ArtistFirstAlbum,
        Value_ArtistWhenActive,
        Value_ArtistMostRecentAlbum,
        Value_ArtistWhichGroupsPlayedIn,
        Value_ArtistGenre,
        Value_ArtistRelatedArtists,
        Value_ArtistCollaborations,
        Value_AlbumGenre,
        Value_AlbumReleaseDate,
        Value_AlbumBandMembers,
        Value_TrackGenre,
        Value_TrackReleaseDate,
        Value_Artist1InArtist2,
        Value_TopTracks,
        Value_AlbumMostPopularTrack,
        Value_ArtistTopTracks,
        Value_TrackLyricsLookup,
        Value_ArtistImages,
        Value_ArtistBiography,
        Value__none
      };
    struct TypeValue
      {
        bool in_known_list;
        std::string string_value;
        TypeValueKnownValues list_value;

        TypeValue(void);
        TypeValue(const TypeValue &other);
        TypeValue(TypeValueKnownValues other);
        bool  operator==(const TypeValue &other) const;
        bool  operator!=(const TypeValue &other) const;
        bool  operator<(const TypeValue &other) const;
        bool  operator>(const TypeValue &other) const;
        bool  operator>=(const TypeValue &other) const;
        bool  operator<=(const TypeValue &other) const;

      };

    static TypeValueKnownValues  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValueKnownValues the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    MusicRequestedFieldJSON(const MusicRequestedFieldJSON &);
    MusicRequestedFieldJSON & operator=(const MusicRequestedFieldJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicRequestedFieldJSON(void);
    MusicRequestedFieldJSON(TypeValue init_value);
    MusicRequestedFieldJSON(const char *init_value);
    MusicRequestedFieldJSON(std::string init_value);
    MusicRequestedFieldJSON(TypeValueKnownValues init_value);
    virtual ~MusicRequestedFieldJSON(void);
    bool  hasValue(void) const;
    TypeValue  getValue(void);
    const TypeValue  getValue(void) const;
    const char * getValueAsChars(void) const;
    std::string  getValueAsString(void) const;


    void setValue(TypeValue new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void setValue(const char *chars)
      {
        TypeValueKnownValues known = stringToValue(chars);
        TypeValue new_value;
        if (known == Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setValue(new_value);
      }
    void setValue(std::string the_string)
      {
        setValue(the_string.c_str());
      }
    void setValue(TypeValueKnownValues new_value)
      {
        TypeValue new_full_value;
        assert(new_value != Value__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setValue(new_full_value);
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        if (storeValue.in_known_list)
          {
            switch (storeValue.list_value)
              {
                case Value_ArtistName:
                    handler->string_value("ArtistName");
                    break;
                case Value_AlbumName:
                    handler->string_value("AlbumName");
                    break;
                case Value_TrackName:
                    handler->string_value("TrackName");
                    break;
                case Value_ArtistAge:
                    handler->string_value("ArtistAge");
                    break;
                case Value_ArtistBirthDate:
                    handler->string_value("ArtistBirthDate");
                    break;
                case Value_ArtistBirthday:
                    handler->string_value("ArtistBirthday");
                    break;
                case Value_ArtistBirthPlace:
                    handler->string_value("ArtistBirthPlace");
                    break;
                case Value_ArtistDeathDate:
                    handler->string_value("ArtistDeathDate");
                    break;
                case Value_ArtistDeathPlace:
                    handler->string_value("ArtistDeathPlace");
                    break;
                case Value_ArtistBandMembers:
                    handler->string_value("ArtistBandMembers");
                    break;
                case Value_ArtistFirstTrack:
                    handler->string_value("ArtistFirstTrack");
                    break;
                case Value_ArtistFirstAlbum:
                    handler->string_value("ArtistFirstAlbum");
                    break;
                case Value_ArtistWhenActive:
                    handler->string_value("ArtistWhenActive");
                    break;
                case Value_ArtistMostRecentAlbum:
                    handler->string_value("ArtistMostRecentAlbum");
                    break;
                case Value_ArtistWhichGroupsPlayedIn:
                    handler->string_value("ArtistWhichGroupsPlayedIn");
                    break;
                case Value_ArtistGenre:
                    handler->string_value("ArtistGenre");
                    break;
                case Value_ArtistRelatedArtists:
                    handler->string_value("ArtistRelatedArtists");
                    break;
                case Value_ArtistCollaborations:
                    handler->string_value("ArtistCollaborations");
                    break;
                case Value_AlbumGenre:
                    handler->string_value("AlbumGenre");
                    break;
                case Value_AlbumReleaseDate:
                    handler->string_value("AlbumReleaseDate");
                    break;
                case Value_AlbumBandMembers:
                    handler->string_value("AlbumBandMembers");
                    break;
                case Value_TrackGenre:
                    handler->string_value("TrackGenre");
                    break;
                case Value_TrackReleaseDate:
                    handler->string_value("TrackReleaseDate");
                    break;
                case Value_Artist1InArtist2:
                    handler->string_value("Artist1InArtist2");
                    break;
                case Value_TopTracks:
                    handler->string_value("TopTracks");
                    break;
                case Value_AlbumMostPopularTrack:
                    handler->string_value("AlbumMostPopularTrack");
                    break;
                case Value_ArtistTopTracks:
                    handler->string_value("ArtistTopTracks");
                    break;
                case Value_TrackLyricsLookup:
                    handler->string_value("TrackLyricsLookup");
                    break;
                case Value_ArtistImages:
                    handler->string_value("ArtistImages");
                    break;
                case Value_ArtistBiography:
                    handler->string_value("ArtistBiography");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeValue.string_value);
          }
      }

    static MusicRequestedFieldJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicRequestedFieldJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicRequestedFieldJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicRequestedFieldJSON>, MusicRequestedFieldJSON *, bool> generator("Type MusicRequestedField", ignore_extras);
            parse_json_value(text, "Text for MusicRequestedFieldJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicRequestedFieldJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicRequestedFieldJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicRequestedFieldJSON>, MusicRequestedFieldJSON *, bool> generator("Type MusicRequestedField", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class FieldGeneratorValue : public JSONStringGenerator
      {
      protected:
        FieldGeneratorValue(const char *what)
          {
            set_what(what);
          }
        FieldGeneratorValue(void)
          {
          }
        void handle_result(const char *result)
          {
            TypeValueKnownValues known = stringToValue(result);
            TypeValue new_value;
            if (known == Value__none)
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
        virtual void handle_result(TypeValue result) = 0;
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            MusicRequestedFieldJSON *result = new MusicRequestedFieldJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(MusicRequestedFieldJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* MUSICREQUESTEDFIELDJSON_H */
