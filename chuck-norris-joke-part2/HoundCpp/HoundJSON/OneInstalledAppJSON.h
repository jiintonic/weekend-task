/* file "OneInstalledAppJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ONEINSTALLEDAPPJSON_H
#define ONEINSTALLEDAPPJSON_H

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


class OneInstalledAppJSON : public ReferenceCounted
  {
  private:
    bool flagHasAppName;
    std::string storeAppName;
    bool flagHasAliases;
    std::vector< std::string > storeAliases;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    OneInstalledAppJSON(const OneInstalledAppJSON &);
    OneInstalledAppJSON & operator=(const OneInstalledAppJSON &other);

    void  fromJSONAppName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAliases(JSONValue *json_value, bool ignore_extras = false);


  public:
    OneInstalledAppJSON(void);
    virtual ~OneInstalledAppJSON(void);
    bool  hasAppName(void) const;
    std::string  getAppName(void);
    const std::string  getAppName(void) const;
    bool  hasAliases(void) const;
    size_t  countOfAliases(void) const;
    std::string  elementOfAliases(size_t element_num);
    const std::string  elementOfAliases(size_t element_num) const;
    std::vector< std::string >  getAliases(void);
    const std::vector< std::string >  getAliases(void) const;

    virtual size_t extraOneInstalledAppComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraOneInstalledAppComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraOneInstalledAppComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraOneInstalledAppComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraOneInstalledAppLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraOneInstalledAppLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setAppName(std::string new_value)
      {
        flagHasAppName = true;
        storeAppName = new_value;
      }
    void unsetAppName(void)
      {
        flagHasAppName = false;
      }
    void initAliases(void)
      {
        flagHasAliases = true;
        storeAliases.clear();
      }
    void appendAliases(std::string to_append)
      {
        if (!flagHasAliases)
          {
            flagHasAliases = true;
            storeAliases.clear();
          }
        assert(flagHasAliases);
        storeAliases.push_back(to_append);
      }
    void unsetAliases(void)
      {
        flagHasAliases = false;
        storeAliases.clear();
      }

    virtual void extraOneInstalledAppAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraOneInstalledAppSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraOneInstalledAppLookup(key);
        if (old_field == NULL)
          {
            extraOneInstalledAppAppendPair(key, new_component);
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
        assert(flagHasAppName);
        handler->start_pair("AppName");
        handler->string_value(storeAppName);
        if (flagHasAliases)
          {
            handler->start_pair("Aliases");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAliases.size(); ++num1)
              {
                handler->string_value(storeAliases[num1]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAppName()))
          {
            return "When parsing the object for %what%, the \"AppName\" field was missing.";
          }
        return NULL;
      }

    static OneInstalledAppJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static OneInstalledAppJSON *from_text(const char *text, bool ignore_extras = false)
      {
        OneInstalledAppJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<OneInstalledAppJSON>, OneInstalledAppJSON *, bool> generator("Type OneInstalledApp", ignore_extras);
            parse_json_value(text, "Text for OneInstalledAppJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static OneInstalledAppJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        OneInstalledAppJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<OneInstalledAppJSON>, OneInstalledAppJSON *, bool> generator("Type OneInstalledApp", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAppName;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAliases;
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
            OneInstalledAppJSON *result = new OneInstalledAppJSON();
            assert(result != NULL);
            RCHandle<OneInstalledAppJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraOneInstalledAppAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(OneInstalledAppJSON *result)
          {
            if (fieldGeneratorAppName.have_value)
              {
                result->setAppName(fieldGeneratorAppName.value);
                fieldGeneratorAppName.have_value = false;
              }
            else if (!(result->hasAppName()))
              {
                error("When parsing the object for %what%, the \"AppName\" field was missing.");
              }
            if (fieldGeneratorAliases.have_value)
              {
                result->initAliases();
                size_t count = fieldGeneratorAliases.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAliases(fieldGeneratorAliases.value[num]);
                  }
                fieldGeneratorAliases.value.clear();
                fieldGeneratorAliases.have_value = false;
              }
          }
        virtual void handle_result(OneInstalledAppJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "A", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        if (strcmp(&(field_name[2]), "iases") == 0)
                            return &fieldGeneratorAliases;
                        break;
                    case 'p':
                        if (strcmp(&(field_name[2]), "pName") == 0)
                            return &fieldGeneratorAppName;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAppName("field \"AppName\" of the OneInstalledApp class"), fieldGeneratorAliases("field \"Aliases\" of the OneInstalledApp class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the OneInstalledApp class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAppName.reset();
            fieldGeneratorAliases.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ONEINSTALLEDAPPJSON_H */
