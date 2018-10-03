/* file "HomeAutomationQueryHintJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONQUERYHINTJSON_H
#define HOMEAUTOMATIONQUERYHINTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "HomeAutomationOperationJSON.h"
#include "HomeAutomationPropertyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationQueryHintJSON : public ReferenceCounted
  {
  private:
    bool flagHasOperations;
    std::vector< HomeAutomationOperationJSON * > storeOperations;
    bool flagHasProperties;
    std::vector< HomeAutomationPropertyJSON * > storeProperties;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationQueryHintJSON(const HomeAutomationQueryHintJSON &);
    HomeAutomationQueryHintJSON & operator=(const HomeAutomationQueryHintJSON &other);

    void  fromJSONOperations(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProperties(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationQueryHintJSON(void);
    virtual ~HomeAutomationQueryHintJSON(void);
    bool  hasOperations(void) const;
    size_t  countOfOperations(void) const;
    HomeAutomationOperationJSON *  elementOfOperations(size_t element_num);
    const HomeAutomationOperationJSON *  elementOfOperations(size_t element_num) const;
    std::vector< HomeAutomationOperationJSON * >  getOperations(void);
    const std::vector< HomeAutomationOperationJSON * >  getOperations(void) const;
    bool  hasProperties(void) const;
    size_t  countOfProperties(void) const;
    HomeAutomationPropertyJSON *  elementOfProperties(size_t element_num);
    const HomeAutomationPropertyJSON *  elementOfProperties(size_t element_num) const;
    std::vector< HomeAutomationPropertyJSON * >  getProperties(void);
    const std::vector< HomeAutomationPropertyJSON * >  getProperties(void) const;

    virtual size_t extraHomeAutomationQueryHintComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationQueryHintComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationQueryHintComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationQueryHintComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationQueryHintLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationQueryHintLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initOperations(void)
      {
        if (flagHasOperations)
          {
            for (size_t num3 = 0; num3 < storeOperations.size(); ++num3)
              {
                storeOperations[num3]->remove_reference();
              }
          }
        flagHasOperations = true;
        storeOperations.clear();
      }
    void appendOperations(HomeAutomationOperationJSON * to_append)
      {
        if (!flagHasOperations)
          {
            flagHasOperations = true;
            storeOperations.clear();
          }
        assert(flagHasOperations);
        to_append->add_reference();
        storeOperations.push_back(to_append);
      }
    void appendOperations(HomeAutomationOperationJSON::TypeValue new_value)
      {
        appendOperations(new HomeAutomationOperationJSON(new_value));
      }
    void appendOperations(const char *chars)
      {
        HomeAutomationOperationJSON::TypeValueKnownValues known = HomeAutomationOperationJSON::stringToValue(chars);
        HomeAutomationOperationJSON::TypeValue new_value;
        if (known == HomeAutomationOperationJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendOperations(new_value);
      }
    void appendOperations(std::string the_string)
      {
        appendOperations(the_string.c_str());
      }
    void unsetOperations(void)
      {
        if (flagHasOperations)
          {
            for (size_t num4 = 0; num4 < storeOperations.size(); ++num4)
              {
                storeOperations[num4]->remove_reference();
              }
          }
        flagHasOperations = false;
        storeOperations.clear();
      }
    void initProperties(void)
      {
        if (flagHasProperties)
          {
            for (size_t num5 = 0; num5 < storeProperties.size(); ++num5)
              {
                storeProperties[num5]->remove_reference();
              }
          }
        flagHasProperties = true;
        storeProperties.clear();
      }
    void appendProperties(HomeAutomationPropertyJSON * to_append)
      {
        if (!flagHasProperties)
          {
            flagHasProperties = true;
            storeProperties.clear();
          }
        assert(flagHasProperties);
        to_append->add_reference();
        storeProperties.push_back(to_append);
      }
    void appendProperties(HomeAutomationPropertyJSON::TypeValue new_value)
      {
        appendProperties(new HomeAutomationPropertyJSON(new_value));
      }
    void appendProperties(const char *chars)
      {
        HomeAutomationPropertyJSON::TypeValueKnownValues known = HomeAutomationPropertyJSON::stringToValue(chars);
        HomeAutomationPropertyJSON::TypeValue new_value;
        if (known == HomeAutomationPropertyJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendProperties(new_value);
      }
    void appendProperties(std::string the_string)
      {
        appendProperties(the_string.c_str());
      }
    void unsetProperties(void)
      {
        if (flagHasProperties)
          {
            for (size_t num6 = 0; num6 < storeProperties.size(); ++num6)
              {
                storeProperties[num6]->remove_reference();
              }
          }
        flagHasProperties = false;
        storeProperties.clear();
      }

    virtual void extraHomeAutomationQueryHintAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationQueryHintSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationQueryHintLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationQueryHintAppendPair(key, new_component);
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
        if (flagHasOperations)
          {
            handler->start_pair("Operations");
            assert(storeOperations.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeOperations.size(); ++num1)
              {
                storeOperations[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasProperties)
          {
            handler->start_pair("Properties");
            assert(storeProperties.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeProperties.size(); ++num2)
              {
                storeProperties[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HomeAutomationQueryHintJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationQueryHintJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationQueryHintJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationQueryHintJSON>, HomeAutomationQueryHintJSON *, bool> generator("Type HomeAutomationQueryHint", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationQueryHintJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationQueryHintJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationQueryHintJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationQueryHintJSON>, HomeAutomationQueryHintJSON *, bool> generator("Type HomeAutomationQueryHint", ignore_extras);
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
        JSONHoldingArrayGenerator<HomeAutomationOperationJSON::Generator, RCHandle<HomeAutomationOperationJSON>, HomeAutomationOperationJSON *, bool > fieldGeneratorOperations;
        JSONHoldingArrayGenerator<HomeAutomationPropertyJSON::Generator, RCHandle<HomeAutomationPropertyJSON>, HomeAutomationPropertyJSON *, bool > fieldGeneratorProperties;
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
            HomeAutomationQueryHintJSON *result = new HomeAutomationQueryHintJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationQueryHintJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationQueryHintAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationQueryHintJSON *result)
          {
            if (fieldGeneratorOperations.have_value)
              {
                result->initOperations();
                size_t count = fieldGeneratorOperations.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOperations(fieldGeneratorOperations.value[num].referenced());
                  }
                fieldGeneratorOperations.value.clear();
                fieldGeneratorOperations.have_value = false;
              }
            if (fieldGeneratorProperties.have_value)
              {
                result->initProperties();
                size_t count = fieldGeneratorProperties.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendProperties(fieldGeneratorProperties.value[num].referenced());
                  }
                fieldGeneratorProperties.value.clear();
                fieldGeneratorProperties.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationQueryHintJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'O':
                    if (strcmp(&(field_name[1]), "perations") == 0)
                        return &fieldGeneratorOperations;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "roperties") == 0)
                        return &fieldGeneratorProperties;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOperations("field \"Operations\" of the HomeAutomationQueryHint class", ignore_extras), fieldGeneratorProperties("field \"Properties\" of the HomeAutomationQueryHint class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationQueryHint class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOperations.reset();
            fieldGeneratorProperties.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONQUERYHINTJSON_H */
