/* file "WhatsInDrinkQuestionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WHATSINDRINKQUESTIONJSON_H
#define WHATSINDRINKQUESTIONJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DrinkRecipeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class WhatsInDrinkQuestionJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasRecipe;
    DrinkRecipeJSON * storeRecipe;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WhatsInDrinkQuestionJSON(const WhatsInDrinkQuestionJSON &);
    WhatsInDrinkQuestionJSON & operator=(const WhatsInDrinkQuestionJSON &other);

    JSONValue * extraRecipeToJSON(void) const;

    void  fromJSONRecipe(JSONValue *json_value, bool ignore_extras = false);


  public:
    WhatsInDrinkQuestionJSON(void);
    virtual ~WhatsInDrinkQuestionJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasRecipe(void) const;
    DrinkRecipeJSON *  getRecipe(void);
    const DrinkRecipeJSON *  getRecipe(void) const;

    virtual size_t extraWhatsInDrinkQuestionComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWhatsInDrinkQuestionComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWhatsInDrinkQuestionComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWhatsInDrinkQuestionComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWhatsInDrinkQuestionLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWhatsInDrinkQuestionLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasRecipe)
            ++result;
        result += extraWhatsInDrinkQuestionComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRecipe)
          {
            if (remainder == 0)
                return "Recipe";
            --remainder;
          }
        return extraWhatsInDrinkQuestionComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasRecipe)
          {
            if (remainder == 0)
                return extraRecipeToJSON();
            --remainder;
          }
        return extraWhatsInDrinkQuestionComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRecipe)
          {
            if (remainder == 0)
                return extraRecipeToJSON();
            --remainder;
          }
        return extraWhatsInDrinkQuestionComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "Recipe") == 0)
            return (flagHasRecipe ? extraRecipeToJSON() : NULL);
        return extraWhatsInDrinkQuestionLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Recipe") == 0)
            return (flagHasRecipe ? extraRecipeToJSON() : NULL);
        return extraWhatsInDrinkQuestionLookup(field_name);
      }

    void setRecipe(DrinkRecipeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRecipe)
          {
            storeRecipe->remove_reference();
          }
        flagHasRecipe = true;
        storeRecipe = new_value;
      }
    void unsetRecipe(void)
      {
        if (flagHasRecipe)
          {
            storeRecipe->remove_reference();
          }
        flagHasRecipe = false;
      }

    virtual void extraWhatsInDrinkQuestionAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWhatsInDrinkQuestionSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWhatsInDrinkQuestionLookup(key);
        if (old_field == NULL)
          {
            extraWhatsInDrinkQuestionAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Recipe") == 0)
            {
            fromJSONRecipe(new_component, false);
            return;
            }
        extraWhatsInDrinkQuestionAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Recipe") == 0)
            {
            fromJSONRecipe(new_component, false);
            return;
            }
        extraWhatsInDrinkQuestionSetField(key, new_component);
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
        InformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasRecipe);
        handler->start_pair("Recipe");
        storeRecipe->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasRecipe()))
          {
            return "When parsing the object for %what%, the \"Recipe\" field was missing.";
          }
        return NULL;
      }

    static WhatsInDrinkQuestionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WhatsInDrinkQuestionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WhatsInDrinkQuestionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhatsInDrinkQuestionJSON>, WhatsInDrinkQuestionJSON *, bool> generator("Type WhatsInDrinkQuestion", ignore_extras);
            parse_json_value(text, "Text for WhatsInDrinkQuestionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WhatsInDrinkQuestionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WhatsInDrinkQuestionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhatsInDrinkQuestionJSON>, WhatsInDrinkQuestionJSON *, bool> generator("Type WhatsInDrinkQuestion", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<DrinkRecipeJSON::Generator, RCHandle<DrinkRecipeJSON>, DrinkRecipeJSON *, bool > fieldGeneratorRecipe;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "WhatsInDrinkNugget") == 0))
                throw("The key field has a value other than `WhatsInDrinkNugget'.");
            WhatsInDrinkQuestionJSON *result = new WhatsInDrinkQuestionJSON();
            assert(result != NULL);
            RCHandle<WhatsInDrinkQuestionJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWhatsInDrinkQuestionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((WhatsInDrinkQuestionJSON *)new_result);
          }
        void finish(WhatsInDrinkQuestionJSON *result)
          {
            if (fieldGeneratorRecipe.have_value)
              {
                result->setRecipe(fieldGeneratorRecipe.value.referenced());
                fieldGeneratorRecipe.have_value = false;
              }
            else if (!(result->hasRecipe()))
              {
                error("When parsing the object for %what%, the \"Recipe\" field was missing.");
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(WhatsInDrinkQuestionJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Recipe") == 0)
                return &fieldGeneratorRecipe;
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorRecipe("field \"Recipe\" of the WhatsInDrinkQuestion class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the WhatsInDrinkQuestion class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRecipe.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WHATSINDRINKQUESTIONJSON_H */
