/* file "HomeAutomationSetWindSpeedDeltaCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONSETWINDSPEEDDELTACOMMANDJSON_H
#define HOMEAUTOMATIONSETWINDSPEEDDELTACOMMANDJSON_H

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


class HomeAutomationSetWindSpeedDeltaCommandJSON : public HomeAutomationControlCommandJSON
  {
  private:
    bool flagHasWindSpeedDelta;
    double storeWindSpeedDelta;
    std::string textStoreWindSpeedDelta;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationSetWindSpeedDeltaCommandJSON(const HomeAutomationSetWindSpeedDeltaCommandJSON &);
    HomeAutomationSetWindSpeedDeltaCommandJSON & operator=(const HomeAutomationSetWindSpeedDeltaCommandJSON &other);

    JSONValue * extraWindSpeedDeltaToJSON(void) const;

    void  fromJSONWindSpeedDelta(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationSetWindSpeedDeltaCommandJSON(void);
    virtual ~HomeAutomationSetWindSpeedDeltaCommandJSON(void);
    const char * getHomeAutomationControlCommandKind(void) const;
    bool  hasWindSpeedDelta(void) const;
    double  getWindSpeedDelta(void);
    const double  getWindSpeedDelta(void) const;
    std::string  getWindSpeedDeltaAsText(void) const;

    virtual size_t extraHomeAutomationSetWindSpeedDeltaCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationSetWindSpeedDeltaCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationSetWindSpeedDeltaCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationSetWindSpeedDeltaCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationSetWindSpeedDeltaCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationSetWindSpeedDeltaCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHomeAutomationControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasWindSpeedDelta)
            ++result;
        result += extraHomeAutomationSetWindSpeedDeltaCommandComponentCount();
        return result;
      }
    const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasWindSpeedDelta)
          {
            if (remainder == 0)
                return "WindSpeedDelta";
            --remainder;
          }
        return extraHomeAutomationSetWindSpeedDeltaCommandComponentKey(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasWindSpeedDelta)
          {
            if (remainder == 0)
                return extraWindSpeedDeltaToJSON();
            --remainder;
          }
        return extraHomeAutomationSetWindSpeedDeltaCommandComponentValue(remainder);
      }
    const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasWindSpeedDelta)
          {
            if (remainder == 0)
                return extraWindSpeedDeltaToJSON();
            --remainder;
          }
        return extraHomeAutomationSetWindSpeedDeltaCommandComponentValue(remainder);
      }
    JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "WindSpeedDelta") == 0)
            return (flagHasWindSpeedDelta ? extraWindSpeedDeltaToJSON() : NULL);
        return extraHomeAutomationSetWindSpeedDeltaCommandLookup(field_name);
      }
    const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "WindSpeedDelta") == 0)
            return (flagHasWindSpeedDelta ? extraWindSpeedDeltaToJSON() : NULL);
        return extraHomeAutomationSetWindSpeedDeltaCommandLookup(field_name);
      }

    void setWindSpeedDelta(double new_value)
      {
        flagHasWindSpeedDelta = true;
        if (new_value < -1)
            throw("The value for field WindSpeedDelta of HomeAutomationSetWindSpeedDeltaCommandJSON is less than the lower bound (-1) for that field.");
        if (new_value > 1)
            throw("The value for field WindSpeedDelta of HomeAutomationSetWindSpeedDeltaCommandJSON is greater than the upper bound (1) for that field.");
        storeWindSpeedDelta = new_value;
        textStoreWindSpeedDelta = "";
      }
    void setWindSpeedDeltaText(std::string new_value)
      {
        flagHasWindSpeedDelta = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field WindSpeedDelta of HomeAutomationSetWindSpeedDeltaCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
            throw("The value for field WindSpeedDelta of HomeAutomationSetWindSpeedDeltaCommandJSON is less than the lower bound (-1) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field WindSpeedDelta of HomeAutomationSetWindSpeedDeltaCommandJSON is greater than the upper bound (1) for that field.");
        textStoreWindSpeedDelta = new_value;
      }
    void unsetWindSpeedDelta(void)
      {
        flagHasWindSpeedDelta = false;
      }

    virtual void extraHomeAutomationSetWindSpeedDeltaCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationSetWindSpeedDeltaCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationSetWindSpeedDeltaCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationSetWindSpeedDeltaCommandAppendPair(key, new_component);
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
        if (strcmp(key, "WindSpeedDelta") == 0)
            {
            fromJSONWindSpeedDelta(new_component, false);
            return;
            }
        extraHomeAutomationSetWindSpeedDeltaCommandAppendPair(key, new_component);
      }
    void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "WindSpeedDelta") == 0)
            {
            fromJSONWindSpeedDelta(new_component, false);
            return;
            }
        extraHomeAutomationSetWindSpeedDeltaCommandSetField(key, new_component);
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
        assert(flagHasWindSpeedDelta);
        handler->start_pair("WindSpeedDelta");
        if (textStoreWindSpeedDelta != "")
            handler->number_value(textStoreWindSpeedDelta.c_str());
        else if (((double)(long int)storeWindSpeedDelta) == storeWindSpeedDelta)
            handler->number_value((long int)storeWindSpeedDelta);
        else
            handler->number_value(storeWindSpeedDelta);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasWindSpeedDelta()))
          {
            return "When parsing the object for %what%, the \"WindSpeedDelta\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationSetWindSpeedDeltaCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationSetWindSpeedDeltaCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationSetWindSpeedDeltaCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetWindSpeedDeltaCommandJSON>, HomeAutomationSetWindSpeedDeltaCommandJSON *, bool> generator("Type HomeAutomationSetWindSpeedDeltaCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationSetWindSpeedDeltaCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationSetWindSpeedDeltaCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationSetWindSpeedDeltaCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationSetWindSpeedDeltaCommandJSON>, HomeAutomationSetWindSpeedDeltaCommandJSON *, bool> generator("Type HomeAutomationSetWindSpeedDeltaCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorWindSpeedDelta;
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
            if (!(strcmp(getHomeAutomationControlCommandJSONKey().c_str(), "HomeAutomationSetWindSpeedDeltaCommand") == 0))
                throw("The key field has a value other than `HomeAutomationSetWindSpeedDeltaCommand'.");
            HomeAutomationSetWindSpeedDeltaCommandJSON *result = new HomeAutomationSetWindSpeedDeltaCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationSetWindSpeedDeltaCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationSetWindSpeedDeltaCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HomeAutomationControlCommandJSON *new_result)
          {
            handle_result((HomeAutomationSetWindSpeedDeltaCommandJSON *)new_result);
          }
        void finish(HomeAutomationSetWindSpeedDeltaCommandJSON *result)
          {
            if (fieldGeneratorWindSpeedDelta.have_value)
              {
                result->setWindSpeedDeltaText(fieldGeneratorWindSpeedDelta.value);
                fieldGeneratorWindSpeedDelta.have_value = false;
              }
            else if (!(result->hasWindSpeedDelta()))
              {
                error("When parsing the object for %what%, the \"WindSpeedDelta\" field was missing.");
              }
            HomeAutomationControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationSetWindSpeedDeltaCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "WindSpeedDelta") == 0)
                return &fieldGeneratorWindSpeedDelta;
            return HomeAutomationControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HomeAutomationControlCommandJSON::Generator(ignore_extras), fieldGeneratorWindSpeedDelta("field \"WindSpeedDelta\" of the HomeAutomationSetWindSpeedDeltaCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationSetWindSpeedDeltaCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWindSpeedDelta.reset();
            HomeAutomationControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONSETWINDSPEEDDELTACOMMANDJSON_H */
