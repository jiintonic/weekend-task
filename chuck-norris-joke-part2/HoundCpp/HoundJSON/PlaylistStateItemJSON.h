/* file "PlaylistStateItemJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PLAYLISTSTATEITEMJSON_H
#define PLAYLISTSTATEITEMJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include <string>
#include "OInteger.h"
#include "MusicThirdPartyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class PlaylistStateItemJSON : public ReferenceCounted
  {
  private:
    bool flagHasIndex;
    OInteger storeIndex;
    bool flagHasID;
    std::string storeID;
    bool flagHasMusicService;
    MusicThirdPartyJSON * storeMusicService;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    PlaylistStateItemJSON(const PlaylistStateItemJSON &);
    PlaylistStateItemJSON & operator=(const PlaylistStateItemJSON &other);

    void  fromJSONIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicService(JSONValue *json_value, bool ignore_extras = false);


  public:
    PlaylistStateItemJSON(void);
    virtual ~PlaylistStateItemJSON(void);
    bool  hasIndex(void) const;
    OInteger  getIndex(void);
    const OInteger  getIndex(void) const;
    bool  hasID(void) const;
    std::string  getID(void);
    const std::string  getID(void) const;
    bool  hasMusicService(void) const;
    MusicThirdPartyJSON *  getMusicService(void);
    const MusicThirdPartyJSON *  getMusicService(void) const;

    virtual size_t extraPlaylistStateItemComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraPlaylistStateItemComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraPlaylistStateItemComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraPlaylistStateItemComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraPlaylistStateItemLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraPlaylistStateItemLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setIndex(OInteger new_value)
      {
        flagHasIndex = true;
        storeIndex = new_value;
      }
    void unsetIndex(void)
      {
        flagHasIndex = false;
      }
    void setID(std::string new_value)
      {
        flagHasID = true;
        storeID = new_value;
      }
    void unsetID(void)
      {
        flagHasID = false;
      }
    void setMusicService(MusicThirdPartyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMusicService)
          {
            storeMusicService->remove_reference();
          }
        flagHasMusicService = true;
        storeMusicService = new_value;
      }
    void unsetMusicService(void)
      {
        if (flagHasMusicService)
          {
            storeMusicService->remove_reference();
          }
        flagHasMusicService = false;
      }

    virtual void extraPlaylistStateItemAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraPlaylistStateItemSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraPlaylistStateItemLookup(key);
        if (old_field == NULL)
          {
            extraPlaylistStateItemAppendPair(key, new_component);
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
        if (flagHasIndex)
          {
            handler->start_pair("Index");
            handler->number_value(storeIndex.get_o_integer());
          }
        if (flagHasID)
          {
            handler->start_pair("ID");
            handler->string_value(storeID);
          }
        if (flagHasMusicService)
          {
            handler->start_pair("MusicService");
            storeMusicService->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static PlaylistStateItemJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PlaylistStateItemJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PlaylistStateItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PlaylistStateItemJSON>, PlaylistStateItemJSON *, bool> generator("Type PlaylistStateItem", ignore_extras);
            parse_json_value(text, "Text for PlaylistStateItemJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PlaylistStateItemJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PlaylistStateItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PlaylistStateItemJSON>, PlaylistStateItemJSON *, bool> generator("Type PlaylistStateItem", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorIndex;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
        JSONHoldingGenerator<MusicThirdPartyJSON::Generator, RCHandle<MusicThirdPartyJSON>, MusicThirdPartyJSON *, bool > fieldGeneratorMusicService;
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
            PlaylistStateItemJSON *result = new PlaylistStateItemJSON();
            assert(result != NULL);
            RCHandle<PlaylistStateItemJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraPlaylistStateItemAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(PlaylistStateItemJSON *result)
          {
            if (fieldGeneratorIndex.have_value)
              {
                result->setIndex(fieldGeneratorIndex.value);
                fieldGeneratorIndex.have_value = false;
              }
            if (fieldGeneratorID.have_value)
              {
                result->setID(fieldGeneratorID.value);
                fieldGeneratorID.have_value = false;
              }
            if (fieldGeneratorMusicService.have_value)
              {
                result->setMusicService(fieldGeneratorMusicService.value.referenced());
                fieldGeneratorMusicService.have_value = false;
              }
          }
        virtual void handle_result(PlaylistStateItemJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'D':
                            if (field_name[2] == 0)
                                return &fieldGeneratorID;
                            break;
                        case 'n':
                            if (strcmp(&(field_name[2]), "dex") == 0)
                                return &fieldGeneratorIndex;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "usicService") == 0)
                        return &fieldGeneratorMusicService;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorIndex("field \"Index\" of the PlaylistStateItem class"), fieldGeneratorID("field \"ID\" of the PlaylistStateItem class"), fieldGeneratorMusicService("field \"MusicService\" of the PlaylistStateItem class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the PlaylistStateItem class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIndex.reset();
            fieldGeneratorID.reset();
            fieldGeneratorMusicService.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* PLAYLISTSTATEITEMJSON_H */
