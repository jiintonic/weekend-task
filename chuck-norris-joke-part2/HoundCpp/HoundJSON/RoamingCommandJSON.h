/* file "RoamingCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROAMINGCOMMANDJSON_H
#define ROAMINGCOMMANDJSON_H

#pragma interface

#include "DeviceControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RoamingCommandJSON : public DeviceControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_TurnRoamingOn,
        CommandType_TurnRoamingOff,
        CommandType_CheckRoamingState,
        CommandType_ToggleRoamingState
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RoamingCommandJSON(const RoamingCommandJSON &);
    RoamingCommandJSON & operator=(const RoamingCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);


  public:
    RoamingCommandJSON(void);
    virtual ~RoamingCommandJSON(void);
    const char * getDeviceControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;

    virtual size_t extraRoamingCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRoamingCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRoamingCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRoamingCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRoamingCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRoamingCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDeviceControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCommandType)
            ++result;
        result += extraRoamingCommandComponentCount();
        return result;
      }
    const char *extraDeviceControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return "CommandType";
            --remainder;
          }
        return extraRoamingCommandComponentKey(remainder);
      }
    JSONValue *extraDeviceControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        return extraRoamingCommandComponentValue(remainder);
      }
    const JSONValue *extraDeviceControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        return extraRoamingCommandComponentValue(remainder);
      }
    JSONValue *extraDeviceControlCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "CommandType") == 0)
            return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
        return extraRoamingCommandLookup(field_name);
      }
    const JSONValue *extraDeviceControlCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "CommandType") == 0)
            return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
        return extraRoamingCommandLookup(field_name);
      }

    void setCommandType(TypeCommandType new_value)
      {
        flagHasCommandType = true;
        storeCommandType = new_value;
      }
    void setCommandType(const char *chars)
      {
        setCommandType(stringToCommandType(chars));
      }
    void setCommandType(std::string the_string)
      {
        setCommandType(stringToCommandType(the_string.c_str()));
      }
    void unsetCommandType(void)
      {
        flagHasCommandType = false;
      }

    virtual void extraRoamingCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRoamingCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRoamingCommandLookup(key);
        if (old_field == NULL)
          {
            extraRoamingCommandAppendPair(key, new_component);
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
    void extraDeviceControlCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "CommandType") == 0)
            {
            fromJSONCommandType(new_component, false);
            return;
            }
        extraRoamingCommandAppendPair(key, new_component);
      }
    void extraDeviceControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "CommandType") == 0)
            {
            fromJSONCommandType(new_component, false);
            return;
            }
        extraRoamingCommandSetField(key, new_component);
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
        DeviceControlCommandJSON::write_fields_as_json(handler);
        assert(flagHasCommandType);
        handler->start_pair("CommandType");
        switch (storeCommandType)
          {
            case CommandType_TurnRoamingOn:
                handler->string_value("TurnRoamingOn");
                break;
            case CommandType_TurnRoamingOff:
                handler->string_value("TurnRoamingOff");
                break;
            case CommandType_CheckRoamingState:
                handler->string_value("CheckRoamingState");
                break;
            case CommandType_ToggleRoamingState:
                handler->string_value("ToggleRoamingState");
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        return NULL;
      }

    static RoamingCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RoamingCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RoamingCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RoamingCommandJSON>, RoamingCommandJSON *, bool> generator("Type RoamingCommand", ignore_extras);
            parse_json_value(text, "Text for RoamingCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RoamingCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RoamingCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RoamingCommandJSON>, RoamingCommandJSON *, bool> generator("Type RoamingCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DeviceControlCommandJSON::Generator
      {
      private:
    class FieldGeneratorCommandType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandType(result));
              }
            virtual void handle_result(TypeCommandType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandType, TypeCommandType, TypeCommandType > fieldGeneratorCommandType;
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
            if (!(strcmp(getDeviceControlCommandJSONKey().c_str(), "RoamingCommand") == 0))
                throw("The key field has a value other than `RoamingCommand'.");
            RoamingCommandJSON *result = new RoamingCommandJSON();
            assert(result != NULL);
            RCHandle<RoamingCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRoamingCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DeviceControlCommandJSON *new_result)
          {
            handle_result((RoamingCommandJSON *)new_result);
          }
        void finish(RoamingCommandJSON *result)
          {
            if (fieldGeneratorCommandType.have_value)
              {
                result->setCommandType(fieldGeneratorCommandType.value);
                fieldGeneratorCommandType.have_value = false;
              }
            else if (!(result->hasCommandType()))
              {
                error("When parsing the object for %what%, the \"CommandType\" field was missing.");
              }
            DeviceControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(RoamingCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "CommandType") == 0)
                return &fieldGeneratorCommandType;
            return DeviceControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DeviceControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the RoamingCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RoamingCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            DeviceControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROAMINGCOMMANDJSON_H */
