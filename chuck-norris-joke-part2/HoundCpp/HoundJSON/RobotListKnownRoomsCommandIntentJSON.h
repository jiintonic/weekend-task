/* file "RobotListKnownRoomsCommandIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTLISTKNOWNROOMSCOMMANDINTENTJSON_H
#define ROBOTLISTKNOWNROOMSCOMMANDINTENTJSON_H

#pragma interface

#include "RobotCommandIntentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "RoomJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RobotListKnownRoomsCommandIntentJSON : public RobotCommandIntentJSON
  {
  private:
    bool flagHasRoomsList;
    std::vector< RoomJSON * > storeRoomsList;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RobotListKnownRoomsCommandIntentJSON(const RobotListKnownRoomsCommandIntentJSON &);
    RobotListKnownRoomsCommandIntentJSON & operator=(const RobotListKnownRoomsCommandIntentJSON &other);

    JSONValue * extraRoomsListToJSON(void) const;

    void  fromJSONRoomsList(JSONValue *json_value, bool ignore_extras = false);


  public:
    RobotListKnownRoomsCommandIntentJSON(void);
    virtual ~RobotListKnownRoomsCommandIntentJSON(void);
    const char * getRobotIntentKind(void) const;
    bool  hasRoomsList(void) const;
    size_t  countOfRoomsList(void) const;
    RoomJSON *  elementOfRoomsList(size_t element_num);
    const RoomJSON *  elementOfRoomsList(size_t element_num) const;
    std::vector< RoomJSON * >  getRoomsList(void);
    const std::vector< RoomJSON * >  getRoomsList(void) const;

    virtual size_t extraRobotListKnownRoomsCommandIntentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRobotListKnownRoomsCommandIntentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRobotListKnownRoomsCommandIntentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRobotListKnownRoomsCommandIntentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRobotListKnownRoomsCommandIntentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRobotListKnownRoomsCommandIntentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRobotCommandIntentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasRoomsList)
            ++result;
        result += extraRobotListKnownRoomsCommandIntentComponentCount();
        return result;
      }
    const char *extraRobotCommandIntentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRoomsList)
          {
            if (remainder == 0)
                return "RoomsList";
            --remainder;
          }
        return extraRobotListKnownRoomsCommandIntentComponentKey(remainder);
      }
    JSONValue *extraRobotCommandIntentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasRoomsList)
          {
            if (remainder == 0)
                return extraRoomsListToJSON();
            --remainder;
          }
        return extraRobotListKnownRoomsCommandIntentComponentValue(remainder);
      }
    const JSONValue *extraRobotCommandIntentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRoomsList)
          {
            if (remainder == 0)
                return extraRoomsListToJSON();
            --remainder;
          }
        return extraRobotListKnownRoomsCommandIntentComponentValue(remainder);
      }
    JSONValue *extraRobotCommandIntentLookup(const char *field_name)
      {
        if (strcmp(field_name, "RoomsList") == 0)
            return (flagHasRoomsList ? extraRoomsListToJSON() : NULL);
        return extraRobotListKnownRoomsCommandIntentLookup(field_name);
      }
    const JSONValue *extraRobotCommandIntentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "RoomsList") == 0)
            return (flagHasRoomsList ? extraRoomsListToJSON() : NULL);
        return extraRobotListKnownRoomsCommandIntentLookup(field_name);
      }

    void initRoomsList(void)
      {
        if (flagHasRoomsList)
          {
            for (size_t num2 = 0; num2 < storeRoomsList.size(); ++num2)
              {
                storeRoomsList[num2]->remove_reference();
              }
          }
        flagHasRoomsList = true;
        storeRoomsList.clear();
      }
    void appendRoomsList(RoomJSON * to_append)
      {
        if (!flagHasRoomsList)
          {
            flagHasRoomsList = true;
            storeRoomsList.clear();
          }
        assert(flagHasRoomsList);
        to_append->add_reference();
        storeRoomsList.push_back(to_append);
      }
    void unsetRoomsList(void)
      {
        if (flagHasRoomsList)
          {
            for (size_t num3 = 0; num3 < storeRoomsList.size(); ++num3)
              {
                storeRoomsList[num3]->remove_reference();
              }
          }
        flagHasRoomsList = false;
        storeRoomsList.clear();
      }

    virtual void extraRobotListKnownRoomsCommandIntentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRobotListKnownRoomsCommandIntentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRobotListKnownRoomsCommandIntentLookup(key);
        if (old_field == NULL)
          {
            extraRobotListKnownRoomsCommandIntentAppendPair(key, new_component);
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
    void extraRobotCommandIntentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "RoomsList") == 0)
            {
            fromJSONRoomsList(new_component, false);
            return;
            }
        extraRobotListKnownRoomsCommandIntentAppendPair(key, new_component);
      }
    void extraRobotCommandIntentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "RoomsList") == 0)
            {
            fromJSONRoomsList(new_component, false);
            return;
            }
        extraRobotListKnownRoomsCommandIntentSetField(key, new_component);
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
        RobotCommandIntentJSON::write_fields_as_json(handler);
        assert(flagHasRoomsList);
        handler->start_pair("RoomsList");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeRoomsList.size(); ++num1)
          {
            storeRoomsList[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasRoomsList()))
          {
            return "When parsing the object for %what%, the \"RoomsList\" field was missing.";
          }
        return NULL;
      }

    static RobotListKnownRoomsCommandIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotListKnownRoomsCommandIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotListKnownRoomsCommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotListKnownRoomsCommandIntentJSON>, RobotListKnownRoomsCommandIntentJSON *, bool> generator("Type RobotListKnownRoomsCommandIntent", ignore_extras);
            parse_json_value(text, "Text for RobotListKnownRoomsCommandIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotListKnownRoomsCommandIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotListKnownRoomsCommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotListKnownRoomsCommandIntentJSON>, RobotListKnownRoomsCommandIntentJSON *, bool> generator("Type RobotListKnownRoomsCommandIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RobotCommandIntentJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<RoomJSON::Generator, RCHandle<RoomJSON>, RoomJSON *, bool > fieldGeneratorRoomsList;
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
            if (!(strcmp(getRobotCommandIntentJSONKey().c_str(), "ListKnownRoomsCommand") == 0))
                throw("The key field has a value other than `ListKnownRoomsCommand'.");
            RobotListKnownRoomsCommandIntentJSON *result = new RobotListKnownRoomsCommandIntentJSON();
            assert(result != NULL);
            RCHandle<RobotListKnownRoomsCommandIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotListKnownRoomsCommandIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RobotCommandIntentJSON *new_result)
          {
            handle_result((RobotListKnownRoomsCommandIntentJSON *)new_result);
          }
        void finish(RobotListKnownRoomsCommandIntentJSON *result)
          {
            if (fieldGeneratorRoomsList.have_value)
              {
                result->initRoomsList();
                size_t count = fieldGeneratorRoomsList.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRoomsList(fieldGeneratorRoomsList.value[num].referenced());
                  }
                fieldGeneratorRoomsList.value.clear();
                fieldGeneratorRoomsList.have_value = false;
              }
            else if (!(result->hasRoomsList()))
              {
                error("When parsing the object for %what%, the \"RoomsList\" field was missing.");
              }
            RobotCommandIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(RobotListKnownRoomsCommandIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "RoomsList") == 0)
                return &fieldGeneratorRoomsList;
            return RobotCommandIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RobotCommandIntentJSON::Generator(ignore_extras), fieldGeneratorRoomsList("field \"RoomsList\" of the RobotListKnownRoomsCommandIntent class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RobotListKnownRoomsCommandIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRoomsList.reset();
            RobotCommandIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROBOTLISTKNOWNROOMSCOMMANDINTENTJSON_H */
