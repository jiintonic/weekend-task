/* file "HomeAutomationWriteUserSettingsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONWRITEUSERSETTINGSCOMMANDJSON_H
#define HOMEAUTOMATIONWRITEUSERSETTINGSCOMMANDJSON_H

#pragma interface

#include "HomeAutomationCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "HomeAutomationDomainSettingsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationWriteUserSettingsCommandJSON : public HomeAutomationCommandJSON
  {
  private:
    bool flagHasHomeAutomationDomainSettings;
    HomeAutomationDomainSettingsJSON * storeHomeAutomationDomainSettings;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationWriteUserSettingsCommandJSON(const HomeAutomationWriteUserSettingsCommandJSON &);
    HomeAutomationWriteUserSettingsCommandJSON & operator=(const HomeAutomationWriteUserSettingsCommandJSON &other);

    JSONValue * extraHomeAutomationDomainSettingsToJSON(void) const;

    void  fromJSONHomeAutomationDomainSettings(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationWriteUserSettingsCommandJSON(void);
    virtual ~HomeAutomationWriteUserSettingsCommandJSON(void);
    const char * getHomeAutomationCommandKind(void) const;
    bool  hasHomeAutomationDomainSettings(void) const;
    HomeAutomationDomainSettingsJSON *  getHomeAutomationDomainSettings(void);
    const HomeAutomationDomainSettingsJSON *  getHomeAutomationDomainSettings(void) const;

    virtual size_t extraHomeAutomationWriteUserSettingsCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationWriteUserSettingsCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationWriteUserSettingsCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationWriteUserSettingsCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationWriteUserSettingsCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationWriteUserSettingsCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHomeAutomationCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasHomeAutomationDomainSettings)
            ++result;
        result += extraHomeAutomationWriteUserSettingsCommandComponentCount();
        return result;
      }
    const char *extraHomeAutomationCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasHomeAutomationDomainSettings)
          {
            if (remainder == 0)
                return "HomeAutomationDomainSettings";
            --remainder;
          }
        return extraHomeAutomationWriteUserSettingsCommandComponentKey(remainder);
      }
    JSONValue *extraHomeAutomationCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasHomeAutomationDomainSettings)
          {
            if (remainder == 0)
                return extraHomeAutomationDomainSettingsToJSON();
            --remainder;
          }
        return extraHomeAutomationWriteUserSettingsCommandComponentValue(remainder);
      }
    const JSONValue *extraHomeAutomationCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasHomeAutomationDomainSettings)
          {
            if (remainder == 0)
                return extraHomeAutomationDomainSettingsToJSON();
            --remainder;
          }
        return extraHomeAutomationWriteUserSettingsCommandComponentValue(remainder);
      }
    JSONValue *extraHomeAutomationCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "HomeAutomationDomainSettings") == 0)
            return (flagHasHomeAutomationDomainSettings ? extraHomeAutomationDomainSettingsToJSON() : NULL);
        return extraHomeAutomationWriteUserSettingsCommandLookup(field_name);
      }
    const JSONValue *extraHomeAutomationCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "HomeAutomationDomainSettings") == 0)
            return (flagHasHomeAutomationDomainSettings ? extraHomeAutomationDomainSettingsToJSON() : NULL);
        return extraHomeAutomationWriteUserSettingsCommandLookup(field_name);
      }

    void setHomeAutomationDomainSettings(HomeAutomationDomainSettingsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHomeAutomationDomainSettings)
          {
            storeHomeAutomationDomainSettings->remove_reference();
          }
        flagHasHomeAutomationDomainSettings = true;
        storeHomeAutomationDomainSettings = new_value;
      }
    void unsetHomeAutomationDomainSettings(void)
      {
        if (flagHasHomeAutomationDomainSettings)
          {
            storeHomeAutomationDomainSettings->remove_reference();
          }
        flagHasHomeAutomationDomainSettings = false;
      }

    virtual void extraHomeAutomationWriteUserSettingsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationWriteUserSettingsCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationWriteUserSettingsCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationWriteUserSettingsCommandAppendPair(key, new_component);
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
    void extraHomeAutomationCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "HomeAutomationDomainSettings") == 0)
            {
            fromJSONHomeAutomationDomainSettings(new_component, false);
            return;
            }
        extraHomeAutomationWriteUserSettingsCommandAppendPair(key, new_component);
      }
    void extraHomeAutomationCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "HomeAutomationDomainSettings") == 0)
            {
            fromJSONHomeAutomationDomainSettings(new_component, false);
            return;
            }
        extraHomeAutomationWriteUserSettingsCommandSetField(key, new_component);
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
        HomeAutomationCommandJSON::write_fields_as_json(handler);
        assert(flagHasHomeAutomationDomainSettings);
        handler->start_pair("HomeAutomationDomainSettings");
        storeHomeAutomationDomainSettings->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasHomeAutomationDomainSettings()))
          {
            return "When parsing the object for %what%, the \"HomeAutomationDomainSettings\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationWriteUserSettingsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationWriteUserSettingsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationWriteUserSettingsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationWriteUserSettingsCommandJSON>, HomeAutomationWriteUserSettingsCommandJSON *, bool> generator("Type HomeAutomationWriteUserSettingsCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationWriteUserSettingsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationWriteUserSettingsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationWriteUserSettingsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationWriteUserSettingsCommandJSON>, HomeAutomationWriteUserSettingsCommandJSON *, bool> generator("Type HomeAutomationWriteUserSettingsCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public HomeAutomationCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<HomeAutomationDomainSettingsJSON::Generator, RCHandle<HomeAutomationDomainSettingsJSON>, HomeAutomationDomainSettingsJSON *, bool > fieldGeneratorHomeAutomationDomainSettings;
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
            if (!(strcmp(getHomeAutomationCommandJSONKey().c_str(), "HomeAutomationWriteUserSettingsCommand") == 0))
                throw("The key field has a value other than `HomeAutomationWriteUserSettingsCommand'.");
            HomeAutomationWriteUserSettingsCommandJSON *result = new HomeAutomationWriteUserSettingsCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationWriteUserSettingsCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationWriteUserSettingsCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HomeAutomationCommandJSON *new_result)
          {
            handle_result((HomeAutomationWriteUserSettingsCommandJSON *)new_result);
          }
        void finish(HomeAutomationWriteUserSettingsCommandJSON *result)
          {
            if (fieldGeneratorHomeAutomationDomainSettings.have_value)
              {
                result->setHomeAutomationDomainSettings(fieldGeneratorHomeAutomationDomainSettings.value.referenced());
                fieldGeneratorHomeAutomationDomainSettings.have_value = false;
              }
            else if (!(result->hasHomeAutomationDomainSettings()))
              {
                error("When parsing the object for %what%, the \"HomeAutomationDomainSettings\" field was missing.");
              }
            HomeAutomationCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationWriteUserSettingsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "HomeAutomationDomainSettings") == 0)
                return &fieldGeneratorHomeAutomationDomainSettings;
            return HomeAutomationCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HomeAutomationCommandJSON::Generator(ignore_extras), fieldGeneratorHomeAutomationDomainSettings("field \"HomeAutomationDomainSettings\" of the HomeAutomationWriteUserSettingsCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationWriteUserSettingsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHomeAutomationDomainSettings.reset();
            HomeAutomationCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONWRITEUSERSETTINGSCOMMANDJSON_H */
