/* file "MusicClientStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICCLIENTSTATEJSON_H
#define MUSICCLIENTSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "MusicTrackResultJSON.h"
#include "PlaylistStateItemJSON.h"
#include "PlaylistStateItemJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicClientStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasSoundHoundTrackId;
    std::string storeSoundHoundTrackId;
    bool flagHasSoundHoundArtistId;
    std::string storeSoundHoundArtistId;
    bool flagHasSoundHoundAlbumId;
    std::string storeSoundHoundAlbumId;
    bool flagHasSoundHoundTrackIdList;
    std::vector< std::string > storeSoundHoundTrackIdList;
    bool flagHasSoundHoundArtistIdList;
    std::vector< std::string > storeSoundHoundArtistIdList;
    bool flagHasSoundHoundAlbumIdList;
    std::vector< std::string > storeSoundHoundAlbumIdList;
    bool flagHasTrackList;
    MusicTrackResultJSON * storeTrackList;
    bool flagHasTrackListPosition;
    OInteger storeTrackListPosition;
    bool flagHasPlaylist;
    PlaylistStateItemJSON * storePlaylist;
    bool flagHasPlaylists;
    std::vector< PlaylistStateItemJSON * > storePlaylists;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MusicClientStateJSON(const MusicClientStateJSON &);
    MusicClientStateJSON & operator=(const MusicClientStateJSON &other);

    void  fromJSONSoundHoundTrackId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundArtistId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundAlbumId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundTrackIdList(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundArtistIdList(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundAlbumIdList(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackList(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackListPosition(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlaylist(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlaylists(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicClientStateJSON(void);
    virtual ~MusicClientStateJSON(void);
    bool  hasSoundHoundTrackId(void) const;
    std::string  getSoundHoundTrackId(void);
    const std::string  getSoundHoundTrackId(void) const;
    bool  hasSoundHoundArtistId(void) const;
    std::string  getSoundHoundArtistId(void);
    const std::string  getSoundHoundArtistId(void) const;
    bool  hasSoundHoundAlbumId(void) const;
    std::string  getSoundHoundAlbumId(void);
    const std::string  getSoundHoundAlbumId(void) const;
    bool  hasSoundHoundTrackIdList(void) const;
    size_t  countOfSoundHoundTrackIdList(void) const;
    std::string  elementOfSoundHoundTrackIdList(size_t element_num);
    const std::string  elementOfSoundHoundTrackIdList(size_t element_num) const;
    std::vector< std::string >  getSoundHoundTrackIdList(void);
    const std::vector< std::string >  getSoundHoundTrackIdList(void) const;
    bool  hasSoundHoundArtistIdList(void) const;
    size_t  countOfSoundHoundArtistIdList(void) const;
    std::string  elementOfSoundHoundArtistIdList(size_t element_num);
    const std::string  elementOfSoundHoundArtistIdList(size_t element_num) const;
    std::vector< std::string >  getSoundHoundArtistIdList(void);
    const std::vector< std::string >  getSoundHoundArtistIdList(void) const;
    bool  hasSoundHoundAlbumIdList(void) const;
    size_t  countOfSoundHoundAlbumIdList(void) const;
    std::string  elementOfSoundHoundAlbumIdList(size_t element_num);
    const std::string  elementOfSoundHoundAlbumIdList(size_t element_num) const;
    std::vector< std::string >  getSoundHoundAlbumIdList(void);
    const std::vector< std::string >  getSoundHoundAlbumIdList(void) const;
    bool  hasTrackList(void) const;
    MusicTrackResultJSON *  getTrackList(void);
    const MusicTrackResultJSON *  getTrackList(void) const;
    bool  hasTrackListPosition(void) const;
    OInteger  getTrackListPosition(void);
    const OInteger  getTrackListPosition(void) const;
    bool  hasPlaylist(void) const;
    PlaylistStateItemJSON *  getPlaylist(void);
    const PlaylistStateItemJSON *  getPlaylist(void) const;
    bool  hasPlaylists(void) const;
    size_t  countOfPlaylists(void) const;
    PlaylistStateItemJSON *  elementOfPlaylists(size_t element_num);
    const PlaylistStateItemJSON *  elementOfPlaylists(size_t element_num) const;
    std::vector< PlaylistStateItemJSON * >  getPlaylists(void);
    const std::vector< PlaylistStateItemJSON * >  getPlaylists(void) const;

    virtual size_t extraMusicClientStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMusicClientStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMusicClientStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMusicClientStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMusicClientStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMusicClientStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSoundHoundTrackId(std::string new_value)
      {
        flagHasSoundHoundTrackId = true;
        storeSoundHoundTrackId = new_value;
      }
    void unsetSoundHoundTrackId(void)
      {
        flagHasSoundHoundTrackId = false;
      }
    void setSoundHoundArtistId(std::string new_value)
      {
        flagHasSoundHoundArtistId = true;
        storeSoundHoundArtistId = new_value;
      }
    void unsetSoundHoundArtistId(void)
      {
        flagHasSoundHoundArtistId = false;
      }
    void setSoundHoundAlbumId(std::string new_value)
      {
        flagHasSoundHoundAlbumId = true;
        storeSoundHoundAlbumId = new_value;
      }
    void unsetSoundHoundAlbumId(void)
      {
        flagHasSoundHoundAlbumId = false;
      }
    void initSoundHoundTrackIdList(void)
      {
        flagHasSoundHoundTrackIdList = true;
        storeSoundHoundTrackIdList.clear();
      }
    void appendSoundHoundTrackIdList(std::string to_append)
      {
        if (!flagHasSoundHoundTrackIdList)
          {
            flagHasSoundHoundTrackIdList = true;
            storeSoundHoundTrackIdList.clear();
          }
        assert(flagHasSoundHoundTrackIdList);
        storeSoundHoundTrackIdList.push_back(to_append);
      }
    void unsetSoundHoundTrackIdList(void)
      {
        flagHasSoundHoundTrackIdList = false;
        storeSoundHoundTrackIdList.clear();
      }
    void initSoundHoundArtistIdList(void)
      {
        flagHasSoundHoundArtistIdList = true;
        storeSoundHoundArtistIdList.clear();
      }
    void appendSoundHoundArtistIdList(std::string to_append)
      {
        if (!flagHasSoundHoundArtistIdList)
          {
            flagHasSoundHoundArtistIdList = true;
            storeSoundHoundArtistIdList.clear();
          }
        assert(flagHasSoundHoundArtistIdList);
        storeSoundHoundArtistIdList.push_back(to_append);
      }
    void unsetSoundHoundArtistIdList(void)
      {
        flagHasSoundHoundArtistIdList = false;
        storeSoundHoundArtistIdList.clear();
      }
    void initSoundHoundAlbumIdList(void)
      {
        flagHasSoundHoundAlbumIdList = true;
        storeSoundHoundAlbumIdList.clear();
      }
    void appendSoundHoundAlbumIdList(std::string to_append)
      {
        if (!flagHasSoundHoundAlbumIdList)
          {
            flagHasSoundHoundAlbumIdList = true;
            storeSoundHoundAlbumIdList.clear();
          }
        assert(flagHasSoundHoundAlbumIdList);
        storeSoundHoundAlbumIdList.push_back(to_append);
      }
    void unsetSoundHoundAlbumIdList(void)
      {
        flagHasSoundHoundAlbumIdList = false;
        storeSoundHoundAlbumIdList.clear();
      }
    void setTrackList(MusicTrackResultJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTrackList)
          {
            storeTrackList->remove_reference();
          }
        flagHasTrackList = true;
        storeTrackList = new_value;
      }
    void unsetTrackList(void)
      {
        if (flagHasTrackList)
          {
            storeTrackList->remove_reference();
          }
        flagHasTrackList = false;
      }
    void setTrackListPosition(OInteger new_value)
      {
        flagHasTrackListPosition = true;
        storeTrackListPosition = new_value;
      }
    void unsetTrackListPosition(void)
      {
        flagHasTrackListPosition = false;
      }
    void setPlaylist(PlaylistStateItemJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPlaylist)
          {
            storePlaylist->remove_reference();
          }
        flagHasPlaylist = true;
        storePlaylist = new_value;
      }
    void unsetPlaylist(void)
      {
        if (flagHasPlaylist)
          {
            storePlaylist->remove_reference();
          }
        flagHasPlaylist = false;
      }
    void initPlaylists(void)
      {
        if (flagHasPlaylists)
          {
            for (size_t num2 = 0; num2 < storePlaylists.size(); ++num2)
              {
                storePlaylists[num2]->remove_reference();
              }
          }
        flagHasPlaylists = true;
        storePlaylists.clear();
      }
    void appendPlaylists(PlaylistStateItemJSON * to_append)
      {
        if (!flagHasPlaylists)
          {
            flagHasPlaylists = true;
            storePlaylists.clear();
          }
        assert(flagHasPlaylists);
        to_append->add_reference();
        storePlaylists.push_back(to_append);
      }
    void unsetPlaylists(void)
      {
        if (flagHasPlaylists)
          {
            for (size_t num3 = 0; num3 < storePlaylists.size(); ++num3)
              {
                storePlaylists[num3]->remove_reference();
              }
          }
        flagHasPlaylists = false;
        storePlaylists.clear();
      }

    virtual void extraMusicClientStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMusicClientStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMusicClientStateLookup(key);
        if (old_field == NULL)
          {
            extraMusicClientStateAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasSoundHoundTrackId)
          {
            handler->start_pair("SoundHoundTrackId");
            handler->string_value(storeSoundHoundTrackId);
          }
        if (flagHasSoundHoundArtistId)
          {
            handler->start_pair("SoundHoundArtistId");
            handler->string_value(storeSoundHoundArtistId);
          }
        if (flagHasSoundHoundAlbumId)
          {
            handler->start_pair("SoundHoundAlbumId");
            handler->string_value(storeSoundHoundAlbumId);
          }
        if (flagHasSoundHoundTrackIdList)
          {
            handler->start_pair("SoundHoundTrackIdList");
            assert(storeSoundHoundTrackIdList.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeSoundHoundTrackIdList.size(); ++num1)
              {
                handler->string_value(storeSoundHoundTrackIdList[num1]);
              }
            handler->finish_array();
          }
        if (flagHasSoundHoundArtistIdList)
          {
            handler->start_pair("SoundHoundArtistIdList");
            assert(storeSoundHoundArtistIdList.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeSoundHoundArtistIdList.size(); ++num2)
              {
                handler->string_value(storeSoundHoundArtistIdList[num2]);
              }
            handler->finish_array();
          }
        if (flagHasSoundHoundAlbumIdList)
          {
            handler->start_pair("SoundHoundAlbumIdList");
            assert(storeSoundHoundAlbumIdList.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeSoundHoundAlbumIdList.size(); ++num3)
              {
                handler->string_value(storeSoundHoundAlbumIdList[num3]);
              }
            handler->finish_array();
          }
        if (flagHasTrackList)
          {
            handler->start_pair("TrackList");
            storeTrackList->write_as_json(handler);
          }
        if (flagHasTrackListPosition)
          {
            handler->start_pair("TrackListPosition");
            handler->number_value(storeTrackListPosition.get_o_integer());
          }
        if (flagHasPlaylist)
          {
            handler->start_pair("Playlist");
            storePlaylist->write_as_json(handler);
          }
        if (flagHasPlaylists)
          {
            handler->start_pair("Playlists");
            handler->start_array();
            for (size_t num4 = 0; num4 < storePlaylists.size(); ++num4)
              {
                storePlaylists[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicClientStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicClientStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicClientStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicClientStateJSON>, MusicClientStateJSON *, bool> generator("Type MusicClientState", ignore_extras);
            parse_json_value(text, "Text for MusicClientStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicClientStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicClientStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicClientStateJSON>, MusicClientStateJSON *, bool> generator("Type MusicClientState", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSoundHoundTrackId;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSoundHoundArtistId;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSoundHoundAlbumId;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSoundHoundTrackIdList;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSoundHoundArtistIdList;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSoundHoundAlbumIdList;
        JSONHoldingGenerator<MusicTrackResultJSON::Generator, RCHandle<MusicTrackResultJSON>, MusicTrackResultJSON *, bool > fieldGeneratorTrackList;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorTrackListPosition;
        JSONHoldingGenerator<PlaylistStateItemJSON::Generator, RCHandle<PlaylistStateItemJSON>, PlaylistStateItemJSON *, bool > fieldGeneratorPlaylist;
        JSONHoldingArrayGenerator<PlaylistStateItemJSON::Generator, RCHandle<PlaylistStateItemJSON>, PlaylistStateItemJSON *, bool > fieldGeneratorPlaylists;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            MusicClientStateJSON *result = new MusicClientStateJSON();
            assert(result != NULL);
            RCHandle<MusicClientStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicClientStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(MusicClientStateJSON *result)
          {
            if (fieldGeneratorSoundHoundTrackId.have_value)
              {
                result->setSoundHoundTrackId(fieldGeneratorSoundHoundTrackId.value);
                fieldGeneratorSoundHoundTrackId.have_value = false;
              }
            if (fieldGeneratorSoundHoundArtistId.have_value)
              {
                result->setSoundHoundArtistId(fieldGeneratorSoundHoundArtistId.value);
                fieldGeneratorSoundHoundArtistId.have_value = false;
              }
            if (fieldGeneratorSoundHoundAlbumId.have_value)
              {
                result->setSoundHoundAlbumId(fieldGeneratorSoundHoundAlbumId.value);
                fieldGeneratorSoundHoundAlbumId.have_value = false;
              }
            if (fieldGeneratorSoundHoundTrackIdList.have_value)
              {
                result->initSoundHoundTrackIdList();
                size_t count = fieldGeneratorSoundHoundTrackIdList.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSoundHoundTrackIdList(fieldGeneratorSoundHoundTrackIdList.value[num]);
                  }
                fieldGeneratorSoundHoundTrackIdList.value.clear();
                fieldGeneratorSoundHoundTrackIdList.have_value = false;
              }
            if (fieldGeneratorSoundHoundArtistIdList.have_value)
              {
                result->initSoundHoundArtistIdList();
                size_t count = fieldGeneratorSoundHoundArtistIdList.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSoundHoundArtistIdList(fieldGeneratorSoundHoundArtistIdList.value[num]);
                  }
                fieldGeneratorSoundHoundArtistIdList.value.clear();
                fieldGeneratorSoundHoundArtistIdList.have_value = false;
              }
            if (fieldGeneratorSoundHoundAlbumIdList.have_value)
              {
                result->initSoundHoundAlbumIdList();
                size_t count = fieldGeneratorSoundHoundAlbumIdList.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSoundHoundAlbumIdList(fieldGeneratorSoundHoundAlbumIdList.value[num]);
                  }
                fieldGeneratorSoundHoundAlbumIdList.value.clear();
                fieldGeneratorSoundHoundAlbumIdList.have_value = false;
              }
            if (fieldGeneratorTrackList.have_value)
              {
                result->setTrackList(fieldGeneratorTrackList.value.referenced());
                fieldGeneratorTrackList.have_value = false;
              }
            if (fieldGeneratorTrackListPosition.have_value)
              {
                result->setTrackListPosition(fieldGeneratorTrackListPosition.value);
                fieldGeneratorTrackListPosition.have_value = false;
              }
            if (fieldGeneratorPlaylist.have_value)
              {
                result->setPlaylist(fieldGeneratorPlaylist.value.referenced());
                fieldGeneratorPlaylist.have_value = false;
              }
            if (fieldGeneratorPlaylists.have_value)
              {
                result->initPlaylists();
                size_t count = fieldGeneratorPlaylists.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlaylists(fieldGeneratorPlaylists.value[num].referenced());
                  }
                fieldGeneratorPlaylists.value.clear();
                fieldGeneratorPlaylists.have_value = false;
              }
          }
        virtual void handle_result(MusicClientStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'P':
                    if (strncmp(&(field_name[1]), "laylist", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 0:
                                return &fieldGeneratorPlaylist;
                            case 's':
                                if (field_name[9] == 0)
                                    return &fieldGeneratorPlaylists;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "oundHound", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'A':
                                switch ((unsigned char)(field_name[11]))
                                  {
                                    case 'l':
                                        if (strncmp(&(field_name[12]), "bumId", 5) == 0)
                                          {
                                            switch ((unsigned char)(field_name[17]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorSoundHoundAlbumId;
                                                case 'L':
                                                    if (strcmp(&(field_name[18]), "ist") == 0)
                                                        return &fieldGeneratorSoundHoundAlbumIdList;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'r':
                                        if (strncmp(&(field_name[12]), "tistId", 6) == 0)
                                          {
                                            switch ((unsigned char)(field_name[18]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorSoundHoundArtistId;
                                                case 'L':
                                                    if (strcmp(&(field_name[19]), "ist") == 0)
                                                        return &fieldGeneratorSoundHoundArtistIdList;
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
                            case 'T':
                                if (strncmp(&(field_name[11]), "rackId", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[17]))
                                      {
                                        case 0:
                                            return &fieldGeneratorSoundHoundTrackId;
                                        case 'L':
                                            if (strcmp(&(field_name[18]), "ist") == 0)
                                                return &fieldGeneratorSoundHoundTrackIdList;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "rackList", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 0:
                                return &fieldGeneratorTrackList;
                            case 'P':
                                if (strcmp(&(field_name[10]), "osition") == 0)
                                    return &fieldGeneratorTrackListPosition;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSoundHoundTrackId("field \"SoundHoundTrackId\" of the MusicClientState class"), fieldGeneratorSoundHoundArtistId("field \"SoundHoundArtistId\" of the MusicClientState class"), fieldGeneratorSoundHoundAlbumId("field \"SoundHoundAlbumId\" of the MusicClientState class"), fieldGeneratorSoundHoundTrackIdList("field \"SoundHoundTrackIdList\" of the MusicClientState class"), fieldGeneratorSoundHoundArtistIdList("field \"SoundHoundArtistIdList\" of the MusicClientState class"), fieldGeneratorSoundHoundAlbumIdList("field \"SoundHoundAlbumIdList\" of the MusicClientState class"), fieldGeneratorTrackList("field \"TrackList\" of the MusicClientState class", ignore_extras), fieldGeneratorTrackListPosition("field \"TrackListPosition\" of the MusicClientState class"), fieldGeneratorPlaylist("field \"Playlist\" of the MusicClientState class", ignore_extras), fieldGeneratorPlaylists("field \"Playlists\" of the MusicClientState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MusicClientState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSoundHoundTrackId.reset();
            fieldGeneratorSoundHoundArtistId.reset();
            fieldGeneratorSoundHoundAlbumId.reset();
            fieldGeneratorSoundHoundTrackIdList.reset();
            fieldGeneratorSoundHoundArtistIdList.reset();
            fieldGeneratorSoundHoundAlbumIdList.reset();
            fieldGeneratorTrackList.reset();
            fieldGeneratorTrackListPosition.reset();
            fieldGeneratorPlaylist.reset();
            fieldGeneratorPlaylists.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MUSICCLIENTSTATEJSON_H */
