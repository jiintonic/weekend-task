/* file "NutritionInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NUTRITIONINFORMATIONNUGGETJSON_H
#define NUTRITIONINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "NutrientJSON.h"
#include "FoodJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class NutritionInformationNuggetJSON : public InformationNuggetJSON
  {
  public:
    enum TypeNutritionCommandKind
      {
        NutritionCommandKind_NutritionCommand
      };

    static TypeNutritionCommandKind  stringToNutritionCommandKind(const char *chars);
    static const char * stringFromNutritionCommandKind(TypeNutritionCommandKind the_enum);

  private:
    bool flagHasNutritionCommandKind;
    bool flagHasNutrients;
    std::vector< NutrientJSON * > storeNutrients;
    bool flagHasFoodBlocks;
    std::vector< std::vector< FoodJSON * > > storeFoodBlocks;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    NutritionInformationNuggetJSON(const NutritionInformationNuggetJSON &);
    NutritionInformationNuggetJSON & operator=(const NutritionInformationNuggetJSON &other);

    JSONValue * extraNutritionCommandKindToJSON(void) const;
    JSONValue * extraNutrientsToJSON(void) const;
    JSONValue * extraFoodBlocksToJSON(void) const;

    void  fromJSONNutritionCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNutrients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFoodBlocks(JSONValue *json_value, bool ignore_extras = false);


  public:
    NutritionInformationNuggetJSON(void);
    virtual ~NutritionInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasNutritionCommandKind(void) const;
    TypeNutritionCommandKind  getNutritionCommandKind(void);
    const TypeNutritionCommandKind  getNutritionCommandKind(void) const;
    const char * getNutritionCommandKindAsChars(void) const;
    std::string  getNutritionCommandKindAsString(void) const;
    bool  hasNutrients(void) const;
    size_t  countOfNutrients(void) const;
    NutrientJSON *  elementOfNutrients(size_t element_num);
    const NutrientJSON *  elementOfNutrients(size_t element_num) const;
    std::vector< NutrientJSON * >  getNutrients(void);
    const std::vector< NutrientJSON * >  getNutrients(void) const;
    bool  hasFoodBlocks(void) const;
    size_t  countOfFoodBlocks(void) const;
    std::vector< FoodJSON * >  elementOfFoodBlocks(size_t element_num);
    const std::vector< FoodJSON * >  elementOfFoodBlocks(size_t element_num) const;
    std::vector< std::vector< FoodJSON * > >  getFoodBlocks(void);
    const std::vector< std::vector< FoodJSON * > >  getFoodBlocks(void) const;

    virtual size_t extraNutritionInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraNutritionInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraNutritionInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraNutritionInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraNutritionInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraNutritionInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNutritionCommandKind)
            ++result;
        if (flagHasNutrients)
            ++result;
        if (flagHasFoodBlocks)
            ++result;
        result += extraNutritionInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNutritionCommandKind)
          {
            if (remainder == 0)
                return "NutritionCommandKind";
            --remainder;
          }
        if (flagHasNutrients)
          {
            if (remainder == 0)
                return "Nutrients";
            --remainder;
          }
        if (flagHasFoodBlocks)
          {
            if (remainder == 0)
                return "FoodBlocks";
            --remainder;
          }
        return extraNutritionInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNutritionCommandKind)
          {
            if (remainder == 0)
                return extraNutritionCommandKindToJSON();
            --remainder;
          }
        if (flagHasNutrients)
          {
            if (remainder == 0)
                return extraNutrientsToJSON();
            --remainder;
          }
        if (flagHasFoodBlocks)
          {
            if (remainder == 0)
                return extraFoodBlocksToJSON();
            --remainder;
          }
        return extraNutritionInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNutritionCommandKind)
          {
            if (remainder == 0)
                return extraNutritionCommandKindToJSON();
            --remainder;
          }
        if (flagHasNutrients)
          {
            if (remainder == 0)
                return extraNutrientsToJSON();
            --remainder;
          }
        if (flagHasFoodBlocks)
          {
            if (remainder == 0)
                return extraFoodBlocksToJSON();
            --remainder;
          }
        return extraNutritionInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "oodBlocks") == 0)
                    return (flagHasFoodBlocks ? extraFoodBlocksToJSON() : NULL);
                break;
            case 'N':
                if (strncmp(&(field_name[1]), "utri", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[6]), "nts") == 0)
                                return (flagHasNutrients ? extraNutrientsToJSON() : NULL);
                            break;
                        case 't':
                            if (strcmp(&(field_name[6]), "ionCommandKind") == 0)
                                return (flagHasNutritionCommandKind ? extraNutritionCommandKindToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraNutritionInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "oodBlocks") == 0)
                    return (flagHasFoodBlocks ? extraFoodBlocksToJSON() : NULL);
                break;
            case 'N':
                if (strncmp(&(field_name[1]), "utri", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[6]), "nts") == 0)
                                return (flagHasNutrients ? extraNutrientsToJSON() : NULL);
                            break;
                        case 't':
                            if (strcmp(&(field_name[6]), "ionCommandKind") == 0)
                                return (flagHasNutritionCommandKind ? extraNutritionCommandKindToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraNutritionInformationNuggetLookup(field_name);
      }

    void setNutritionCommandKind(void)
      {
        flagHasNutritionCommandKind = true;
      }
    void setNutritionCommandKind(TypeNutritionCommandKind new_value)
      {
        setNutritionCommandKind();
      }
    void setNutritionCommandKind(const char *chars)
      {
        setNutritionCommandKind(stringToNutritionCommandKind(chars));
      }
    void setNutritionCommandKind(std::string the_string)
      {
        setNutritionCommandKind(stringToNutritionCommandKind(the_string.c_str()));
      }
    void unsetNutritionCommandKind(void)
      {
        flagHasNutritionCommandKind = false;
      }
    void initNutrients(void)
      {
        if (flagHasNutrients)
          {
            for (size_t num4 = 0; num4 < storeNutrients.size(); ++num4)
              {
                storeNutrients[num4]->remove_reference();
              }
          }
        flagHasNutrients = true;
        storeNutrients.clear();
      }
    void appendNutrients(NutrientJSON * to_append)
      {
        if (!flagHasNutrients)
          {
            flagHasNutrients = true;
            storeNutrients.clear();
          }
        assert(flagHasNutrients);
        to_append->add_reference();
        storeNutrients.push_back(to_append);
      }
    void unsetNutrients(void)
      {
        if (flagHasNutrients)
          {
            for (size_t num5 = 0; num5 < storeNutrients.size(); ++num5)
              {
                storeNutrients[num5]->remove_reference();
              }
          }
        flagHasNutrients = false;
        storeNutrients.clear();
      }
    void initFoodBlocks(void)
      {
        if (flagHasFoodBlocks)
          {
            for (size_t num6 = 0; num6 < storeFoodBlocks.size(); ++num6)
              {
                for (size_t num7 = 0; num7 < storeFoodBlocks[num6].size(); ++num7)
                  {
                    storeFoodBlocks[num6][num7]->remove_reference();
                  }
              }
          }
        flagHasFoodBlocks = true;
        storeFoodBlocks.clear();
      }
    void appendFoodBlocks(std::vector< FoodJSON * > to_append)
      {
        if (!flagHasFoodBlocks)
          {
            flagHasFoodBlocks = true;
            storeFoodBlocks.clear();
          }
        assert(flagHasFoodBlocks);
        for (size_t num1 = 0; num1 < to_append.size(); ++num1)
          {
            to_append[num1]->add_reference();
          }
        storeFoodBlocks.push_back(to_append);
      }
    void unsetFoodBlocks(void)
      {
        if (flagHasFoodBlocks)
          {
            for (size_t num8 = 0; num8 < storeFoodBlocks.size(); ++num8)
              {
                for (size_t num9 = 0; num9 < storeFoodBlocks[num8].size(); ++num9)
                  {
                    storeFoodBlocks[num8][num9]->remove_reference();
                  }
              }
          }
        flagHasFoodBlocks = false;
        storeFoodBlocks.clear();
      }

    virtual void extraNutritionInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraNutritionInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraNutritionInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraNutritionInformationNuggetAppendPair(key, new_component);
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
        switch ((unsigned char)(key[0]))
          {
            case 'F':
                if (strcmp(&(key[1]), "oodBlocks") == 0)
                    {
                    fromJSONFoodBlocks(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strncmp(&(key[1]), "utri", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'e':
                            if (strcmp(&(key[6]), "nts") == 0)
                                {
                                fromJSONNutrients(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strcmp(&(key[6]), "ionCommandKind") == 0)
                                {
                                fromJSONNutritionCommandKind(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraNutritionInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'F':
                if (strcmp(&(key[1]), "oodBlocks") == 0)
                    {
                    fromJSONFoodBlocks(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strncmp(&(key[1]), "utri", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'e':
                            if (strcmp(&(key[6]), "nts") == 0)
                                {
                                fromJSONNutrients(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strcmp(&(key[6]), "ionCommandKind") == 0)
                                {
                                fromJSONNutritionCommandKind(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraNutritionInformationNuggetSetField(key, new_component);
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
        assert(flagHasNutritionCommandKind);
        handler->start_pair("NutritionCommandKind");
        handler->string_value("NutritionCommand");
        assert(flagHasNutrients);
        handler->start_pair("Nutrients");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeNutrients.size(); ++num1)
          {
            storeNutrients[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasFoodBlocks);
        handler->start_pair("FoodBlocks");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeFoodBlocks.size(); ++num2)
          {
            handler->start_array();
            for (size_t num3 = 0; num3 < storeFoodBlocks[num2].size(); ++num3)
              {
                storeFoodBlocks[num2][num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNutritionCommandKind()))
          {
            return "When parsing the object for %what%, the \"NutritionCommandKind\" field was missing.";
          }
        if (!(hasNutrients()))
          {
            return "When parsing the object for %what%, the \"Nutrients\" field was missing.";
          }
        if (!(hasFoodBlocks()))
          {
            return "When parsing the object for %what%, the \"FoodBlocks\" field was missing.";
          }
        return NULL;
      }

    static NutritionInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NutritionInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NutritionInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NutritionInformationNuggetJSON>, NutritionInformationNuggetJSON *, bool> generator("Type NutritionInformationNugget", ignore_extras);
            parse_json_value(text, "Text for NutritionInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NutritionInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NutritionInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NutritionInformationNuggetJSON>, NutritionInformationNuggetJSON *, bool> generator("Type NutritionInformationNugget", ignore_extras);
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
    class FieldGeneratorNutritionCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNutritionCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNutritionCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNutritionCommandKind(result));
              }
            virtual void handle_result(TypeNutritionCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNutritionCommandKind, TypeNutritionCommandKind, TypeNutritionCommandKind > fieldGeneratorNutritionCommandKind;
        JSONHoldingArrayGenerator<NutrientJSON::Generator, RCHandle<NutrientJSON>, NutrientJSON *, bool > fieldGeneratorNutrients;
        JSONHoldingArrayGenerator<JSONHoldingArrayGenerator<FoodJSON::Generator, RCHandle<FoodJSON>, FoodJSON *, bool >, std::vector<RCHandle<FoodJSON> >, std::vector<RCHandle<FoodJSON> >, bool > fieldGeneratorFoodBlocks;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "Nutrition") == 0))
                throw("The key field has a value other than `Nutrition'.");
            NutritionInformationNuggetJSON *result = new NutritionInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<NutritionInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraNutritionInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((NutritionInformationNuggetJSON *)new_result);
          }
        void finish(NutritionInformationNuggetJSON *result)
          {
            if (fieldGeneratorNutritionCommandKind.have_value)
              {
                result->setNutritionCommandKind();
                fieldGeneratorNutritionCommandKind.have_value = false;
              }
            else if (!(result->hasNutritionCommandKind()))
              {
                error("When parsing the object for %what%, the \"NutritionCommandKind\" field was missing.");
              }
            if (fieldGeneratorNutrients.have_value)
              {
                result->initNutrients();
                size_t count = fieldGeneratorNutrients.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNutrients(fieldGeneratorNutrients.value[num].referenced());
                  }
                fieldGeneratorNutrients.value.clear();
                fieldGeneratorNutrients.have_value = false;
              }
            else if (!(result->hasNutrients()))
              {
                error("When parsing the object for %what%, the \"Nutrients\" field was missing.");
              }
            if (fieldGeneratorFoodBlocks.have_value)
              {
                result->initFoodBlocks();
                size_t count = fieldGeneratorFoodBlocks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    std::vector< FoodJSON * > unwrapped0;
                    for (size_t num0 = 0; num0 < fieldGeneratorFoodBlocks.value[num].size(); ++num0)
                      {
                        unwrapped0.push_back(fieldGeneratorFoodBlocks.value[num][num0].referenced());
                      }
                    result->appendFoodBlocks(unwrapped0);
                  }
                fieldGeneratorFoodBlocks.value.clear();
                fieldGeneratorFoodBlocks.have_value = false;
              }
            else if (!(result->hasFoodBlocks()))
              {
                error("When parsing the object for %what%, the \"FoodBlocks\" field was missing.");
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(NutritionInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "oodBlocks") == 0)
                        return &fieldGeneratorFoodBlocks;
                    break;
                case 'N':
                    if (strncmp(&(field_name[1]), "utri", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[6]), "nts") == 0)
                                    return &fieldGeneratorNutrients;
                                break;
                            case 't':
                                if (strcmp(&(field_name[6]), "ionCommandKind") == 0)
                                    return &fieldGeneratorNutritionCommandKind;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorNutritionCommandKind("field \"NutritionCommandKind\" of the NutritionInformationNugget class"), fieldGeneratorNutrients("field \"Nutrients\" of the NutritionInformationNugget class", ignore_extras), fieldGeneratorFoodBlocks("field \"FoodBlocks\" of the NutritionInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the NutritionInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNutritionCommandKind.reset();
            fieldGeneratorNutrients.reset();
            fieldGeneratorFoodBlocks.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* NUTRITIONINFORMATIONNUGGETJSON_H */
