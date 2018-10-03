/* file "RoomJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROOMJSON_H
#define ROOMJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RoomJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasDeterminerMentioned;
    bool storeDeterminerMentioned;
    bool flagHasUUID;
    std::string storeUUID;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RoomJSON(const RoomJSON &);
    RoomJSON & operator=(const RoomJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeterminerMentioned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUUID(JSONValue *json_value, bool ignore_extras = false);


  public:
    RoomJSON(void);
    virtual ~RoomJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasDeterminerMentioned(void) const;
    bool  getDeterminerMentioned(void);
    const bool  getDeterminerMentioned(void) const;
    bool  hasUUID(void) const;
    std::string  getUUID(void);
    const std::string  getUUID(void) const;

    virtual size_t extraRoomComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRoomComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRoomComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRoomComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRoomLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRoomLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setDeterminerMentioned(bool new_value)
      {
        flagHasDeterminerMentioned = true;
        storeDeterminerMentioned = new_value;
      }
    void unsetDeterminerMentioned(void)
      {
        flagHasDeterminerMentioned = false;
      }
    void setUUID(std::string new_value)
      {
        flagHasUUID = true;
        storeUUID = new_value;
      }
    void unsetUUID(void)
      {
        flagHasUUID = false;
      }

    virtual void extraRoomAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRoomSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRoomLookup(key);
        if (old_field == NULL)
          {
            extraRoomAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasDeterminerMentioned)
          {
            handler->start_pair("DeterminerMentioned");
            handler->boolean_value(storeDeterminerMentioned);
          }
        if (flagHasUUID)
          {
            handler->start_pair("UUID");
            handler->string_value(storeUUID);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        return NULL;
      }

    static RoomJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RoomJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RoomJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RoomJSON>, RoomJSON *, bool> generator("Type Room", ignore_extras);
            parse_json_value(text, "Text for RoomJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RoomJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RoomJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RoomJSON>, RoomJSON *, bool> generator("Type Room", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDeterminerMentioned;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUUID;
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
            RoomJSON *result = new RoomJSON();
            assert(result != NULL);
            RCHandle<RoomJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRoomAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(RoomJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorDeterminerMentioned.have_value)
              {
                result->setDeterminerMentioned(fieldGeneratorDeterminerMentioned.value);
                fieldGeneratorDeterminerMentioned.have_value = false;
              }
            if (fieldGeneratorUUID.have_value)
              {
                result->setUUID(fieldGeneratorUUID.value);
                fieldGeneratorUUID.have_value = false;
              }
          }
        virtual void handle_result(RoomJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "eterminerMentioned") == 0)
                        return &fieldGeneratorDeterminerMentioned;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "UID") == 0)
                        return &fieldGeneratorUUID;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the Room class"), fieldGeneratorDeterminerMentioned("field \"DeterminerMentioned\" of the Room class"), fieldGeneratorUUID("field \"UUID\" of the Room class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Room class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorDeterminerMentioned.reset();
            fieldGeneratorUUID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROOMJSON_H */
