/* file "HomeAutomationDeviceParsingItemJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONDEVICEPARSINGITEMJSON_H
#define HOMEAUTOMATIONDEVICEPARSINGITEMJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationDeviceParsingItemJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasActualNames;
    std::vector< std::string > storeActualNames;
    bool flagHasSpokenPrefix;
    std::string storeSpokenPrefix;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationDeviceParsingItemJSON(const HomeAutomationDeviceParsingItemJSON &);
    HomeAutomationDeviceParsingItemJSON & operator=(const HomeAutomationDeviceParsingItemJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActualNames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenPrefix(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationDeviceParsingItemJSON(void);
    virtual ~HomeAutomationDeviceParsingItemJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasActualNames(void) const;
    size_t  countOfActualNames(void) const;
    std::string  elementOfActualNames(size_t element_num);
    const std::string  elementOfActualNames(size_t element_num) const;
    std::vector< std::string >  getActualNames(void);
    const std::vector< std::string >  getActualNames(void) const;
    bool  hasSpokenPrefix(void) const;
    std::string  getSpokenPrefix(void);
    const std::string  getSpokenPrefix(void) const;

    virtual size_t extraHomeAutomationDeviceParsingItemComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationDeviceParsingItemComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationDeviceParsingItemComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationDeviceParsingItemComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationDeviceParsingItemLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationDeviceParsingItemLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void initActualNames(void)
      {
        flagHasActualNames = true;
        storeActualNames.clear();
      }
    void appendActualNames(std::string to_append)
      {
        if (!flagHasActualNames)
          {
            flagHasActualNames = true;
            storeActualNames.clear();
          }
        assert(flagHasActualNames);
        storeActualNames.push_back(to_append);
      }
    void unsetActualNames(void)
      {
        flagHasActualNames = false;
        storeActualNames.clear();
      }
    void setSpokenPrefix(std::string new_value)
      {
        flagHasSpokenPrefix = true;
        storeSpokenPrefix = new_value;
      }
    void unsetSpokenPrefix(void)
      {
        flagHasSpokenPrefix = false;
      }

    virtual void extraHomeAutomationDeviceParsingItemAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationDeviceParsingItemSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationDeviceParsingItemLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationDeviceParsingItemAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasActualNames)
          {
            handler->start_pair("ActualNames");
            assert(storeActualNames.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeActualNames.size(); ++num1)
              {
                handler->string_value(storeActualNames[num1]);
              }
            handler->finish_array();
          }
        if (flagHasSpokenPrefix)
          {
            handler->start_pair("SpokenPrefix");
            handler->string_value(storeSpokenPrefix);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationDeviceParsingItemJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationDeviceParsingItemJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationDeviceParsingItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceParsingItemJSON>, HomeAutomationDeviceParsingItemJSON *, bool> generator("Type HomeAutomationDeviceParsingItem", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationDeviceParsingItemJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationDeviceParsingItemJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationDeviceParsingItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceParsingItemJSON>, HomeAutomationDeviceParsingItemJSON *, bool> generator("Type HomeAutomationDeviceParsingItem", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorActualNames;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenPrefix;
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
            HomeAutomationDeviceParsingItemJSON *result = new HomeAutomationDeviceParsingItemJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationDeviceParsingItemJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationDeviceParsingItemAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationDeviceParsingItemJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorActualNames.have_value)
              {
                result->initActualNames();
                size_t count = fieldGeneratorActualNames.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendActualNames(fieldGeneratorActualNames.value[num]);
                  }
                fieldGeneratorActualNames.value.clear();
                fieldGeneratorActualNames.have_value = false;
              }
            if (fieldGeneratorSpokenPrefix.have_value)
              {
                result->setSpokenPrefix(fieldGeneratorSpokenPrefix.value);
                fieldGeneratorSpokenPrefix.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationDeviceParsingItemJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ctualNames") == 0)
                        return &fieldGeneratorActualNames;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenPrefix") == 0)
                        return &fieldGeneratorSpokenPrefix;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the HomeAutomationDeviceParsingItem class"), fieldGeneratorActualNames("field \"ActualNames\" of the HomeAutomationDeviceParsingItem class"), fieldGeneratorSpokenPrefix("field \"SpokenPrefix\" of the HomeAutomationDeviceParsingItem class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationDeviceParsingItem class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorActualNames.reset();
            fieldGeneratorSpokenPrefix.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONDEVICEPARSINGITEMJSON_H */
