/* file "HomeAutomationSetBrightnessDeltaCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONSETBRIGHTNESSDELTACOMMANDJSON_H
#define HOMEAUTOMATIONSETBRIGHTNESSDELTACOMMANDJSON_H

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


class HomeAutomationSetBrightnessDeltaCommandJSON : public HomeAutomationControlCommandJSON
  {
  private:
    bool flagHasBrightnessDelta;
    double storeBrightnessDelta;
    std::string textStoreBrightnessDelta;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationSetBrightnessDeltaCommandJSON(const HomeAutomationSetBrightnessDeltaCommandJSON &);
    HomeAutomationSetBrightnessDeltaCommandJSON & operator=(const HomeAutomationSetBrightnessDeltaCommandJSON &other);

    JSONValue * extraBrightnessDeltaToJSON(void) const;

    void  fromJSONBrightnessDelta(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationSetBrightnessDeltaCommandJSON(void);
    virtual ~HomeAutomationSetBrightnessDeltaCommandJSON(void);
    const char * getHomeAutomationControlCommandKind(void) const;
    bool  hasBrightnessDelta(void) const;
    double  getBrightnessDelta(void);
    const double  getBrightnessDelta(void) const;
    std::string  getBrightnessDeltaAsText(void) const;

    virtual size_t extraHomeAutomationSetBrightnessDeltaCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationSetBrightnessDeltaCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationSetBrightnessDeltaCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationSetBrightnessDeltaCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationSetBrightnessDeltaCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationSetBrightnessDeltaCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHomeAutomationControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasBrightnessDelta)
            ++result;
        result += extraHomeAutomationSetBrightnessDeltaCommandComponentCount();
        return result;
      }
    const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasBrightnessDelta)
          {
            if (remainder == 0)
                return "BrightnessDelta";
            --remainder;
          }
        return extraHomeAutomationSetBrightnessDeltaCommandComponentKey(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasBrightnessDelta)
          {
            if (remainder == 0)
                return extraBrightnessDeltaToJSON();
            --remainder;
          }
        return extraHomeAutomationSetBrightnessDeltaCommandComponentValue(remainder);
      }
    const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasBrightnessDelta)
          {
            if (remainder == 0)
                return extraBrightnessDeltaToJSON();
            --remainder;
          }
        return extraHomeAutomationSetBrightnessDeltaCommandComponentValue(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "BrightnessDelta") == 0)
            return (flagHasBrightnessDelta ? extraBrightnessDeltaToJSON() : NULL);
        return extraHomeAutomationSetBrightnessDeltaCommandLookup(field_name);
      }
    const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "BrightnessDelta") == 0)
            return (flagHasBrightnessDelta ? extraBrightnessDeltaToJSON() : NULL);
        return extraHomeAutomationSetBrightnessDeltaCommandLookup(field_name);
      }

    void setBrightnessDelta(double new_value)
      {
        flagHasBrightnessDelta = true;
        if (new_value < -1)
            throw("The value for field BrightnessDelta of HomeAutomationSetBrightnessDeltaCommandJSON is less than the lower bound (-1) for that field.");
        if (new_value > 1)
            throw("The value for field BrightnessDelta of HomeAutomationSetBrightnessDeltaCommandJSON is greater than the upper bound (1) for that field.");
        storeBrightnessDelta = new_value;
        textStoreBrightnessDelta = "";
      }
    void setBrightnessDeltaText(std::string new_value)
      {
        flagHasBrightnessDelta = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field BrightnessDelta of HomeAutomationSetBrightnessDeltaCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
            throw("The value for field BrightnessDelta of HomeAutomationSetBrightnessDeltaCommandJSON is less than the lower bound (-1) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field BrightnessDelta of HomeAutomationSetBrightnessDeltaCommandJSON is greater than the upper bound (1) for that field.");
        textStoreBrightnessDelta = new_value;
      }
    void unsetBrightnessDelta(void)
      {
        flagHasBrightnessDelta = false;
      }

    virtual void extraHomeAutomationSetBrightnessDeltaCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationSetBrightnessDeltaCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationSetBrightnessDeltaCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationSetBrightnessDeltaCommandAppendPair(key, new_component);
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
        if (strcmp(key, "BrightnessDelta") == 0)
            {
            fromJSONBrightnessDelta(new_component, false);
            return;
            }
        extraHomeAutomationSetBrightnessDeltaCommandAppendPair(key, new_component);
      }
    void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "BrightnessDelta") == 0)
            {
            fromJSONBrightnessDelta(new_component, false);
            return;
            }
        extraHomeAutomationSetBrightnessDeltaCommandSetField(key, new_component);
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
        assert(flagHasBrightnessDelta);
        handler->start_pair("BrightnessDelta");
        if (textStoreBrightnessDelta != "")
            handler->number_value(textStoreBrightnessDelta.c_str());
        else if (((double)(long int)storeBrightnessDelta) == storeBrightnessDelta)
            handler->number_value((long int)storeBrightnessDelta);
        else
            handler->number_value(storeBrightnessDelta);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBrightnessDelta()))
          {
            return "When parsing the object for %what%, the \"BrightnessDelta\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationSetBrightnessDeltaCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationSetBrightnessDeltaCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationSetBrightnessDeltaCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetBrightnessDeltaCommandJSON>, HomeAutomationSetBrightnessDeltaCommandJSON *, bool> generator("Type HomeAutomationSetBrightnessDeltaCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationSetBrightnessDeltaCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationSetBrightnessDeltaCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationSetBrightnessDeltaCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetBrightnessDeltaCommandJSON>, HomeAutomationSetBrightnessDeltaCommandJSON *, bool> generator("Type HomeAutomationSetBrightnessDeltaCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBrightnessDelta;
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
            if (!(strcmp(getHomeAutomationControlCommandJSONKey().c_str(), "HomeAutomationSetBrightnessDeltaCommand") == 0))
                throw("The key field has a value other than `HomeAutomationSetBrightnessDeltaCommand'.");
            HomeAutomationSetBrightnessDeltaCommandJSON *result = new HomeAutomationSetBrightnessDeltaCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationSetBrightnessDeltaCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationSetBrightnessDeltaCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HomeAutomationControlCommandJSON *new_result)
          {
            handle_result((HomeAutomationSetBrightnessDeltaCommandJSON *)new_result);
          }
        void finish(HomeAutomationSetBrightnessDeltaCommandJSON *result)
          {
            if (fieldGeneratorBrightnessDelta.have_value)
              {
                result->setBrightnessDeltaText(fieldGeneratorBrightnessDelta.value);
                fieldGeneratorBrightnessDelta.have_value = false;
              }
            else if (!(result->hasBrightnessDelta()))
              {
                error("When parsing the object for %what%, the \"BrightnessDelta\" field was missing.");
              }
            HomeAutomationControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationSetBrightnessDeltaCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "BrightnessDelta") == 0)
                return &fieldGeneratorBrightnessDelta;
            return HomeAutomationControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HomeAutomationControlCommandJSON::Generator(ignore_extras), fieldGeneratorBrightnessDelta("field \"BrightnessDelta\" of the HomeAutomationSetBrightnessDeltaCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationSetBrightnessDeltaCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBrightnessDelta.reset();
            HomeAutomationControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONSETBRIGHTNESSDELTACOMMANDJSON_H */
