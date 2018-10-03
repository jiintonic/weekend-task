/* file "RobotGoToRoomCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTGOTOROOMCOMMANDJSON_H
#define ROBOTGOTOROOMCOMMANDJSON_H

#pragma interface

#include "RobotCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "RoomJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RobotGoToRoomCommandJSON : public RobotCommandJSON
  {
  private:
    bool flagHasRoom;
    RoomJSON * storeRoom;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RobotGoToRoomCommandJSON(const RobotGoToRoomCommandJSON &);
    RobotGoToRoomCommandJSON & operator=(const RobotGoToRoomCommandJSON &other);

    JSONValue * extraRoomToJSON(void) const;

    void  fromJSONRoom(JSONValue *json_value, bool ignore_extras = false);


  public:
    RobotGoToRoomCommandJSON(void);
    virtual ~RobotGoToRoomCommandJSON(void);
    const char * getRobotCommandKind(void) const;
    bool  hasRoom(void) const;
    RoomJSON *  getRoom(void);
    const RoomJSON *  getRoom(void) const;

    virtual size_t extraRobotGoToRoomCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRobotGoToRoomCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRobotGoToRoomCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRobotGoToRoomCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRobotGoToRoomCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRobotGoToRoomCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRobotCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasRoom)
            ++result;
        result += extraRobotGoToRoomCommandComponentCount();
        return result;
      }
    const char *extraRobotCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRoom)
          {
            if (remainder == 0)
                return "Room";
            --remainder;
          }
        return extraRobotGoToRoomCommandComponentKey(remainder);
      }
    JSONValue *extraRobotCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasRoom)
          {
            if (remainder == 0)
                return extraRoomToJSON();
            --remainder;
          }
        return extraRobotGoToRoomCommandComponentValue(remainder);
      }
    const JSONValue *extraRobotCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRoom)
          {
            if (remainder == 0)
                return extraRoomToJSON();
            --remainder;
          }
        return extraRobotGoToRoomCommandComponentValue(remainder);
      }
    JSONValue *extraRobotCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "Room") == 0)
            return (flagHasRoom ? extraRoomToJSON() : NULL);
        return extraRobotGoToRoomCommandLookup(field_name);
      }
    const JSONValue *extraRobotCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Room") == 0)
            return (flagHasRoom ? extraRoomToJSON() : NULL);
        return extraRobotGoToRoomCommandLookup(field_name);
      }

    void setRoom(RoomJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRoom)
          {
            storeRoom->remove_reference();
          }
        flagHasRoom = true;
        storeRoom = new_value;
      }
    void unsetRoom(void)
      {
        if (flagHasRoom)
          {
            storeRoom->remove_reference();
          }
        flagHasRoom = false;
      }

    virtual void extraRobotGoToRoomCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRobotGoToRoomCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRobotGoToRoomCommandLookup(key);
        if (old_field == NULL)
          {
            extraRobotGoToRoomCommandAppendPair(key, new_component);
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
    void extraRobotCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Room") == 0)
            {
            fromJSONRoom(new_component, false);
            return;
            }
        extraRobotGoToRoomCommandAppendPair(key, new_component);
      }
    void extraRobotCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Room") == 0)
            {
            fromJSONRoom(new_component, false);
            return;
            }
        extraRobotGoToRoomCommandSetField(key, new_component);
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
        RobotCommandJSON::write_fields_as_json(handler);
        if (flagHasRoom)
          {
            handler->start_pair("Room");
            storeRoom->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RobotGoToRoomCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotGoToRoomCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotGoToRoomCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotGoToRoomCommandJSON>, RobotGoToRoomCommandJSON *, bool> generator("Type RobotGoToRoomCommand", ignore_extras);
            parse_json_value(text, "Text for RobotGoToRoomCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotGoToRoomCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotGoToRoomCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotGoToRoomCommandJSON>, RobotGoToRoomCommandJSON *, bool> generator("Type RobotGoToRoomCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RobotCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<RoomJSON::Generator, RCHandle<RoomJSON>, RoomJSON *, bool > fieldGeneratorRoom;
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
            if (!(strcmp(getRobotCommandJSONKey().c_str(), "GoToRoomCommand") == 0))
                throw("The key field has a value other than `GoToRoomCommand'.");
            RobotGoToRoomCommandJSON *result = new RobotGoToRoomCommandJSON();
            assert(result != NULL);
            RCHandle<RobotGoToRoomCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotGoToRoomCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RobotCommandJSON *new_result)
          {
            handle_result((RobotGoToRoomCommandJSON *)new_result);
          }
        void finish(RobotGoToRoomCommandJSON *result)
          {
            if (fieldGeneratorRoom.have_value)
              {
                result->setRoom(fieldGeneratorRoom.value.referenced());
                fieldGeneratorRoom.have_value = false;
              }
            RobotCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(RobotGoToRoomCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Room") == 0)
                return &fieldGeneratorRoom;
            return RobotCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RobotCommandJSON::Generator(ignore_extras), fieldGeneratorRoom("field \"Room\" of the RobotGoToRoomCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RobotGoToRoomCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRoom.reset();
            RobotCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROBOTGOTOROOMCOMMANDJSON_H */
