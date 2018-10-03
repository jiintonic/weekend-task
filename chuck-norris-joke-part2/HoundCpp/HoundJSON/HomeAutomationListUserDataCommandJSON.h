/* file "HomeAutomationListUserDataCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONLISTUSERDATACOMMANDJSON_H
#define HOMEAUTOMATIONLISTUSERDATACOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "HomeAutomationDeviceSpecifierJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationListUserDataCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasDeviceSpecifier;
    HomeAutomationDeviceSpecifierJSON * storeDeviceSpecifier;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationListUserDataCommandJSON(const HomeAutomationListUserDataCommandJSON &);
    HomeAutomationListUserDataCommandJSON & operator=(const HomeAutomationListUserDataCommandJSON &other);

    JSONValue * extraDeviceSpecifierToJSON(void) const;

    void  fromJSONDeviceSpecifier(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationListUserDataCommandJSON(void);
    virtual ~HomeAutomationListUserDataCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasDeviceSpecifier(void) const;
    HomeAutomationDeviceSpecifierJSON *  getDeviceSpecifier(void);
    const HomeAutomationDeviceSpecifierJSON *  getDeviceSpecifier(void) const;

    virtual size_t extraHomeAutomationListUserDataCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationListUserDataCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationListUserDataCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationListUserDataCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationListUserDataCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationListUserDataCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDeviceSpecifier)
            ++result;
        result += extraHomeAutomationListUserDataCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return "DeviceSpecifier";
            --remainder;
          }
        return extraHomeAutomationListUserDataCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return extraDeviceSpecifierToJSON();
            --remainder;
          }
        return extraHomeAutomationListUserDataCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return extraDeviceSpecifierToJSON();
            --remainder;
          }
        return extraHomeAutomationListUserDataCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "DeviceSpecifier") == 0)
            return (flagHasDeviceSpecifier ? extraDeviceSpecifierToJSON() : NULL);
        return extraHomeAutomationListUserDataCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "DeviceSpecifier") == 0)
            return (flagHasDeviceSpecifier ? extraDeviceSpecifierToJSON() : NULL);
        return extraHomeAutomationListUserDataCommandLookup(field_name);
      }

    void setDeviceSpecifier(HomeAutomationDeviceSpecifierJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeviceSpecifier)
          {
            storeDeviceSpecifier->remove_reference();
          }
        flagHasDeviceSpecifier = true;
        storeDeviceSpecifier = new_value;
      }
    void unsetDeviceSpecifier(void)
      {
        if (flagHasDeviceSpecifier)
          {
            storeDeviceSpecifier->remove_reference();
          }
        flagHasDeviceSpecifier = false;
      }

    virtual void extraHomeAutomationListUserDataCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationListUserDataCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationListUserDataCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationListUserDataCommandAppendPair(key, new_component);
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
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "DeviceSpecifier") == 0)
            {
            fromJSONDeviceSpecifier(new_component, false);
            return;
            }
        extraHomeAutomationListUserDataCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "DeviceSpecifier") == 0)
            {
            fromJSONDeviceSpecifier(new_component, false);
            return;
            }
        extraHomeAutomationListUserDataCommandSetField(key, new_component);
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
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasDeviceSpecifier);
        handler->start_pair("DeviceSpecifier");
        storeDeviceSpecifier->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDeviceSpecifier()))
          {
            return "When parsing the object for %what%, the \"DeviceSpecifier\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationListUserDataCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationListUserDataCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationListUserDataCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationListUserDataCommandJSON>, HomeAutomationListUserDataCommandJSON *, bool> generator("Type HomeAutomationListUserDataCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationListUserDataCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationListUserDataCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationListUserDataCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationListUserDataCommandJSON>, HomeAutomationListUserDataCommandJSON *, bool> generator("Type HomeAutomationListUserDataCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<HomeAutomationDeviceSpecifierJSON::Generator, RCHandle<HomeAutomationDeviceSpecifierJSON>, HomeAutomationDeviceSpecifierJSON *, bool > fieldGeneratorDeviceSpecifier;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "HomeAutomationListUserDataCommand") == 0))
                throw("The key field has a value other than `HomeAutomationListUserDataCommand'.");
            HomeAutomationListUserDataCommandJSON *result = new HomeAutomationListUserDataCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationListUserDataCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationListUserDataCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((HomeAutomationListUserDataCommandJSON *)new_result);
          }
        void finish(HomeAutomationListUserDataCommandJSON *result)
          {
            if (fieldGeneratorDeviceSpecifier.have_value)
              {
                result->setDeviceSpecifier(fieldGeneratorDeviceSpecifier.value.referenced());
                fieldGeneratorDeviceSpecifier.have_value = false;
              }
            else if (!(result->hasDeviceSpecifier()))
              {
                error("When parsing the object for %what%, the \"DeviceSpecifier\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationListUserDataCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "DeviceSpecifier") == 0)
                return &fieldGeneratorDeviceSpecifier;
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorDeviceSpecifier("field \"DeviceSpecifier\" of the HomeAutomationListUserDataCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationListUserDataCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDeviceSpecifier.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONLISTUSERDATACOMMANDJSON_H */
