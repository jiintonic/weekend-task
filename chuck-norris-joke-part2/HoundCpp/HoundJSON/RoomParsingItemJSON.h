/* file "RoomParsingItemJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROOMPARSINGITEMJSON_H
#define ROOMPARSINGITEMJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RoomParsingItemJSON : public ReferenceCounted
  {
  private:
    bool flagHasRoomName;
    std::string storeRoomName;
    bool flagHasRoomUUID;
    std::string storeRoomUUID;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RoomParsingItemJSON(const RoomParsingItemJSON &);
    RoomParsingItemJSON & operator=(const RoomParsingItemJSON &other);

    void  fromJSONRoomName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRoomUUID(JSONValue *json_value, bool ignore_extras = false);


  public:
    RoomParsingItemJSON(void);
    virtual ~RoomParsingItemJSON(void);
    bool  hasRoomName(void) const;
    std::string  getRoomName(void);
    const std::string  getRoomName(void) const;
    bool  hasRoomUUID(void) const;
    std::string  getRoomUUID(void);
    const std::string  getRoomUUID(void) const;

    virtual size_t extraRoomParsingItemComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRoomParsingItemComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRoomParsingItemComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRoomParsingItemComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRoomParsingItemLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRoomParsingItemLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setRoomName(std::string new_value)
      {
        flagHasRoomName = true;
        storeRoomName = new_value;
      }
    void unsetRoomName(void)
      {
        flagHasRoomName = false;
      }
    void setRoomUUID(std::string new_value)
      {
        flagHasRoomUUID = true;
        storeRoomUUID = new_value;
      }
    void unsetRoomUUID(void)
      {
        flagHasRoomUUID = false;
      }

    virtual void extraRoomParsingItemAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRoomParsingItemSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRoomParsingItemLookup(key);
        if (old_field == NULL)
          {
            extraRoomParsingItemAppendPair(key, new_component);
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
        assert(flagHasRoomName);
        handler->start_pair("RoomName");
        handler->string_value(storeRoomName);
        assert(flagHasRoomUUID);
        handler->start_pair("RoomUUID");
        handler->string_value(storeRoomUUID);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasRoomName()))
          {
            return "When parsing the object for %what%, the \"RoomName\" field was missing.";
          }
        if (!(hasRoomUUID()))
          {
            return "When parsing the object for %what%, the \"RoomUUID\" field was missing.";
          }
        return NULL;
      }

    static RoomParsingItemJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RoomParsingItemJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RoomParsingItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RoomParsingItemJSON>, RoomParsingItemJSON *, bool> generator("Type RoomParsingItem", ignore_extras);
            parse_json_value(text, "Text for RoomParsingItemJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RoomParsingItemJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RoomParsingItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RoomParsingItemJSON>, RoomParsingItemJSON *, bool> generator("Type RoomParsingItem", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRoomName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRoomUUID;
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
            RoomParsingItemJSON *result = new RoomParsingItemJSON();
            assert(result != NULL);
            RCHandle<RoomParsingItemJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRoomParsingItemAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(RoomParsingItemJSON *result)
          {
            if (fieldGeneratorRoomName.have_value)
              {
                result->setRoomName(fieldGeneratorRoomName.value);
                fieldGeneratorRoomName.have_value = false;
              }
            else if (!(result->hasRoomName()))
              {
                error("When parsing the object for %what%, the \"RoomName\" field was missing.");
              }
            if (fieldGeneratorRoomUUID.have_value)
              {
                result->setRoomUUID(fieldGeneratorRoomUUID.value);
                fieldGeneratorRoomUUID.have_value = false;
              }
            else if (!(result->hasRoomUUID()))
              {
                error("When parsing the object for %what%, the \"RoomUUID\" field was missing.");
              }
          }
        virtual void handle_result(RoomParsingItemJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Room", 4) == 0)
              {
                switch ((unsigned char)(field_name[4]))
                  {
                    case 'N':
                        if (strcmp(&(field_name[5]), "ame") == 0)
                            return &fieldGeneratorRoomName;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[5]), "UID") == 0)
                            return &fieldGeneratorRoomUUID;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorRoomName("field \"RoomName\" of the RoomParsingItem class"), fieldGeneratorRoomUUID("field \"RoomUUID\" of the RoomParsingItem class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RoomParsingItem class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRoomName.reset();
            fieldGeneratorRoomUUID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROOMPARSINGITEMJSON_H */
