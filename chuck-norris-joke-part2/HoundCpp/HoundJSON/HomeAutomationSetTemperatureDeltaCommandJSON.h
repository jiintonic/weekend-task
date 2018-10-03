/* file "HomeAutomationSetTemperatureDeltaCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONSETTEMPERATUREDELTACOMMANDJSON_H
#define HOMEAUTOMATIONSETTEMPERATUREDELTACOMMANDJSON_H

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


class HomeAutomationSetTemperatureDeltaCommandJSON : public HomeAutomationControlCommandJSON
  {
  private:
    bool flagHasTemperatureDelta;
    HomeAutomationTemperatureJSON * storeTemperatureDelta;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationSetTemperatureDeltaCommandJSON(const HomeAutomationSetTemperatureDeltaCommandJSON &);
    HomeAutomationSetTemperatureDeltaCommandJSON & operator=(const HomeAutomationSetTemperatureDeltaCommandJSON &other);

    JSONValue * extraTemperatureDeltaToJSON(void) const;

    void  fromJSONTemperatureDelta(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationSetTemperatureDeltaCommandJSON(void);
    virtual ~HomeAutomationSetTemperatureDeltaCommandJSON(void);
    const char * getHomeAutomationControlCommandKind(void) const;
    bool  hasTemperatureDelta(void) const;
    HomeAutomationTemperatureJSON *  getTemperatureDelta(void);
    const HomeAutomationTemperatureJSON *  getTemperatureDelta(void) const;

    virtual size_t extraHomeAutomationSetTemperatureDeltaCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationSetTemperatureDeltaCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationSetTemperatureDeltaCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationSetTemperatureDeltaCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationSetTemperatureDeltaCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationSetTemperatureDeltaCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHomeAutomationControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTemperatureDelta)
            ++result;
        result += extraHomeAutomationSetTemperatureDeltaCommandComponentCount();
        return result;
      }
    const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTemperatureDelta)
          {
            if (remainder == 0)
                return "TemperatureDelta";
            --remainder;
          }
        return extraHomeAutomationSetTemperatureDeltaCommandComponentKey(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTemperatureDelta)
          {
            if (remainder == 0)
                return extraTemperatureDeltaToJSON();
            --remainder;
          }
        return extraHomeAutomationSetTemperatureDeltaCommandComponentValue(remainder);
      }
    const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTemperatureDelta)
          {
            if (remainder == 0)
                return extraTemperatureDeltaToJSON();
            --remainder;
          }
        return extraHomeAutomationSetTemperatureDeltaCommandComponentValue(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "TemperatureDelta") == 0)
            return (flagHasTemperatureDelta ? extraTemperatureDeltaToJSON() : NULL);
        return extraHomeAutomationSetTemperatureDeltaCommandLookup(field_name);
      }
    const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "TemperatureDelta") == 0)
            return (flagHasTemperatureDelta ? extraTemperatureDeltaToJSON() : NULL);
        return extraHomeAutomationSetTemperatureDeltaCommandLookup(field_name);
      }

    void setTemperatureDelta(HomeAutomationTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTemperatureDelta)
          {
            storeTemperatureDelta->remove_reference();
          }
        flagHasTemperatureDelta = true;
        storeTemperatureDelta = new_value;
      }
    void unsetTemperatureDelta(void)
      {
        if (flagHasTemperatureDelta)
          {
            storeTemperatureDelta->remove_reference();
          }
        flagHasTemperatureDelta = false;
      }

    virtual void extraHomeAutomationSetTemperatureDeltaCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationSetTemperatureDeltaCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationSetTemperatureDeltaCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationSetTemperatureDeltaCommandAppendPair(key, new_component);
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
        if (strcmp(key, "TemperatureDelta") == 0)
            {
            fromJSONTemperatureDelta(new_component, false);
            return;
            }
        extraHomeAutomationSetTemperatureDeltaCommandAppendPair(key, new_component);
      }
    void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "TemperatureDelta") == 0)
            {
            fromJSONTemperatureDelta(new_component, false);
            return;
            }
        extraHomeAutomationSetTemperatureDeltaCommandSetField(key, new_component);
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
        assert(flagHasTemperatureDelta);
        handler->start_pair("TemperatureDelta");
        storeTemperatureDelta->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTemperatureDelta()))
          {
            return "When parsing the object for %what%, the \"TemperatureDelta\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationSetTemperatureDeltaCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationSetTemperatureDeltaCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationSetTemperatureDeltaCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetTemperatureDeltaCommandJSON>, HomeAutomationSetTemperatureDeltaCommandJSON *, bool> generator("Type HomeAutomationSetTemperatureDeltaCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationSetTemperatureDeltaCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationSetTemperatureDeltaCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationSetTemperatureDeltaCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetTemperatureDeltaCommandJSON>, HomeAutomationSetTemperatureDeltaCommandJSON *, bool> generator("Type HomeAutomationSetTemperatureDeltaCommand", ignore_extras);
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
        JSONHoldingGenerator<HomeAutomationTemperatureJSON::Generator, RCHandle<HomeAutomationTemperatureJSON>, HomeAutomationTemperatureJSON *, bool > fieldGeneratorTemperatureDelta;
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
            if (!(strcmp(getHomeAutomationControlCommandJSONKey().c_str(), "HomeAutomationSetTemperatureDeltaCommand") == 0))
                throw("The key field has a value other than `HomeAutomationSetTemperatureDeltaCommand'.");
            HomeAutomationSetTemperatureDeltaCommandJSON *result = new HomeAutomationSetTemperatureDeltaCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationSetTemperatureDeltaCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationSetTemperatureDeltaCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HomeAutomationControlCommandJSON *new_result)
          {
            handle_result((HomeAutomationSetTemperatureDeltaCommandJSON *)new_result);
          }
        void finish(HomeAutomationSetTemperatureDeltaCommandJSON *result)
          {
            if (fieldGeneratorTemperatureDelta.have_value)
              {
                result->setTemperatureDelta(fieldGeneratorTemperatureDelta.value.referenced());
                fieldGeneratorTemperatureDelta.have_value = false;
              }
            else if (!(result->hasTemperatureDelta()))
              {
                error("When parsing the object for %what%, the \"TemperatureDelta\" field was missing.");
              }
            HomeAutomationControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationSetTemperatureDeltaCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "TemperatureDelta") == 0)
                return &fieldGeneratorTemperatureDelta;
            return HomeAutomationControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HomeAutomationControlCommandJSON::Generator(ignore_extras), fieldGeneratorTemperatureDelta("field \"TemperatureDelta\" of the HomeAutomationSetTemperatureDeltaCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationSetTemperatureDeltaCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTemperatureDelta.reset();
            HomeAutomationControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONSETTEMPERATUREDELTACOMMANDJSON_H */
