/* file "HomeAutomationSetWindSpeedCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONSETWINDSPEEDCOMMANDJSON_H
#define HOMEAUTOMATIONSETWINDSPEEDCOMMANDJSON_H

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


class HomeAutomationSetWindSpeedCommandJSON : public HomeAutomationControlCommandJSON
  {
  private:
    bool flagHasWindSpeed;
    double storeWindSpeed;
    std::string textStoreWindSpeed;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationSetWindSpeedCommandJSON(const HomeAutomationSetWindSpeedCommandJSON &);
    HomeAutomationSetWindSpeedCommandJSON & operator=(const HomeAutomationSetWindSpeedCommandJSON &other);

    JSONValue * extraWindSpeedToJSON(void) const;

    void  fromJSONWindSpeed(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationSetWindSpeedCommandJSON(void);
    virtual ~HomeAutomationSetWindSpeedCommandJSON(void);
    const char * getHomeAutomationControlCommandKind(void) const;
    bool  hasWindSpeed(void) const;
    double  getWindSpeed(void);
    const double  getWindSpeed(void) const;
    std::string  getWindSpeedAsText(void) const;

    virtual size_t extraHomeAutomationSetWindSpeedCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationSetWindSpeedCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationSetWindSpeedCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationSetWindSpeedCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationSetWindSpeedCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationSetWindSpeedCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHomeAutomationControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasWindSpeed)
            ++result;
        result += extraHomeAutomationSetWindSpeedCommandComponentCount();
        return result;
      }
    const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasWindSpeed)
          {
            if (remainder == 0)
                return "WindSpeed";
            --remainder;
          }
        return extraHomeAutomationSetWindSpeedCommandComponentKey(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasWindSpeed)
          {
            if (remainder == 0)
                return extraWindSpeedToJSON();
            --remainder;
          }
        return extraHomeAutomationSetWindSpeedCommandComponentValue(remainder);
      }
    const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasWindSpeed)
          {
            if (remainder == 0)
                return extraWindSpeedToJSON();
            --remainder;
          }
        return extraHomeAutomationSetWindSpeedCommandComponentValue(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "WindSpeed") == 0)
            return (flagHasWindSpeed ? extraWindSpeedToJSON() : NULL);
        return extraHomeAutomationSetWindSpeedCommandLookup(field_name);
      }
    const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "WindSpeed") == 0)
            return (flagHasWindSpeed ? extraWindSpeedToJSON() : NULL);
        return extraHomeAutomationSetWindSpeedCommandLookup(field_name);
      }

    void setWindSpeed(double new_value)
      {
        flagHasWindSpeed = true;
        if (new_value < 0)
            throw("The value for field WindSpeed of HomeAutomationSetWindSpeedCommandJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field WindSpeed of HomeAutomationSetWindSpeedCommandJSON is greater than the upper bound (1) for that field.");
        storeWindSpeed = new_value;
        textStoreWindSpeed = "";
      }
    void setWindSpeedText(std::string new_value)
      {
        flagHasWindSpeed = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field WindSpeed of HomeAutomationSetWindSpeedCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field WindSpeed of HomeAutomationSetWindSpeedCommandJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field WindSpeed of HomeAutomationSetWindSpeedCommandJSON is greater than the upper bound (1) for that field.");
        textStoreWindSpeed = new_value;
      }
    void unsetWindSpeed(void)
      {
        flagHasWindSpeed = false;
      }

    virtual void extraHomeAutomationSetWindSpeedCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationSetWindSpeedCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationSetWindSpeedCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationSetWindSpeedCommandAppendPair(key, new_component);
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
        if (strcmp(key, "WindSpeed") == 0)
            {
            fromJSONWindSpeed(new_component, false);
            return;
            }
        extraHomeAutomationSetWindSpeedCommandAppendPair(key, new_component);
      }
    void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "WindSpeed") == 0)
            {
            fromJSONWindSpeed(new_component, false);
            return;
            }
        extraHomeAutomationSetWindSpeedCommandSetField(key, new_component);
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
        assert(flagHasWindSpeed);
        handler->start_pair("WindSpeed");
        if (textStoreWindSpeed != "")
            handler->number_value(textStoreWindSpeed.c_str());
        else if (((double)(long int)storeWindSpeed) == storeWindSpeed)
            handler->number_value((long int)storeWindSpeed);
        else
            handler->number_value(storeWindSpeed);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasWindSpeed()))
          {
            return "When parsing the object for %what%, the \"WindSpeed\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationSetWindSpeedCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationSetWindSpeedCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationSetWindSpeedCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetWindSpeedCommandJSON>, HomeAutomationSetWindSpeedCommandJSON *, bool> generator("Type HomeAutomationSetWindSpeedCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationSetWindSpeedCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationSetWindSpeedCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationSetWindSpeedCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetWindSpeedCommandJSON>, HomeAutomationSetWindSpeedCommandJSON *, bool> generator("Type HomeAutomationSetWindSpeedCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorWindSpeed;
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
            if (!(strcmp(getHomeAutomationControlCommandJSONKey().c_str(), "HomeAutomationSetWindSpeedCommand") == 0))
                throw("The key field has a value other than `HomeAutomationSetWindSpeedCommand'.");
            HomeAutomationSetWindSpeedCommandJSON *result = new HomeAutomationSetWindSpeedCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationSetWindSpeedCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationSetWindSpeedCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HomeAutomationControlCommandJSON *new_result)
          {
            handle_result((HomeAutomationSetWindSpeedCommandJSON *)new_result);
          }
        void finish(HomeAutomationSetWindSpeedCommandJSON *result)
          {
            if (fieldGeneratorWindSpeed.have_value)
              {
                result->setWindSpeedText(fieldGeneratorWindSpeed.value);
                fieldGeneratorWindSpeed.have_value = false;
              }
            else if (!(result->hasWindSpeed()))
              {
                error("When parsing the object for %what%, the \"WindSpeed\" field was missing.");
              }
            HomeAutomationControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationSetWindSpeedCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "WindSpeed") == 0)
                return &fieldGeneratorWindSpeed;
            return HomeAutomationControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HomeAutomationControlCommandJSON::Generator(ignore_extras), fieldGeneratorWindSpeed("field \"WindSpeed\" of the HomeAutomationSetWindSpeedCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationSetWindSpeedCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWindSpeed.reset();
            HomeAutomationControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONSETWINDSPEEDCOMMANDJSON_H */
