/* file "WhatDrinkCanMakeInterQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WHATDRINKCANMAKEINTERQUERYSTATEJSON_H
#define WHATDRINKCANMAKEINTERQUERYSTATEJSON_H

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


class WhatDrinkCanMakeInterQueryStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasIngredients;
    std::vector< std::string > storeIngredients;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WhatDrinkCanMakeInterQueryStateJSON(const WhatDrinkCanMakeInterQueryStateJSON &);
    WhatDrinkCanMakeInterQueryStateJSON & operator=(const WhatDrinkCanMakeInterQueryStateJSON &other);

    void  fromJSONIngredients(JSONValue *json_value, bool ignore_extras = false);


  public:
    WhatDrinkCanMakeInterQueryStateJSON(void);
    virtual ~WhatDrinkCanMakeInterQueryStateJSON(void);
    bool  hasIngredients(void) const;
    size_t  countOfIngredients(void) const;
    std::string  elementOfIngredients(size_t element_num);
    const std::string  elementOfIngredients(size_t element_num) const;
    std::vector< std::string >  getIngredients(void);
    const std::vector< std::string >  getIngredients(void) const;

    virtual size_t extraWhatDrinkCanMakeInterQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWhatDrinkCanMakeInterQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWhatDrinkCanMakeInterQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWhatDrinkCanMakeInterQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWhatDrinkCanMakeInterQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWhatDrinkCanMakeInterQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initIngredients(void)
      {
        flagHasIngredients = true;
        storeIngredients.clear();
      }
    void appendIngredients(std::string to_append)
      {
        if (!flagHasIngredients)
          {
            flagHasIngredients = true;
            storeIngredients.clear();
          }
        assert(flagHasIngredients);
        storeIngredients.push_back(to_append);
      }
    void unsetIngredients(void)
      {
        flagHasIngredients = false;
        storeIngredients.clear();
      }

    virtual void extraWhatDrinkCanMakeInterQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWhatDrinkCanMakeInterQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWhatDrinkCanMakeInterQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraWhatDrinkCanMakeInterQueryStateAppendPair(key, new_component);
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
        assert(flagHasIngredients);
        handler->start_pair("Ingredients");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeIngredients.size(); ++num1)
          {
            handler->string_value(storeIngredients[num1]);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasIngredients()))
          {
            return "When parsing the object for %what%, the \"Ingredients\" field was missing.";
          }
        return NULL;
      }

    static WhatDrinkCanMakeInterQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WhatDrinkCanMakeInterQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WhatDrinkCanMakeInterQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhatDrinkCanMakeInterQueryStateJSON>, WhatDrinkCanMakeInterQueryStateJSON *, bool> generator("Type WhatDrinkCanMakeInterQueryState", ignore_extras);
            parse_json_value(text, "Text for WhatDrinkCanMakeInterQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WhatDrinkCanMakeInterQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WhatDrinkCanMakeInterQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhatDrinkCanMakeInterQueryStateJSON>, WhatDrinkCanMakeInterQueryStateJSON *, bool> generator("Type WhatDrinkCanMakeInterQueryState", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorIngredients;
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
            WhatDrinkCanMakeInterQueryStateJSON *result = new WhatDrinkCanMakeInterQueryStateJSON();
            assert(result != NULL);
            RCHandle<WhatDrinkCanMakeInterQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWhatDrinkCanMakeInterQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(WhatDrinkCanMakeInterQueryStateJSON *result)
          {
            if (fieldGeneratorIngredients.have_value)
              {
                result->initIngredients();
                size_t count = fieldGeneratorIngredients.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendIngredients(fieldGeneratorIngredients.value[num]);
                  }
                fieldGeneratorIngredients.value.clear();
                fieldGeneratorIngredients.have_value = false;
              }
            else if (!(result->hasIngredients()))
              {
                error("When parsing the object for %what%, the \"Ingredients\" field was missing.");
              }
          }
        virtual void handle_result(WhatDrinkCanMakeInterQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Ingredients") == 0)
                return &fieldGeneratorIngredients;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorIngredients("field \"Ingredients\" of the WhatDrinkCanMakeInterQueryState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the WhatDrinkCanMakeInterQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIngredients.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WHATDRINKCANMAKEINTERQUERYSTATEJSON_H */
