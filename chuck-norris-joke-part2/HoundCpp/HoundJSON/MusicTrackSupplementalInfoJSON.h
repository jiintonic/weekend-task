/* file "MusicTrackSupplementalInfoJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICTRACKSUPPLEMENTALINFOJSON_H
#define MUSICTRACKSUPPLEMENTALINFOJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "MusicThirdPartyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicTrackSupplementalInfoJSON : public ReferenceCounted
  {
  private:
    bool flagHasPrimaryIDType;
    MusicThirdPartyJSON * storePrimaryIDType;
    bool flagHasSpotifyTrackID;
    std::string storeSpotifyTrackID;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MusicTrackSupplementalInfoJSON(const MusicTrackSupplementalInfoJSON &);
    MusicTrackSupplementalInfoJSON & operator=(const MusicTrackSupplementalInfoJSON &other);

    void  fromJSONPrimaryIDType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpotifyTrackID(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicTrackSupplementalInfoJSON(void);
    virtual ~MusicTrackSupplementalInfoJSON(void);
    bool  hasPrimaryIDType(void) const;
    MusicThirdPartyJSON *  getPrimaryIDType(void);
    const MusicThirdPartyJSON *  getPrimaryIDType(void) const;
    bool  hasSpotifyTrackID(void) const;
    std::string  getSpotifyTrackID(void);
    const std::string  getSpotifyTrackID(void) const;

    virtual size_t extraMusicTrackSupplementalInfoComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMusicTrackSupplementalInfoComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMusicTrackSupplementalInfoComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMusicTrackSupplementalInfoComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMusicTrackSupplementalInfoLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMusicTrackSupplementalInfoLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setPrimaryIDType(MusicThirdPartyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrimaryIDType)
          {
            storePrimaryIDType->remove_reference();
          }
        flagHasPrimaryIDType = true;
        storePrimaryIDType = new_value;
      }
    void unsetPrimaryIDType(void)
      {
        if (flagHasPrimaryIDType)
          {
            storePrimaryIDType->remove_reference();
          }
        flagHasPrimaryIDType = false;
      }
    void setSpotifyTrackID(std::string new_value)
      {
        flagHasSpotifyTrackID = true;
        storeSpotifyTrackID = new_value;
      }
    void unsetSpotifyTrackID(void)
      {
        flagHasSpotifyTrackID = false;
      }

    virtual void extraMusicTrackSupplementalInfoAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMusicTrackSupplementalInfoSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMusicTrackSupplementalInfoLookup(key);
        if (old_field == NULL)
          {
            extraMusicTrackSupplementalInfoAppendPair(key, new_component);
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
        if (flagHasPrimaryIDType)
          {
            handler->start_pair("PrimaryIDType");
            storePrimaryIDType->write_as_json(handler);
          }
        if (flagHasSpotifyTrackID)
          {
            handler->start_pair("SpotifyTrackID");
            handler->string_value(storeSpotifyTrackID);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicTrackSupplementalInfoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicTrackSupplementalInfoJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicTrackSupplementalInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackSupplementalInfoJSON>, MusicTrackSupplementalInfoJSON *, bool> generator("Type MusicTrackSupplementalInfo", ignore_extras);
            parse_json_value(text, "Text for MusicTrackSupplementalInfoJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicTrackSupplementalInfoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicTrackSupplementalInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicTrackSupplementalInfoJSON>, MusicTrackSupplementalInfoJSON *, bool> generator("Type MusicTrackSupplementalInfo", ignore_extras);
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
        JSONHoldingGenerator<MusicThirdPartyJSON::Generator, RCHandle<MusicThirdPartyJSON>, MusicThirdPartyJSON *, bool > fieldGeneratorPrimaryIDType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpotifyTrackID;
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
            MusicTrackSupplementalInfoJSON *result = new MusicTrackSupplementalInfoJSON();
            assert(result != NULL);
            RCHandle<MusicTrackSupplementalInfoJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicTrackSupplementalInfoAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(MusicTrackSupplementalInfoJSON *result)
          {
            if (fieldGeneratorPrimaryIDType.have_value)
              {
                result->setPrimaryIDType(fieldGeneratorPrimaryIDType.value.referenced());
                fieldGeneratorPrimaryIDType.have_value = false;
              }
            if (fieldGeneratorSpotifyTrackID.have_value)
              {
                result->setSpotifyTrackID(fieldGeneratorSpotifyTrackID.value);
                fieldGeneratorSpotifyTrackID.have_value = false;
              }
          }
        virtual void handle_result(MusicTrackSupplementalInfoJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'P':
                    if (strcmp(&(field_name[1]), "rimaryIDType") == 0)
                        return &fieldGeneratorPrimaryIDType;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "potifyTrackID") == 0)
                        return &fieldGeneratorSpotifyTrackID;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPrimaryIDType("field \"PrimaryIDType\" of the MusicTrackSupplementalInfo class", ignore_extras), fieldGeneratorSpotifyTrackID("field \"SpotifyTrackID\" of the MusicTrackSupplementalInfo class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MusicTrackSupplementalInfo class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPrimaryIDType.reset();
            fieldGeneratorSpotifyTrackID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MUSICTRACKSUPPLEMENTALINFOJSON_H */
