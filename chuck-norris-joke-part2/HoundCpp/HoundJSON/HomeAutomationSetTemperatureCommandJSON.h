/* file "HomeAutomationSetTemperatureCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONSETTEMPERATURECOMMANDJSON_H
#define HOMEAUTOMATIONSETTEMPERATURECOMMANDJSON_H

#pragma interface

#include "HomeAutomationControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "HomeAutomationTemperatureJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationSetTemperatureCommandJSON : public HomeAutomationControlCommandJSON
  {
  private:
    bool flagHasTemperature;
    HomeAutomationTemperatureJSON * storeTemperature;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationSetTemperatureCommandJSON(const HomeAutomationSetTemperatureCommandJSON &);
    HomeAutomationSetTemperatureCommandJSON & operator=(const HomeAutomationSetTemperatureCommandJSON &other);

    JSONValue * extraTemperatureToJSON(void) const;

    void  fromJSONTemperature(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationSetTemperatureCommandJSON(void);
    virtual ~HomeAutomationSetTemperatureCommandJSON(void);
    const char * getHomeAutomationControlCommandKind(void) const;
    bool  hasTemperature(void) const;
    HomeAutomationTemperatureJSON *  getTemperature(void);
    const HomeAutomationTemperatureJSON *  getTemperature(void) const;

    virtual size_t extraHomeAutomationSetTemperatureCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationSetTemperatureCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationSetTemperatureCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationSetTemperatureCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationSetTemperatureCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationSetTemperatureCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHomeAutomationControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTemperature)
            ++result;
        result += extraHomeAutomationSetTemperatureCommandComponentCount();
        return result;
      }
    const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTemperature)
          {
            if (remainder == 0)
                return "Temperature";
            --remainder;
          }
        return extraHomeAutomationSetTemperatureCommandComponentKey(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTemperature)
          {
            if (remainder == 0)
                return extraTemperatureToJSON();
            --remainder;
          }
        return extraHomeAutomationSetTemperatureCommandComponentValue(remainder);
      }
    const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTemperature)
          {
            if (remainder == 0)
                return extraTemperatureToJSON();
            --remainder;
          }
        return extraHomeAutomationSetTemperatureCommandComponentValue(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "Temperature") == 0)
            return (flagHasTemperature ? extraTemperatureToJSON() : NULL);
        return extraHomeAutomationSetTemperatureCommandLookup(field_name);
      }
    const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Temperature") == 0)
            return (flagHasTemperature ? extraTemperatureToJSON() : NULL);
        return extraHomeAutomationSetTemperatureCommandLookup(field_name);
      }

    void setTemperature(HomeAutomationTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTemperature)
          {
            storeTemperature->remove_reference();
          }
        flagHasTemperature = true;
        storeTemperature = new_value;
      }
    void unsetTemperature(void)
      {
        if (flagHasTemperature)
          {
            storeTemperature->remove_reference();
          }
        flagHasTemperature = false;
      }

    virtual void extraHomeAutomationSetTemperatureCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationSetTemperatureCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationSetTemperatureCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationSetTemperatureCommandAppendPair(key, new_component);
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
    void extraHomeAutomationControlCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Temperature") == 0)
            {
            fromJSONTemperature(new_component, false);
            return;
            }
        extraHomeAutomationSetTemperatureCommandAppendPair(key, new_component);
      }
    void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Temperature") == 0)
            {
            fromJSONTemperature(new_component, false);
            return;
            }
        extraHomeAutomationSetTemperatureCommandSetField(key, new_component);
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
        HomeAutomationControlCommandJSON::write_fields_as_json(handler);
        assert(flagHasTemperature);
        handler->start_pair("Temperature");
        storeTemperature->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTemperature()))
          {
            return "When parsing the object for %what%, the \"Temperature\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationSetTemperatureCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationSetTemperatureCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationSetTemperatureCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetTemperatureCommandJSON>, HomeAutomationSetTemperatureCommandJSON *, bool> generator("Type HomeAutomationSetTemperatureCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationSetTemperatureCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationSetTemperatureCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationSetTemperatureCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetTemperatureCommandJSON>, HomeAutomationSetTemperatureCommandJSON *, bool> generator("Type HomeAutomationSetTemperatureCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public HomeAutomationControlCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<HomeAutomationTemperatureJSON::Generator, RCHandle<HomeAutomationTemperatureJSON>, HomeAutomationTemperatureJSON *, bool > fieldGeneratorTemperature;
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
            if (!(strcmp(getHomeAutomationControlCommandJSONKey().c_str(), "HomeAutomationSetTemperatureCommand") == 0))
                throw("The key field has a value other than `HomeAutomationSetTemperatureCommand'.");
            HomeAutomationSetTemperatureCommandJSON *result = new HomeAutomationSetTemperatureCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationSetTemperatureCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationSetTemperatureCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HomeAutomationControlCommandJSON *new_result)
          {
            handle_result((HomeAutomationSetTemperatureCommandJSON *)new_result);
          }
        void finish(HomeAutomationSetTemperatureCommandJSON *result)
          {
            if (fieldGeneratorTemperature.have_value)
              {
                result->setTemperature(fieldGeneratorTemperature.value.referenced());
                fieldGeneratorTemperature.have_value = false;
              }
            else if (!(result->hasTemperature()))
              {
                error("When parsing the object for %what%, the \"Temperature\" field was missing.");
              }
            HomeAutomationControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationSetTemperatureCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Temperature") == 0)
                return &fieldGeneratorTemperature;
            return HomeAutomationControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HomeAutomationControlCommandJSON::Generator(ignore_extras), fieldGeneratorTemperature("field \"Temperature\" of the HomeAutomationSetTemperatureCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationSetTemperatureCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTemperature.reset();
            HomeAutomationControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONSETTEMPERATURECOMMANDJSON_H */
