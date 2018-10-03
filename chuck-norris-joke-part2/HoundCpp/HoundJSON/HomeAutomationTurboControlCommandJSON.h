/* file "HomeAutomationTurboControlCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONTURBOCONTROLCOMMANDJSON_H
#define HOMEAUTOMATIONTURBOCONTROLCOMMANDJSON_H

#pragma interface

#include "HomeAutomationControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "HomeAutomationTurboModeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationTurboControlCommandJSON : public HomeAutomationControlCommandJSON
  {
  private:
    bool flagHasTurboMode;
    HomeAutomationTurboModeJSON * storeTurboMode;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationTurboControlCommandJSON(const HomeAutomationTurboControlCommandJSON &);
    HomeAutomationTurboControlCommandJSON & operator=(const HomeAutomationTurboControlCommandJSON &other);

    JSONValue * extraTurboModeToJSON(void) const;

    void  fromJSONTurboMode(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationTurboControlCommandJSON(void);
    virtual ~HomeAutomationTurboControlCommandJSON(void);
    const char * getHomeAutomationControlCommandKind(void) const;
    bool  hasTurboMode(void) const;
    HomeAutomationTurboModeJSON *  getTurboMode(void);
    const HomeAutomationTurboModeJSON *  getTurboMode(void) const;
    HomeAutomationTurboModeJSON::TypeValue  getTurboModeValue(void);
    const HomeAutomationTurboModeJSON::TypeValue  getTurboModeValue(void) const;
    const char * getTurboModeAsChars(void) const;
    std::string  getTurboModeAsString(void) const;

    virtual size_t extraHomeAutomationTurboControlCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationTurboControlCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationTurboControlCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationTurboControlCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationTurboControlCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationTurboControlCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHomeAutomationControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTurboMode)
            ++result;
        result += extraHomeAutomationTurboControlCommandComponentCount();
        return result;
      }
    const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTurboMode)
          {
            if (remainder == 0)
                return "TurboMode";
            --remainder;
          }
        return extraHomeAutomationTurboControlCommandComponentKey(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTurboMode)
          {
            if (remainder == 0)
                return extraTurboModeToJSON();
            --remainder;
          }
        return extraHomeAutomationTurboControlCommandComponentValue(remainder);
      }
    const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTurboMode)
          {
            if (remainder == 0)
                return extraTurboModeToJSON();
            --remainder;
          }
        return extraHomeAutomationTurboControlCommandComponentValue(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "TurboMode") == 0)
            return (flagHasTurboMode ? extraTurboModeToJSON() : NULL);
        return extraHomeAutomationTurboControlCommandLookup(field_name);
      }
    const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "TurboMode") == 0)
            return (flagHasTurboMode ? extraTurboModeToJSON() : NULL);
        return extraHomeAutomationTurboControlCommandLookup(field_name);
      }

    void setTurboMode(HomeAutomationTurboModeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTurboMode)
          {
            storeTurboMode->remove_reference();
          }
        flagHasTurboMode = true;
        storeTurboMode = new_value;
      }
    void setTurboMode(HomeAutomationTurboModeJSON::TypeValue new_value)
      {
        setTurboMode(new HomeAutomationTurboModeJSON(new_value));
      }
    void setTurboMode(const char *chars)
      {
        HomeAutomationTurboModeJSON::TypeValueKnownValues known = HomeAutomationTurboModeJSON::stringToValue(chars);
        HomeAutomationTurboModeJSON::TypeValue new_value;
        if (known == HomeAutomationTurboModeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setTurboMode(new_value);
      }
    void setTurboMode(std::string the_string)
      {
        setTurboMode(the_string.c_str());
      }
    void unsetTurboMode(void)
      {
        if (flagHasTurboMode)
          {
            storeTurboMode->remove_reference();
          }
        flagHasTurboMode = false;
      }

    virtual void extraHomeAutomationTurboControlCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationTurboControlCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationTurboControlCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationTurboControlCommandAppendPair(key, new_component);
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
        if (strcmp(key, "TurboMode") == 0)
            {
            fromJSONTurboMode(new_component, false);
            return;
            }
        extraHomeAutomationTurboControlCommandAppendPair(key, new_component);
      }
    void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "TurboMode") == 0)
            {
            fromJSONTurboMode(new_component, false);
            return;
            }
        extraHomeAutomationTurboControlCommandSetField(key, new_component);
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
        assert(flagHasTurboMode);
        handler->start_pair("TurboMode");
        storeTurboMode->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTurboMode()))
          {
            return "When parsing the object for %what%, the \"TurboMode\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationTurboControlCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationTurboControlCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationTurboControlCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationTurboControlCommandJSON>, HomeAutomationTurboControlCommandJSON *, bool> generator("Type HomeAutomationTurboControlCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationTurboControlCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationTurboControlCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationTurboControlCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationTurboControlCommandJSON>, HomeAutomationTurboControlCommandJSON *, bool> generator("Type HomeAutomationTurboControlCommand", ignore_extras);
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
        JSONHoldingGenerator<HomeAutomationTurboModeJSON::Generator, RCHandle<HomeAutomationTurboModeJSON>, HomeAutomationTurboModeJSON *, bool > fieldGeneratorTurboMode;
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
            if (!(strcmp(getHomeAutomationControlCommandJSONKey().c_str(), "HomeAutomationTurboControlCommand") == 0))
                throw("The key field has a value other than `HomeAutomationTurboControlCommand'.");
            HomeAutomationTurboControlCommandJSON *result = new HomeAutomationTurboControlCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationTurboControlCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationTurboControlCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HomeAutomationControlCommandJSON *new_result)
          {
            handle_result((HomeAutomationTurboControlCommandJSON *)new_result);
          }
        void finish(HomeAutomationTurboControlCommandJSON *result)
          {
            if (fieldGeneratorTurboMode.have_value)
              {
                result->setTurboMode(fieldGeneratorTurboMode.value.referenced());
                fieldGeneratorTurboMode.have_value = false;
              }
            else if (!(result->hasTurboMode()))
              {
                error("When parsing the object for %what%, the \"TurboMode\" field was missing.");
              }
            HomeAutomationControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationTurboControlCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "TurboMode") == 0)
                return &fieldGeneratorTurboMode;
            return HomeAutomationControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HomeAutomationControlCommandJSON::Generator(ignore_extras), fieldGeneratorTurboMode("field \"TurboMode\" of the HomeAutomationTurboControlCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationTurboControlCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTurboMode.reset();
            HomeAutomationControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONTURBOCONTROLCOMMANDJSON_H */
