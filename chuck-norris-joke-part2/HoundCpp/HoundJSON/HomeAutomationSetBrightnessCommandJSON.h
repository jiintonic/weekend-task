/* file "HomeAutomationSetBrightnessCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONSETBRIGHTNESSCOMMANDJSON_H
#define HOMEAUTOMATIONSETBRIGHTNESSCOMMANDJSON_H

#pragma interface

#include "HomeAutomationControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationSetBrightnessCommandJSON : public HomeAutomationControlCommandJSON
  {
  private:
    bool flagHasBrightness;
    double storeBrightness;
    std::string textStoreBrightness;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationSetBrightnessCommandJSON(const HomeAutomationSetBrightnessCommandJSON &);
    HomeAutomationSetBrightnessCommandJSON & operator=(const HomeAutomationSetBrightnessCommandJSON &other);

    JSONValue * extraBrightnessToJSON(void) const;

    void  fromJSONBrightness(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationSetBrightnessCommandJSON(void);
    virtual ~HomeAutomationSetBrightnessCommandJSON(void);
    const char * getHomeAutomationControlCommandKind(void) const;
    bool  hasBrightness(void) const;
    double  getBrightness(void);
    const double  getBrightness(void) const;
    std::string  getBrightnessAsText(void) const;

    virtual size_t extraHomeAutomationSetBrightnessCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationSetBrightnessCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationSetBrightnessCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationSetBrightnessCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationSetBrightnessCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationSetBrightnessCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHomeAutomationControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasBrightness)
            ++result;
        result += extraHomeAutomationSetBrightnessCommandComponentCount();
        return result;
      }
    const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasBrightness)
          {
            if (remainder == 0)
                return "Brightness";
            --remainder;
          }
        return extraHomeAutomationSetBrightnessCommandComponentKey(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasBrightness)
          {
            if (remainder == 0)
                return extraBrightnessToJSON();
            --remainder;
          }
        return extraHomeAutomationSetBrightnessCommandComponentValue(remainder);
      }
    const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasBrightness)
          {
            if (remainder == 0)
                return extraBrightnessToJSON();
            --remainder;
          }
        return extraHomeAutomationSetBrightnessCommandComponentValue(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "Brightness") == 0)
            return (flagHasBrightness ? extraBrightnessToJSON() : NULL);
        return extraHomeAutomationSetBrightnessCommandLookup(field_name);
      }
    const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Brightness") == 0)
            return (flagHasBrightness ? extraBrightnessToJSON() : NULL);
        return extraHomeAutomationSetBrightnessCommandLookup(field_name);
      }

    void setBrightness(double new_value)
      {
        flagHasBrightness = true;
        if (new_value < 0)
            throw("The value for field Brightness of HomeAutomationSetBrightnessCommandJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field Brightness of HomeAutomationSetBrightnessCommandJSON is greater than the upper bound (1) for that field.");
        storeBrightness = new_value;
        textStoreBrightness = "";
      }
    void setBrightnessText(std::string new_value)
      {
        flagHasBrightness = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Brightness of HomeAutomationSetBrightnessCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Brightness of HomeAutomationSetBrightnessCommandJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field Brightness of HomeAutomationSetBrightnessCommandJSON is greater than the upper bound (1) for that field.");
        textStoreBrightness = new_value;
      }
    void unsetBrightness(void)
      {
        flagHasBrightness = false;
      }

    virtual void extraHomeAutomationSetBrightnessCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationSetBrightnessCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationSetBrightnessCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationSetBrightnessCommandAppendPair(key, new_component);
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
        if (strcmp(key, "Brightness") == 0)
            {
            fromJSONBrightness(new_component, false);
            return;
            }
        extraHomeAutomationSetBrightnessCommandAppendPair(key, new_component);
      }
    void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Brightness") == 0)
            {
            fromJSONBrightness(new_component, false);
            return;
            }
        extraHomeAutomationSetBrightnessCommandSetField(key, new_component);
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
        assert(flagHasBrightness);
        handler->start_pair("Brightness");
        if (textStoreBrightness != "")
            handler->number_value(textStoreBrightness.c_str());
        else if (((double)(long int)storeBrightness) == storeBrightness)
            handler->number_value((long int)storeBrightness);
        else
            handler->number_value(storeBrightness);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBrightness()))
          {
            return "When parsing the object for %what%, the \"Brightness\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationSetBrightnessCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationSetBrightnessCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationSetBrightnessCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetBrightnessCommandJSON>, HomeAutomationSetBrightnessCommandJSON *, bool> generator("Type HomeAutomationSetBrightnessCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationSetBrightnessCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationSetBrightnessCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationSetBrightnessCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetBrightnessCommandJSON>, HomeAutomationSetBrightnessCommandJSON *, bool> generator("Type HomeAutomationSetBrightnessCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBrightness;
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
            if (!(strcmp(getHomeAutomationControlCommandJSONKey().c_str(), "HomeAutomationSetBrightnessCommand") == 0))
                throw("The key field has a value other than `HomeAutomationSetBrightnessCommand'.");
            HomeAutomationSetBrightnessCommandJSON *result = new HomeAutomationSetBrightnessCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationSetBrightnessCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationSetBrightnessCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HomeAutomationControlCommandJSON *new_result)
          {
            handle_result((HomeAutomationSetBrightnessCommandJSON *)new_result);
          }
        void finish(HomeAutomationSetBrightnessCommandJSON *result)
          {
            if (fieldGeneratorBrightness.have_value)
              {
                result->setBrightnessText(fieldGeneratorBrightness.value);
                fieldGeneratorBrightness.have_value = false;
              }
            else if (!(result->hasBrightness()))
              {
                error("When parsing the object for %what%, the \"Brightness\" field was missing.");
              }
            HomeAutomationControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationSetBrightnessCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Brightness") == 0)
                return &fieldGeneratorBrightness;
            return HomeAutomationControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HomeAutomationControlCommandJSON::Generator(ignore_extras), fieldGeneratorBrightness("field \"Brightness\" of the HomeAutomationSetBrightnessCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationSetBrightnessCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBrightness.reset();
            HomeAutomationControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONSETBRIGHTNESSCOMMANDJSON_H */
